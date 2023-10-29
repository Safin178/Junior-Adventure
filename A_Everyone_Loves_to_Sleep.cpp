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
    vector<pair<int,int>>v;
    int h , m;
    cin >> h >> m;
    while(n--)
    {
        int x,y;
        cin >> x >> y;
        int ans1=0,ans2=0;
        
         if(h <= x)
        {
            ans1 = x - h;
            
            if(y>=m)
            {
                ans2 = y - m;
            }
            else {
                if(ans1==0)ans1++;
                ans2 = 60 -(m-y);ans1--;
                //if(ans1==0)ans1++;
            }

        }
        else{
            ans1 = 24 - (h-x);
            
             if(y>=m)
            {
                ans2 = y - m;
            }
            else {ans2 = 60 -(m-y);ans1--;}


        }
        v.pb(make_pair(ans1,ans2));


    }  
   // printpv(v);
    
   
    sort(all(v)); 
    
        cout << v[0].ff << " " << v[0].ss << nl;
  

}
void solve_editorial1()//ac , obaji koto practice lagbe
{
    int n,h,m;
    cin >> n >> h >> m;
    vi v;
    while(n--)
    {
        int x,y;
        cin >> x >> y;
        int ans = 60* (x-h) + (y-m);
        if(ans< 0) ans += 24*60;
        v.pb(ans);

    }
    sort(all(v));
    cout << (v[0] - v[0]% 60)/60 <<" "<< v[0]%60 << nl;

}
bool khujo(int x, int y, auto v2)
{
    for(int i = 0; i < sz(v2); i++)
    {
        if(x==v2[i].ff && y == v2[i].ss)
        {
            return true;
        }
    }
    return false;
}
void solve_editorial2()//partesi naa, bujtesi na ashole
{
     int n,h,m;
    cin >> n >> h >> m;

    vector<pair<int,int>> v;
    while(n--)
    {
        int x,y;
        cin >> x >> y;
        v.pb(make_pair(x,y));
    }
    sort(all(v));
    int ans = 0;

    for(ever)
    {
        if(khujo(h,m,v))
        {
            cout << ans << " " << m << nl;
            return;
        }
        if(m==60)
        {
            h++;
            m=0;
            ans++;
        }
        if(h==24)h=0;
        m++;
    }

}

int main(){
     set_sail;
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        //solve();
        solve_editorial1();
        //solve_editorial2();
    }
    return 0;
}




