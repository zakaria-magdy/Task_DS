#pragma once
#include "head.h"
#include <iostream>
#include <string>

using namespace std;

template <class Type>
Stack<Type>::Stack(int sz)
{
    size = sz;
    list = new Type[size];
    top = -1;
}

template <class Type>
Stack<Type>::Stack(const Stack &otherStack)
{
    copyStack(otherStack);
}

template <class Type>
void Stack<Type>::copyStack(const Stack &otherStack)
{
    size = otherStack.size;
    top = otherStack.top;
    list = new Type[size];

    for (int i = 0; i < size; i++)
    {
        list[i] = otherStack.list[i];
    }
}
template <class Type>
bool Stack<Type>::isEq(const Stack &otherStack)
{
    if (top != otherStack.top)
        return false;
    else
    {
        for (int i = 0; i < top; i++)
        {
            if (list[i] != otherStack[i])
                return false;
        }
    }
    return true;
}

template <class Type>
inline void Stack<Type>::initialize()
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter The Element [" << i + 1 << "] ";
        cin >> list[i];
        top++;
    }
}

template <class Type>
bool Stack<Type>::isFull()
{
    return (top == size - 1);
}

template <class Type>
bool Stack<Type>::isEmpty()
{
    return (top == -1);
}

template <class Type>
void Stack<Type>::push(const Type &item)
{
    if (isFull())
        cout << "\nList Is Full !! \n";
    else
    {
        top++;
        list[top] = item;
    }
}

template <class Type>
void Stack<Type>::pop()
{
    if (isEmpty())
        cout << "\nList Is Empty !!\n";
    else
        top--;
}

template <class Type>
Type Stack<Type>::getTop()
{
    if (isEmpty())
        cout << "Stack Is Empty !! \n";
    return list[top];
}

template <class Type>
void Stack<Type>::reverse()
{
    if (isEmpty())
        cout << "\nStack Is Empty !! \n";
    else
    {
        for (int i = top; i >= 0; i--)
        {
            string val = list[i];
            for (int j = val.length() - 1; j >= 0; --j)
            {
                cout << val[j];
            }
            cout << " ";
        }
    }
}

template <class Type>
inline void Stack<Type>::clearStack()
{
    top = -1;
}

template <class Type>
void Stack<Type>::print()
{
    if (isEmpty())
        cout << "\nList Is Empty !!\n";
    else
    {
        for (int i = 0; i <= top; i++)
            cout << list[i] << " ";
        cout << "\n";
    }
}

template <class Type>
Stack<Type>::~Stack()
{
    delete[] list;
}
