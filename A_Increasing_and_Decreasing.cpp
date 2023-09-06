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
   int x, y, n, l;
   cin >> x >> y >> n;
   l = y;
   if(y - x < n)
   {
    cout << -1 << nl;
    return;
   }
   vi f, q;
   
   for(int i = 1 ;i <= n-2; i++)
   {
        q.pb(y - i);
        y = y - i;

   }
   reverse(all(q));
   if(x >= q[0])
   {
    cout << -1 << nl;
    return;
   }
   cout << x << " ";
   for(int i = 0; i < sz(q); i++)
   {
    cout << q[i] << ' ';
   }
   cout << l << nl;
  // printVec(q);
  

    



}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}