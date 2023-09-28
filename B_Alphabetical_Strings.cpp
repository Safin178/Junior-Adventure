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
     string s;
     cin >> s;
     vi v;
     if(sz(s) % 2 != 0)
     {
        if(!(s[0] == (char)('a'+sz(s)-1) || s.back() == (char)('a' + sz(s)-1)))
        {
                noR;
        }
     }
     for(int i =0 ;i < sz(s); i++)
     {
       // cout << s[i] -'a';
       if(sz(s) % 2 != 0)
       {
         if(int(s[i]-'a') == sz(s)-1)continue;
       }
        v.pb(int(s[i]-'a'));
        
     }  
     //print(v);
     for(int i = 0; i < sz(v);i++)
     {
        if(v[i] % 2 != 0)
        {
            if(v[i] - 1 == v.back())
            {
                v.pop_back();
                continue;
            }
            else {
                noR;
            }
        }
        else 
        {
             if(v[i] + 1 == v.back())
            {
                v.pop_back();
                continue;
            }
            else {
                noR;
            }

        }
     }
     yes;
    // cout << " "<<sz(s) << nl;


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




