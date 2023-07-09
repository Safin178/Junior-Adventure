#include<bits/stdc++.h>
using namespace std;

typedef vector<long long> vl;
typedef vector<int> vi;

#define all(v)	((v).begin()), ((v).end())
#define sz(v)	((int)((v).size()))
#define ll long long
#define pb push_back
#define endll '\n'
#define CY cout<<"YES\n";
#define CN cout<<"NO\n";
#define CYR cout<<"YES\n";return;
#define CNR cout<<"NO\n";return;
#define vit vector<int>::iterator  
#define forcin(n) for(auto &x : n) cin>>x;
#define forcout(n) for(auto x : n) cout << x << " ";
void printVec(vector<int> v2, string s = "")//vector ke print kore just printVec(v) likle hobe
{
	cout<<s;
	for (int i = 0; i < (int)v2.size(); ++i)
			cout<<v2[i]<<" ";
		cout<<"\n";
}

void solve()
{
    int u=0,l=0;
    string s;
    cin >> s;
    for(int i =  0; i  < sz(s) ; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z') u++;
        else l++;
    }
    if(u <= l)
    {
        for(int i =  0; i  < sz(s) ; i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z') s[i]+= 32;
            
        }
    }
    else 
    {
        for(int i =  0; i  < sz(s) ; i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z') s[i]-= 32;
            
        }
    }
    cout << s;




}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}