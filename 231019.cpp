/*
#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "������ " << radius << " �� ����" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ " << radius << " �� ����" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	cout << "2022307022 ������" << endl << endl;
	cout << "[�ǽ� 11] ���� 3-3" << endl << endl;

	Circle donut;
	cout << "donut ������ " << donut.getArea() << endl;
	Circle pizza(30);
	cout << "pizza ������ " << pizza.getArea() << endl;
	Circle cake(20);
	cout << "cake ������ " << cake.getArea() << endl;
}
*/
/*
#include <iostream> 
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle() :Circle(1) {} //���ӻ�����

Circle::Circle(int r) {
	radius = r;
	cout << "������ " << radius << "�� ����" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	cout << "2022307022 ������" << endl << endl;
	cout << "[�ǽ� 12] ���� 3-3 ���� �����ڷ�" << endl << endl;

	Circle donut;
	cout << "donut ������ " << donut.getArea() << endl;
	Circle pizza(30);
	cout << "pizza ������ " << pizza.getArea() << endl;
	Circle cake(20);
	cout << "cake ������ " << cake.getArea() << endl;
}
*/
/*
#include <iostream> 
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle() :Circle(1) {} // ���� ������

Circle::Circle(int r) :radius(r) { //�ʱ�ȭ
	cout << "������ " << radius << "�� ����" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	cout << "2022307022 ������" << endl << endl;
	cout << "[�ǽ� 13] 2�� �ʱ�ȭ ���" << endl << endl;

	Circle donut;
	cout << "donut ������ " << donut.getArea() << endl;
	Circle pizza(30);
	cout << "pizza ������ " << pizza.getArea() << endl;
	Circle cake(20);
	cout << "cake ������ " << cake.getArea() << endl;
}
*/
/* (!�߿��߿�!)
#include <iostream>
using namespace std;

class Rectangle {
	int width, height;
public:
	Rectangle();
	Rectangle(int n);
	Rectangle(int w, int h);
	bool isSquare();
};

Rectangle::Rectangle():Rectangle(1,1) {}
Rectangle::Rectangle(int n) :Rectangle(n, n) {}
Rectangle::Rectangle(int w, int h) :width(w), height(h) {}

// ���簢���̸� true�� �����ϴ� ��� �Լ�
bool Rectangle::isSquare() {
	if (width == height)
		return true;
	else
		return false;
}

int main() {
	cout << "2022307022 ������" << endl << endl;
	cout << "[�ǽ� 14] ���� 3-6" << endl << endl;

	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare())
		cout << "rect1�� ���簢���̴�." << endl;
	if (rect2.isSquare())
		cout << "rect2�� ���簢���̴�." << endl;
	if (rect3.isSquare())
		cout << "rect3�� ���簢���̴�." << endl;
}
*/

//#include <iostream>
//using namespace std;
//
////Tower Ŭ���� ����
//class Tower {
//	int height = 0; //����
//public:
//	Tower(); //������
//	Tower(int h); //�Ű������� �ִ� ������
//	~Tower(); //�Ҹ���
//	int GetHeight(); //���̸� ��ȯ�ϴ� ����Լ�
//};
//
//Tower::Tower() :Tower(1) {}
//Tower::Tower(int h) :height(h) {}
//Tower::~Tower() {
//	cout << "���̴� " << GetHeight() << "����" << endl;
//}
//int Tower::GetHeight() {
//	return height;
//}
//
//int main() {
//	cout << "2022307022 ������" << endl << endl;
//	cout << "[���� 7] �ǽ����� 1��" << endl << endl;
//
//	Tower seoulTower(100); //100����
//	Tower myTower; //1����
//}
///#include <iostream>
//#include <string>
//using namespace std;
//
//class Account {
//    string name; //�������� �̸�
//    int id; //���¹�ȣ
//    int balance; //�ܾ�
//public:
//    Account(); //������
//    ~Account(); //�Ҹ���
//    Account(string n, int i, int b); //3���� �Ű������� ���� ������
//    string getOwner(); //���� ���θ� ��ȯ
//    void deposit(int in); //�Ա�
//    int withdraw(int out); //����� ���� �ݾ� ��ȯ
//    int inquiry(); //�ܾ��� ��ȯ�ϴ� ����Լ�
//};
//
////�ʱ�ȭ
//Account::Account() :Account("ȫ�浿", 0, 0) {}
//Account::~Account() {}
//Account::Account(string n, int i, int b) :name(n), id(i), balance(b) {}
//
//string Account::getOwner() {
//    return name;
//}
//void Account::deposit(int in) {
//    balance += in;
//}
//int Account::withdraw(int out) {
//    balance -= out;
//    return out;
//}
//int Account::inquiry() {
//    return balance;
//}
//
//int main() {
//    cout << "2022307022 ������" << endl << endl;
//    cout << "[���� 7] �ǽ����� 3��" << endl << endl;
//
//    Account a("kitae", 1, 5000);
//    a.deposit(50000); //50000�� ����
//    cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
//    int money = a.withdraw(20000); //20000�� ���
//    cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
//}
//
