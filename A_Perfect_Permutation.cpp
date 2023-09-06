
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

void solve()///WA
{
    int n;
    cin >> n;
    vi v;

    if(n % 2 == 0)
    {
        for(int i = n; i > 0; i--)
        {
            cout << i << " ";
        }
        cout << nl;
    }
    else 
    {
         for(int i = n; i > 0; i--)
        {
             v.pb(i);
        }
        if(sz(v) > 3)
        {
            int x = (n+1) /2;
            swap(v[x], v[0]);
            swap(v[1], v[sz(v)-1]);
        }
        else if(n == 3){cout << 2 << " " << 3 << " " << 1 << nl;return;}
        printVec(v);
    }




}
void solve2()//guilty je jury er test case dekhe felsi ,,
{
    int n;
    cin >> n;
    cout << n << " ";
     for(int i = 1; i < n; i++)
        {
            cout << i << " ";
        }
        cout << nl;
}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve2();
    }
    return 0;
}