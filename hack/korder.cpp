/* This code is submitted by Muneer Hasan
* Computer-scince student ( @ Jamia Millia Islamia : New Delhi)
* Email : md.muneerhasan@gmail.com
* 01:39:20 Sunday 18-April:2021*/
#include<bits/stdc++.h>
using namespace std;
#define int             long long int
#define SF(v)           sort(v.begin(),v.end())
#define UP(x)           for(int i=0;i<x.size();i++){if(x[i]<='z' && x[i]>='a')x[i]=char(x[i]-'a'+'A');}
#define LO(x)           for(int i=0;i<x.size();i++){if(x[i]<='Z' && x[i]>='A')x[i]=char(x[i]-'A'+'a');}
#define MAXHEAP         priority_queue<int>
#define MINHEAP         priority_queue<int, vector<int>, greater<int> >
#define SETBIT(x)       __builtin_popcountll(x)
#define ZEROBIT(x)      __builtin_ctzll(x)
#define PS(x,y)         fixed<<setprecision(y)<<x
#define MOD             1000000007
#define N               2000
#define db(...)         __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>void __f(const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << '\n'; }template <typename Arg1, typename... Args>void __f(const char* names, Arg1&& arg1, Args&&... args) {    const char* comma = strchr(names + 1, ',');    cout.write(names, comma - names) << " : " << arg1 << " | "; __f(comma + 1, args...);}
vector<int> vec1,vec2,vec3,primes;
int row,col;vector<vector<int>> vec;
int n=0,m=0,k=0,n1=0,n2=0,n3=0,stt=0,ent=0,q=0,qry=0;
string s, s1 ,s2;
int dp[N][N][6];
int solve(int i,int j,int k){
    if(i==n1||j==n2)return 0;
    if(dp[i][j][k]!=-1)return dp[i][j][k];

    if(vec1[i]==vec2[j]){
        return dp[i][j][k]=solve(i+1,j+1,k)+1;
    }
    if(k>0)
    return dp[i][j][k]=max({solve(i+1,j,k),solve(i+1,j+1,k-1)+1,solve(i,j+1,k)});

    return dp[i][j][k]=max(solve(i+1,j,k),solve(i,j+1,k));

}
void Muneer(){
    int ans=0,cnt=0,x=0,y=0,a=0,b=0;
    
    cin >>n1;
    cin >>n2>>k;
    vec1.clear();
    vec1.resize(n1,0);
    for(int q=0;q<n1;q++){
      cin >> vec1[q];
    }

    vec2.clear();
    vec2.resize(n2,0);
    for(int q=0;q<n2;q++){
      cin >> vec2[q];
    }
    memset(dp,-1,sizeof(dp));
    cout << solve(0,0,k)<<endl;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t=1;
    // cin >>t;    
    while (t--)Muneer();
    return 0;
}