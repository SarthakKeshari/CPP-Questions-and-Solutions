#include<bits/stdc++.h>
using namespace std;
#define nm (nl+nr>>1)
typedef long long ll;
const int N=2e5+1;

// created a node with the help of Linkedlist
struct node {
	ll lk,rk,k,l,r,v;
	node(int x) : lk(1), rk(1), k(1), l(x), r(x), v(1) {}
	node() : lk(0), rk(0), k(0), l(2e9), r(0), v(0) {}
};

//code to create leaf node from root node
node f(node l,node r) {
	node ret;
	ret.lk=(l.lk==l.k&&l.r<=r.l?l.k+r.lk:l.lk);
	ret.rk=(r.rk==r.k&&l.r<=r.l?r.k+l.rk:r.rk);
	ret.k=l.k+r.k;
	ret.l=l.l; ret.r=r.r;
	ret.v=l.v+r.v+(l.r<=r.l?l.rk*r.lk:0);
	return ret;
}

//created a node with the help of segment tree 
int n,q; node tree[4*N]; 

//update function to update the value of segment tree
void update(int x,ll y,int nl=1,int nr=n,int i=1) {
	if(nl==nr){ tree[i]=node(y); return; }
	if(x<=nm) update(x,y,nl,nm,i<<1);
	else update(x,y,nm+1,nr,i<<1|1);
	tree[i]=f(tree[i<<1],tree[i<<1|1]);
}

// created query node with the help of linkedlist Data Structure
node query(int l,int r,int nl=1,int nr=n,int i=1) {
	if(r<nl||nr<l) return node();
	if(l<=nl&&nr<=r) return tree[i];
	return f(query(l,r,nl,nm,i<<1),query(l,r,nm+1,nr,i<<1|1));
}

// main function of the code
int main()
{
	cin.tie(0)->sync_with_stdio(0);
	cin >> n >> q;
	for(int i=1;i<=n;i++){
		ll a; cin >> a; update(i,a);
	}
	// updating the main function using while loop
    while(q--){
		int t,a,b; cin >> t >> a >> b;
		if(t==1) update(a,b);
		else cout << query(a,b).v << '\n';
	}
}