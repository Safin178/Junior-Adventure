#include<bits/stdc++.h>
using namespace std;

typedef vector<long long> vl;
typedef vector<int> vi;

#define all(v)	((v).begin()), ((v).end())
#define sz(v)	((int)((v).size()))
#define ll long long
#define pb push_back
#define endll '\n'
#define CY cout<<"YES\n";
#define CN cout<<"NO\n";
#define CYR cout<<"YES\n";return;
#define CNR cout<<"NO\n";return;
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

void solve2()//fail onno approach e try korbo frequency approach
{
    int n , k;
    cin >> n >> k;
    string s[n];
    int cnt = 0;
    int i , j;
    for( i = 0 ; i < n; i++)
    {
        cin >> s[i];
        
         sort(all(s[i]));
    }

    for( i = 0; i < n; i++)
    {
        bool f = true;
        for( j = 0; j < sz(s[i]) ; j++)
        {
            if(sz(s[i])  <= k) f = false;
            if((s[i][j] - '0') != j )
            {
                f = false;
                break;
            }
                if(j == k ) break;
        }
        if(f)
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