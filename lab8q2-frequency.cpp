#include<iostream>
using namespace std;
//declaration of function
int mxfreq(int arr[],int n){
   int i=0,a=1,j,maxfreq=1,min;
   for(i=0;i<n;i++){
     min=arr[i];
     for(j=i+1;j<n;j++){
        if(arr[j]<arr[i]){
        min=arr[j];

        arr[j]=arr[i];
        arr[i]=min;}
     }
   }
//finding the most frequent element 
   int mc=1,b=arr[0],cc=1;
   for(int i=1;i<n;i++){
	   if(arr[i]==arr[i-1]){
	   cc++;}
	   else{
	       if(cc>mc){
		   mc=cc;
		   b=arr[i-1];}
		   cc=1;
	   }
	}
//if last element is most freq
   if(cc>mc){
	   mc=cc;
	   b=arr[n-1];
   }
 return b;
}     
 int main(){
	 int arr[10]={2,3,2,2,3,2,2,8,6,5};
	 cout<<"most frequent element element is ="<< mxfreq(arr,10);
	 mxfreq(arr,10);
return 0;
}
    
		 
		   

