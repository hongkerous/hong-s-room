#include<iostream>

using namespace std;

int apart(int a, int k){
    int sum=0;
    if(a==0){

        return k;
    }else{

        for(int i=1;i<=k;i++){
            sum+=apart(a-1,i);
        }

        return sum;
    }




}








int main(){

    int T;
    cin>> T;
    int *a=new int[T];
    int *k=new int[T];
    for(int i=0;i<T;i++){
        cin>>a[i];
        cin>>k[i];
    }


    for(int i=0;i<T;i++){


        cout<<apart(a[i],k[i])<<endl;
    }



    return 0;
}
