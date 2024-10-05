#include<iostream>
using namespace std;
int print(int ar2[]){
    for(int i =0;i<5;i++){
        cout<<ar2[i]<<"\n";
    }
    return 0;

}
int main(){
    int arr[5]={10,20,30,40,50};
    print(arr);
    int l=sizeof(arr)/4;
    cout<<l;

}