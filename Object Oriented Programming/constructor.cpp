#include<iostream>
using namespace std;

class hero{
    private:
     int health;

    public:
    char level;

    // constructor
    hero(){
        cout<<"constructor called : \n";
    }

    // parameterized constructor
    hero(int health){
        cout<<"this -> "<<this<<endl;
       this->health = health;
    }

    int get_health(){
        return health;
    }
    int set_health(int h){
        health = h;
    } 
};

int main()
{
    hero pranil(100);
    cout<<&pranil<<endl;
    pranil.set_health(100);
    pranil.get_health();

    return 0;
}