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
    int n;
    cin >> n;
    vi v(n);
    forcin(v);
    vi f(n);
    string s , t;
    cin >> s;

    for(int i = 0 ; i < sz(s); i++)
    {
        
        for(int j = i; j < sz(v);j++)
        {
            if(v[i] == v[j] && f[j] == 0)
            {
                f[j] = s[i];
            }
        }
       
    }
    
    for (int i = 0; i < (int)f.size(); ++i)
			t += (char)(f[i]);
		
        if(t == s)yes;
        else no;
  


}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}