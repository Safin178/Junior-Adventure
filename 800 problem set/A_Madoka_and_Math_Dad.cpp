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
    int n;
    cin >> n;
    if(n <=2 ) cout << n << endll;

    else if(n % 3 == 1)
    {
        for(int i = 1 ; i <= n/3 ; i++)
        {
                cout << 12 ;
        }
        cout << 1 << endll;
    }
    else if(n % 3 == 0){
         for(int i = 1 ; i <= n/3 ; i++)
        {
                cout << 21 ;
        }
        cout << endll;
    }
    else{
        for(int i = 1 ; i <= n/3 ; i++)
        {
                cout << 21 ;
        }
        cout <<2<< endll;
    }



}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}