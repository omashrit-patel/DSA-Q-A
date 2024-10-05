#include<iostream>
using namespace std;
int main (){
    int array[]={0,0,0,0,1};
    int n;
    int size=sizeof(array)/sizeof(array[0]);
    cout<<"the no of flowers"<<endl;
    cin>>n;
    int count=0;
    for(int i=0;i<size;i++){
        if(i==0){
            if(array[i]==0&&array[i+1]==0){
                array[i]=1;
                cout<<"a1";
                count++;
            }
        }
        if(i==size-1){
            if(array[i]==0&&array[i-1]==0){
                array[i]=1;
                cout<<"a2";
                count++;
            }
        }
        if(i>0&&i<size-2){
            if(array[i-1]==0&&array[i]==0&&array[i+1]==0){
                array[i]=1;
                cout<<"a3";
                count++;
            }
        }
    }
    if (count>=n){
        cout<<"true"<<count;

    }
    else{
        cout<<"false"<<count;
    }
}