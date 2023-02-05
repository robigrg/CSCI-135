/*
#ifndef _SQUARE_H
#define _SQUARE_H
class Square : public Rectangle
{
public:
    Square();
    ~Square();
    Square (int newWidth, int newLength);
    int getWidth() const;
    void setWidth(int newWidth);
    int getLength() const;
    void setLength(int newLength);
    int getArea();
    int getPerimeter();
};
#endif
*/

#ifndef _HARE_H 
#define _HARE_H
class Hare
{
public:
    Hare();
    Hare(int* pattern, int length, int position);
    ~Hare();

    int getPosition() const;
    void setPosition(int newPosition);
    int* getPattern() const;
    int getPatternLength() const;
    void move();

private:
    int length;
    int* pattern;
    int position;
};
#endif