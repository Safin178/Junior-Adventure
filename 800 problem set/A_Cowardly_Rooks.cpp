
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
    int n, m;
    cin >> n >> m;

    int a[10][10]= {0};
    for(int i = 0 ; i < m ; i++)
    {
        int x, y;
        cin >> x >> y;
        x--,y--;
        a[x][y] = 1;
    }
    //row
    for(int i = 0; i < n ; i++)
    {
        bool f = true;
        for(int j = 0; j < n ; j++)
        {
            if( a[i][j]  == 1)
            {
                f = false ;
                break;
            }
        }
        if(f)
        {
            yesR;
        }
        
    }
    //col
    for(int i = 0; i < n ; i++)
    {
        bool f = true;
        for(int j = 0; j < n ; j++)
        {
            if( a[j][i]  == 1)
            {
                f = false ;
                break;
            }
        }
        if(f)
        {
            yesR;
        }
        
    }
    no;
   // cout << nl;

}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}