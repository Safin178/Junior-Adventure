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
    int n;
    cin >> n;
    vi v(n);
    if(n == 3)
    {
        cout << -1 << nl;
        return;
    }
    else if(n % 2 == 0)
    {
        for(int i = n ; i > 0 ;i--)
        {
            cout << i << " ";
        }
        cout << nl;
    }
    else
    {
         for(int i = n ; i > (n/2)+1;i--)
        {
            cout << i << " ";
        }
        
         for(int i = 1 ; i <= (n/2)+1 ;i++)
        {
            cout << i << " ";
        }

        cout << nl;

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

