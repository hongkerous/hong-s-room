#include <iostream>
using namespace std;
int main(void){
    int N;
    long long dp[36],temp = 0;
    dp[0] = 1; dp[1] = 1;
    cin >> N;
    for(int i = 2;i<=N;i++){
        temp = 0;
        for(int j = 0;j<i;j++){
            temp += dp[j]*dp[i-(j+1)];
        }
        dp[i] = temp;
    }
    cout << dp[N];
}