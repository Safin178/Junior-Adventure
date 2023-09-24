// Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
#define bismillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(a) ((a).begin()),((a).end())
#define pb push_back 
#define forcin(n) for(auto &x : n) cin >> x
#define forcout(n) for(auto x : n) cout << x << " "
#define sz(n) (int)n.size()
#define el '\n'
#define YES cout<< "YES\n"
#define NO cout<< "NO\n"

void printVec(vector<int> v , string s=""){
    cout << s;
    for(int i=0;i<(int)v.size();i++)
        cout << v[i] << " ";
    cout << "\n";
}



/*____________________________________________________________________________________________________________________________________*/



void solve(){
    int n,k,i,sum=0,x;
    cin >> n >> k >> x;
    if(k> n){
        cout << "-1" << el;
        return ;
    }
    else if(k<x){
        for(i=0;i<k;i++){
            sum+=i;
        }
        sum+=((n-k)*x);
    }
    else if(k==x){
        for(i=0;i<k;i++){
            sum+=i;
        }
        sum+=((n-k)*(x-1));
    }
    else if(k>x){
        for(i=0;i<k;i++){
            sum+=i;
        }
        sum+=((n-k)*x);
        if(x<(k-1)){
            sum=-1;
        }

    }
    else{
        sum=-1;
    }
    cout << sum << el;
}

int main(){
    
    bismillah
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}