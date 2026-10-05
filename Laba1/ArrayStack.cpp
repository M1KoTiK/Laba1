#include "ArrayStack.h"
#include <iostream>
using namespace std;

ArrayStack::ArrayStack() 
{

}

void ArrayStack::push(const string& x) 
{
    if (n == MAX_SIZE) 
    {
        cout << "Stack is full\n";
        return;
    }
    contents[n++] = x;
}

void ArrayStack::pop() 
{
    if (n == 0) 
    {
        cout << "Stack is empty\n";
        return;
    }
    n--;
}

string ArrayStack::last() const 
{
    if (n == 0) 
    {
        cout << "Stack is empty\n";
        return "";
    }
    return contents[n - 1];
}

bool ArrayStack::isEmpty() const 
{
    return n == 0;
}

void ArrayStack::print() const 
{
    if (n == 0) 
    {
        cout << "Stack is empty\n";
        return;
    }
    for (int i = 0; i < n; i++) 
    {
        cout << contents[i] << " ";
    }
    cout << endl;
}