#include <vector>
#include <iostream>
int main() {
	using namespace std;
	vector<int> a;
	a.push_back(2);
	vector<int> ::iterator b;
	b = a.begin();
	cout << *b << endl;
	system("pause");
	return 0;
}