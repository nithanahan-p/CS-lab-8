//merging of two arrays
#include<iostream>
using namespace std;
//declaration of function
void merge(int arr1[],int arr2[],int arr3[]){
                           
    int i=0,j=0,k=0;
    while(i<5 && j<5){

       if(arr1[i]<arr2[j]){
       arr3[k++]=arr1[i++];}
       else{
       arr3[k++]=arr2[j++];}
    }
    while(i<5){
    arr3[k++]=arr1[i++];}

    while(j<5){
    arr3[k++]=arr2[j++];}
}
//finding the maximum of array
int max(int arr3[]){
   int a=arr3[0];
   for(int i=0;i<10;i++){
     if(a<arr3[i]){
     a=arr3[i];}
   }
return a;
}
//finding the minimum of array
int min(int arr3[]){
   int b=arr3[0];
   for(int i=0;i<10;i++){
     if(b>arr3[i]){
     b=arr3[i];}
   }
return b;
}
//driver function
int main(){
   int arr1[5]={1,3,5,7,9};
   int arr2[5]={2,4,6,8,10};
   int arr3[10];
   merge(arr1,arr2,arr3);
   cout<<"merged array is"<<endl;
   //printing the merged array
   for(int i=0;i<10;i++){
   
   cout<<arr3[i]<<" ";
   }
   cout<<endl;
   //printing the maximum
   cout<<"the max is "<<max(arr3)<<endl;
   //printing the minimum
   cout<<"the min is "<<min(arr3)<<endl;
return 0;
}
      
         
       

