//#include <iostream>
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
