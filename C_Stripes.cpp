//----------- Bismillahir Rahmanir Raheem -------------/
#include<bits/stdc++.h>
using namespace std;
//someone who’s willing to stand before a mountain and take it head on even though he knows he’ll lose
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
      string s[10];
      int n=8,i=0;
      while(n--)
      {
        cin >> s[i];
        i++;
      }
      string r = "RRRRRRRR";
      string b = "BBBBBBBB";
    for(int i = 0; i < 8;i++)
    {
        if(s[i] == r)
        {
            cout <<'R'<<nl;
            return;
        }
         
    }
    //bool ok = 0;
   
     for(int i = 0;  i < 8; i++)
    {
        bool ok = 0;
        for(int j = 0 ; j < 8; j++)
        {
            if(s[j][i] != 'B')
            {
                ok =1;
                break;
            }

        }
        if(!ok)
        {
            cout << "B\n";
            return;
        }
    }

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




