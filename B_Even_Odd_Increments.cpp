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
    ll n , q;
    cin >> n >> q;

    vl v(n);
    forcin(v);
    ll sum = 0, sum2 = 0;
    for(int i = 0; i < sz(v) ; i++){
        if(v[i] % 2 == 0) sum += v[i];
        else sum2 += v[i];
    }
    //cout << sum + sum2 << nl << nl;

    ll x , y, ans = 0;

    bool f1 = false, f2 = false ;
    
    if(sum == 0){ sum = 1 ; f1 = true;}
    if(sum2 == 0){ sum2 = 1 ; f2 = true;}
    while(q--)
    {
        cin >> x >> y;
       // if(sum == 0) sum = 1;
       // if(sum2 == 0) sum2 = 1;
        
        if(x == 0)
        {
            sum *= y;
            if(f1)
            {
                f1 = false;
                sum--;
            }
             if(f2)
            {
                f2 = false;
                sum2--;
            }
           
            cout << sum + sum2;
        }
        else 
        {
            sum2 *= y;
            if(f1)
            {
                f1 = false;
                sum--;
            }
             if(f2)
            {
                f2 = false;
                sum2--;
            }
            cout << sum + sum2;
        }
        

        cout <<  nl;} 

    }

    //cout << sum+sum2 << nl; 




int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}