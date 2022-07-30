#include<iostream>
using namespace std;

class Animal{
    public :
        int age = 5;
        int weight = 10;

    public :
        void bark(){
            cout<<"barking\n";
        }
};

class Human{
    public:
        string color;
    public:
        void speak(){
            cout<<"speaking\n";
        }
};

class Hybrid: public Animal,public Human{

};

int main()
{
    Hybrid object;
    object.speak();
    object.bark();
    
    return 0;
}