#define ll long long
//7 c 3 =8*7*6/3! / 
//3 c 2 = 4*3*2/2/2
ll fact(ll a){
    if(a < 2)return 1;
    return a*fact(a-1);
}


ll max(ll a, ll b){
    return a>b?a:b;
}
ll min(ll a, ll b){
    return a>b?b:a;
}

ll comb(ll a, ll b){
    //(n+m-1)c(b-1)
    ll tot = 1;
    for(int i = 0; i<b-1; i++)tot*=(a+b-2-i);
    return tot/fact(b-1);
}

class Solution {
public:
    int uniquePaths(int m, int n) {
        if(min(n, m)<=1)return(1);
        if(min(n, m)<=2)return(max(n, m));
        return comb(max(m, n), min(m, n));
    }
};