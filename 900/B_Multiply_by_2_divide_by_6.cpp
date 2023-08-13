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
#define ever ;1;
void solve()
{
   int n;
   cin >> n;
   
    int cnt = 0;
   for(ever)
   {
        
        if(n % 6 == 0)
        {
             //cout << "6 :" << n << " ";
            cnt++;
            n = n / 6;
            continue;
        } 
         if(n % 3 == 0)
        {
            cnt++;
            n = n * 2;
            continue;
        }
        if(n == 1)
        {
            break;
        }
        else 
        {
            cout << -1 << nl;
            return;
        }
   }
   cout << cnt << nl;

    // i am testing this video to upload on youtube ,,
   
    



}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}