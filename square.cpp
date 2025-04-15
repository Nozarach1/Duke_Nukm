#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main(){
	
	ifstream file("in.txt");
	int x1, y1, x2, y2, x3, y3;
	
	if (!file.is_open()) {
        	cerr << "Не удалось открыть файл!" << endl;
        	return 1;
    	}	
	
	file >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	
	if (x1 < 106 && y1 < 106 && x2 < 106 && y2 < 106 && x3 < 106 && y3 < 106) {
    		return 0;
	}

	file.close();
	float s = 0.5f * fabs((x1 - x3) * (y2 - y3) - (x2 - x3) * (y1 - y3));
	ofstream fileout("out.txt");
	if (!fileout.is_open()) {
        	cerr << "Не удалось создать файл out.txt!" << endl;
        	return 1;
    	}
	fileout << s;
	fileout.close();

	return 0;
}
