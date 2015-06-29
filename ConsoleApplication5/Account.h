#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<fstream>
#include<string>
#include<vector>
using namespace std;

struct Account
{
	int id;
	string title;
	double balance;
	bool is_budget_account;

	friend ifstream& operator>> (ifstream&, Account&);
	friend ofstream& operator<< (ofstream&, const Account&);
	friend ostream& operator<< (ostream&, const Account&);

};
#endif // !ACCOUNT_H
