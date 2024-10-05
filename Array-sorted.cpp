#include<iostream>
#include<utility>
using namespace std;
int bubble(int a[]){
    for(int i = 0; i< 5;i++){
        for(int j=0;j<5;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    for(int k = 0;k<5;k++){
        cout<<a[k]<<endl;
    }
    return a[3];
}
int main(){
    int array[5]={12,5,23,8,0};
    cout<<"the second largest element=="<<endl;
    cout<<bubble(array);

    

}