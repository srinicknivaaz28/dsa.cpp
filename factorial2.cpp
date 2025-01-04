#include<iostream>
using namespace std;

long factorial(long n){

   long result=1;
for(long i=1;i<n;i++){
    
         result = i * result;
   
        }
 return result;
   if(n=1)
    return 1;
}
int main(){
    long n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    cout<< factorial(n);
}