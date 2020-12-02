#include<iostream>
#include<vector>

using std::cout; using std::vector;

int main() {
	int start = 0, end = 20, step = 2;

	cout << "range(0, 20, 2) = ";
	vector<int> int_list = range(start, end, step);
	print(int_list);

	cout << "range(10, 20) = ";
	start = 10; end = 20;
	print(range(start, end));

	cout << "range(10) = ";
	end = 9;
	print(range(end));

	cout << "Alphabet = ";
	vector<char> str_list;
	for (auto i : range('a', 'z'))
		str_list.push_back((char)i);
	print(str_list);

	return 0;
}
