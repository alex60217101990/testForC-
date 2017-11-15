#include<iomanip>
#include<windows.h>
#include<cmath>
#include<string>
#include"point2D.h"
#include <iostream>
#include <algorithm>
#include <iterator>
#include<vector>
using std::string;
using std::vector;
using std::iterator;
using std::setw;
bool hasDuplicate(const std::vector<point2D>& v, point2D & el)
{
	for (point2D t:v) {
		if (t == el)return true;
	}
	return false;
}

int main(int argc, char* argv[]){
		cout << "Pease enter the input data : " << endl;
		vector<int>input_data;
		int time=-1;
		vector<int>l_1;
		vector<int>l_2;
		vector<int>l_3;
		vector<point2D>lights;
		vector<point2D>lights2;
			for (int i = 0; i < 3; i++) {
				if (i == 0 || i==1) {
					 try{
						cin >> time;
						if (time < 1 || time>pow(10, 9))throw 1;
					 }
					 catch (int exep) {
						 cout << endl<<"error";
						 Sleep(2000); 
						 return 0;
					 }
				}
				if (i == 2) {
					try{
						cin >> time;
						if (time < 0 || time>1000)throw 2;
					}
					catch (int exep) {
						cout << endl << "error1";
						Sleep(2000);
						return 0;
					}
				}
				input_data.push_back(time);
			}
		cout << endl << "first line over" << endl;
		for (int i = 0; i < input_data[2]; i++) {
			for (int j = 0; j < 3; j++) {
				cin >> time;
				if (j == 0) {
					try {
						if (time < 1 || time>input_data[0])throw 3;
					}
					catch (int ex) {
						cout << endl << "error3";
						Sleep(2000);
						return 0;
					}
					l_1.push_back(time);
				}
				if (j == 1) { 
					try {
						if (time < 1 || time>input_data[1]) throw 4;
					}
					catch (int ex) {
						cout << endl << "error4";
						Sleep(2000);
						return 0;
					}
					l_2.push_back(time);
				}
				if (j == 2) l_3.push_back(time);
			}
		}
		int NumOfAvailableCoordinates = 0;
		int counter = 0;
		for (int i = 1; i <= input_data[0]; i++) {
			for (int j = 1; j <= input_data[1]; j++) {
				lights2.push_back(point2D(i, j));
			}
		}
		for (int w = 0; w < input_data[2]; w++) {
			for (int d = l_2[w]; d <= l_3[w]; d++) {
				if(hasDuplicate(lights, point2D(l_1[w], d))==false)
				lights.push_back(point2D(l_1[w], d));
			}
		}
		NumOfAvailableCoordinates = lights2.size() - lights.size();	
		cout << endl <<"number of available coordinates: "<<setw(3)<< NumOfAvailableCoordinates <<endl;
	system("pause");
	return 0;
}




