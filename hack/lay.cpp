/*
* This code is submitted by Muneer Hasan
* Computer-scince student ( @ Jamia Millia Islamia : Delhi)
* Email : md.muneerhasan@gmail.com
* Wednesday 01-April:2020
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long int
stringstream vin,vout;
#define db(...) __f(#__VA_ARGS__, __VA_ARGS__)

template <typename Arg1>
void __f(const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << '\n'; }
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " : " << arg1 << " | "; __f(comma + 1, args...);
}
void signature(bool enable){
    if(!enable)return;
    cout << "Wednesday 01-April:2020"<<endl;
    cout << "Name : Muneer Hasan"<<endl;
    cout << "Roll No.: 17BCS054"<<endl;
}
vector<int> vec;
int n,n1,n2,startPoint,k=0,endPoint,ans=0,cnt=0,q=0,qry=0;
          int row,col;
          vector<vector<int>> arr2;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    signature(true);
    //cin >>t;    while (t--)
    {
          cin >>row;
          col=row;
          arr2.resize(row,vector<int>(col,0));
          for(int q=0;q<row;q++){
            for(int r=0;r<col;r++){
              cin  >> arr2[q][r];
            }
          }
        unordered_map<int,unordered_map<int,int>>dp;
        for(int j=0;j<col;j++){
            for(int i=0;i<row;i++){                
                if(i>0){
                    dp[i][j]=min(dp[i][j-1],dp[i-1][j])+arr2[i][j];

                }else{
                    dp[i][j]=dp[i][j-1]+arr2[i][j];
                }
            }
        }

        for(int j=0;j<col;j++){
            for(int i=row-2;i>=0;i--){
                dp[i][j]=min(dp[i][j],min(dp[i][j-1],dp[i+1][j])+arr2[i][j]);
            }
        }
        // for(int q=0;q<10;q++){
        //   for(int r=0;r<10;r++){
        //     cout  << dp[q][r]<<" ";
        //   }
        //   cout <<endl;
        // }
        // cout << endl;
        ans=INT_MAX;
        for(int i=0;i<row;i++){
            ans=min(ans,dp[i][col-1]);
        }
        cout << ans<<endl;
          
    }
    return 0;
}