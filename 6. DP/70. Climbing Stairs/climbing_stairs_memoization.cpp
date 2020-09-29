#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vi;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define PB push_back
#define MP make_pair
#define F first
#define S second

ll Tc , a , b, n, item;	

class Solution {
public:
    int climbStairs(int n) {
        int memo[n+1];
        for(int i = 0;i<n;i++) memo[i] = 0;
        return climb_stairs(0,n,memo);
    }
    int climb_stairs(int i, int n, int memo[]){
        if(i>n){
            return 0;
        }
        if(i==n){
            return 1;
        }
        if(memo[i]>0){
            return memo[i];
        }
        memo[i] = climb_stairs(i + 1, n, memo) + climb_stairs(i + 2, n, memo);
        return memo[i];
    }
};

int main(){
	Solution s;
    cout<<s.climbStairs(3)<<"\n";
}