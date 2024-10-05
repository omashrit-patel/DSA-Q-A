#include<iostream>
#include<utility>
using namespace std;
int main(){
    int array[10]={1,0,3,0,5,0,6,8,0,0};
    for(int i=9;i>=0;i--){
        int n=array[i];
        if(n!=0){
        for(int j=i;j>=0;j--){
            int m=array[j];
            if(m==0){
                swap(array[j],array[i]);
            }

        }

    }}
    for(int k=0;k<10;k++){
        cout<<array[k];
    }
}