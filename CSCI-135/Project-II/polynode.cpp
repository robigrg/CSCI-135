#include<iostream>
using namespace std;
class PolyNode {
private: 
        double coeff;
        int pow;
public:
        PolyNode (double coeff, int pow){
                this->coeff=coeff;
                this->pow=pow;
        }
        bool operator<(const PolyNode& other) const
    {
      return pow > other.pow;
    } 
        double getCoeff() {
                return this->coeff;
        } 
        int getPow() {
                return this->pow;
        } 
        void setCoeff(double coeff){
                this->coeff=coeff;
        } 
        void setPow(int pow){
                this->pow=pow;
        }

};