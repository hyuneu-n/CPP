//#include <iostream>
//#include <string>
//using namespace std;
//
//class Account {
//    string name; //계좌주인 이름
//    int id; //계좌번호
//    int balance; //잔액
//public:
//    Account(); //생성자
//    ~Account(); //소멸자
//    Account(string n, int i, int b); //3개의 매개변수를 가진 생성자
//    string getOwner(); //계좌 주인명 반환
//    void deposit(int in); //입금
//    int withdraw(int out); //출금한 실제 금액 반환
//    int inquiry(); //잔액을 반환하는 멤버함수
//};
//
////초기화
//Account::Account() :Account("홍길동", 0, 0) {}
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
//    cout << "2022307022 서현은" << endl << endl;
//    cout << "[과제 7] 실습문제 3번" << endl << endl;
//
//    Account a("kitae", 1, 5000);
//    a.deposit(50000); //50000원 저금
//    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
//    int money = a.withdraw(20000); //20000원 출금
//    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
//}
//
