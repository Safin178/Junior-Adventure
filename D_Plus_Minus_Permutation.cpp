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
    int n, x, y;
   cin >> n>> x >> y;
   int l = y;
   if(x == y)
   {
    cout << 0 << nl;return;

   }
   y = n/y;
    if(x == 1)
    {
        cout << (n*(n+1)/2) - (y*(y+1)/2) << nl;return;
    }
     cout << "hi:  ";
    vi v,k;
    int ans = 0, i = 1;
     while(ans < n)
    {
        ans = x * i;
        if(ans > n)break;
        i++;
        v.pb(ans);
        //if(ans > n)break;

    }
    ans = 0;
    i = 1;
     while(ans < n)
    {
        ans = l * i;
        if(ans > n)break;
        i++;
        k.pb(ans);
        //if(ans > n)break;

    }
    printVec(v);
    printVec(k);


}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}