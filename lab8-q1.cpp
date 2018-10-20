#include<iostream>
using namespace std;
int fun(int arr[]){
   int sum=0;  
   for(int i=0;i<4;i++){
   sum=sum+arr[i];}
return sum;
}
int main(){
   int arr[4]={1,2,3,4};
   cout<<fun(arr);
return 0;
} 
   
