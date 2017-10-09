#include<iostream>

using namespace std;

#define NUM 100

bool binSearch(int min, int max,int a[],int target){
    int mid = (max+min)/2;
    if(min<=max){
        if(target<a[mid]){
            return binSearch(min,mid,a,target);
        }else if(target>a[mid]){
            return binSearch(mid+1,max,a,target);
        }else return true;
    }
    return false;
}

int main(int argc, char **argv){
    int arr[NUM];
    for(int i=0;i<NUM;++i){
        arr[i]=i; 
    }
    for(int ii:arr){
        cout<<ii<<' ';
    }
    puts("");
    puts("");
    int x = 120;
    if(binSearch(0,NUM-1,arr,x)){
        cout<<"find "<<x<<" in the array"<<endl;
    }else{cout<<"Couldn't find "<<x<<" in the array"<<endl;}
    
    return 0;
}
