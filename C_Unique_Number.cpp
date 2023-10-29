//----------- Bismillahir Rahmanir Raheem -------------/
#include<bits/stdc++.h>
using namespace std;

typedef vector<long long> vl;
typedef vector<int> vi;

#define all(v)	   ((v).begin()), ((v).end())
#define sz(v)	   ((int)((v).size()))
#define ll         long long
#define pb         push_back
#define nl         '\n'
#define yes        cout<<"YES\n"
#define no         cout<<"NO\n"
#define ryes       {cout<<"YES\n";return;}
#define rno        {cout<<"NO\n";return;}
#define vit        vector<int>::iterator  
#define forcin(n)  for(auto &x : n) cin>>x;
#define forcout(n) for(auto x : n) cout << x << " ";
#define set_sail    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ever       ;1;
#define ff         first
#define ss         second

void print(auto v2, string s = "")
{
	cout<<s;
	for (int i = 0; i < (int)v2.size(); ++i)
			cout<< v2[i] <<" ";
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
    int n;
    cin >> n;
    string s;
    int l = n;
    if(n>45)
    {
        cout << -1 << nl;
        return;
    }

    for(int i = 9; i >= 1; i--)
    {
         
        if(n < i)
        {
            if(('0'+n)==i)
            {
                cout << -1 << nl;
                return;
            }
            s.pb((char)('0'+n));
       break;

        }
        n-=i;
            s.pb((char)('0'+i));
    }
    if(s.back()=='0')s.pop_back();
    reverse(all(s));
    cout <<l <<" " << s << nl;

    
       

}

int main(){
     set_sail;
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}




