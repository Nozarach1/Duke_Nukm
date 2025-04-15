#include <iostream>

using namespace std;

int main(){
	int x1, y1;
	int x2, y2;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	if(x1 != x2 and y1 != y2){
		cout << "YES" << endl;
	}else {	
		cout << "NO" << endl;
	}
}
