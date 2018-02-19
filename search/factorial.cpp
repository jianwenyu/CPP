#include<iostream>

using namespace std;

int f(int n){
    if(n==1){
        return 1;
    }else return n*f(n-1);
}

int main(int argc,char **argv){
    cout<<"Input a positive integer for factorial: ";
    int a;
    cin>>a;
    cout<<"The factorial is "<<f(a)<<endl;
    return 0;
}
