
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
    string s, k;
     cin >> s;
    if(s[0] >= '5')
    {
        cout << 1 ;
        for(int i = 0; i < sz(s); i++)
        {
            cout << 0;
        }
        cout << nl;
        return;
    }
    else 
    {
        bool f = false;
        int pos = 0;
        for(int i = 1; i < sz(s);i++ )
        {
            if(s[i] >= '5')
            {
                f = true;
                pos = i;
                break;
            }
        }
        if(!f)
        {
            cout << s << nl;
            return;
        }
        else 
        {
            k[0] = s[0];
            for(int i = 1; i < sz(s); i++)
            {
                if(s[i] != '9')
                {
                    s[i] = (char)(s[i]-'0' + 1) + '0';
                }
            }
            bool f= false;
            pos = 0;
            for(int  i = 0 ; i < sz(s);i++)
            {
                if(s[i] >= '5' && f == false)
                {
                    pos = i;
                    f = true;
                }
                if(f)
                {
                    
                    s[i] = '0';
                }
               

            }
            for(int i = 1 ; i < pos -1; i++)
            {
                s[i] = (char)(s[i]-'0' - 1) + '0';
            }
            cout <<s<<nl ;
        }
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