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
   int n;
   cin >> n;
   vi v(n);
   forcin(v);

   int max = *max_element(all(v));
   int mini = *min_element(all(v));
   if(max == mini)
   {
    cout << -1 << nl;return;

   }
   if(v[0] == max && v[0] > v[1])
   {
    cout << 1 << nl;
    return;
   }
   if(v[sz(v)-1] == max && v[sz(v)-1] > v[sz(v)-2])
   {
    cout << sz(v) << nl;
    return;
   }
   for(int i = 1; i <sz(v)-1; i++)
   {
        if(v[i] == max )
        {
            if(v[i-1] < max|| v[i+1] < max)
            {
                cout << i+1 << nl;
                return;
            }
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