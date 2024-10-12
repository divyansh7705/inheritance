#include<iostream>
#include<string>
using namespace std;

class Jeans{
    public:
    string type[3]={"Bootcut","Wide leg","Skinny"};
    void brand(){
        cout<<"H&M - &Denim"<<endl;
    }
};

class Bootcut : public Jeans{ 
    public:
    string colour =" Dark Blue";

};

class WideLeg : public Jeans {
    public:
    string colour="Black";
};

int main(){
    Bootcut j1;
    cout<<endl;
    j1.brand();
    cout<<j1.type[0]<<":"<<j1.colour<<endl; 

    WideLeg j2; 
    cout<<endl;
    j2.brand();
    cout<<j2.type[1]<<":"<<j2.colour<<endl;


   
    return 0; 
}