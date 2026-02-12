#include <stack>
#include <string>
#include <sstream>
#include <cctype>

#include <bits/stdc++.h>
using namespace std;

int evaluate_postfix(const string& expression) {
    stack<int> st;
    istringstream iss(expression);
    string token;
    
    // Process each token
    while (iss >> token) {
        // If token is a number, push it to stack
        if (isdigit(token[0])) {
            st.push(stoi(token));
        }
        // If token is an operator, pop two operands and perform operation
        else {
            if (st.size() < 2) {
                throw runtime_error("Invalid expression");
            }
            
            // Pop operands
            int operand2 = st.top(); st.pop();
            int operand1 = st.top(); st.pop();
            
            // Perform operation based on operator
            if (token == "+") {
                st.push(operand1 + operand2);
            }
            else if (token == "-") {
                st.push(operand1 - operand2);
            }
            else if (token == "*") {
                st.push(operand1 * operand2);
            }
        }
    }
    
    return st.top();
}