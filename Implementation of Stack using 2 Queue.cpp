/*Q4.Implementing a stack using two queue */

#include<iostream>
#include<queue>
using namespace std;

class Stack{
	private:
		queue<int> q1,q2,q;

	public:
		// Push of Stack
		int push(int val){
			q1.push(val);
			cout << "pushed :" << val << endl;
			return 1;
		}
  
		// Pop of Stack
		int pop(){
			if(q1.empty()){
				cout << "pop: stack is empty"<<endl;
				return -1;
			}
			while(q1.size() > 1){
				q2.push(q1.front());
				q1.pop();
			}
			int e = q1.front();
			q1.pop();
			q = q1;
			q1 = q2;
			q2 = q;
			cout << "pop :" << e << endl;
			return e;
		}
		// Top of stack

		int top(){
			if(q1.empty()){
				cout << "top: stack is empty"<<endl;
				return -1;
			}
			int e;
			while(!q1.empty()){
				e = q1.front();
				q2.push(e);
				q1.pop();
			}
			q = q1;
			q1 = q2;
			q2 = q;
			cout << "top :" << e << endl;
			return e;
		}
		// is Empty:

		bool isEmpty(){
			if(q1.size() == 0){
				return true;
			}
			return false;
		}

		// Stack size

		int size(){
			cout << q1.size() << endl;
			return 1;
		}

};

int main(void){
	Stack s;
	s.push(15);
	s.push(18);
	s.pop();
	s.top();
	s.pop();
	s.top();
	s.pop();
	s.top();
	s.push(20);
	s.push(23);
	s.size();
	s.top();
	return 0;
}


