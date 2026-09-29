#include <stdio.h>

char stack[100];
int top = -1;

void push(char x) {
    stack[++top] = x;
}

char pop() {
    return stack[top--];
}

int precedence(char x) {
    if (x == '(') return 0;
    if (x == '+' || x == '-') return 1;
    if (x == '*' || x == '/') return 2;
    if (x == '^') return 3;
    return 0;
}

int main() {
    char infix[100], x;
    int i = 0;

    printf("Enter infix expression: ");
    scanf("%s", infix);

    printf("Postfix expression: ");
    while (infix[i] != '\0') {
        char ch = infix[i];

        // Check if character is an operand (a-z, A-Z, 0-9)
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            printf("%c", ch);
        } 
        else if (ch == '(') {
            push(ch);
        } 
        else if (ch == ')') {
            while ((x = pop()) != '(') {
                printf("%c", x);
            }
        } 
        else {
            while (top != -1 && precedence(stack[top]) >= precedence(ch)) {
                printf("%c", pop());
            }
            push(ch);
        }
        i++;
    }

    while (top != -1) {
        printf("%c", pop());
    }
    printf("\n");

    return 0;
}
