#include<iostream>
#include<string>
using namespace std;

class Food{
    public:
    string cuisine="Indian";
    void type(){
        cout<<"Asian"<<endl;
    }
};

class Dish : public Food{ 
    public:
    string dish ="Biryani";

};

class Restaurant : public Dish { 
    public:
    string name="Spice Kitchen";
};

int main(){
    Restaurant f3;
    f3.type();
    cout<<f3.cuisine<<": "<<f3.dish<<endl;
    cout<< "Restaurant: "<<f3.name<<endl;
    return 0; 
}