
#Quaestion

/*You are given a prime p and a matrix M with N rows (numbered 1 through N) and N columns (numbered 1 through N). For each row r and column c, the cell in row r and column c can either be empty or contain an integer Mr,c. Initially, all cells are empty.

Now you should process Q queries. In each query, you are given integers x, y and v and you should do the following:

If the cell (x,y) is empty before this query, put the value v in it, i.e. set Mx,y to v.
Otherwise, i.e. if the cell (x,y) is not empty, make this cell empty again. It is guaranteed that in such a case, Mx,y=v before this query; v is provided for convenience.
Afterwards, Chef wants you to find the number of ways to fill all empty cells with (not necessarily the same) integers in such a way that the resulting matrix is curious. Since this number may be large, compute it modulo 109+7.
In particular, when there are no empty cells in the matrix, the answer is 1 if the matrix is curious or 0 if it is not curious.

In a curious matrix:

Each cell contains an integer between 1 and p−1 inclusive.
For each non-trivial square submatrix A of M (a submatrix containing more than one cell), its determinant |A| is a multiple of p.
For example, consider the following matrix.
A=⎡⎣⎢122244122⎤⎦⎥
This matrix is curious. For the prime p=5, each of the elements of the matrix is in the range [1,p−1]. Also, the determinant of each non-trivial square submatrix (there are five of them) is a multiple of the given prime ― for example, the determinant of the whole matrix is 0.

B=[3114]
The above matrix is not a curious matrix for p=5, since the determinant of the only non-trivial square submatrix (which is the whole matrix) is 11, not a multiple of p.*/





#Solution







#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<long long> vll;
typedef pair<long long, long long> pll;
long long MOD1;
const long long MOD2 = 1000000007;

ll mod_power(ll a, ll b, ll MOD) {
    ll cumulative = a, result = 1;
    for (; b > 0; b /= 2) {
        if (b % 2 == 1)
            result = (result * cumulative) % MOD;
        cumulative = (cumulative * cumulative) % MOD;
    }
    return result;
}

class DynamicConnectivity {
    void __dfs(int v, int l, int r, vll& res) {
        ll last_ans = answer;
        int state = save_ptr;
        for (auto x : tree[v])
            merge(x.u, x.v, x.ratio);
        if (l == r - 1)
            res[l] = answer;
        else {
            int m = (l + r) / 2;
            __dfs(v * 2 + 1, l, m, res);
            __dfs(v * 2 + 2, m, r, res);
        }
        while (save_ptr != state)
            rollback();
        answer = last_ans;
    };

public:
    int size_nodes;
    int size_query;

    vector<ll> parent, comp_size;
    ll answer = 0;
    vector<ll*> saved_object;
    vector<ll> saved_value;
    int save_ptr = 0;
    vector<ll> factor;
    ll comp_count;

    struct Query {
        int u, v;
        ll ratio;
        Query(pair<int, int> p, ll r) {
            u = p.first, v = p.second;
            ratio = r;
        }
    };
    vector<vector<Query>> tree;

    DynamicConnectivity(int n = 600000, int q = 300000) {
        size_nodes = n;
        size_query = q;
        parent = vector<ll>(n);
        comp_size = vector<ll>(n, 1);
        ll tree_size = 1;
        while (tree_size < q)
            tree_size <<= 1;
        tree = vector<vector<Query>>(2 * tree_size);
        iota(parent.begin(), parent.end(), 0);
        saved_object = vector<ll*>(max(3 * n, 1000000));
        saved_value = vector<ll>(max(3 * n, 1000000));
        factor = vector<ll>(n, 1);
        comp_count = n;
    }

    void change(ll& object, ll value) {
        saved_object[save_ptr] = &object;
        saved_value[save_ptr] = object;
        object = value;
        save_ptr++;
    }

    void rollback() {
        save_ptr--;
        (*saved_object[save_ptr]) = saved_value[save_ptr];
    }

    int find(int x) {
        if (parent[x] == x)
            return x;
        return find(parent[x]);
    }

    ll find_factor(int x) {
        if (parent[x] == x)
            return 1;
        return 1ll*factor[x]*find_factor(parent[x])%MOD1;
    }

    void merge(int x, int y, ll ratio) {
        ll factor_x = find_factor(x);
        ll factor_y = find_factor(y);
        x = find(x);
        y = find(y);
        if (x == y) {
            if (!(factor_x == (ratio * factor_y) % MOD1))
                change(comp_count, 0);
            answer = comp_count;
            return;
        }
        ll tmp_var = 1ll*ratio*factor_y%MOD1;
        if (comp_size[x] > comp_size[y]) {
            change(parent[y], x);
            change(comp_size[x], comp_size[x] + comp_size[y]);
            change(factor[y], (factor_x * mod_power(tmp_var, MOD1 - 2, MOD1)) % MOD1); 
            change(comp_count, comp_count - 1);
        }
        else
        {
            change(parent[x], y);
            change(comp_size[y], comp_size[x] + comp_size[y]);
            change(factor[x], (tmp_var * mod_power(factor_x, MOD1 - 2, MOD1)) % MOD1);
            change(comp_count, comp_count - 1);
        }
        answer = comp_count;
    }

    void add(int l, int r, Query edge, int node = 0, int x = 0, int y = -1) {
        if (y == -1)
            y = size_query;
        if (l >= r)
            return;
        if (l == x && r == y)
            tree[node].emplace_back(edge);
        else {
            int m = (x + y) / 2;
            add(l, min(r, m), edge, node * 2 + 1, x, m);
            add(max(m, l), r, edge, node * 2 + 2, m, y);
        }
    }

    vll results(int v = 0, int l = 0, int r = -1) {
        if (r == -1)
            r = size_query;
        vll vec(size_query);
        __dfs(v, l, r, vec);
        return vec;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, q;
    cin >> n >> q >> MOD1;
    map<pll, ll> last;
    DynamicConnectivity dsu(n + n, q);
    vector<DynamicConnectivity::Query> queries;
    queries.reserve(q);
    for (int i = 0; i < q; i++) {
        ll x, y, val;
        cin >> x >> y >> val;
        x--, y--;
        pll p(x, y + n);
        queries.emplace_back(p, val);
        if (last.count(p)) {
            dsu.add(last[p], i, queries.back());
            last.erase(p);
        } else {
            last[p] = i;
        }
    }
    for (auto x : last)
        dsu.add(x.second, q, queries[x.second]);
    vll res = dsu.results();
    for (int i = 0; i < q; i++)
        cout << ((res[i] <= 0) ? 0 : mod_power(MOD1-1, res[i] - 1, MOD2)) << "\n";
}
