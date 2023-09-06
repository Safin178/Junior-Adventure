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
   ll int n;
   cin >> n;
   vl v(n);
   forcin(v);//ac bro

   for(ll int m = 1 ; m < (1<<n); m++)
   {
        ll int p = 0, q = 0;
        for(ll int i = 0; i < n ; i++)
        {
            if(m & (1 << i))
            {
               // cout << v[i] << " ";
                p += v[i];
            }
            else q -= v[i];
        }
     
        if((p+q) % 360 ==  0)
        {
           // cout << p << "y " << q << nl;
            yesR;
        }
        // cout << p << " " << q << nl;

   }
    
    no;



}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}
/*


*/