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
int ki_hobe(int x)
{
    if(x>=1 && x<=10 ||( x>=91 && x<=100)) return 1;
    else if((x-1)%10==0 || x%10 == 0) return 1;
    else if(x>=12 && x<=19 || (x >= 82 && x<= 89))return 2;
    else if((x-2)%10 == 0 || (x+1)%10 == 0)return 2;
    else if(x>=22 && x<= 28 ||(x>=73 &&x<=78))return 3;
    else if((x-3)%10==0 || (x+2)%10==0)return 3;
    else if(x>=33 && x<=37 ||(x>= 64 && x<= 67))return 4;
    else if((x-4)%10 == 0 || (x+3)%10==0)return 4;
    else return 5;
}
void solve()
{
    string s,x;
      int t = 10;
       while(t--)
       {
            cin >> x;
            s += x;
       }
       int sum = 0;
       for(int i = 0; i < sz(s); i++)
       { 
       // cout << i + 1 << "  ";
      //  if((i+1) % 10 ==0)cout << '\n';
        if(s[i] == 'X')
        {
            //cout << i+1 << " ";
            sum += ki_hobe(i+1);
        }

       }
       cout << sum << nl;
       


}

int main(){
     bismillah
    int t=1;
    cin >> t;          // remove '//' for testcase
   // cin.ignore();
    while(t--){
        solve();
    }
    return 0;
}




