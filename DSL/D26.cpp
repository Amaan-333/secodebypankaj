#include <iostream>
#define max 15
using namespace std;

class stack {
    char list[max];
    public:
    int top;
    stack() {
        top = -1;
    }
    bool isempty() {
        return (top <= -1) ? true : false;
    }
    bool isfull() {
        return (top == max - 1) ? true : false;
    }
    void push(char elmt) {
        if (not isfull()) {
            top++;
            list[top] = elmt;
        }
    }
    char pop() {
        if (not isempty()) {
            top--;
            return list[top + 1];
        }
    }
};

bool checkParenthesis(string exp) 
{
    stack list; 
    for (int i = 0; i < exp.size(); i++) 
    {
        if (exp[i] == '{') 
        {
            list.push('}');
        } 
        else if (exp[i] == '[') 
        {
            list.push(']');
        } 
        else if (exp[i] == '(') 
        {
            list.push(')');
        } 
        else if ((exp[i] == '}') or (exp[i] == ']') or (exp[i] == ')')) 
        {
            if (exp[i] != list.pop()) 
            {
                return false;  // not valid
                break;
            }
        }
    }
    if (not list.isempty()) 
    {
        return false;  // not valid
    }
    return true;  // if all runs fine valid
}

int main() 
{
    string exp;
    cout << "* Maximun Parinthesis Allowed are 15 *" << endl;
    cout << "Enter the expression:";
    cin >> exp;
    bool result = checkParenthesis(exp);
    if (result) 
    {
        cout << "Expression is valid " << endl;
    } 
    else 
    {
        cout << "Expression is not valid " << endl;
    }
    return 0;
}
