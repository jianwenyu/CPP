//

#include<iostream>

using namespace std;

class animal{
    public:
    //virtual void move()=0;
  
   
    /* virtual */ void move(){
        cout<<"Animal move"<<endl;
    }
    
};

class dog:public animal{
    public:
    void move(){
        cout<<"dog walk by foot"<<endl;
    }
};

class bird:public animal{
    public:
    void move(){
        cout<<"bird fly by wind"<<endl;
    }
};

int main(int argc,char** argv){
    dog d;
    animal & a= d;
    d.move();
    a.move();
    bird b;
    b.move();
    return 0;
}
