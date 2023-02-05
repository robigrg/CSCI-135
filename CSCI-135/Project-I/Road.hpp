/*
#ifndef ROAD_H_
#define ROAD_H_
class Road
{
public:
    Road();
    Road(int size);
    ~Road();
    void clear(); //set each char in blocks to be a space
    void mark(int idx, char ch); //can we add const after this
    //function member?
    int getLastBlock() const;
    const char* toString() const;

private:
    char* blocks;
    //blocks is to represent a consecutive collection
    //of road blocks, each block can be a space,
    //ie, not occupied by any animal,
    //or it can the paw mark -- represented by the initial
    //letter of that animal, for example, 'H' for Hare,
    //and 'T' for Tortoise.

    //const int length; //since length is for the size of
    //array, we only initialize it once,
    //and do not change it afterwards. 
    //TODO: IMPORTANT, remove const int length, otherwise,
    //a = Road(...); will not work.
    int length;
};
#endif
*/

//to avoid a header file is included more than once,
//we use "include guard", the following approach works
//in every C++ version.
#ifndef ROADH
#define ROADH
class Road
{
public:
    Road();
    Road(int size);
    ~Road();
    void clear(); //set each char in blocks to be a space
    void mark(int idx, char ch); //can we add const after this
    //function member?
    int getLastBlock() const;
    const char* toString() const;

private:
    char* blocks;
    //blocks is to represent a consecutive collection
    //of road blocks, each block can be a space,
    //ie, not occupied by any animal,
    //or it can the paw mark -- represented by the initial
    //letter of that animal, for example, 'H' for Hare,
    //and 'T' for Tortoise.

    //const int length; //since length is for the size of
    //array, we only initialize it once,
    //and do not change it afterwards. 
    //TODO: IMPORTANT, remove const int length, otherwise,
    //a = Road(...); will not work.
    int length;
};
#endif