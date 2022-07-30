#include<iostream>
using namespace std;

class A{
    public :
        void say_hello(){
            cout<<"hello pranil\n";
        }
        void say_hello(string name){
            cout<<"hello pranil"<<name<<endl;
        }
};

int main()
{
    A obj1;
    obj1.say_hello();
    return 0;
}