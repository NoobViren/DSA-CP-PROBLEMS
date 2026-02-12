#include <iostream>
#include <stack>
#include <string>
#include <cmath>

namespace PostfixEvaluator {
    bool isOperator(char c) {
        return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
    }

    bool isDigit(char c) {
        return (c >= '0' && c <= '9');
    }

    int performOperation(int op1, int op2, char op) {
        switch(op) {
            case '+': return op1 + op2;
            case '-': return op1 - op2;
            case '*': return op1 * op2;
            case '/': return op1 / op2;
            case '^': return pow(op1, op2);
            default: return 0;
        }
    }

    int evaluatePostfix(const std::string& expr) {
        std::stack<int> stack;
        
        for(size_t i = 0; i < expr.length(); i++) {
            if(expr[i] == ' ') continue;
            
            else if(isDigit(expr[i])) {
                int num = 0;
                while(i < expr.length() && isDigit(expr[i])) {
                    num = num * 10 + (expr[i] - '0');
                    i++;
                }
                i--;
                stack.push(num);
            }
            
            else if(isOperator(expr[i])) {
                int op2 = stack.top(); stack.pop();
                int op1 = stack.top(); stack.pop();
                int result = performOperation(op1, op2, expr[i]);
                stack.push(result);
            }
        }
        return stack.top();
    }
}

int main() {
    std::string expression;
    std::cout << "Enter postfix expression (with spaces): ";
    std::getline(std::cin, expression);
    
    int result = PostfixEvaluator::evaluatePostfix(expression);
    std::cout << "Result: " << result << std::endl;
    
    return 0;
}