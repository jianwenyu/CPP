#include<iostream>

using namespace std;

#define NUM 50

#define swap(a,b){\
    a=a^b;\
    b=b^a;\
    a=a^b;\
}

void selec(int arr[],int n){
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j])swap(arr[i],arr[j]);
        }
    }
}

int main(int argc,char** argv){
    
    int arr[NUM];
    for(int i=0;i<NUM;++i){
        arr[i]=NUM-i;
    }
    
    for(int i:arr){
        cout<<i<<' ';
    }
    cout<<endl;
    
    selec(arr,NUM);
    for(int i:arr){
        cout<<i<<' ';
    }
    cout<<endl;
    
    return 0;
}
