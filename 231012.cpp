/*
#include <iostream>
using namespace std;

//�Լ��� ���� ����
int addArray(int a[], int size); 
void makeDouble(int a[], int size);
void printArray(int a[], int size);

int main() {

	cout << "2022307022 ������" << endl << endl;
	cout << "[�ǽ� 8] ���� 6-3" << endl << endl;

	int n[] = { 1,2,3 };
	
	//�迭 n[]�� ������ �Ű� ������ ����
	int sum = addArray(n, 3);
	cout << "�迭 n�� ���� " << sum << "�Դϴ�" << endl;

	makeDouble(n, 3); //�迭 n�� ���� 3�� �Ű������� ����
	printArray(n, 3); //�迭 n�� ���� 3�� �Ű������� ����

	for (int i = 0; i < 3; i++)
		cout << n[i] << ' ';
	cout << endl;
}

//�迭�� ������ ���޹޾� ���� �����ϴ� �Լ�
int addArray(int a[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += a[i];
	return sum;
}

//�迭�� ���� �� ��� ������Ű�� �Լ�
void makeDouble(int a[], int size) {
	for (int i = 0; i < size; i++)
		a[i] *= 2;
}

//�迭�� ����ϴ� �Լ�
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

	cout << "2022307022 ������" << endl << endl;
	cout << "[�ǽ� 9] ���� 3-1" << endl << endl;

	Circle donut;
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut ������ " << area << endl;

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;

	Circle hamburger;
	hamburger.radius = 5;
	area = hamburger.getArea ();
	cout << "hamburger ������ " << area << endl;
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

	cout << "2022307022 ������" << endl << endl;
	cout << "[�ǽ� 10] ���� 3-2" << endl << endl;

	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	cout << "�簢���� ������ " << rect.getArea() << endl;
}
*/
/*
#include <iostream>
using namespace std;

int Bigger(int a, int b); //�Լ����� ����

int main() {

	cout << "2022307022 ������" << endl << endl;
	cout << "[���� 6] 2�� �ǽ��������� 3��" << endl << endl;
	
	//m, n �Է¹ޱ�
	int m, n;
	cout << "�� ���� �Է��϶� >> ";
	cin >> m >> n;

	cout << "ū �� = " << Bigger(m, n);
}

//ū ���� ��ȯ�ϴ� �Լ�
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

double getMax(double arr[], int size); //�Լ����� ����

int main() {

	cout << "2022307022 ������" << endl << endl;
	cout << "[���� 6] 2�� �ǽ��������� 4��" << endl << endl;

	//�迭�� �Ǽ� 5�� �Է¹ޱ�
	double a[5];
	cout << "5���� �Ǽ��� �Է��϶� >> ";
	for (int i = 0; i < 5; i++)
		cin >> a[i];

	//�ִ� ��¹ޱ�
	cout << "���� ū �� = " << getMax(a, 5);
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