#include<iostream>
#include<cstdio>

#define NUM 101

using namespace std;

void merge(int arr[],int L[],int left, int R[], int right){
    int i=0,j=0,k=0;
    while(i<left && j<right){
        if(L[i]<R[j])arr[k++]=L[i++];
        else arr[k++]=R[j++];
    }
    while(i<left) arr[k++]=L[i++];
    while(j<right) arr[k++]=R[j++];
}

void mergeSort(int arr[],int len){
    if(len>1){
        int mid = len/2;
        
        int *L = new int[mid];
        int *R = new int[len-mid];
        
        for(int i=0;i<mid;++i)L[i]=arr[i];
        for(int i=mid;i<len;++i)R[i-mid]=arr[i];
       
        
        mergeSort(L,mid);
        mergeSort(R,len-mid);
        merge(arr,L,mid,R,len-mid);
        
        delete[] L;
        delete[] R;
        
    }
}

int main(int argc,char **argv){
    int arr[NUM];
    
    for(int i=0;i<NUM;++i){
        arr[i] = NUM-i;
    }
    
    for(int i:arr){
        cout<<i<<' ';
    }
    cout<<endl;
    
    mergeSort(arr,NUM);
    
    for(int i:arr){
        cout<<i<<' ';
    }
    cout<<endl;
    
    
    return 0;
}
