/*
//�׽�Ʈ 1 [���ۼ��� �� ���� �Է¹޾� 3�� ������� �� ���ϱ�]
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	printf("2022307022 ������\n");

	int a;
	int b;
	int sum = 0;

	//���� �� �Է�
	printf("���ۼ��� �Է��ϼ��� >> ");
	scanf_s("%d", &a);

	//�� �� �Է�
	printf("������ �Է��ϼ��� >> ");
	scanf_s("%d", &b);

	//���� ������ �� ������ 3�� ��� ��
	for (int i = a; i <= b; i++)
		if (i % 3 == 0)
			sum += i;
	
	printf("%d���� %d���� 3�� ����� ���� %d�Դϴ�", a, b, sum);
	return 0;
}
*/
/*
//�ǽ� 1 [�� ���� ��]
#include <iostream>
using namespace std;

int main() {
	int a, b, sum;
	cout << "2022307022 ������" << endl;
	cout << "�� ���� ��" << endl;
	cin >> a >> b;
	sum = a + b;
	cout << sum;
}
*/
/*
//�ǽ� 2 [���� ���ϱ�]
#include <iostream>
using namespace std;

int main() {
	int score;
	cout << "2022307022 ������" << endl;
	cout << "[�ǽ� 2] ���� ���ϱ�" << endl;

	cout << "������ �Է��ϼ��� >> ";
	cin >> score;
	if (score > 100 || score < 0)
		cout << "�߸��� �����Դϴ�." << endl;
	
	switch (score / 10) {
		case 10:
		case 9:
			cout << "A �Դϴ�" << endl;
			break;
		case 8:
			cout << "B �Դϴ�" << endl;
			break;
		case 7:
			cout << "C �Դϴ�" << endl;
			break;
		case 6:
			cout << "D �Դϴ�" << endl;
			break;
		default:
			cout << "F �Դϴ�" << endl;
			break;
	}
}
*/
/*
//[���� 1] �� �� �� ū �� ���
#includ;e <iostream>
using namespace std;

int main() {
	int num1;
	int num2;
	int result;

	cout << "2022307022 ������" << endl << endl;
	cout << "[���� 1] �� ���� ū �� ���" << endl;

	cout << "���� �� ���� �������� �����Ͽ� �Է��ϼ��� >> ";
	cin >> num1 >> num2;

	result = (num1 > num2) ? num1 : num2;
	cout << "�� �� �� ū ���� " << result << "�Դϴ�";
	
}
*/

//3�� ����� �� ��� ���
#include <iostream>
using namespace std;

int main() {
	int start;
	int end;
	int sum = 0;
	char yn;

	cout << "2022307022 ������" << endl << endl;
	cout << "[���� 2] 3�� ����� �� ��� ���" << endl;

	while (true)
	{
		cout << endl << "====================================" << endl;
		cout << "���� ���� �Է��ϼ��� >> ";
		cin >> start;
		cout << "�� ���� �Է��ϼ��� >> ";
		cin >> end;

		for (int i = start; i <= end; i++)
			if (i % 3 == 0)
				sum += i;

		cout << endl;
		cout << start << "����" << end << "������ 3�� ������� ���� " << sum << "�Դϴ�." << endl;
		cout << "\n����Ͻðڽ��ϱ�? (y/n) >> ";
		cin >> yn;
		if (yn == 'n' || yn == 'N')
			break;
		else if (yn == 'y' || yn == 'Y')
			continue;
		else
			return 0;
	}
	cout << "\n===========�����մϴ�===========" << endl;
}

//���� = �ٸ�Ű�� �Է����� �� �� �����ϴ°�?