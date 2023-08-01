
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
void printVec (vector<int> v2, string s = "")//vector ke print kore just printVec(v) likle hobe
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
    int n;
    cin >> n;
    vi v(n);
    forcin(v);

    bool f = false;//hi
    for(int i = 0 ;i < sz(v)-1; i++)
    {
        if(v[i] != v[i+1])f = true;

    }
    if(!f)
    {
        noR;
    }
     sort(all(v));
    reverse(all(v));
    vi pr;
    int sum = 0;
    for(int i = 0; i < sz(v); i++)
    {
        pr.pb((sum + v[i]));
        sum += v[i];
    }
    sort(all(v));
    reverse(all(v));
    if(sz(v)>=3 && v[0] == v[1])
    {
        swap(v[1], v.back());
    }
    yes;
    printVec(v);
    //printVec(pr);
}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}