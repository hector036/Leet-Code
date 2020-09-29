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
        return climb_stairs(0,n);
    }
    int climb_stairs(int i, int n){
        if(i>n){
            //cout<<"0"<<"\n";
            return 0;
        }
        if(i==n){
            //cout<<"1"<<"\n";
            return 1;
        }
        cout<<climb_stairs(i+1,n) + climb_stairs(i+2,n)<<"\n";
        return climb_stairs(i+1,n) + climb_stairs(i+2,n);
    }
};

int main(){
	Solution s;
    cout<<s.climbStairs(3)<<"\n";
}