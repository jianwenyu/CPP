#include<iostream>
#include<string>

using namespace std;
void test(string);
bool unique(string);

int main(int argc,char **argv){
    string a = "alex";
    string b = "adfsk;zkd";
    test(a);
    test(b);
    
    return 0;
}

void test(string s){
    if(unique(s)){
        cout<<s<<" is Unique"<<endl;
    }else{
        cout<<s<<"is Not Unique"<<endl;
    }
}

bool unique(string s){
    string a = s;
    cout<<a.length()<<endl;
    
    for(int i = 0;i< a.length();++i){
        for(int j = i+1; j<a.length();++j){
            //cout<<a.at(i)<<"="<<a.at(j)<<"?"<<endl;
            if(a.at(i)==a.at(j)){
                //cout<<"found"<<endl;
                return false;
            }
        }
    } 
    return true;
}
