#include<iostream>
using namespace std;

// Parent class or super class
class Human{
    public:
        int height;
        int weight;
        int age;

    public:
        int get_age(){
            return this->age;
        }
        
        void set_weight(int w){
            this->weight = w;
        }
};

// child class or sub class
class Male : public Human{
    public :
        string color;

    void sleep(){
        cout<<"male sleeping"<<endl;
    }
};

int main()
{
    Male object;

    cout<<object.color<<endl;
    object.set_weight(50);
    cout<<object.weight<<endl;
    object.sleep();
    
    return 0;
}