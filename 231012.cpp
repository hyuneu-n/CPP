/*
#include <iostream>
using namespace std;

//함수의 원형 선언
int addArray(int a[], int size); 
void makeDouble(int a[], int size);
void printArray(int a[], int size);

int main() {

	cout << "2022307022 서현은" << endl << endl;
	cout << "[실습 8] 예제 6-3" << endl << endl;

	int n[] = { 1,2,3 };
	
	//배열 n[]과 개수를 매개 변수에 전달
	int sum = addArray(n, 3);
	cout << "배열 n의 합은 " << sum << "입니다" << endl;

	makeDouble(n, 3); //배열 n과 개수 3을 매개변수에 전달
	printArray(n, 3); //배열 n과 개수 3을 매개변수에 전달

	for (int i = 0; i < 3; i++)
		cout << n[i] << ' ';
	cout << endl;
}

//배열과 개수를 전달받아 합을 리턴하는 함수
int addArray(int a[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += a[i];
	return sum;
}

//배열의 값을 두 배로 증가시키는 함수
void makeDouble(int a[], int size) {
	for (int i = 0; i < size; i++)
		a[i] *= 2;
}

//배열을 출력하는 함수
void printArray(int a[], int size) {
	for (int i = 0; i < size; i++)
		cout << a[i] << ' ';
	cout << endl;
}
*/
/*
#include <iostream>
using namespace std;

class Circle{
public:
	int radius;
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {

	cout << "2022307022 서현은" << endl << endl;
	cout << "[실습 9] 예제 3-1" << endl << endl;

	Circle donut;
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;

	Circle hamburger;
	hamburger.radius = 5;
	area = hamburger.getArea ();
	cout << "hamburger 면적은 " << area << endl;
}
*/
/*
#include <iostream>
using namespace std;

class Rectangle {
public:
	int width;
	int height;
	int getArea();
};

int Rectangle::getArea() {
	return width * height;
}

int main() {

	cout << "2022307022 서현은" << endl << endl;
	cout << "[실습 10] 예제 3-2" << endl << endl;

	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	cout << "사각형의 면적은 " << rect.getArea() << endl;
}
*/
/*
#include <iostream>
using namespace std;

int Bigger(int a, int b); //함수원형 선언

int main() {

	cout << "2022307022 서현은" << endl << endl;
	cout << "[과제 6] 2장 실습연습문제 3번" << endl << endl;
	
	//m, n 입력받기
	int m, n;
	cout << "두 수를 입력하라 >> ";
	cin >> m >> n;

	cout << "큰 수 = " << Bigger(m, n);
}

//큰 수를 반환하는 함수
int Bigger(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}
*/
/*
#include <iostream>
using namespace std;

double getMax(double arr[], int size); //함수원형 선언

int main() {

	cout << "2022307022 서현은" << endl << endl;
	cout << "[과제 6] 2장 실습연습문제 4번" << endl << endl;

	//배열에 실수 5개 입력받기
	double a[5];
	cout << "5개의 실수를 입력하라 >> ";
	for (int i = 0; i < 5; i++)
		cin >> a[i];

	//최댓값 출력받기
	cout << "제일 큰 수 = " << getMax(a, 5);
}

double getMax(double arr[], int size) {
	double max = arr[0];
	for (int i = 0; i < size; i++) {
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}
*/