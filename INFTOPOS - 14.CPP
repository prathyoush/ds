/* Program 14
   Program for infix to postfix conversion */
#include<iostream.h>
#include<conio.h>
#include<string.h>
class exp
{
char infix[30],postfix[30],stk[20];
int top;
public:
exp()
{
top=-1;
}
void input()
{
cout<<"\n enter the infix expression";
cin>>infix;
}
void display();
char pop();
void push(char symbol);
void convert();
int priority(char symbol);
};
void exp::push(char symbol)
{
if(top>19)
cout<<"\n overflow";
else
{
top++;
stk[top]=symbol;
}
}
char exp::pop()
{
char symbol;
if(top==-1)
cout<<"\n underflow";
else
{
symbol=stk[top];
top--;
}
return (symbol);
}
int exp::priority(char symbol)
{
int value;
switch(symbol)
{
case'^':value=3;
break;
case'*':
case'/':value=2;
break;
case'+':
case'-':value=1;
break;
case'(':
case')':value=0;
break;
}
return(value);
}
void exp::convert()
{
char symbol,n;
int len,pf=0;
len=strlen(infix);
for(int i=0;i<len;i++)
{
symbol=infix[i];
switch(symbol)
{
case'(':push(symbol);
break;
case')':
do
{
n=pop();
if(n=='(')
break;
else
{
postfix [pf]=n;
pf++;
}
}
while(n!='(');
break;
case'+':
case'-':
case'*':
case'/':
case'^':
while(priority(stk[top])>=priority(symbol))
{
postfix [pf]=pop();
pf++;
}
push(symbol);
break;
default:postfix[pf++]=symbol;
}
}
while(top>-1)
{
postfix[pf++]=pop();
postfix[pf]='\0';
}
}
void exp::display()
{
cout<<"\n the postfix expression equivalent to ";
cout<<infix<< " is "<<postfix;
}
void main()
{
clrscr();
exp i;
i.input();
i.convert();
i.display();
getch();
}
