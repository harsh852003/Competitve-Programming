#include<iostream>
#include<stack>
#include<queue>
using namespace std;

class Queue{
    public:
    int n;
    stack<int> s1;
    stack<int> s2;
    Queue(){
        n=0;
    }
    void push(int value){
        s1.push(value);
        n++;
    }

    int pop(){
        if(s1.empty() && s2.empty()){
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int top_element= s2.top();
            s2.pop();
            n--;
    }
    int peek(){
        if(s1.empty() && s2.empty()){
            return -1;

        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
    return s2.top();    
    }
    
    int empty(){
        if(s1.empty() && s2.empty()){
            return true;
        }
        else{
            return false;
        }
    }

};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout<<"Top of the element "<<q.peek()<<endl;
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();    
    cout<<"empty queue "<<q.empty()<<endl;


}