#include<iostream>
using namespace std;
int main()
{
    int arr[5]={5,3,2,4,1};
  //  cout<<sizeof(arr)<<endl;
  //  cout<<sizeof(arr)/sizeof(arr[0]);
  //maximum element 
  int ans=INT_MIN;
   for(int i=0;i<5;i++)
   {
    if(arr[i]<ans)
    ans=arr[i];
   }
   cout<<ans<<endl;
    return 0;
}