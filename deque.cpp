#include <bits/stdc++.h> 
class Deque
{
    int *arr;
    int size;
    int front;
    int rear;

public:
    // Initialize your data structure.
    Deque(int n)
    {
        // Write your code here.
        size=n;
        arr=new int[size];
        front=-1;
        rear=-1;
    
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        // Write your code here.
         if(isFull() )
        {
            return false;
        }
        else if(isEmpty())
        {
            front=rear=0;
            arr[front]=x;
            return true;
        }
        else if(rear!=size-1 && front==0)
        {
            front=size-1;
            arr[front]=x;
            return true;
        }
        else{
            front--;
            arr[front]=x;
            return true;
        }
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        // Write your code here.
        if(isFull() )
        {
            return false;
        }
        else if(isEmpty())
        {
            front=rear=0;
            arr[rear]=x;
            return true;
        }
        else if(rear==size-1 && front!=0)
        {
            rear=0;
            arr[rear]=x;
            return true;
        }
        else{
            rear++;
            arr[rear]=x;
            return true;
        }

    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        // Write your code here.
        if(isEmpty())
        {
            return -1;
        }
        int ans=arr[front];
        arr[front]=-1;

        if(front==rear)
        {
            
            front = rear =-1;    
        }
        else if(front==size-1)
        {
            front=0;
        }
        else{
            front++;
        }

        return ans;
    
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        // Write your code here.
        if(isEmpty())
        {
            return -1;
        }
        int ans=arr[rear];
        arr[rear]=-1;

        if(front==rear)
        {
            
            front = rear =-1;    
        }
        else if(rear==0)
        {
            rear=size-1;
        }
        else{
            rear--;
        }

        return ans;
    
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        // Write your code here.
        if(isEmpty())
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        // Write your code here.
        if(isEmpty())
        {
            return -1;
        }
        else
        {
            return arr[rear];
        }
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        // Write your code here.
        if(front==-1)
        {
            return true;
        }
        else{
            return false;
        }
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        // Write your code here.
        if((front==0 && rear==size-1) ||(front!=0 && rear==(front-1)%(size-1)))
        {
            return true;
        }
        else{
            return false;
        }
    }
};
