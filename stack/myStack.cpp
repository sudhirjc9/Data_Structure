#include<bits/stdc++.h>
using namespace std;

struct Stack_array{
    int *arr;
    int cap;
    int top;

    Stack_array(int c){
        cap = c;
        arr = new int[cap];
        top = -1;
    }

    void puhs(){

    }

    int pop(){

    }

    int peek(){

    }

    int size(){

    }

    bool isEmpty(){

    }
};

struct Stack_vector{
    vector<int>vec;

    Stack_vector(){
    }

    void puhs(){

    }

    int pop(){

    }

    int peek(){

    }

    int size(){

    }

    bool isEmpty(){

    }
};

struct node{
    int data;
    node *next;
    node(int x){
        data = x;
        next = NULL;
    }
};

struct Stack_linked_list{
    
    node *head;
    int size;

    Stack_linked_list(){
        head = NULL;
        size = 0;
    }

    void puhs(){

    }

    int pop(){

    }

    int peek(){

    }

    int size(){

    }

    bool isEmpty(){

    }
};