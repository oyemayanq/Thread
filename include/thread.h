#ifndef THREAD_H
#define THREAD_H
#include <iostream>

class Thread
{
    public:
        Thread();
        Thread(const char*);
        Thread(const Thread&);

        void operator = (const char*);

        /// + Operator overloading

        char operator [] (int);
        friend Thread operator + (const char&,const Thread&);
        friend Thread operator + (const Thread&,const char&);
        friend Thread operator + (const char*,const Thread&);
        friend Thread operator + (const Thread&,const char*);
        friend Thread operator + (const Thread&,const Thread&);

        ///output operator

        friend std::ostream& operator << (std::ostream&,Thread&);

        void display();
        ~Thread();

    private:
        char* str;
        void setThread(const char*);

        char* getThread() const;

        char* add(const char&,const char*) const;
        char* add(const char*,const char&) const;
        char* add(const char*,const char*) const;
};

#endif // THREAD_H
