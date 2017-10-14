#include<iostream>
#include<string>

using namespace std;

class car{
    
protected:
    string brand;
    string model;
    int price;
    string drive;
    
public:
    car(){};
    car(string _brand,string _model,int _price,string _drive):brand(_brand),model(_model),price(_price),drive(_drive){
    cout<<"car constructor."<<endl;}
    car(car & c);
    ~car(){
    cout<<"car destructor"<<endl;}
    void setBrand(string _brand);
    void setModel(string _model);
    void setPrice(int _price);
    void setDrive(string _drive);
    string getBrand();    
    string getModel();
    int getPrice();
    string getDrive();
    void getInfo(); 
    car & operator = (car & c);
    
    
};

    void car::setBrand(string _brand){brand = _brand;}
    void car::setModel(string _model){model = _model;}
    void car::setPrice(int _price){price = _price;}
    void car::setDrive(string _drive){drive = _drive;}
    string car::getBrand(){return brand;}   
    string car::getModel(){return model;}
    int car::getPrice(){return price;}
    string car::getDrive(){return drive;}
    void car::getInfo(){
    cout<<"The car is "<<brand<<", model "<<model<<", Price "<<price<<", "<<drive<<endl;
    } 
    car::car (car & c){
        
            brand = c.brand;
            model = c.model;
            price = c.price;
            drive = c.drive;
    }
    
    car & car::operator = (car & c){
        if(this!=&c){
            brand = c.brand;
            model = c.model;
            price = c.price;
            drive = c.drive;
        }
        return *this;
    }

    
    
class Subaru:public car{
public:
    Subaru(string _model,int _price,string _drive);
    ~Subaru();
    void getInfo(); 
    
};

    Subaru::Subaru(string _model,int _price,string _drive):car("Subaru","2017-"+_model,_price,_drive){
        cout<<"Subaru constructor."<<endl;
        }
    Subaru::~Subaru(){
        cout<<"Subaru destructor."<<endl;
    }
    void Subaru::getInfo(){cout<<"Inside subaru"<<endl;}

class XV:public Subaru{
public:
    XV():Subaru("XV",0,"All wheel drive"){
    cout<<"XV constructor."<<endl;};
    XV(int _price):Subaru("XV",_price,"All wheel drive"){
    cout<<"XV constructor."<<endl;};
    ~XV(){};
};


int main(int argc,char **argv){
    Subaru ccbd("forester",40000,"ALl Wheel Drive");
    car bmw("BMW","X6",60000,"Front Wheel Drive");
    XV xv1(36000);
    xv1.Subaru::car::getInfo();
    ccbd.getInfo();    
    ccbd.car::getInfo();//recall the function from base class, use the base class name
    
    bmw.getInfo();
    bmw.setModel("X5");
    bmw.setPrice(40000);
    bmw.setDrive("All Wheel Drive");
    bmw.getInfo();
    car bmw2;
    bmw2=ccbd;
    bmw2.getInfo();

    return 0;
}

