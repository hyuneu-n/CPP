/*
#include <iostream>
using namespace std;

int bigger(int a, int b); //�� ���� ������ �޾� ū ���� �����ϴ� �Լ����� ����
bool divideBy3(int n); //�Ű������� 3���� ���������� true, �ƴϸ� false�� �����ϴ� �Լ����� ����

int main() {
	int a, b, n;

	cout << "2022307022 ������" << endl << endl;
	cout << "[�ǽ� 4] ���� 6-2" << endl << endl;

	cout << "�� ���� ���� �Է� >> ";
	cin >> a >> b;
	cout << endl;
	//�Լ� bigger() ȣ��
	n = bigger(a, b);
	cout << a << "�� " << b << "�� ū ����" << n << "�Դϴ�." << endl;

	//�Լ� divideBy3() ȣ��
	if (divideBy3(n))
		cout << n << "��" << "3�� ����Դϴ�." << endl;
	else
		cout << n << "�� " << "3�� ����� �ƴմϴ�." << endl;
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

//�Լ����� ����
bool isMultiple(int m, int n);

int main() {

	cout << "2022307022 ������" << endl << endl;
	cout << "[���� 4] �������� 5��" << endl << endl;

	//�� ���� �Է¹ޱ�
	int m, n;
	cout << "�� ���� �Է� >>  ";
	cin >> m >> n;

	//������ ���̸� Yes, �����̸� No ���
	if (isMultiple(m, n))
		cout << "Yes";
	else
		cout << "No";
}

//�Լ� �ۼ�
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

int GetArea(int w, int h); //�簢���� ���� ����ϴ� �Լ����� ����

int main() {

	cout << "2022307022 ������" << endl << endl;
	cout << "[�ǽ� 5] ���� 2-3" << endl << endl;

	//�ʺ� �Է¹ޱ�
	int width;
	cout << "�ʺ� �Է��ϼ��� >> ";
	cin >> width;

	//���� �Է¹ޱ�
	int height;
	cout << "���̸� �Է��ϼ��� >> ";
	cin >> height;

	//�簢���� ���� ���
	int Area;
	Area = GetArea(width, height);
	cout << endl <<"������ " << Area << endl;
}
//�簢���� ���� ����ϴ� �Լ�
int GetArea(int w, int h) {
	return w * h;
}
*/
/*
#include <iostream>
#include <cstring>
using namespace std;

int main() {

	cout << "2022307022 ������" << endl << endl;
	cout << "[�ǽ� 6] ���� 2-5" << endl << endl;

	char password[11];
	cout << "���α׷��� �����Ϸ��� ��ȣ�� �Է��ϼ���." << endl;
	while (true) {
		cout << "��ȣ >> ";
		cin >> password;
		if (strcmp(password, "C++") == 0) {
			cout << "���α׷��� ���� �����մϴ�." << endl;
			break;
		}
		else
			cout << "��ȣ�� Ʋ���ϴ�~~" << endl;
	}
}
*/
/*
#include <iostream>
using namespace std;

int main() {

	cout << "2022307022 ������" << endl << endl;
	cout << "[�ǽ� 7] ���� 2-6" << endl << endl;

	cout << "�ּҸ� �Է��ϼ��� >> ";
	
	char address[100];
	cin.getline(address, 100, '\n');

	cout << "�ּҴ� " << address << "�Դϴ�." << endl;
}
*/