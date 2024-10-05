#include<iostream>
#include<utility>
using namespace std;
int insertion(int a[]){
    // int pass=1;
    // for(int i=1;i<5;i++){
    //     cout<<"value of i"<<i<<endl;
    //     for(int j=i-1;j>=0;j--){
    //         cout<<"value of j"<<j<<endl;
    //         if(a[i]<a[j]){
    //             swap(a[i],a[j]);
    //             cout<<pass++<<"swaped"<<endl;
                
    //         }
    //         else{cout<<"not swaped"<<endl;}
    //     }
    //     pass=1;
    // }
    // for(int k=0;k<5;k++){
    //     cout<<a[k];
    // }
    int key,j;
    for(int i=1;i<5;i++){
        key = a[i];
        j=i-1;

        while(a[j]>key&&j>=0){
            a[j+1]=a[j];
            j--;
        } 
        a[j+1]=key;
    }
        for(int k=0;k<5;k++){
            cout<<a[k];
        }
        return 0;

}
int main(){
    int array[5]={9,8,7,6,5};
    insertion(array);
    

}