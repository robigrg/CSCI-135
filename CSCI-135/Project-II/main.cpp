#include<iostream>
#include <vector>
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


vector<PolyNode>subtract(vector<PolyNode>p1,vector<PolyNode>p2){
        sort(p1.begin(),p1.end());
        sort(p2.begin(),p2.end());
        vector<PolyNode> p3;
        int n=p1.size();
        int m=p2.size();
        int i=0,j=0;
        while(i<n&&j<m){
                if(p1[i].getPow()==p2[j].getPow()){
                        p3.push_back(PolyNode(p1[i].getCoeff()-p2[j].getCoeff(),p1[i].getPow()));
                        i++;j++;
                }
                else if(p1[i].getPow()<p2[j].getPow()){
                        p3.push_back(PolyNode(p2[j].getCoeff(),p2[j].getPow()));
                        j++;
                }
                else  {
                        p3.push_back(PolyNode(p1[i].getCoeff(),p1[i].getPow()));
                        i++;
                }
        }
        while(i<n){
                p3.push_back(PolyNode(p1[i].getCoeff(),p1[i].getPow()));
                i++;
        }
        while(j<m){
                p3.push_back(PolyNode(p2[j].getCoeff(),p2[j].getPow()));
                j++;
        }
        return p3;
}

int main(){
        vector<PolyNode> polynomial1,polynomial2,polynomial3;
        polynomial1.push_back(PolyNode(2,3));
        polynomial1.push_back(PolyNode(1,0));
        polynomial1.push_back(PolyNode(1,5));
        polynomial2.push_back(PolyNode(6,2));
        polynomial2.push_back(PolyNode(4,3));
        polynomial2.push_back(PolyNode(2,5));
        polynomial3=subtract(polynomial1,polynomial2);
        cout << "Answer:";
        for(int i=0;i<polynomial3.size();i++){
                cout<<polynomial3[i].getCoeff()<<"x^"<<polynomial3[i].getPow()<<" + ";
        }
        return 0;

}
