#include<bits/stdc++.h>
using namespace std;

typedef vector<long long> vl;
typedef vector<int> vi;

#define all(v)	((v).begin()), ((v).end())
#define sz(v)	((int)((v).size()))
#define ll long long
#define pb push_back
#define nl '\n'
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define yesR cout<<"YES\n";return;
#define noR cout<<"NO\n";return;
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
    string s;
    cin >> s;
    int cnt0 = 1, max1 = INT32_MIN, cnt1 = 1, max2 = INT32_MIN;
    for(int i = 0; i < sz(s) -1; i++)
    {
        if(s[i] == s[i+1] && s[i] == '1')
        {
            cnt0++;
            
        }
        else if(s[i] == s[i+1] && s[i] == '0')
        {
             cnt1++;
        
        }
        if(s[i] != s[i+1])
        {
            cnt0=1;
            cnt1=1;
        }
        if(max1 < cnt0)
        {
            max1 = cnt0;
           // cout << max1 << nl;
        }
        if(max2 < cnt1)
        {
            max2 = cnt1;
        }
    }
    //cout << cnt << nl;
    (max1 >= 7 || max2 >= 7) ? yes : no;


}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}