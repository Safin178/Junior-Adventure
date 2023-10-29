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
     ll sum=0;
     int x;
     vl v(n),p1,p2;
     forcin(v);

     for(int i = 0; i < sz(v); i++)
     {
        sum += v[i];
        p1.pb(sum);
     }
     sum = 0;
      for(int i = sz(v)-1; i >= 0; i--)
     {
        sum += v[i];
        p2.pb(sum);
     }
     //print(p1);
     reverse(all(p2));
     //print(p2);
     int cnt = 0;
     for(int i = 0; i < sz(p1)-1; i++)
     {
        if(p1[i]==p2[i+1])
        {
            cnt++;
        }
     }
    cout << cnt << nl;

     

     
    
     
        

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




