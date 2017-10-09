#include<iostream>
#include<cstdio>

using namespace std;
#define NUM 100

#define swap(a,b){\
    a=a^b;\
    b=b^a;\
    a=a^b;\
}

void bubbleSort(int a[],int n){
    for(int i=0;i<n;++i){
        for(int j=0;j<n-i-1;++j){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                
            }
        }
    }
    
    
}

int main(int argc, char **argv){
    int a[NUM];
    for(int i = 0;i<NUM;++i){
        a[i]=NUM-i;
    }
    
    for(int i:a){
        cout<<i<<' ';
    }
    cout<<endl;
    
    
    bubbleSort(a,NUM);
    for(int i:a){
        cout<<i<<' ';
    }
    cout<<endl;


    return 0;
}
