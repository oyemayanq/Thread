#ifndef THREAD_H
#define THREAD_H


class Thread
{
    public:
        Thread();
        Thread(const char*);
        Thread(const Thread&);

        char* getThread() const;

        char* add(char*,char*);
        char* add(char*,char&);
        char* add(char&,char*);

        void operator = (const Thread&);
        void operator = (char* const);

        friend Thread operator + (Thread&,Thread&);
        friend Thread operator + (Thread&,char* const);
        friend Thread operator + (char* const,Thread&);
        friend Thread operator + (Thread&,char);
        friend Thread operator + (char,Thread&);
        void display();
        ~Thread();

    private:
        char* buffer;
        void setThread(const char*);
};

#endif // THREAD_H
