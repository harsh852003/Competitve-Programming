#include<iostream>
using namespace std;

class Parent{
    public: 
    string name ;
    int age;

    Parent(string name,int age){
        cout<<"hello i am parent constructor"<<endl;
        this -> name = name;
        this -> age = age;
    }
    
    ~Parent(){
        cout<<"Hello I am Parent destructor"<<endl;
    }

};

class Child : public Parent{
    public:
    int rollnumber;

    Child(string name,int age, int rollnumber): Parent(name,age){
        cout<<"Hello i am child constructor"<<endl;
        this->rollnumber = rollnumber;
    }

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll Number: "<<rollnumber<<endl;
    }


    ~Child(){
        cout<<"Hello I am child destructor"<<endl;
    }
};

int main(){
    Child c1("Harsh",21,21);
    c1.getInfo();


    return 0;
}