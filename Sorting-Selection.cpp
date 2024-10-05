#include <iostream>
#include <utility>
using namespace std;
void selectsort(int array[]){
 
    for(int j=0;j<5;j++)
    {
        
        int x=j;
        for(int i =j+1;i<5;i++)
        {
        
        if(array[i]<array[x]){
            x=i;
          
        }


        }
        
        
        swap(array[j],array[x]);
        cout<<"swaped"<<"\n";
        
        for(int k =0;k<5;k++)
        {
        cout<<array[k]<<"\n";
    }

}}

    

int main(){
    int array[5]={12,5,23,8,0};
    selectsort(array);
    


}