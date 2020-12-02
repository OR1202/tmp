#include<iostream>
#include<string>
#include<vector>

using std::cout; using std::cin; using std::cerr; using std::vector; using std::string;

int main()
{
	vector<int> ia;
	if (get(ia)) print(ia);
	else { cerr << "input error\n"; return 1; }
	cin.clear();

	int x;
	if (get(x)) cout << "get " << x << "\n";
	else { cerr << "input error\n"; return 1; }
	cin.clear();

	int n0 = find(ia, x);
	if (n0 < ia.size()) 
		cout << "ia[" << n0 << "] = " << ia[n0] << "\n";

	vector<string> sa;
	if (get(sa)) print(sa);
	else { cerr << "input error\n"; return 1; }
	cin.clear();

	string city;
	if (get(city)) cout << "get " << city << "\n";
	else { cerr << "input error\n"; return 1; }
	int n = find(sa, city);
	if (n < city.size()) 
		cout << "sa[" << n << "] = " << sa[n] << "\n";

	return 0;
}
