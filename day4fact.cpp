#include<iostream>
using namespace std;

long factorial(long n){

  
    if (n>0){
        long result = n * factorial(n-1);
        return result;}
    else
    return 1;
}
int main(){
    long n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    cout<< factorial(n);
}