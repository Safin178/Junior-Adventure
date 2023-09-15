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
#define Ike  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
     /* 
     int boro = 0,  boro2 = 0;
     if(("b" >= "a"))yesR
     
     for(int i = 1; i < sz(s)-1; i++)
     {
        if(s[0] <= s[i])
        {
           // yes;
            boro = i;
            break;
        }
     }
     if(boro)
     {
        for(int i = boro +1; i < sz(s); i++)
        {
            if(s[boro] >= s[i] )
            {
                boro2 = i;
                break;
            }
        }
     }
     if(boro2)
     {
        cout << s.substr(0,boro) << " ";
        cout << s.substr(boro,boro2-boro) << " ";
        cout << s.substr(boro2,sz(s)-boro2) << nl;
        return;
     }
    // cout << boro << " " << boro2 << nl ;
     for(int i = 1; i < sz(s)-1; i++)
     {
        if(s[0] >= s[i])
        {
           // yes;
            boro = i;
            break;
        }
     }
     if(boro)
     {
        for(int i = boro +1; i < sz(s); i++)
        {
            if(s[boro] <= s[i] )
            {
                boro2 = i;
                break;
            }
        }
     }
     if(boro2)
     {
        cout << s.substr(0,boro) << " ";
        cout << s.substr(boro,boro2-boro) << " ";
        cout << s.substr(boro2,sz(s)-boro2) << nl;
     }
    // cout << boro << " " << boro2 << nl << nl;
    */
   string a,b,c;
   a = s;
    int i;
  for( i = 0; i < sz(s)-1; i++)
   {
     a = s.substr(0,i+1);
        for(int j = i+1; j < sz(s)-1; j++)
        {
            b = s.substr(i+1,sz(s)-j-1);
            c = s.substr(sz(s)-j+i);
            if((a <= b && b >= c)||(a>= b && b <= c)){
            cout << a << " " << b << " " << c << " " << nl;return;}

        }
   }
      
    //cout << nl;

}

int main(){
     Ike
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}




