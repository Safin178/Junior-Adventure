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
    string s;
    cin >> s;

    char x = 'a',y;
    int sum = 0;
    for(int  i = 0 ; i < sz(s);i++)
    {

        y = s[i];
        if((x >= 'a' && x <= 'm' )&&(y >= 'a' && y <= 'm' ))
        {
            sum += (abs(x-y));
        }
        else if((x >= 'n' && x <= 'z' )&&(y >= 'n' && y <= 'z' ))
        {
            sum += (abs(x-y));
        }

        else if(x <= y){
            sum += min(abs(x-y),((x-'a')+('z'-y)) +1);
        }
        else if(x > y){
            sum += min(abs(x-y),((y-'a')+('z'-x)) +1);
        }


        x = y;

    }
    cout << sum ;


}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}