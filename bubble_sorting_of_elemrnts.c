// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int arr[]={5,3,2,4,1};
  int n=5;
  for(int i=0;i<n-1;i++){
      int swapped=0;
      for(int j=0;j<n-i-1;j++){
          if(arr[j]>arr[j+1]){
              
              int temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
              
              swapped=1;
          }
      }
      if(swapped==0){
          break;
      }
  }
      for(int i=0;i<n;i++){
          printf("%d\t",arr[i]);
      }
  
   
   
   
   
   
   
   
    return 0;
}
