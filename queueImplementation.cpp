#include <bits/stdc++.h> 
class Queue {

    int *arr;
    int size;
    int qFront;
    int rear;

public:
    Queue() {
        // Implement the Constructor
        size=100001;
        arr=new int[size];
        qFront=0;
        rear=0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(qFront==rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(qFront==size)
        {
           cout<<"queue is full"<<endl; 
        }
        else
        {
            arr[rear]=data;
            rear++;

            if(qFront==rear)
            {
                qFront=0;
                rear=0;
            }

        }
        
    }

    int dequeue() {
        // Implement the dequeue() function
         if(isEmpty())
        {
            return -1;
            
        }
        else if(qFront==size-1)
        {
            return -1;
        }
        else
        {
            int value=arr[qFront];
            arr[qFront]=-1;
            qFront++;
            return value;

        }
    }

    int front() {
        // Implement the front() function
        if(isEmpty())
        {
            return -1;
        }
        else
        {
            return arr[qFront];
        }
    }
};
