#include<iostream>
#include<utility>
using namespace std;
int main(){
    int array[5]={1,2,3,4,5};
    int end=4;
    for(int i=0; i<sizeof(array)/sizeof(array[0]);i++){
        if(i<end){
            swap(array[i],array[end]);
            end--;
        }
    }
    for(int j : array){
        cout<<j;
    }
}
