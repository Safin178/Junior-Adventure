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
    int n , k, x;
    cin >> n >> k >> x;

    if(k == 1 && x == 1)
    {
        cout << "NO\n" ;
        return;
    }
    else if(k > 1 && x != 1)
    {
        cout << "YES\n" << n << endll;
        for(int i = 0 ; i < n; i++)
        {
            cout << 1 << " ";
        }
        cout << endll;
        return;
    }
    else if( x == 1)
    {
        if(n % 2 == 0)//even hoile
        {   
            if(k >= 2)
            {
                n = n / 2;
                cout << "YES\n" << n << endll;
                for(int i = 0 ; i < n; i++)
                {
                    cout << 2 << " ";
                }
                cout << endll;
                return;

            }
        }
        else//odd hoile
        {
            if(k > 2)
            {
                 n = n / 2;
                cout << "YES\n" << n << endll;
                for(int i = 0 ; i < n-1; i++)
                {
                    cout << 2 << " ";
                }
                cout << 3 << endll;
                return;
            }

        }
    }
    cout << "NO" <<endll;


}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}