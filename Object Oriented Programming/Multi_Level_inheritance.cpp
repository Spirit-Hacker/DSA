#include<iostream>
using namespace std;

class Animal{
    public :
        int age = 5;
        int weight = 10;

    public :
        void speak(){
            cout<<"speaking\n";
        }
};

class Dog: public Animal{

};

class German_Shefard: public Dog{

};

class labra: public German_Shefard{

};

int main()
{
    Dog d;

    d.speak();
    cout<<d.age<<endl;

    German_Shefard g;
    g.speak();
    cout<<g.age<<endl;

    labra l;
    l.speak();
    cout<<l.weight<<endl;
    
    return 0;
}