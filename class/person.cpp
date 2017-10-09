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
    car(string _brand,string _model,int _price,string _drive):brand(_brand),model(_model),price(_price),drive(_drive){}
    void setBrand(string _brand);
    void setModel(string _model);
    void setPrice(int _price);
    void setDrive(string _drive);
    string getBrand();    
    string getModel();
    int getPrice();
    string getDrive();
    void getInfo(); 
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
    
class Subaru:public car{
public:
    Subaru(string _model,int _price,string _drive);
    
};

Subaru::Subaru(string _model,int _price,string _drive){
    brand="Subaru";
    model=_model;
    price=_price;
    drive=_drive;
    }

int main(int argc,char **argv){
    Subaru ccbd("forester",40000,"ALl Wheel Drive");
    car bmw("BMW","X6",60000,"Front Wheel Drive");
    ccbd.getInfo();
    bmw.getInfo();
    bmw.setModel("X5");
    bmw.setPrice(40000);
    bmw.setDrive("All Wheel Drive");
    bmw.getInfo();
    return 0;
}

