//including the library
#include<iostream>
using namespace std;
//function to find the median of elements of an array
void median(int arr[],int n){
   int min,i,j;
   //using loop
   for(i=0;i<n;i++){
   min=arr[i];
     for(j=i+1;j<n;j++){
        if(arr[j]<arr[i]){
        min=arr[j];
        arr[j]=arr[i];
        arr[i]=min;}
     }
   }

   for(i=0;i<n;i++){
      cout<<" "<<arr[i];
      cout<<endl;}
   if(n%2==0){
      float m=(float (arr[n/2])+float (arr[n/2-1]))/2;
      cout<<"the median is "<<m<<endl;}
      else{
      cout<<"the median is "<<arr[n/2]<<endl;}
   
}
int main(){
int arr[10]={2,1,4,5,7,6,8,3,9,0};
  median(arr,10);
return 0;
}

       
      
      
   
        
   
