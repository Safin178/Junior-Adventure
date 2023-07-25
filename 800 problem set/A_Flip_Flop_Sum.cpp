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

void solve()
{
    int n;
    cin >> n; 
    vi v(n+5);

    for(int i = 0 ;i < n ; i++) cin >> v[i];
    // int cnt = 0;
    // int sum = 0;
    // int maxi = INT32_MIN;
    
    // for(int i = 0 ; i < sz(v) ; i++)
    // {
    //     sum += v[i];
    //     if(v[i] == -1)
    //     {
    //         cnt++;
    //     }
    //     if(cnt > maxi)
    //     {
    //         maxi = cnt;
    //     }
    //     if(v[i] == 1) cnt = 0;
    // }
    // if(maxi == 0){cout <<-n << nl;return ;}
    int sum = 0;
    bool f = false, k = true;
    
   for(int i = 0 ; i  <n; i++)
   {
        if(v[i] == -1) f = true;
        if(v[i] == -1 && v[i+1] == -1 && k == true)
        {
            v[i] = 1;
             v[i+1] = 1;
             k = false;
        }
       
        sum += v[i] ;
   }
  

   
   if(!f) sum = sum -4;

   cout << sum << nl;


}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}