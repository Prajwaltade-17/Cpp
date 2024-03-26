#include<iostream>
#define MAX_SIZE 100
using namespace std;
 class Stack{
 	private:
 	int top;
 	
 	int stackArray[MAX_SIZE];
 	public:
 		Stack(){
 			top=-1;
 			 	
		 }
		 bool isEmpty(){
		 	return top==-1;
		 }
		 bool isFull(){
		 	return top==MAX_SIZE-1;
		 }
 	void push(int item)
	 {
 		if(isFull())
		 {
		 
 		std::cout<<"overflow"<<item<<std::endl;
 		return;
 	    }
 	
 	    stackArray[++top]=item;
 	    std::cout<<item<<"pushed"<<std::endl;
 	}
 	    
    int pop()
    {
		 if(isEmpty())
		 {
		 	std::cout<<"underflow"<<std::endl;
		 	return -1;
		 }
		 return stackArray[top--];
	}
	 int peek()
	 {
		 if(isEmpty()){
		 	std::cout<<"stack is empty"<<std::endl;
		 	return -1;
		
		 }	
		 	return stackarray[top];
		 	
		 }
		 
	 
 };
 int main()
 {
 	Stack stack;
 	stack.push(10);
 	stack.push(20);
 	stack.push(30);
 	stack.pop();
 	stack.pop();
 }
