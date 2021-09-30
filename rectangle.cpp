#include <iostream>
using namespace std;
int main() {
	int length;
	int width;
	int area;
	int perimeter; 
	cout << "Enter Length" << endl;
	cin >> length;
	cout << "Enter width" << endl;
	cin >> width;
	area = length * width;
	perimeter = length + width;
		perimeter = width + length;
		cout << "perimeter = " << perimeter; 
	cout << "area =" << area;


}
