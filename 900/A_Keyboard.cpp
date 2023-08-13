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
#define yesR cout<<"YES\n";return;
#define noR cout<<"NO\n";return;
#define vit vector<int>::iterator  
#define forcin(n) for(auto &x : n) cin>>x;
#define forcout(n) for(auto x : n) cout << x << " ";
void printVec(vector<int> v2, string s = "")//vector ke print kore just printVec(v) likle hobe
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
   string s = "qwertyuiopasdfghjkl;zxcvbnm,./";

   char x;
   cin >> x;
   string k;
   cin >> k;

   vit it;
   int p;// ! position

   if(x == 'R')
   {
        for(int i = 0; i < sz(k); i++)
        {
            if(k[i] == 'q' || k[i] == 'a' || k[i] == 'z')
            {
                cout << k[i];
                continue;
            }
            p = s.find(k[i]);
            cout << s[p-1];

        }
   }
    else if(x == 'L')
    {
        for(int i = 0; i < sz(k); i++)
        {
            if(k[i] == 'p' || k[i] == '/' || k[i] == ';')
            {
                cout << k[i];
                continue;
            }
            p = s.find(k[i]);
            cout << s[p+1];

        }
    }



}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}