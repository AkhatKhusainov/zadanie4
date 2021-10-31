#include<iostream>
using namespace std;
void print_array(int N, int a[]) {
	for (int i = 0; i < N; i++) {
		cout << a[i]<< ' ';
	}

}
void ex1() {
	cout << "ex1" << endl;
	int N;
	int D;
	
	int sum;
	cin >> N;
	cin >> D;
	
	int a[20];
	a[0] = N;
	for (int i = 1; i < 20; i++) {
		
		a[i] =a[i-1] + D;
		
	}
	print_array(20, a);
}
void ex2() {
	int n;
	cout << endl << "ex2" << endl;
	cin >> n;
	

	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		a[i] = i + 1;
	}
	print_array(n, a);
}

int main(){
	ex1();
	ex2();
	
}
