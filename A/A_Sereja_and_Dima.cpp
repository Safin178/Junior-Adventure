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
    int n, x;
    cin >> n;
    vi v(n);

    forcin(v);
    int ans1 = 0, ans2 = 0;
    //cout << *(v.begin());
    int k = 0,p=0;
    for(int i = 0 ; i  < n ; i++)
    {
       if(i % 2 == 0)
        {
           
            x = max(*(v.begin()+k), *(v.end()-1));//falto bracket er position jah
            // cout << x << endl;
            ans1 += x;
            if(x == *(v.begin()+k))k++;
            else v.pop_back();
        }
        else 
        {
            
              x = max(*(v.begin()+k), *(v.end()-1));
             // cout << x << endl;
            ans2 += x;
            if(x == *(v.begin()+k))k++;
            else v.pop_back();
        }
        
    }
   // printVec(v);
    cout << ans1 << " " << ans2 ;


}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}