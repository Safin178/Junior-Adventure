//CP
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

//---------------- ---------------- ---------------- --------------------- ------------------ --------//

void solve()
{
    int n, k;
    cin >> n >> k;
   

    vi v(k);
    forcin(v);

    sort(all(v));
    int m = INT32_MAX;

    for(int i = 0; i <= (k-n);i++)
    {
        m = min(m, v[n-1+i]-v[i]);
    }
   // printVec(v);
    cout << m << nl;

  
}

int main(){
    int t=1;
   // cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}

// -----------------------------------------------------------------------------//

/*


keep moving forward
skip the villain arc
just have the guts to never give up
comparison leads to envy
inspiration leads to growth
just remain faithful




          ／＞　　フ
　　　　　| 　_　 _ |
　 　　　／` ミ＿Yノ     meow
　　 　 /　　　 　 |   this cat is sad
　　　 /　 ヽ　　 ﾉ  
　 　 │　　|　|　|
　／￣|　　 |　|　|    
　| (￣ヽ＿_ヽ_)__)   
　＼二つ


*/

