/*  CounterType class
    This class is used to create a counter type object. It will do the following:
        - Keep a count
        - Increment/decrement the count
        - Return the count
        - Reset the count
        - Start with a pre-defined count
        - Getter and setter functions
*/

#ifndef _COUNTER_CLASS_
#define _COUNTER_CLASS_

class counterType {
    int counter;                // The counter
    
public:
    static int objCount;        // Keeps track of how many objects are created
    
    counterType();              // Create an object of the class starting the counter at 0
    counterType(int count);     // Create an object of the class with a preset value
    void increment();           // Increment the counter
    void decrement();           // Decrement the counter
    void setCount(int);         // Set the counter
    int getCount();             // Get the counter
    void reset();               // Reset the counter
    
    ~counterType();             // Destructor
};

#endif