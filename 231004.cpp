/*
#include <iostream>
using namespace std;

int bigger(int a, int b); //두 개의 정수를 받아 큰 값을 리턴하는 함수원형 선언
bool divideBy3(int n); //매개변수가 3으로 나누어지면 true, 아니면 false를 리턴하는 함수원형 선언

int main() {
	int a, b, n;

	cout << "2022307022 서현은" << endl << endl;
	cout << "[실습 4] 예제 6-2" << endl << endl;

	cout << "두 개의 정수 입력 >> ";
	cin >> a >> b;
	cout << endl;
	//함수 bigger() 호출
	n = bigger(a, b);
	cout << a << "와 " << b << "중 큰 값은" << n << "입니다." << endl;

	//함수 divideBy3() 호출
	if (divideBy3(n))
		cout << n << "은" << "3의 배수입니다." << endl;
	else
		cout << n << "은 " << "3의 배수가 아닙니다." << endl;
}

int bigger(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}

bool divideBy3(int n) {
	if (n % 3 == 0)
		return true;
	else
		return false;
}
*/
/*
#include <iostream>
using namespace std;

//함수원형 선언
bool isMultiple(int m, int n);

int main() {

	cout << "2022307022 서현은" << endl << endl;
	cout << "[과제 4] 연습문제 5번" << endl << endl;

	//두 정수 입력받기
	int m, n;
	cout << "두 정수 입력 >>  ";
	cin >> m >> n;

	//조건이 참이면 Yes, 거짓이면 No 출력
	if (isMultiple(m, n))
		cout << "Yes";
	else
		cout << "No";
}

//함수 작성
bool isMultiple(int m, int n) {
	if (n % m == 0)
		return true;
	else
		return false;
}
*/
/*
#include <iostream>
using namespace std;

int GetArea(int w, int h); //사각형의 면적 계산하는 함수원형 선언

int main() {

	cout << "2022307022 서현은" << endl << endl;
	cout << "[실습 5] 예제 2-3" << endl << endl;

	//너비 입력받기
	int width;
	cout << "너비를 입력하세요 >> ";
	cin >> width;

	//높이 입력받기
	int height;
	cout << "높이를 입력하세요 >> ";
	cin >> height;

	//사각형의 면적 계산
	int Area;
	Area = GetArea(width, height);
	cout << endl <<"면적은 " << Area << endl;
}
//사각형의 면적 계산하는 함수
int GetArea(int w, int h) {
	return w * h;
}
*/
/*
#include <iostream>
#include <cstring>
using namespace std;

int main() {

	cout << "2022307022 서현은" << endl << endl;
	cout << "[실습 6] 예제 2-5" << endl << endl;

	char password[11];
	cout << "프로그램을 종료하려면 암호를 입력하세요." << endl;
	while (true) {
		cout << "암호 >> ";
		cin >> password;
		if (strcmp(password, "C++") == 0) {
			cout << "프로그램을 정상 종료합니다." << endl;
			break;
		}
		else
			cout << "암호가 틀립니다~~" << endl;
	}
}
*/
/*
#include <iostream>
using namespace std;

int main() {

	cout << "2022307022 서현은" << endl << endl;
	cout << "[실습 7] 예제 2-6" << endl << endl;

	cout << "주소를 입력하세요 >> ";
	
	char address[100];
	cin.getline(address, 100, '\n');

	cout << "주소는 " << address << "입니다." << endl;
}
*/