#include<iostream>
#include<array>
#include<algorithm>

using namespace std;




int main(){
    array<int,1000000> memo={0,};
    int x;
    cin>>x;
    
    for(int i=2; i<=x;i++){
        memo[i]=memo[i-1]+1;
        //바닥에서부터 시작했을때dd
        //전에놈 연산에서 (+1)연산 했을 경우 먼저 생각해보자고dd
        //i는 연산굴리는 값이고, memo[]에 있는 값은 인덱스 값일때 연산 횟수를 기억하는 거다!dd
        //1은 연산할 필요가 없으니 0으로 두고dd
        //2부터 값을 올릴 수록 memo는 갱신될 것이다dd
        //(+1)연산보다 *2 또는 *3연산이 효과가 좋다면 갱신될 것dd
        //계산 하다 얼렁뚱땅 x값이 된다면 최소로 치고 출력하기!dd

        if(i%2==0){
            memo[i]=min(memo[i],memo[i/2]+1);
            //비록 i라는 값은 memo[i-1]에 (+1)연산한 결과지만 memo[i/2]에서 (*2)연산으로 퀀텀점프 한게 가성비가 좋다면dd
            //memo[i/2] 카운트를 채택하고 카운트 1업할 거라는 뜻dd
        }   
        if(i%3==0){
            memo[i]=min(memo[i],memo[i/3]+1);
            // (*2)연산과 비교한 memo카운트를 (*3)연산의 카운트랑도 비교해서 갱신할 것dd
        }
      

    }

    
    

    cout<<memo[x];


    return 0;
}