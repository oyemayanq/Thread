# Thread

A simple implementation to create a dynamic array of characters same as string class in C++.

## Documentation

### Initializing object:

1. Using constructors:  
    a- Thread str  
    b- Thread str("Thread")  
    c- Thread str(a char array)  
    d- Thread str(a Thread object)    // Copy constructor  
    
2. Using assignment operator:  
    a- Thread str = "Thread"  
    b- Thread str = a Thread object  
    
3. Using the extraction( >> ) operator:  
    a- cin>>str                      // str is a Thread object  
    b- str.getLine()                // To read line  
    
### Methods
  
1. length() -- to get length of the string or the Thread object  
2. subThread(int,int)  -- to get substring of the Thread object.  
        first parameter is starting position and second parameter is length of substring  
3. To access char at valid index use array index operator ( [] ) with Thread object.  
        Example: str[valid index]  
4. toInt() -- converts valid Thread object into int.  
        Example: str.toInt()
5. toLongInt() -- converts valid Thread object into long int.  
6. toLargeInt() -- converts valid Thread object into long long int.
7. Comparing two Thread objects using **==** operator returns true if both the objects are same else returns false.  
8. Two Thread objects can be compared using the **!=** operator as well.
        
### Concatenation  
  
The implementation supports the following ways of concatenation.  
All concatenations are done using the "+" operator and a new Thread object is returned.  
  
1. Thread object + Thread object  
2. Thread object + char array  
3. char array + Thread object  
4. Thread object + char  
5. char + Thread object  
  
### Displaying Thread object
  
=> Using the insertion ( << ) operator  
        Example: cout<<Thread object
