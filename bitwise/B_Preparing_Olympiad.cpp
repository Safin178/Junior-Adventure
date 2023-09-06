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
   int n, l , r, x;
   cin >> n >> l >> r >> x;
   vi v(n);
   forcin(v);
   int cnt = 0;
   sort(all(v));

   for(int m = 1 ; m < (1 << n); m++)
   {
        int high = 0, low = 0;
        int sum = 0; bool door = true;
        for(int i = 0; i < n; i++)
        {
            if(m & (1 << i))
            {
                sum += v[i];
                if(door)
                {
                    low = v[i];
                    door = false;
                }
                high = v[i];
            }
        } 
        //cout << high << " " << low << "\n ";
        if(sum >= l && sum <= r && (high - low) >= x)
        {
            cnt++;
        }
    }
    cout << cnt;

    



}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}