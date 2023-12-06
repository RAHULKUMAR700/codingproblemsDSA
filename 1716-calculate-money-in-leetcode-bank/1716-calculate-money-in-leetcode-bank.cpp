class Solution {
public:
    int totalMoney(int n) {
        int N=n/7;
        int K=n%7;
        int ans=N*28 +( N*((N-1)*7))/2 +(K*(2*(N+1)+(K-1)))/2;
        return ans;
    }
};