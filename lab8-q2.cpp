//including the library
#include<iostream>
using namespace std;
//function for max element of an array
int f1(int arr[]){
int max=arr[0];
//using loop
  for(int i=0;i<4;i++){
     if(max<arr[i]){
     max=arr[i];}
  }
return max;
}
//function for min element of an array
int f2(int arr[]){
  int min=arr[0];
  //using loop
  for(int i=0;i<4;i++){
    if(min>arr[i]){
    min=arr[i];}
  }
return min;
}
//function for mean
float f3(int arr[]){
	float sum=0;
	//using loop for finding sum
	for(int i=0;i<4;i++){
      sum=sum+arr[i];}
    //returning the mean
    return (sum/4);
}

  

int main(){
   int arr[5]={3,1,4,2};
   cout<<f1(arr)<<endl;
   cout<<f2(arr)<<endl;
   cout<<f3(arr)<<endl;
   
return 0;
}
     
