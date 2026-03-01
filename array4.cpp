#include<iostream>
using namespace std;
int main(){
    char arr[]={'A','B','D','E','F'};
    cout<<"size of element arr[0] : "<< sizeof(arr[0])<<endl;
    cout<<"size of array : "<<sizeof(arr)<<endl;
    cout<<"Length of array : "<<sizeof(arr)/sizeof(arr[0]);
}