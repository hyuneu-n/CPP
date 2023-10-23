/*
//테스트 1 [시작수와 끝 수를 입력받아 3의 배수들의 합 구하기]
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	printf("2022307022 서현은\n");

	int a;
	int b;
	int sum = 0;

	//시작 수 입력
	printf("시작수를 입력하세요 >> ");
	scanf_s("%d", &a);

	//끝 수 입력
	printf("끝수를 입력하세요 >> ");
	scanf_s("%d", &b);

	//시작 수부터 끝 수까지 3의 배수 합
	for (int i = a; i <= b; i++)
		if (i % 3 == 0)
			sum += i;
	
	printf("%d부터 %d까지 3의 배수의 합은 %d입니다", a, b, sum);
	return 0;
}
*/
/*
//실습 1 [두 수의 합]
#include <iostream>
using namespace std;

int main() {
	int a, b, sum;
	cout << "2022307022 서현은" << endl;
	cout << "두 수의 합" << endl;
	cin >> a >> b;
	sum = a + b;
	cout << sum;
}
*/
/*
//실습 2 [학점 구하기]
#include <iostream>
using namespace std;

int main() {
	int score;
	cout << "2022307022 서현은" << endl;
	cout << "[실습 2] 학점 구하기" << endl;

	cout << "점수를 입력하세요 >> ";
	cin >> score;
	if (score > 100 || score < 0)
		cout << "잘못된 점수입니다." << endl;
	
	switch (score / 10) {
		case 10:
		case 9:
			cout << "A 입니다" << endl;
			break;
		case 8:
			cout << "B 입니다" << endl;
			break;
		case 7:
			cout << "C 입니다" << endl;
			break;
		case 6:
			cout << "D 입니다" << endl;
			break;
		default:
			cout << "F 입니다" << endl;
			break;
	}
}
*/
/*
//[과제 1] 두 수 중 큰 수 출력
#includ;e <iostream>
using namespace std;

int main() {
	int num1;
	int num2;
	int result;

	cout << "2022307022 서현은" << endl << endl;
	cout << "[과제 1] 두 수중 큰 수 출력" << endl;

	cout << "비교할 두 수를 공백으로 구분하여 입력하세요 >> ";
	cin >> num1 >> num2;

	result = (num1 > num2) ? num1 : num2;
	cout << "두 수 중 큰 수는 " << result << "입니다";
	
}
*/

//3의 배수의 합 계속 계산
#include <iostream>
using namespace std;

int main() {
	int start;
	int end;
	int sum = 0;
	char yn;

	cout << "2022307022 서현은" << endl << endl;
	cout << "[과제 2] 3의 배수의 합 계속 계산" << endl;

	while (true)
	{
		cout << endl << "====================================" << endl;
		cout << "시작 수를 입력하세요 >> ";
		cin >> start;
		cout << "끝 수를 입력하세요 >> ";
		cin >> end;

		for (int i = start; i <= end; i++)
			if (i % 3 == 0)
				sum += i;

		cout << endl;
		cout << start << "부터" << end << "까지의 3의 배수들의 합은 " << sum << "입니다." << endl;
		cout << "\n계속하시겠습니까? (y/n) >> ";
		cin >> yn;
		if (yn == 'n' || yn == 'N')
			break;
		else if (yn == 'y' || yn == 'Y')
			continue;
		else
			return 0;
	}
	cout << "\n===========종료합니다===========" << endl;
}

//문제 = 다른키를 입력했을 시 왜 종료하는가?