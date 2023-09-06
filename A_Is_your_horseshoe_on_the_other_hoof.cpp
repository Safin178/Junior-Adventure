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

void solve()
{
    vi a(5);
    
    for(int  i = 0 ; i < 4; i++)
    {
        cin >> a[i];
    }
    int cnt = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = i+1 ; j < 4 ; j++)
        {
          
            if(a[i] == a[j] && a[i] >0)
            {
                cnt++;
                a[j] = -1 * a[j];
            }
            
        }
    }
   // forcout(a);
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