#include<stdio.h>
#include<stdlib.h>

#define NUM 50

int partition(int *a,int left,int right,int pivot){
    while(left<=right){
        while(a[left]<pivot)left++;
        while(a[right]>pivot)right--;
        if(left<=right){
            int temp = a[left];
            a[left]= a[right];
            a[right] = temp;
            left++;
            right--;
        }
        
    }
    return left;
}

void quickSort(int *a,int left,int right){
    if(left<right){
        int pivot = a[(left+right)/2];
        int index = partition(a,left,right,pivot);
        
        quickSort(a,left,index-1);
        quickSort(a,index,right);
    }
    
}

int main(int argc,char **argv){
    int arr[NUM];
    
    for(int i=0;i<NUM;++i){
        arr[i] = NUM-i;
        printf("%d ",arr[i]);
    }
    printf("\n");

    quickSort(arr,0,NUM-1);
    
    for(int i=0;i<NUM;++i){
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    return 0;
}
