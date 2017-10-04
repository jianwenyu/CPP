#include<iostream>

#define NUM 50

using namespace std;

bool binSearch(int min,int max,int a[],int x){
   int mid = (max+min)/2;
 
   if(min<=max){
        if(x>a[mid]){
            return binSearch(mid+1,max,a,x);
        }else if(x<a[mid]){
            return binSearch(min,mid,a,x);
        }else return true;
   }
   return false;
 
}

int main(int argc,char **argv){
    int a[NUM];
    for(int i=0;i<NUM;++i){
        a[i]=i+22;
    }
    for(int ii:a){
        cout<<ii<<' ';
    }
    cout<<endl;
    int b = 62;
    if(binSearch(0,NUM-1,a,b)){
        cout<<"Found "<<b<<" in array."<<endl;
    }else{
        cout<<"Can not Found "<<b<<" in array."<<endl;
    }
    return 0;
}
