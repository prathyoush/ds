/* Program 16
   Program for Evaluation of postfix expression */

#include<iostream.h>
#include<conio.h>
#include<math.h>

class example
{
private:
 float stack[10];
 int top;
public:
void push(char);
float pop();
float eval(char [],float []);
example()
{
top=-1;
}
};
float example::eval(char suffix[],float data[])
{
int i=0;
float op1,op2,res;
char ch;
while(suffix [i]!='\0')
{
ch=suffix[i];
if((ch>='a' && ch<=122) || (ch>=65 && ch<=90))
{
push(data[i]);
}
else
{
 float res=1;

op2=pop();
op1=pop();
switch(ch)
{
case '+': push(op1+op2);
	  break;
case '-': push(op1-op2);
	  break;
case '*': push(op1*op2);
	  break;
case '/': push(op1/op2);
	  break;
case '^':// push(pow(op1,op2));
	  for(int k=1;k<=op2;k++)
	  res=res*op1;
	  push(res);
	  break;
} }
i++;
}
res=pop();
return(res);
}
void example::push(char num)
{
top=top+1;

stack[top]=num;

}
float example::pop()
{
float num;
num=stack[top];
top=top-1;
return(num);
}
void main()
{
example obj;
int i=0;
char suffix[20];
float value[20],result;
clrscr();
cout<<"enter a valid postfix expression in the form ab+"<<endl;
cin>>suffix;
while(suffix [i]!='\0')
{
//if(isalpha(suffix [i]))
char a=suffix[i];

if((a>='a' && a<=122) || (a>=65 && a<=90))
{
cout<<endl<<"enter the value of "<<suffix[i]<<endl;
cin>>value[i];
}
i++;
}
result=obj.eval(suffix,value);
cout<<"the result="<<result<<endl;
getch();
}