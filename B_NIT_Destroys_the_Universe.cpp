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
	  ll int ok=0,nook=1;
	  for(auto &u : v)
	  {
		if(u == 0)
		{
			ok++;
			
		}
		else u =1;
		
	  }
	//   for(auto u : v)
	//   {
	// 	if(u == 0)
	// 	{
	// 		nook = 0;
	// 		break;
	// 	}
		
	//   }
	  if(ok==sz(v))
	  {
		cout<<0<<nl;return;
	  }
	  ok = 0;
	//   int ok2=0;
	
		
	// 	int k,p;p=k = v[0];
	// 	for(int i = 0; i < sz(v); i++)
	// 	{
			
	// 		if(v[i] !=k)
	// 		{
	// 			k = v[i];
	// 			for(int j = i+1; j < sz(v); j++)
	// 			{
	// 				if(v[j] !=   k)
	// 				{
				
	// 				cout << 2 <<nl;
	// 				 return;
	// 			    }
	// 			}
				

	// 		}

	// 	}
	int l,r;
	for(int i = 0; i < sz(v); i++)
	{
		if(v[i]!=0)
		{
			l = i;
			break;
		}
	}
	for(int i = 0; i < sz(v); i++)
	{
		if(v[sz(v)-i-1]!=0)
		{
			r = sz(v)-1-i;
			break;
		}
	}
	for(int i = l; i<=r;i++)
	{
		if(v[i]==0)
		{
			cout << 2 << nl;
			return;
		}
	}
	
		
	
	
	 cout << 1 << nl;
		


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























































//