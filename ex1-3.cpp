#include<iostream>
using namespace std;
void print_array(int N, int a[]) {
	for (int i = 1; i <= N; i++) {
		cout << a[i]<< ' ';
	}

}
void ex1() {
	int N;
	int D;
	cin >> N;
	cin >> D;
	int a[20];
	for (int i = N; i <= 20; i++) {
		a[i] = i + D;
	}
	print_array(20, a);
}
int main(){
	ex1();
}
