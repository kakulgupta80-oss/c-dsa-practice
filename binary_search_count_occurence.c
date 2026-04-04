
#include <stdio.h>

int firstOccurence(int arr[],int n,int key){
    
    int low=0,high=n-1;
    
int first=-1;
    
    while(low<=high){
        int mid=(low+high)/2;
        
        if(arr[mid]==key){
            first=mid;
            high=mid-1;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
          else{
              high=mid-1;
    }
} 
return first;
}

int lastOccurence(int arr[],int n,int key){
      int low=0,high=n-1;
    int last=-1;
    
    while(low<=high){
        int mid=(low+high)/2;
        
        if(arr[mid]==key){
            last=mid;
            low=mid+1;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
          else{
              high=mid-1;
    }
} 
return last;
}
    
    int main(){
        int arr[]={1,2,2,2,3,4};
        int n=6,key=5;
        
      
       int first=firstOccurence(arr,n,key);
       int last=lastOccurence(arr,n,key); 
       
       int count=last-first+1;
       printf("count=%d",count);
        
        if(first==-1){
           count=0;
        }
        return 0;
    }
