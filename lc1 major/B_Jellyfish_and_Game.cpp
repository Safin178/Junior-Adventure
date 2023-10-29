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
     int n,m,k,x;
     cin >> n >> m >> k;
    
     vi a(n),b(m);
     forcin(a);
     forcin(b);
     set<int>l;
     
     //map<int,int>x;
     ll sum=0;

     for(auto u : a) 
     {
       l.insert(u);
       sum += u;
     }
    // for(auto u : b) 
    //  {
    //    l.insert(u);
    //  }

    
    //     auto it = l.begin();
    //  //cout << *it << nl;
    //  auto ih = --l.end();
    //  //cout << *it << nl;
     int g = *max_element(all(a));
     int f = *min_element(all(a));
     int g1 = *max_element(all(b));
     int f1 = *min_element(all(b));
     
    //  int
    //  if(f != *ih)
    //  {
       // cout << sum << nl;
       // cout << g1-f << nl;
       if(n==1&&m==1)
       {
             if(k%2==0)
        {
            cout << min(a[0],b[0]) << nl;
            return;
        }
        else if(k%2!=0)
        {
           cout << max(a[0],b[0]) << nl;
           return;
        }
       }
        if(n==1&&m>1)
       {
        if(k%2==0)
        {
            cout << *min_element(all(b))<< nl;
            return;
        }
        else if(k%2!=0)
        {
           cout << a[0] << nl;
           return;
        }}
       

        if(k%2!=0)
        {
            sum += (g1-f);
        }
        else if(k%2==0)
        {
            sum += (f1- g);
        }
        cout << sum << nl;
    //     return;
    //  }
    //   else 
    //   {
    //       if(k%2!=0)
    //     {
    //         sum += (g-*min_element(all(a)));
    //     }
    //     else if(k%2==0)
    //     {
    //         sum += (*min_element(all(a))-g) +*min_element(all(b));
    //     }
    //     cout <<sum << nl;
        


      //}
    
     
  
   


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




