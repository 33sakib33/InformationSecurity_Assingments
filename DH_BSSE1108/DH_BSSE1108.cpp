#include<bits/stdc++.h>
using namespace std;

#define cin1(x) cin>>x
#define cin2(x,y) cin>>x>>y
#define cin3(x,y,z) cin>>x>>y>>z
#define ll long long
#define mp make_pair
#define pb push_back
#define nl printf("\n")
#define ff first
#define ss second
#define set0(a) memset ((a), 0 , sizeof(a))
#define set1(a) memset((a),-1,sizeof (a))
#define pi pair<int, int>
#define ps pair<string, string>
#define pl pair<long, long>
#define pll pair<long long, long long>
#define vll vector<long long>
#define vl vector<long>
#define vi vector<int>
#define vs vector<string>
#define vps vector< ps >
#define vpi vector< pi >
#define vpl vector< pl >
#define vpll vector< pll >
#define flash  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tc(t,T) for(long long t=0;t<T;t++)
#define rep(i,s,n,d) for(long long i=s;i<n;i=i+d)


ll binaryexp(ll n,ll p,ll mod){

    if(p==0) return 1;
    if(p%2==0) return binaryexp((n%mod)*(n%mod),p/2,mod);
    else return ((n%mod)*binaryexp(((n%mod)*(n%mod))%mod,(p-1)/2,mod)%mod);

}
void init(){
	  ll n,g,x,a,y,b;  
	  cout<<"value of n and g: ";
	  cin>>n>>g;     
	  cout<<"value of private key 1: ";
	  cin>>x;
	  a=binaryexp(g,x,n);    
	  cout<<"value of private key 2: ";
	  cin>>y;
	  b=binaryexp(g,y,n);
	  cout<<"secret key 1: "<<binaryexp(b,x,n)<<endl;
	  cout<<"secret key 2: "<<binaryexp(a,y,n)<<endl;
}

int main(){
	 init(); 
}




























