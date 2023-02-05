#include <iostream>
#include <stack>
using namespace std;
typedef long long int def ;

class calculator{
   public:
   int calculate(string s){
      def a = 0;
      def b = 1;
      def c = 1;
      def d = 1;
      stack <def> stack ;
      def n = s.size();
      for (def i = 0; i < n; i++){
         char e = s[i];
         if (e >= '0' && e <= '9'){
            def f = e - '0';
            while (i + 1 < n && s[i + 1] >= '0' && s[i + 1] <= '9') {
               i++;
               f = (f * 10) + (s[i] - '0');
            }
            b = (d == 1) ? b * f : b / f;
         }
         else if (e == '(') {
            stack.push(a);
            stack.push(c);
            stack.push(b);
            stack.push(d);
            a = 0;
            d = 1;
            c = 1;
            b = 1;
         }
         else if (e == ')') {
            def temp = a + c * b;
            d = stack.top();
            stack.pop();
            b = stack.top();
            stack.pop();
            c = stack.top();
            stack.pop();
            a = stack.top();
            stack.pop();
            b = (d == 1) ? b * temp : b / temp;
         }
         else if (e == '*' || e == '/'){
            d = (e == '*') ? 1 : -1;
         }
         else if (e == '+' || e == '-'){
            if (e == '-' && (i == 0 || (i - 1 >= 0 && s[i - 1] == '('))){
               c = -1;
               continue;
            }
            a += c * b;
            c = (e == '+') ? 1 : -1;
            b = 1;
            d = 1;
         }
      }
      return a + c * b;
   }
};

int main(){
   calculator expression;
   string input;
   cout << "Please, Enter the expression: " << endl;
   cin >> input;
   cout << "The result is: " << expression.calculate(input) << endl; 
   return 0;
}