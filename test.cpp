#include<iostream>

using namespace std;
#define NUM 50

int partition(int *arr,int left,int right,int pivot){
    if(left<=right){
        while(arr[left]<pivot)left++;
        while(arr[right]>pivot)right--;
        if(left<=right){
            int temp = arr[left];
            arr[left]= arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }


    return left;
}

void quickSort(int *arr,int left,int right){
    if(left<right){
        int pivot = arr[(left+right)/2];
        int index = partition(arr,left,right,pivot);
        
        quickSort(arr,left,index-1);
        quickSort(arr,index,right);
        
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
    
    quickSort(arr,0,NUM-1);
    
    for(int i:arr){
        cout<<i<<' ';
    }
    cout<<endl;
    return 0;
}
