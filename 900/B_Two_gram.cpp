
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    string t[1000];
    string x;
    for(int i = 0; i < sz(s)-1; i++)
    {
        //x = s.substr(i,2);
        t[i].push_back(s[i]);
        t[i].push_back(s[i+1]);
       // cout << x << " ";

    }
    int max = -1;

    for(int i = 0; i  < n-1; i++)
    {
        int cnt = 0;
        for(int j = i+1; j < n-1; j++)
        {
            if(t[i] == t[j])
            {
                cnt++;
                
            }
        }
        if(max < cnt)
        {
            x = t[i];
            max = cnt;
        }
    }
    cout << x << nl;



}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}