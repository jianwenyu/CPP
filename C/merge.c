#include<stdio.h>
#include<stdlib.h>

#define NUM 50
void merge(int *a,int *L,int left,int *R,int right){
    int i=0,j=0,k=0;
    while(i<left && j<right){
        if(L[i]<R[j]){a[k++]=L[i++];}
        else a[k++]=R[j++];
    }
    while(i<left)a[k++]=L[i++];
    while(j<right)a[k++]=R[j++];
}

void mergeSort(int *a,int len){
    if(len>1){
        int mid = len/2;
        int *L = (int*)malloc(sizeof(int)*mid); 
        int *R = (int*)malloc(sizeof(int)*(len-mid));  
              
        //int L[mid];
        //int R[len-mid];
        
        int i;
        for(i=0;i<mid;i++)L[i]=a[i];
        for(i=mid;i<len;i++)R[i-mid]=a[i];
        
        mergeSort(L,mid);
        mergeSort(R,len-mid);
        merge(a,L,mid,R,len-mid);
        
        free(L);
        free(R);

    }
}

int main(int argc,char **argv){
    int arr[NUM];
    
    for(int i=0;i<NUM;++i){
        arr[i] = NUM-i;
        printf("%d ",arr[i]);
    }
    printf("\n");

    mergeSort(arr,NUM);
    
    for(int i=0;i<NUM;++i){
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    return 0;
}
