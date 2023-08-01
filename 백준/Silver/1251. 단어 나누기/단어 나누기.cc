#include<iostream>
#include<string>
using namespace std;

int main(){


    string line;
    getline(cin,line);
    cin.clear();
    string result="zzzzzzzzzzzzzzzzzzzzz";
    


    for(int i=0;i<line.size()-2;i++){

        for(int j=i+1;j<line.size()-1;j++){

                
            string temp;

                for(int k=i;k>=0;k--){
                    temp+=line[k];
                }
                for(int k=j;k>i;k--){
                    temp+=line[k];
                }//중간 세트 뒤집어 까기->k인덱스를 가지고 j인덱스 부터 i인덱스 직전까지 dd(i미미포함) Dd
                for(int k=line.size()-1;k>j;k--){
                    temp+=line[k];
                }//마지막 세트 뒤집어까기->마지막인덱스 size-1에서부터 j인덱스 직전까지dd



            if(result>temp){
                result=temp;
            }


        }









    }

    cout<<result;












    return 0;
}