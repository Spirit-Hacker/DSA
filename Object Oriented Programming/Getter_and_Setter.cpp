#include<iostream>
using namespace std;

class hero{

    private :
        int health;

    public :
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
        
        void print(){
            cout<<level<<endl;
        }

    // Getter
    // Getter is used to get private data
    int get_health(){
        return health;
    }
    // Setter
    // Setter is to set or update private private data
    int set_health(int h){
        health = h;
    } 
    
};

int main()
{   
    hero sunil; // static
    sunil.level = 'A';

    sunil.set_health(1000);
    cout<<"sunil health is : "<<sunil.get_health()<<endl;
    cout<<"sunil level is : "<<sunil.level<<endl;

    hero *pranil = new hero; // dynamic
    pranil->level = 'F';

    pranil->set_health(200);

    cout<<"pranil health is : "<<pranil->get_health()<<endl;
    cout<<"pranil level is : "<<pranil->level<<endl;


    return 0;
}



