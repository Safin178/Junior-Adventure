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
    string s[3];
    for(int  i = 0; i < 3 ; i++)
    {
        cin >> s[i];
    }

    for(int  i = 0; i < 3 ; i++)
    {
        if(s[i] == "XXX")
        {
            cout << "X\n";
            return;
        }
        else if(s[i] == "+++")
        {
            cout << "+\n";
            return;
        }
       else if(s[i] == "OOO")
        {
            cout << "O\n";
            return;
        }
    }
     
     
        if(s[0][0] == 'X' && s[1][1] == 'X' && s[2][2] == 'X')
        {
            cout << "X\n";
            return;
        }
        else if(s[0][0] == '+' && s[1][1] == '+' && s[2][2] == '+')
        {
            cout << "+\n";
            return;
        }
       else if(s[0][0] == 'O' && s[2][2] == 'O' && s[1][1] == 'O')
        {
            cout << "O\n";
            return;
        }
        //-----------------
      
    for(int  i = 0; i < 3 ; i++)
    {
        if(s[0][i] == 'X' && s[1][i] == 'X' && s[2][i] == 'X')
        {
            cout << "X\n";
            return;
        }
        else if(s[0][i] == '+' && s[1][i] == '+' && s[2][i] == '+')
        {
            cout << "+\n";
            return;
        }
       else if(s[0][i] == 'O' && s[1][i] == 'O' && s[2][i] == 'O')
        {
            cout << "O\n";
            return;
        }
    }

     if(s[0][2] == 'X' && s[1][1] == 'X' && s[2][0] == 'X')
        {
            cout << "X\n";
            return;
        }
        else if(s[0][2] == '+' && s[1][1] == '+' && s[2][0] == '+')
        {
            cout << "+\n";
            return;
        }
       else if(s[0][2] == 'O' && s[2][0] == 'O' && s[1][1] == 'O')
        {
            cout << "O\n";
            return;
        }
    
    cout << "DRAW\n";



}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}