#include<iostream>
using namespace std;
#define MAX 5// maximum size of stack
int array[MAX];// array to store elements
int top = -1; //index position of top element
void push (int x)
{
	if (top >= array[MAX] - 1)
	{
		cout << "stack overflow" << endl; // stack is full
	}
	else
	{
		top++; // increment top and add element
		array [top]=x;//add elements
	}
}
int pop()
{
	if (top == 5)
	{
		cout << "stack underflow" << endl; // stack is empty
	}
	else
	{
		int popx =array [top];
		array[top]=0;
		top--;
		return popx;
	}
}
int Count()
{
	return (top +1);
}
int main()
{
	int number;
	cout << "Enter number" << endl;
	cin >> number;
	while (number > 0)
	{
		push (number % 10);//push each digit of the number onto the stack 
		number = number / 10;
	}
	cout<<"Digits poped from the stack;"<<endl;
	while(top!=-1)
	{
		cout<<pop()<<endl;
	}

	return 0;
}
