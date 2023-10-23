/*
#include <iostream>
using namespace std;

int main() {
	int gugudan[10][10];
	int start;
	int end;

	cout << "2022307022 서현은" << endl << endl;
	cout << "[과제 3] 구구단 프로그램" << endl << endl;

	//구구단 전체단 출력
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j <= 9; j++) {
			gugudan[i][j] = i * j;
			cout << j << "x" << i << "=" << gugudan[i][j] << "\t";
		}
		cout << endl;
}

	//시작 및 끝단 입력받기
	cout << "시작단을 입력하세요 >> ";
	cin >> start;

	cout << "끝단을 입력하세요 >> ";
	cin >> end;
	cout << endl;

	//2차원 배열에 저장 및 출력
	for (int i = 1; i < 10; i++) {
		for (int j = start; j <= end; j++) {
			gugudan[i][j] = i * j;
			cout << j << "x" << i << "=" << gugudan[i][j] << "\t";
		}
		cout << endl;
	}
}
*/