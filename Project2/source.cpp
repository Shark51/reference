#include<iostream>

int change_val(int *p) {
	*p = 3;

	return 0;
}


int main() {
	using std::cout;
	using std::endl;
	/*
	int number = 5;

	cout << number << endl;
	change_val(&number);
	cout << number << endl;
	*/

	int a = 3;
	int &another_a = a;

	another_a = 5;
	cout << "a: " << a << endl;
	cout << "another_a: " << another_a << endl;

	cout << "show me something like the best ";

}