#include<iostream>
#include<string>
#include "StackInterface.h"
#include "LinkedStack.h"
#include "Node.h"

//Prototype
std::string infix_to_postfix(std::string& infix);
int precedence(char ch);

int main()
{
    /**********************************************/
    std::string exp = "a-(b+c)";
    std::cout << "Infix expression: " << exp << "\n\n";
    std::string postFix;
    std::cout << "Postfix expression: " <<  infix_to_postfix(exp) << "\n\n";
    
    return 0; 
    
}//end main

std::string infix_to_postfix(std::string& infix)
{
    LinkedStack<char> operatorStack;
    std::string postfixExp;
    int len = infix.size();
    
    for(int i = 0; i < len; i++)
    {
        char ch = infix[i];
        switch(ch)
        {    
            case 'a':   //append operand to end of postfix expression - step 1
            case 'b':
            case 'c':
            case 'd':
            case 'e':
            case 'f':
                postfixExp += ch;            
            break;
            
            case '(':       //Save '(' on stack - step 2
                operatorStack.push(ch);
            break;
            
            case '+':  //Process stack operators of greater precedence - step 3
            case '-':
            case '/':
            case '*':
                while(!operatorStack.isEmpty() && operatorStack.peek() != '(' &&   
                precedence(ch) <= precedence(operatorStack.peek()))
                {
                    postfixExp += operatorStack.peek();
                    operatorStack.pop();
                }//end while
                operatorStack.push(ch);     //save the operator
            break;
            case ')':   //pop stack until matching '('  - step4
                while(operatorStack.peek() != '(')
                {
                    postfixExp += operatorStack.peek();
                    operatorStack.pop();
                }//end while
                operatorStack.pop();    //remove the open parenthesis
            break;
        }//end switch
    }//end for
    //Append to postfixExp the operators remaining in the stack - step5
    while(!operatorStack.isEmpty())
    {
        postfixExp += operatorStack.peek();
        operatorStack.pop();
    }//end while
    
    return postfixExp;
}//end infix_to_postfix
    
                    
int precedence(char ch)
{
    if (ch == '/' || ch == '*')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else
        return -1;
}//end precedence

