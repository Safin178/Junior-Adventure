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
   cin>> n;
//    vi v;
    
//    for(int i = 2 ; i <= n; i++)
//    {
//     bool prime = true;
//         for(int j = 2 ; j*j <= i; j++)
//         {
//             if(i % j == 0)
//             {
//                 prime = false;
//                 break;
//             }
           
//         }
//          if(prime)
//             {
//                 v.pb(i);
//             }
//    }
//    printVec(v);

// //    for(int m = 2; m < (1 << sz(v)); m++)
// //    {
// //         int cnt = 0;
// //         for(int i = 0; i < sz(v); i++)
// //         {
// //             if(m & (1 << i))
// //             {
                
// //                 cout << v[m] * v[i] << " ";
// //                 // if(v[m] * v[i] > n)
// //                 // {
// //                 //     return;
// //                 // }
// //                 if(cnt == 2)
// //                 {
// //                     break;
// //                 }
// //                 cnt++;
// //             }
// //         }
// //    }
// int cnt=0;
// for(int i = 0; i < sz(v); i++)
// {
//     for(int j = i+1; j < sz(v); j++)
//     {
//         if(v[i] * v[j] <= n)
//         {
//             cnt++;
//         }
//         // else{
//         //     cout << cnt << nl;
//         //     return;
//         // }
//     }

// }
// cout << cnt << nl;
    int ans = 0;

    for(int i = 6; i <= n; i++ )
    {
        vi v;
        bool eta_na = true;
        for(int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                v.pb(j);
            }
        }
        int prime_koita = 0;
        for(int k = 0; k < sz(v); k++)
        {
            bool prime = true;
            for(int pr = 2; pr * pr <= v[k] ;pr++ )
            {
                if(v[k] % pr == 0)
                {
                    prime = false;
                    break;
                }
            }
            if(prime)
            {
                prime_koita++;
                if(prime_koita > 2)
                {
                    eta_na = false;
                    break;
                }

            }
        }
        if(eta_na && prime_koita == 2)
        {
            ans++;
        }

    }
    cout << ans << nl;
    //ac , 46 min,,
    



}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}