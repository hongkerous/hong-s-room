#include<iostream>


using namespace std;


int count_up(int num){

    if(num==1) return 1;
    if(num==2) return 2;
    if(num==3) return 4;
    //해당 숫자값을 받으면 경우의 수를 반환해주는 것!dd
    //해당 숫자값의 -1,-2,-3의 모든 경우의 수를 흡수하자!dd
    return count_up(num-1)+count_up(num-2)+count_up(num-3);
    
      
}


int main(){



    int t;
    cin>>t;
    int *arr=new int [t];
    for(int i=0;i<t;i++){

        cin>>arr[i];
    } 
    
    for(int i=0;i<t;i++){
        cout<< count_up(arr[i])<<endl;
    }



    return 0;
}