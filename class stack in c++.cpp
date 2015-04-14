#include <iostream>
#include <conio.h>
using namespace std;
const int stack_size =100;
class stack {
private:
	int count;
	int data[stack_size];
public:
	void init(void);
	void push(const int item);
	int pop(void);
};
inline void stack::init(void)
{
	count=0;
}
inline void stack::push(const int item)
{
	data[count]=item;
	++count;
}
inline int stack::pop(void)
{
	--count;
	return (data[count]);
}
int main()
{
	stack a_stack;
	a_stack.init();//khoi tao stack null
	a_stack.push(1);
	a_stack.push(2);
	a_stack.push(3);
	cout<<a_stack.pop()<<'\n';
	cout<<a_stack.pop()<<'\n';
	cout<<a_stack.pop()<<'\n';
	getch();
}
