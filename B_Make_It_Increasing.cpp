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
#define ever ;1;
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
   int n;
   cin >> n;
   vi v(n);
   forcin(v);
   int cnt = 0;
   //bool dontstop = ;
   for(ever)
   {
         bool dontstop = true;
        for(int i = sz(v)-1; i> 0; i--)
        {
            if(v[i] == v[i-1] && v[i-1] == 0)
            {
                cout << -1 << nl;
                return;
            }
            if(v[i] <= v[i-1])
            {
                cnt++;
                v[i-1] = v[i-1] / 2;
                dontstop = false;
                break;
            }
        }
        if(dontstop) break;
   }
   cout << cnt <<nl;
    



}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}