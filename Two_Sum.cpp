#include <iostream>
using namespace std;
int main()
{
    // to sort an array we use a function 'sort(a,a+n)'
    int array[] = {3, 6, 8, 9 ,10, 15};
    int lm =0, rm =5;
    int x;
    cout << "enter the no->";
    cin>>x; 
    while (lm < rm)
    {
        if(array[lm]+array[rm]<x){
            lm++;
            cout<<"right ibncremented"<<lm<<endl;
        }
        else if(array[lm]+array[rm]>x){
            rm--;
            cout<<"left decremented"<<rm<<endl;
        }
        else{
            cout<<"the no is found ="<<x<<"the index are "<<lm<<" , "<<rm;
            break;
        }
    }
}