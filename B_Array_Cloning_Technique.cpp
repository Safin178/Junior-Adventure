//----------- Bismillahir Rahmanir Raheem -------------/
#include<bits/stdc++.h>
using namespace std;

typedef vector<long long> vl;
typedef vector<int> vi;

#define all(v)	   ((v).begin()), ((v).end())
#define sz(v)	   ((int)((v).size()))
#define ll         long long
#define pb         push_back
#define nl         '\n'
#define yes        cout<<"YES\n"
#define no         cout<<"NO\n"
#define ryes       {cout<<"YES\n";return;}
#define rno        {cout<<"NO\n";return;}
#define vit        vector<int>::iterator  
#define forcin(n)  for(auto &x : n) cin>>x;
#define forcout(n) for(auto x : n) cout << x << " ";
#define set_sail    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ever       ;1;
#define ff         first
#define ss         second
#define mp make_pair
void print(auto v2, string s = "")
{
	cout<<s;
	for (int i = 0; i < (int)v2.size(); ++i)
			cout<< v2[i] <<" ";
		cout<<"\n";
}
void printpv(auto v2, string s = "")
{
	cout<<s;
	for (int i = 0; i < (int)v2.size(); ++i)
			cout<< v2[i].ff <<" " <<v2[i].ss << nl;
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
    int n;
    cin >> n;
    vi v(n);
    forcin(v);
    bool notok=0;
    for(int i = 0; i < sz(v); i++)
    {
        if(v[0] != v[i])
        {
            notok=1;
            break;
        }
    }  
    if(!notok)
    {
        cout << 0 << nl;
        return;
    }
    if(n==2)
    {
        cout << 2 << nl;
        return;
    }
    map<int,int> mp;
    for(auto u : v)
    {
        mp[u]++;
    }
    int mx = INT32_MIN;
    for(auto u : mp){
        //cout << u.first << " "<<u.ss << nl;
        mx = max(mx,u.ss);
    }
//     cout << mx << " " << n <<"h" << nl;
//    if(mx==1)
//    {
//     mx=0;
//    }
//     if( sz % 2 == 0)
//     {
//     cout << (n- mx)+1<<nl;
//     }
//     else cout << (n-mx)+2 << nl;
    if(mx==1&&n %2!=0)
    {
        cout << n+2 << nl;
        return;
        
    }
    int ans = n-mx;
    if(ans%2==0)
    {
        cout << ans + (ans/2) << nl;
    }
    else cout << ans + (int)ceil(ans/2.0) << nl;
//    // if(ans%2==0)ans++;
//    int x = ans;
//    if(mx>1) x = ans+1;

//     cout << (x-1)+(int)ceil((ans/2.0))<<nl;



}

int main(){
     set_sail;
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}




