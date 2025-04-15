#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	int num;
	cin >> num;
	if(num %2 == 0 or num % 3  == 0)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
