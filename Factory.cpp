// Factory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

using namespace std;

class Toy
{
    
protected:
    string name;
    int price;
public:
    virtual void prepare() = 0;
    virtual void combine() = 0;
    virtual void assemble() = 0;
    virtual void show() = 0;

};
class car :public Toy
{
public:
    
     car(string _name, int _price)
     {
         name = _name;
         price = _price;
     }
     void prepare() {cout<<"Preapare car"<<endl;};
     void combine() { cout << "combine car" << endl; };
     void assemble() { cout << "assemble car" << endl; };
     void show()
     {
         cout << "Car Detail" << endl;
         cout << "Car name =" << name<<endl;
         cout << "car price" << price << endl;
     }

};
class bike :public Toy
{
public:

    bike(string _name, int _price)
    {
        name = _name;
        price = _price;
    }
    void prepare() { cout << "Preapare bike" << endl; };
    void combine() { cout << "combine bike" << endl; };
    void assemble() { cout << "assemble bike" << endl; };
    void show()
    {
        cout << "bike Detail" << endl;
        cout << "bike name =" << name << endl;
        cout << "bike price" << price << endl;
    }

};
class plane :public Toy
{
public:

    plane(string _name, int _price)
    {
        name = _name;
        price = _price;
    }
    void prepare() { cout << "Preapare plane" << endl; };
    void combine() { cout << "combine plane" << endl; };
    void assemble() { cout << "assemble plane" << endl; };
    void show()
    {
        cout << "plane Detail" << endl;
        cout << "plane name =" << name << endl;
        cout << "plane price" << price << endl;
    }

};

class factoruMethod
{
public:   
    static Toy* createObject(int  type,string name, int price)
    {
        Toy* toy = NULL;
        if (type == 1)
            toy = new car( name,  price);
        if(type == 2)
            toy = new bike(name, price);
        if (type == 3)
            toy = new car(name, price);
        else
            cout << "ENter valid type" << endl;

        toy->prepare();
        toy->combine();
        toy->assemble();

        return toy;
    }
    

};

int main()
{
    int type = 0;
    string name;
    int price;
    while (1)
    {
        std::cout << "Enter your choice 1: car   2:Bike  3:Plane\n";

        cin >> type;
        std::cout << "Enter name";
        cin >> name;
        std::cout << "Enter price";
        cin >> price;
        Toy* toy = factoruMethod::createObject(type, name, price);
        toy->show();
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
