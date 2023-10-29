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
    int n ,q; 
    
    cin >>  n >> q;
    vi v(n);
    forcin(v);

    ll sum = 0;
    vl p , r;
    p.pb(sum);

    for(int i = 0; i < sz(v)-1;i++)
    {
        if(v[i] > v[i+1])
        {
            sum += v[i]-v[i+1];
        }
        p.pb(sum);
    }
    reverse(all(v));
    sum = 0;
    r.pb(sum);
    for(int i = 0; i < sz(v)-1;i++)
    {
        //sum += v[i];
        if(v[i] > v[i+1])
        {
            sum += v[i]-v[i+1];
        }
        r.pb(sum);
    }
   // print(p);
   // print(r);
    while(q--)
    {
        int x,y;
        cin >> x >> y;
        if(x<=y)
        {
            cout << p[y-1] - p[x-1]<<nl;
        }
        else 
        cout << r[n-y]- r[n-x]  << nl;
        
        
    }






}

int main(){
     set_sail;
    int t=1;
   // cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}




