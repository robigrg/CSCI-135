/*
#include "Road.hpp"
#include <iostream>

Road::Road() : length(70)
{
    //char* blocks = new char[length]; //BIG NO to put
    //char* before blocks,
    //which means local variable of default constructor,
    //here blocks has nothing to do with data member blocks.
    //FIX: change length to length+1,
    //reason: add '\0' to indicate the end of char*,
    //without which would result in odd symbols
    //when print out char*.
    blocks = new char[length+1];
    
    clear();
}

Road::Road(int size) :
length(size > 0 ? size : 70)
{
    blocks = new char[length+1]; 
       //FIX, change length to length+1.
    //Can we use blocks = new char[size]; NO,
    //since size may be negative value.
    
    clear();
}

Road::~Road()
{
    delete[] blocks;
    blocks = 0;
}

void Road::clear()
{
    for (int i = 0; i < length; i++)
        blocks[i] = ' ';
    blocks[length] = '\0'; //FIX
    //or char* in C++ will not think it is finished until
    //seeing the first '\0'.
    //Without the above statement, when blocks is printed out,
    //it will have odd symbols.
}

int Road::getLastBlock() const
{
    return length-1; //first block starts from 0,
    //the last block is length -1 since 
    //the size of array blocks is length.
}


const char* Road::toString() const
{
    return blocks;
}



std::string Road::toString() const
{
    //return blocks;
    std::string str = "";
    for (int i = 0; i < length; i++)
        str += std::to_string(blocks[i]);
    return str;
}

void Road::mark(int idx, char ch)
{
    blocks[idx] = ch;
}
*/

#include "Road.hpp"
#include <iostream>

Road::Road() : length(70)
{
    //char* blocks = new char[length]; //BIG NO to put
    //char* before blocks,
    //which means local variable of default constructor,
    //here blocks has nothing to do with data member blocks.
    //FIX: change length to length+1,
    //reason: add '\0' to indicate the end of char,
    //without which would result in odd symbols
    //when print out char.
    blocks = new char[length+1];

    clear();
}

Road::Road(int size) :
length(size > 0 ? size : 70)
{
    blocks = new char[length+1]; 
       //FIX, change length to length+1.
    //Can we use blocks = new char[size]; NO,
    //since size may be negative value.

    clear();
}

Road::~Road()
{
    delete[] blocks;
    blocks = 0;
}

void Road::clear()
{
    for (int i = 0; i < length; i++)
        blocks[i] = ' ';
    blocks[length] = '\0'; //FIX
    //or char* in C++ will not think it is finished until
    //seeing the first '\0'.
    //Without the above statement, when blocks is printed out,
    //it will have odd symbols.
}

int Road::getLastBlock() const
{
    return length-1; //first block starts from 0,
    //the last block is length -1 since 
    //the size of array blocks is length.
}


const char* Road::toString() const
{
    return blocks;
}


/*
std::string Road::toString() const
{
    //return blocks;
    std::string str = "";
    for (int i = 0; i < length; i++)
        str += std::to_string(blocks[i]);
    return str;
}
*/
void Road::mark(int idx, char ch)
{
    blocks[idx] = ch;
}