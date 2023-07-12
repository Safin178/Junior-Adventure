#include<bits/stdc++.h>
using namespace std;

#define ll long long
void solve()
{
    
    int n, x;
    cin >> n >> x;
    int b[n], sum = 0;

    for(int i = 0 ;  i  <n; i++)
    {
        cin >> b[i];
        if(b[i] > x) sum += 2;
        else sum += 1;
    }

    cout << sum;

    






}
int main(){
    int t=1;
    //cin >> t;          // removr '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}