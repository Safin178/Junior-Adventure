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
void solve()//6
{
  int n;
  cin >> n;
  set<int> s;
  int x;
  while(n--)
  {
    cin >> x;
    s.insert(x);
  }
  if(sz(s) == 1)
  {
    noR;
  }
  else
  {
    set<int>::iterator it = s.begin();
    it++;
    cout << *it << nl;
  }
    



}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}
/*
            Do you keep comparing yourself with others?
            Do you have negative feelings? Like I am stupid..I am hopeless...I will never have a comparable level...?
            Do you think of your image/appearance if failed in online contests so avoid contests?
            Do you use another account with a weird name to train so that people don't know about your progress/failure?
            Do you wish your friends fail in the contest? or get annoyed with their better performance?
            Do you avoid teaching your friends something or give no support to remain better than them?
            Do you feel bored/frustrated as no/weak community in your college?
            Do you keep training day and night without breaks? No socialization at all?
            Do you hate specific topics and avoid them (probability/geometry)?
            ‘Should I stop’ Dilemma? Keep thinking is it worth vs a waste of time?

            "Wil you give up?"

            If any of the above questions is YES, you probably have a problem and need to find a solution to it.



*/




