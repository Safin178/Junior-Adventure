// Bismillahir Rahmanir Raheem
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
#define yesR {cout<<"YES\n";return;}
#define noR {cout<<"NO\n";return;}
#define vit vector<int>::iterator  
#define forcin(n) for(auto &x : n) cin>>x;
#define forcout(n) for(auto x : n) cout << x << " ";
#define bismillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ever ;1;
void print(auto v2, string s = "")
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
    ll n ,k, x;
    cin >> n >> k >> x;
     ll kl = n-k;
    n = n*(n+1)/2;
    k = k*(k+1)/2;
   
    kl = kl*(kl+1)/2;
    kl = n - kl;
    // cout << n << " ";
    // cout << k << " ";
    // cout << x<< " " << kl ;

    if(kl< x || x < k)no;
    else yes;



}

int main(){
     bismillah
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}




