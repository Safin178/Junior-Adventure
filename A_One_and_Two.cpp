
/*
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠛⠉⠙⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⠿⠋⠀⠀⠀⠀⠀⢦⣀⡈⢻⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣇⠀⠀⠀⠀⠀⠀⠀⠀⠈⣷⡄⠙⠛⢿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣷⣦⣄⠀⠀⢀⣤⣤⣾⣿⠧⠀⠀⠈⢿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠿⠃⠀⠉⠉⠀⠀⠀⠀⢀⣀⣠⣾⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⠁⠀⠀⠀⠀⠀⠀⠀⢀⣾⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⠟⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⠇⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⠋⢀⣾⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⢈⠻⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⡇⠀⠸⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢦⠈⢿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣷⣾⣿⠃⠀⠀⠀⠀⣸⡆⠀⠀⠀⠀⠀⢣⡀⠻⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⡟⠀⠀⠀⠀⢀⣿⣿⡀⠀⠀⠀⠀⢀⣵⡀⠙⣻⣿⣿
⣿⣿⣿⣿⣿⣿⠁⠀⠀⠀⠀⢸⣿⣿⣧⠀⠀⠀⠀⠈⢻⣿⣾⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣤⠀⠀⢀⣀⣼⣿⣿⣿⡄⠀⠀⠀⢴⣾⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⡏⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣇⠀⠈⢿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⠇⠀⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⡄⠀⠘⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⠀⠀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡄⠀⢻⣿⣿⣿⣿
⣿⣿⣿⣿⣿⡏⠀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡄⠈⣿⣿⣿⣿
⣿⣿⣿⣿⡿⠁⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡄⠘⣿⣿⣿
⣿⡿⠛⠉⠀⠀⠈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠈⠻⣿
⣿⣷⣶⣶⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⣤⣤⣤⣼
*/
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
    vi f;

    forcin(v);
    int cnt = 0;

    for(int  i =  0; i <sz(v); i++)
    {
        if(v[i] == 2){
             cnt++;
             f.pb(i+1);
        }
        
    }
    //printVec(f);
    if(cnt == 0) cout << 1 << nl;
    else if(cnt == 1)cout << -1 << nl;
    else
    {
        if(cnt % 2 != 0) cout << -1 << nl;
        else{
            cout << f[(cnt/2)-1] << nl;
        }
    }



}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}
