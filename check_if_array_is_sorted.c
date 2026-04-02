// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int arr[]={1,2,3,3,5,5,6};
   int n=7;
  
       int isAscending=1;
       int isDescending=1;
       
      for(int i=0;i<n-1;i++){  
       if(arr[i]>arr[i+1]){
       isAscending=0;
      }
       if(arr[i]<arr[i+1]){
       isDescending=0;
       }
      }
       if(isAscending||isDescending){
        printf("array is sorted\n");
       }
       else{
           printf("array is NOT sorted\n");
       }
   
    return 0;
}
