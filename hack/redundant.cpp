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
string s;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >>t;    while (t--)
    {
        cin >> s;
        stack<char> st;
        bool flag=false;
        for(int i=0;i<s.size();i++){
            if(s[i]==')'){
                if(st.top()=='('){flag=true;break;}
                else
                while(st.top()!='('){st.pop();}
                st.pop();                
            }else{
                st.push(s[i]);
            }
        }
        if(!flag){
            cout << "Not Duplicates"<<endl;
        }else{
            cout << "Duplicate"<<endl;
        }
    }
    return 0;
}