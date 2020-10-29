// Fig. 10.10: Array.h
// Array class definition with overloaded operators.
#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
using namespace std;

template <typename T>
class Array {
    friend std::ostream& operator<<(std::ostream&, const Array< T  >&);
    friend std::istream& operator>>(std::istream&, Array< T >&);

public:
    //explicit Array(int = 6);// default constructor 
    Array(T = 10);// default constructor 


    Array(const Array<T>&); // copy constructor
    ~Array(); // destructor                    
    size_t getSize() const; // return size

//    const Array& operator=(const Array&); // assignment operator
    const Array<T>& operator=(const Array<T>&); // assignment operator
    bool operator==(const Array<T>&) const; // equality operator   

    // inequality operator; returns opposite of == operator     
    bool operator!=(const Array<T>& right) const {
        return !(*this == right); // invokes Array::operator==
    }

    // subscript operator for non-const objects returns modifiable lvalue
    //int& operator[](int);
    T& operator[](T);
    // subscript operator for const objects returns rvalue
    //int operator[](int) const;
    T operator[](T) const;
private:
    size_t size; // pointer-based array size
    T* ptr; // pointer to first element of pointer-based array
};

#endif


/**************************************************************************
 * (C) Copyright 1992-2017 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
