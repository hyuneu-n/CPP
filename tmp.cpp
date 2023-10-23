/*
#include <iostream>
using namespace std;

class Rectangle {
public:
	int width;
	int height;
	int getArea();
	void setWidth(int w);
	void setHeight(int w);
};

int Rectangle::getArea() {
	return width * height;
}

void Rectangle::setWidth(int w) {
	width = w;
}

void Rectangle::setHeight(int h) {
	height = h;
}

int main() {
	cout << "2022307022 서현은" << endl << endl;
	cout << "[]예제 3-2 변형" << endl << endl;

	Rectangle rect;
	int a, b;
	cout << "width와 height를 입력하세요 >> ";
	cin >> a >> b;
	rect.setWidth(a);
	rect.setHeight(b);
	cout << "사각형의 면적은 " << rect.getArea() << endl;
}
*/
/*
#include <iostream>
using namespace std;

int main() {
	cout << "2022307022 서현은" << endl << endl;
	cout << "[] 포인터 실습" << endl << endl;

	int n = 10; //정수 n 선언
	int* p; //정수형 포인터 선언
	p = &n; //n의 주소값을 p에 저장
	*p *= 2; //p의 값을 2배
	cout << *p;
}
*/
/*
#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle(); //생성자
	Circle(int r); //매개변수를 가진 생성자
	double getArea(); //원 넓이를 구하는 멤버함수
};

Circle::Circle() {
	radius = 1;
	cout << "반지름 " << radius << "원 생성" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << "원 생성" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	cout << "2022307022 서현은" << endl << endl;
	cout << "[실습 11] 예제 3-3" << endl << endl;

	Circle donut;
	cout << "donut 면적은 " << donut.getArea() << endl;
	Circle pizza(30);
	cout << "pizza 면적은 " << pizza.getArea() << endl;
	Circle cake(15);
	cout << "cake 면적은 " << cake.getArea() << endl;
}
*/
/*
#include <iostream> 
using namespace std;

class Circle {
	int radius;
public:
	Circle(); //위임 생성자
	Circle(int r); //매개변수를 가진 타겟 생성자
	double getArea(); //원 넓이를 구하는 멤버함수
};

Circle::Circle() :Circle(1) {} // 위임 생성자

Circle::Circle(int r) { //타겟 생성자
	radius = r;
	cout << "반지름 " << radius << "원 생성" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	cout << "2022307022 서현은" << endl << endl;
	cout << "[] 예제 3-4" << endl << endl;

	Circle donut;
	cout << "donut 면적은 " << donut.getArea() << endl;
	Circle pizza(30);
	cout << "pizza 면적은 " << pizza.getArea() << endl;
	Circle cake(15);
	cout << "cake 면적은 " << cake.getArea() << endl;
}
*/
/*
#include <iostream> 
using namespace std;

class Circle {
	int radius;
public:
	Circle(); //위임 생성자
	Circle(int r); //매개변수를 가진 타겟 생성자
	double getArea(); //원 넓이를 구하는 멤버함수
};

Circle::Circle() :Circle(1) {} // 위임 생성자

Circle::Circle(int r):radius(r) { //타겟 생성자
	cout << "반지름 " << radius << "원 생성" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	cout << "2022307022 서현은" << endl << endl;
	cout << "[] 예제 3-4 변형" << endl << endl;

	Circle donut;
	cout << "donut 면적은 " << donut.getArea() << endl;
	Circle pizza(30);
	cout << "pizza 면적은 " << pizza.getArea() << endl;
	Circle cake(15);
	cout << "cake 면적은 " << cake.getArea() << endl;
}
*/
/*
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

Rectangle::Rectangle() :Rectangle(1, 1) {}
Rectangle::Rectangle(int n) :Rectangle(n, n) {}
Rectangle::Rectangle(int w, int h) :width(w), height(h) {}

// 정사각형이면 true를 리턴하는 멤버 함수
bool Rectangle::isSquare() {
	if (width == height) 
		return true;
	else 
		return false;
}

int main() {
	cout << "2022307022 서현은" << endl << endl;
	cout << "[] 예제 3-6" << endl << endl;

	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
	if (rect2.isSquare()) cout << "rect2는 정사각형이다." << endl;
	if (rect3.isSquare()) cout << "rect3는 정사각형이다." << endl;
}
*/
/*
//실습문제 1번
#include <iostream>
using namespace std;

//Tower 클래스 선언
class Tower {
	int height = 0; //높이
public:
	Tower(); //생성자
	Tower(int h); //매개변수가 있는 생성자
	~Tower(); //소멸자
	int GetHeight(); //높이를 반환하는 멤버함수
};

Tower::Tower() :Tower(1) {}
Tower::Tower(int h):height(h){}
Tower::~Tower() {
	cout << "높이는 " << GetHeight() << "미터" << endl;
}
int Tower::GetHeight() {
	return height;
}

int main() {
	cout << "2022307022 서현은" << endl << endl;
	cout << "[과제 7] 실습문제 1번" << endl << endl;

	Tower seoulTower(100); //100미터
	Tower myTower; //1미터
}
*/

//[과제 8] 실습문제 3번
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Account {
//	string name; //계좌주인 이름
//	int id; //계좌번호
//	int balance; //잔액
//public:
//	Account(); //생성자
//	~Account(); //소멸자
//	Account(string n, int i, int b); //3개의 매개변수를 가진 생성자
//	string getOwner(); //계좌 주인명 반환
//	void deposit(int in); //입금
//	int withdraw(int out); //출금한 실제 금액 반환
//	int inquiry(); //잔액을 반환하는 멤버함수
//};
//
////초기화
//Account::Account() :Account("홍길동", 0, 0) {}
//Account::~Account() {}
//Account::Account(string n, int i, int b) :name(n), id(i), balance(b) {}
//
//string Account::getOwner() {
//	return name;
//}
//void Account::deposit(int in) {
//	balance += in;
//}
//int Account::withdraw(int out) {
//	balance -= out;
//	return out;
//}
//int Account::inquiry() {
//	return balance;
//}
//
//int main() {
//	cout << "2022307022 서현은" << endl << endl;
//	cout << "[과제 7] 실습문제 3번" << endl << endl;
//
//	Account a("kitae", 1, 5000);
//	a.deposit(50000); //50000원 저금
//	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
//	int money = a.withdraw(20000); //20000원 출금
//	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
//}