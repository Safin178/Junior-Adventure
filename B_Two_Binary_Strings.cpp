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
   string a, b;
   cin >> a >> b;
   if(a == b)
   {
   // cout << "here" << " ";
    yesR;
   }
   if(a[0] != b[0] || a.back() != b.back())
   {
     noR;
   }

//    int pos = 0, pos2=sz(a)-1;
//    for(int i = 0; i < sz(a); i++)
//    {
//         if(a[i] != b[i])
//         {
//             pos = i;
//         }
//    }
//    for(int i = sz(a)-1; i >= 0; i--)
//    {
//          if(a[i] != b[i])
//         {
//             pos2 = i;
//         }
//    }

//    if(a[pos] == a[pos2] && b[pos] == b[pos2])
//    {
//     yesR;
//    }
//     no;
for(int i = 0; i < sz(a); i++)
{
    if(a[i] == b[i])
    {
        for(int j = i ; j < sz(a); j++)
        {
            if(a[i] == a[sz(a)-1-j] && a[sz(a)-1-j] == b[sz(a)-1-j]  )
            {
                yesR;
            }
        }
    }
}
no;



}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}