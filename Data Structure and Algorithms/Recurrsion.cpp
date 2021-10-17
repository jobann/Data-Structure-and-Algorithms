#include <iostream>

using namespace std;

void fun(int x) {
	if (x > 0) {
		printf("%d ", x);
		fun(x - 1);
	}
}

int fun1(int n) {
	if (n > 0) {
		return fun1(n - 1) + n;
	}
	return 0;
}

int fun2(int n) {
	static int z = 0;
	if (n > 0) {
		z++;
		return fun2(n - 1) + z;
	}
	return 0;
}


// Tree Recursion
void treeRec(int n) {
	if (n > 0) {
		cout << n << " ";
		treeRec(n - 1);
		treeRec(n - 1);
	}
}

int main() {
	int x = 5;

	// Output: 5 4 3 2 1
	//fun(x);

	// Output: 15
	//cout << fun1(x);

	//Output: 25
	//cout << fun2(x);

	//Output: 3 2 1 1 2 1 1
	treeRec(3);

	return 0;

}

