#include "thread.h"
#include <iostream>
#include <cstring>

Thread::Thread()
{
    buffer = nullptr;
}

Thread::Thread(const char* src)
{
    setThread(src);
    /*
        buffer = num;
    */
}

Thread::Thread(const Thread& source)
{
    char* src = source.getThread();
    this->setThread(src);
}

void Thread::setThread(const char* src)
{
    int i;
    int n = strlen(src);
    buffer = new char[n+1];
    for(i=0;i<n;i++)
        buffer[i] = src[i];
    buffer[i] = '\0';
}

char* Thread::getThread() const
{
    return buffer;
}

void Thread::display()
{
    int n = strlen(buffer);
    for(int i=0;i<n;i++)
        std::cout<<buffer[i];
}

char* Thread::add(char* x,char*y)
{
    int n = strlen(x) + strlen(y);
    char* z = new char[n+1];
    int i=0,j=0,k=0;
    while(x[i]!='\0')
        z[k++] = x[i++];
    while(y[j]!='\0')
        z[k++] = y[j++];
    z[k] = '\0';
    return z;
}

char* Thread::add(char* x,char& y)
{
    int n = strlen(x);
    char* z = new char[n+2];
    int i=0;
    for(;i<n;i++)
        z[i] = x[i];
    z[i++] = y;
    z[i] = '\0';
    return z;
}

char* Thread::add(char& x,char* y)
{
    int n = strlen(y),k=0,i=0;
    char* z = new char[n+2];
    z[k++] = x;
    while(i<n)
        z[k++] = y[i++];
    z[k] = '\0';
    return z;
}

void Thread::operator = (const Thread& rhs)
{
    char* x = rhs.getThread();
    this->setThread(x);
}

void Thread::operator = (char* const rhs)
{
    this->setThread(rhs);
}

Thread operator + (Thread& lhs,Thread& rhs)
{
    char* x = lhs.getThread();
    char* y = rhs.getThread();
    char* res = lhs.add(x,y);
    Thread temp(res);
    delete[] res;
    return temp;
}

Thread operator + (Thread& lhs,char* const rhs)
{
    char* x = lhs.getThread();
    char* res = lhs.add(x,rhs);
    Thread temp(res);
    delete[] res;
    return temp;
}

Thread operator + (char* const lhs,Thread& rhs)
{
    char* x = rhs.getThread();
    char*res = rhs.add(lhs,x);
    Thread temp(res);
    delete[] res;
    return temp;
}

Thread operator + (Thread& lhs,char rhs)
{
    char* x = lhs.getThread();
    char* res = lhs.add(x,rhs);
    Thread temp(res);
    delete[] res;
    return temp;
}

Thread operator + (char lhs,Thread& rhs)
{
    char* y = rhs.getThread();
    char* res = rhs.add(lhs,y);
    Thread temp(res);
    delete[] res;
    return temp;
}

Thread::~Thread()
{
    delete[] buffer;
}
