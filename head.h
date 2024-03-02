#pragma once

template <class Type>
class StackADT
{
public:
    virtual void push(const Type &) = 0;
    virtual void pop() = 0;
    virtual Type getTop() = 0;
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
};

template <class Type>
class Stack : public StackADT<Type>
{
private:
    Type *list;
    int size;
    int top;

    void copyStack(const Stack &);

public:
    bool isEmpty();
    bool isFull();
    void push(const Type &item);
    void pop();
    Type getTop();
    void print();
    void reverse();
    void clearStack();
    bool isEq(const Stack &);
    void initialize();

    Stack(int sz);
    Stack(const Stack &);
    ~Stack();
};
