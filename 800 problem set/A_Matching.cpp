
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
/*        ／＞　　フ
　　　　　| 　_　 _ |
　 　　　／` ミ＿Yノ     meow
　　 　 /　　　 　 |   
　　　 /　 ヽ　　 ﾉ  
　 　 │　　|　|　|
　／￣|　　 |　|　|    
　| (￣ヽ＿_ヽ_)__)   
　＼二つ
*/

void solve()
{
    string s;
    cin >> s;

    if(s[0] == '0')
    {
        cout << 0 << nl;return;
    }
    
    int cnt = 0, ch = 0;
    int ncnt = 0;
    bool f = true;
    for(int i = 0; i < sz(s); i++)
    {
        if(s[i] == '?')cnt++;
        if(s[i] >= '0' && s[i] <= '9') ch++;
        if(ch==0)ncnt++;

    }
    if(ch == 0 ) cout << pow(10, (double)cnt) - pow(10, (double)ncnt-1) << nl;
    else if(cnt == 0) cout << pow(10, (double)ch-1) <<nl;
    else if (ncnt == 0) cout << pow(10, (double)cnt) << nl;
    else cout << pow(10, (double)cnt) - pow(10, (double)ncnt) << nl;
   // cout << cnt << " " << ch << " " << ncnt << nl;
   



}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}