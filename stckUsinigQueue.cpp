#include<iostream>
#include<stack>
#include<queue>
using namespace std;

class Stack{
    int n=0;
    queue<int> q1;
    queue<int> q2;

    public:
    Stack(){
        n=0;
    }
    void push(int value){
        //push the value in q1
        q2.push(value);
        n++;

        //after that we push the front element of q1 into q2 till the q1 is not empty
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }

        //after we swap the q1 and q2 xfor this we use the temp variable
        swap(q1,q2);
    }

    void pop(){
        return q1.pop();
        n--;
    }

    int top(){
        return q1.front();
    }
    int size(){
        return n;
    }
};

int main(){
    Stack s;
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);

    cout<<"Top element of the stack is : "<<s.top()<<endl;
    s.pop();
    cout<<"Top element of the stack is : "<<s.top()<<endl;


}
