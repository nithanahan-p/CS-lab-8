//finding the kth largest and kth smallest element
#include<iostream>
using namespace std;
//declairing the function
void kthlar(int arr[],int k){
int min,i,j;
   for(i=0;i<10;i++){
   min=arr[i];
     for(j=i+1;j<10;j++){
        if(arr[j]<arr[i]){
        min=arr[j];
        arr[j]=arr[i];
        arr[i]=min;
        }     
     }
   }
   cout<<endl; 
   //printing the elements in ascending order
   for(int i=0;i<10;i++){
     cout<<" "<<arr[i]<<endl;
     }
   //printing the kth largest element  
   cout<<"kth largest element is "<<arr[10-k]<<endl;
   //printing the kth smallest element
   cout<<"kth smallest element is "<<arr[k-1]<<endl;
}
//driving the function
int main(){
int arr[10]={2,1,3,4,6,5,7,9,8,0};
kthlar(arr,2);
return 0;
}
  

