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
  int n;
  cin >> n;
  vi v(n);
  forcin(v);
// //   bool door = true, zero = false;
// //   int cnt = 0;
// //  int k = -1;
// //   int shob_zero = 1;
//   vi lk;
//   int ok = 0;
//   if(count(all(v),0) == sz(v))
//   {
//     cout << 0 << nl;
//     return;
//   }
 
//   for(int i = 0; i < sz(v); i++)
//   {
//     if(v[i] == 0)
//     {
//         ok= 1;
//         break;
//     }
//   }
//   if(count(all(v),0) == sz(v))
//   {
//     cout << 0 << nl;
//     return;
//   }
 
//     if(!ok){
    if(count(all(v),0) == sz(v))
   {
     cout << 0 << nl;
     return; }
   

    // cout << 3 << nl;
    // cout << 1 <<" " <<  sz(v) << nl << 1 <<" " <<  sz(v) << nl;
    // cout << 1 << " " << sz(v) << nl;
    int ans = v[0];
    for(int i = 1; i < sz(v); i++)
    {
        ans ^= v[i];
        
    }
    cout << sz(v) << " ";
    cout << ans << " hei ";
    for(int i = 0; i < sz(v); i++)
    {
        v[i] = ans;
    }
      ans = v[0];
    for(int i = 1; i < sz(v); i++)
    {
        ans ^= v[i];
        
    }
    printVec(v);
    cout << ans << nl;
    
    // return;}
    // bool zero = false, f=0;
    // for(int i = 0; i < sz(v); i++)
    // {
    //     if(v[i] == 0 && v[0] == 0)
    //     {
    //         zero = true;
    //     }
    //     if(zero && v[i] != 0 && v.back() != 0)
    //     {
        
    //         cout << 2 << nl;
    //         cout  << i+1 << " " << sz(v) << nl; 
    //         cout  << i+1 << " " << sz(v) << nl; 
    //         return;
    //     }
    // }
    // zero = false;
    // for(int i = 0; i < sz(v); i++)
    // {
    //     if(v[i] != 0 && v[0] != 0)
    //     {
    //         zero = true;
    //     }
    //     if(zero && v[i] == 0 && v.back() == 0)
    //     {
        
    //         cout << 2 << nl;
    //         cout  << 1 << " " << i << nl; 
    //         cout  << 1 << " " << i<< nl; 
    //         return;
    //     }
    // }
   







     int l = 1,r = sz(v);
     int d = 1;
     bool janina = true;
  
    for(int i = 0; i < sz(v); i++)
    {
        if((i == sz(v)-1) && d && v[i] != 0)
        {
             r = i+1;
            lk.pb(l+1);
            lk.pb(r);
            l = i+2;
        }
        if(v[i] == 0 && d )
        {
            r = i;
            lk.pb(l);
            lk.pb(r);
            l = i+1;
        }
        if(v[i] != 0)
        {
            d =1;
        }
    }
    cout << sz(lk) << nl;
    for(int i =0;i < sz(lk)-1; i+=2)
    {
        
        cout << lk[i] << " " << lk[i+1] << nl;
        cout << lk[i] << " " << lk[i+1] << nl;
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




