#include<iostream>
using namespace std;
int secondlargest(int arr[],int n);

int main(){
    int Arr[6]={1,2,8,42,52,6};
    int n=6;
    int slargest= secondlargest(Arr,n);
    cout<<slargest<<endl;

}
int secondlargest(int arr[],int n){
    int largest=arr[0];
    for(int i=0;i<n;i++){
       if(arr[i]>largest)
        largest=arr[i];}
       int slargest=-1;
        for(int j=0;j<n;j++){
            if(arr[j]>slargest && arr[j] != largest)
            slargest=arr[j];
   }

return slargest;
}