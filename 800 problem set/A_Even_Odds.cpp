
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
    ll n, k;
    cin >> n >> k;

    if(n % 2 == 0)
    {
        if(k > (n/2))
        {
            cout << (k - (n/2)) * 2 << nl;
        }
        else 
        {
            cout <<  k*2 -1 << nl;
        }
    }
     else 
     {
        ll x = (n/2)+1;
         if(k > x)
        {
            cout << (k - x) * 2 << nl;
        }
        else 
        {
            cout <<  k*2 -1 << nl;
        }
        
     }



}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}
/*⠀⠀⠀⠀⠀⠀⠀⠀⠀✦⠀
　　　　　　.　　　ﾟ .　　　　　. 　　　✦ 　　　　　,　　　　　　　.
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀☁️
　　　　　　*　　　　　　　　　　　.
.　　　　　　　　　　　　　. 　　✦⠀ 　　　,　　　　　　　　　*
　　　　　　⠀　　,
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀. 　　⠀　　　.　　　　　　　.
　　　　.  ／＞　　フ
　  　　　| 　_　 _ |
　 　　　／` ミ＿Yノ     meow        ☁️ 
　　 　 /　　　 　 |         
　　　 /　 ヽ　　 ﾉ           
　 　 │　　|　|　|                       ✦  
　／￣|　　 |　|　|        
　| (￣ヽ＿_ヽ_)__)       
　＼二つ⠀.　                     
　　˚　　　⠀　⠀ 　　
.　　　　⠀⠀⠀✦ ⠀ ⠀　　　　　⠀* ⠀⠀⠀.　　　　　. ⠀⠀⠀⠀⠀⠀✦⠀⠀⠀ ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀🕷 ⠀ ⠀⠀⠀⠀⠀⠀.　　　　　　　　　　　　　.　　　ﾟ .　　　　　　　　　　　　　. 　　　　　　　　　　　　　　　✦ 　　　　♡ ㅤ ❍ㅤ ⎙ㅤ ⌲
,　　　　　　　.
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀☁️
　　　　　　*　　　　　　　　　　　.

　　　　　　　　　　　.
　　　　　　　🗡
　　　˚　　　　　　　　ﾟ　　　　　.
　.⠀　　🗝⠀‍⠀‍⠀‍⠀‍⠀‍⠀‍⠀‍⠀‍⠀‍⠀‍⠀,
　　　*　　⠀.
*/
