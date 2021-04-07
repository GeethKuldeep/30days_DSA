#include<iostream>
#include<stack>
using namespace std;

/*class Stack() {

  public:
    int top;

    Stack(int len) {
    int* arr;
    int len;
    arr = new int[len];
      top = -1;
      for (int i = 0; i < 5; i++) {
        arr[i] = 0;
      }
    }

  bool isEmpty() {
    if (top == -1)
      return true;
    else
      return false;
  }
  bool isFull() {
    if (top == 4)
      return true;
    else
      return false;
  }

  void push(int val) {
    if (isFull()) {
      cout << "stack overflow" << endl;
    } else {
      top++; // 1
      arr[top] = val;
    }
  }

  int pop() {
    if (isEmpty()) {
      cout << "stack underflow" << endl;
      return 0;
    } else {
      int popValue = arr[top];
      arr[top] = 0;
      top--;
      return popValue;
    }
  }

  int count() {
    return (top + 1);
  }

  int peek(int pos) {
    if (isEmpty()) {
      cout << "stack underflow" << endl;
      return 0;
    } else {
      return arr[pos];
    }
  }

  void change(int pos, int val) {
    arr[pos] = val;
    cout << "value changed at location " << pos << endl;
  }

  void display() {
    cout << "All values in the Stack are " << endl;
    for (int i = 4; i >= 0; i--) {
      cout << arr[i] << endl;
    }
  }
};*/
bool isBalanced(string expr, int len) {
   stack<char> s;
   char ch;
  if(expr.length()== 0){
    cout<<"Expression is empty"<<endl;
  }
  else{
     for (int i=0; i<expr.length(); i++) {    //for each character in the expression, check conditions
      if (expr[i]=='('||expr[i]=='['||expr[i]=='{') {    //when it is opening bracket, push into  stack
         s.push(expr[i]);
         continue;
      }
     switch (expr[i]) {
            case ')':    //for closing parenthesis, pop it and check for braces and square brackets
               ch = s.top();
               s.pop();
               if (ch=='{' || ch=='[')
                  return false;
                  break;
            case '}': //for closing braces, pop it and check for parenthesis and square brackets
                ch = s.top();
               s.pop();
               if (ch=='(' || ch=='[')
                  return false;
                  break;
            case ']': //for closing square bracket, pop it and check for braces and parenthesis
                ch = s.top();
               s.pop();
               if (ch =='(' || ch == '{')
                  return false;
                  break;
         }


      }
       return (s.empty()); //when stack is empty, return true
  }

}
main() {
   string expr = "[{}(){()}]";
   if (isBalanced(expr,expr.length()))
      cout << "Yes";
   else
      cout << "No";
}
