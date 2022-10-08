/*

Friend function in C++ is used when the class private data needs to be accessed directly without using object of that class.
Friend functions are also used to perform operator overloading. 

Characteristics of a Friend function:
The function is not in the scope of the class to which it has been declared as a friend.
It cannot be called using the object as it is not in the scope of that class.
It can be invoked like a normal function without using the object.
It cannot access the member names directly and has to use an object name and dot membership operator with the member name.
It can be declared either in the private or the public part.
Friend functions do not access the class data members directly but they pass an object as an argument.

https://www.javatpoint.com/friend-function-in-cpp

*/

#include<iostream>
using namespace std;

int main()
{

    return 0;
}