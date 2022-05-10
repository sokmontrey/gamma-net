#include <iostream>
#include <vector>

using namespace std;

#include "./Matrix/matrix.hh"

int main(){
	Matrix a(vector<vector<double>> {{1,2,3}, {4,5,6}});
	Matrix b(vector<vector<double>> {{1,2,3}, {1,2,3}});
	Matrix c = Matrix::add(a, b);
	c.print();
	cout << endl;
}
