#include<iostream>
using namespace std;
int factorial(int n){
    int fact =1;
    for(int i = 1;i<=n;i++){ 
        fact *= i;
    }
    return fact;
}
int tz(int factn){
    int t=0;
    while(factn!=0){
        if(factn%10==0){t+=1;}
        factn = factn/10;
    
    }
    return t;
}

int main(){
    int n;
    cout<<"enter to find the trailling zeros"<<endl;
    cin>>n;
    int factn = factorial(n);
    cout<<"the factiorial is ="<<factorial(n)<<endl;
    //this is the simple formula but wrong as it counts no of zeros ..... also causes integer overflow .. so out put will be zeros.
    int tzz = tz(factn);
    cout<<"the number of zeros = "<<tzz<<endl;
    //the advance version
    // n = input->
    int q;
    int zeros=0;
    while(n!=0){
        q = n/5;
        n= n/5;
        zeros = zeros + q;
    }
    cout <<"the trailling zeros = "<<zeros;
    // the quickest formula
}