#include<iostream>


using namespace std;

int* sorting(int *arr,int size){
    int temp;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){

            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                

            }



        }
    }
    return arr;

}


int main(){
    int occ=0;

    int num;
    cin>> num;
    int* arr=new int [num];    



    for(int i=0;i<num;i++){
        cin>> arr[i];
    }
    arr=sorting(arr,num);

    int fix;
    cin>>fix;

    for(int i=0;i<num-1;i++){
        if(arr[0]>fix){
            occ=(fix)*(arr[0]-fix)-1;
            //뒷놈은 그 숫자보다 대충 크면 장땡dd
            //앞놈도 그 숫자보다 작으면 장땡 dd
            //중복 하나 빼주면 됨.dd
        }



        if(arr[i]<fix&&arr[i+1]>fix){
                //구간에 존재시dd


        //앞놈 뒷놈은 포함되면 안되는 순서쌍임dd
        //결국 경우의 수 세는 문제dd
        //[앞놈,뒷놈]이라고 할떄dd
        //앞놈 경우의 수*뒷놈 경우의 수-앞놈 뒷놈이 모두 n일때 경우의 수 dddd


        //n-앞놈(앞놈은 포함안하지만 n은 포함한 격자점수)dd
        //뒷놈-n(뒷놈은 포함안하지만 n은 포함한 격자점수)dd



        occ=(fix-arr[i])*(arr[i+1]-fix)-1;

        break;

        } else if(arr[i]==fix){
            cout<< '0';
            return 0;
        }
        } 
        if(arr[num-1]==fix){
            cout<< '0';
            return 0;
        }


        
    
    cout<<occ;




    return 0;
}