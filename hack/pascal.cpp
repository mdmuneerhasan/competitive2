#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define db(...) __f(#__VA_ARGS__, __VA_ARGS__)

template <typename Arg1>
void __f(const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << '\n'; }
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
	const char* comma = strchr(names + 1, ',');
	cout.write(names, comma - names) << " : " << arg1 << " | "; __f(comma + 1, args...);
}
vector<int> vec;
int n,n1,n2,startPoint,k,endPoint,ans=0,cnt=0,q=0,qry=0;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int t;
	//cin >>t;    while (t--)
	{
	  cin >> n;
	  unordered_map<int,unordered_map<int,int>>dp;
	
	  for(int i=0;i<n;i++){
		  for(int j=0;j<=i;j++){
			  if(j==0||i==0){
				  dp[i][j]=1;
				 if(i==n-1) cout<<1<<" ";
			  }else if(j==1){
				  dp[i][j]=i;
				  
				  if(i==n-1)cout << i<<" ";
			  }else{
				  dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
				 if(i==n) cout << dp[i][j]<<" ";
			  }
		  
		  }
		  cout <<endl;
	  }
	  
	}
	return 0;
}