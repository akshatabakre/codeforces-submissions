/*Template Author - Akshata*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

const int maxN = 1000001;
int spf[maxN];

// Kth Smallest/Rank using Segment Tree for a fixed range of values
// Supports add(x), remove(x), findkth(k), rankOf(x)
// USAGE: KthSmallestSegmentTree st(min_val, max_val);
class KthSmallestSegmentTree {
public:
    struct Node {
        int count;
        Node(int m = 0) : count(m) {}
    };

    std::vector<Node> tree;
    int range_size, value_offset;

    // Initialize for values in [min_val, max_val]
    KthSmallestSegmentTree(int min_val, int max_val) {
        if (min_val > max_val) throw std::invalid_argument("min_val cannot be greater than max_val");
        value_offset = -min_val;
        range_size = max_val - min_val + 1;
        tree.resize(4 * range_size);
    }

    Node merge(const Node& a, const Node& b) {
        return Node(a.count + b.count);
    }

    void add(int v) {
        add_recursive(1, v + value_offset, 0, range_size - 1);
    }

    void remove(int v) {
        remove_recursive(1, v + value_offset, 0, range_size - 1);
    }

    // Find the k-th smallest element (1-indexed)
    int findkth(int k) {
        int total_elements = tree[1].count;
        if (total_elements == 0) throw std::runtime_error("Cannot find kth element in an empty tree");
        k = (k > total_elements) ? total_elements : (k < 1 ? 1 : k);
        return findkth_recursive(1, 0, range_size - 1, k) - value_offset;
    }

    // Count of elements <= v
    int rankOf(int v) {
        int val_idx = v + value_offset;
        if (val_idx < 0) return 0;
        if (val_idx >= range_size) return tree[1].count;
        return rank_recursive(1, 0, range_size - 1, 0, val_idx);
    }

private:
    void add_recursive(int i, int v_idx, int l, int r) {
        if (l == r) {
            tree[i].count++;
            return;
        }
        int m = l + (r - l) / 2;
        if (v_idx <= m) {
            add_recursive(2 * i, v_idx, l, m);
        } else {
            add_recursive(2 * i + 1, v_idx, m + 1, r);
        }
        tree[i] = merge(tree[2 * i], tree[2 * i + 1]);
    }

    void remove_recursive(int i, int v_idx, int l, int r) {
        if (l == r) {
            if (tree[i].count > 0) tree[i].count--;
            return;
        }
        int m = l + (r - l) / 2;
        if (v_idx <= m) {
            remove_recursive(2 * i, v_idx, l, m);
        } else {
            remove_recursive(2 * i + 1, v_idx, m + 1, r);
        }
        tree[i] = merge(tree[2 * i], tree[2 * i + 1]);
    }

    int findkth_recursive(int i, int l, int r, int k) {
        if (l == r) return l;
        int m = l + (r - l) / 2;
        if (k <= tree[2 * i].count) {
            return findkth_recursive(2 * i, l, m, k);
        }
        return findkth_recursive(2 * i + 1, m + 1, r, k - tree[2 * i].count);
    }

    int rank_recursive(int i, int l, int r, int ql, int qr) {
        if (l > qr || r < ql) return 0;
        if (ql <= l && r <= qr) return tree[i].count;
        int m = l + (r - l) / 2;
        return rank_recursive(2 * i, l, m, ql, qr) + rank_recursive(2 * i + 1, m + 1, r, ql, qr);
    }
};

void pre() {
    for(int i = 0; i < maxN; i++) { spf[i] = i; }
    for(int i = 2; i * i < maxN; i++) {
        if(spf[i] == i) {
            for(int j = i * i; j < maxN; j += i) {
                if(spf[j] == j) spf[j] = i;
            }
        }
    }
}

void inparr(vector<int>&a, int n) { for(int i = 0; i < n; i++) { cin >> a[i]; } }

class SegTree{
    vector<int> arr;
    int n;
    vector<int> tree;
    public:
    SegTree(vector<int>& a,int n){
        arr.resize(n);
        this->n = n;
        this->arr = a;
        tree.resize(4*n,0);
        build(1,0,n-1);
    }
    void build(int ind,int l, int r){
        if(l==r){
            tree[ind] = arr[l];
            return;
        }
        int mid = (l+r)/2;
        build(2*ind,l,mid);
        build(2*ind+1,mid+1,r);
        tree[ind] = (tree[2*ind] & tree[2*ind+1]);
    }
    int query(int ind,int l,int r,int ql,int qr){
        if(l>qr || r<ql) return ~0LL;
        if(l>=ql && r<=qr) return tree[ind];
        int mid = (l+r)/2;
        return (query(2*ind,l,mid,ql,qr) & query(2*ind+1,mid+1,r,ql,qr));
    }
};
void solve() {
    int n; cin >> n;
    vector<int> a(n);
    inparr(a, n);
    int q;
    cin >> q;
    vector<vector<int>> queries(q,vector<int>(2));
    for(int i = 0; i < q;i++){
        cin>>queries[i][0]>>queries[i][1];
        queries[i][0]--;
    }
    SegTree st(a,n);
    for(int i = 0; i < q;i++){
        int l = queries[i][0];
        int k = queries[i][1];
        int ans = -1;
        int s = l, e = n-1;
        while(s<=e){
            int m = (s+e)/2;
            int val = st.query(1,0,n-1,l,m);
            if(val>=k){
                ans = m;
                s = m+1;
            }else{
                e = m-1;
            }
        }
        if(ans!=-1){
            cout<<ans+1<<" ";
        }else{
            cout<<-1<<" ";
        }
    }
    cout<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // pre(); // Uncomment for Sieve

    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}