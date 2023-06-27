#include <bits/stdc++.h>
using namespace std;
class BankAccount {
public:
  string name;
  string address;
  int age;
  int acNo;
protected:
  int blance;
private:
  string password;
public:
  BankAccount(string name, string address, int age, string password) {
    this -> name = name;
    this -> address = address;
    this -> age = age;
    this -> password = password;
    this -> acNo = rand() % 1000000000;
    this -> blance = 0;
    cout << "Your Account No. is " << acNo << endl;

  }
  int ShowBlance (string password) {
    if (this -> password == password) return blance;
    else return -1;
  }
};
BankAccount* creatAccount () {
  string name, address, password;
  int age;
  cout << "Creat Account: \n";
  cin >> name >> address >> password >> age ;

  BankAccount *my_account = new BankAccount(name, address, age, password);
  return my_account;
}
int main () {
  BankAccount *account = creatAccount();
  if (account-> ShowBlance("Tanvir") == -1) cout << "Wrong Password, Try Again\n";
  else cout << "Your Blance is: " << account -> ShowBlance("Tanvir");
}
