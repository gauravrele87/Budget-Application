#include"Account.h"
#include<iostream>

ifstream& operator>>(ifstream& inStream, Account& accounts){
	inStream >> accounts.id >> accounts.is_budget_account >> accounts.balance;
	inStream.get();
	getline(inStream, accounts.title);
	cout << accounts.id << " " << accounts.is_budget_account << " " << accounts.balance << " " << accounts.title << endl;
	/*getline(inStream, line,' '); 
	accounts.id = stoi(line);
	accounts.is_budget_account = stoi;
	getline(inStream, accounts.title, ' ');
	getline(inStream, line);
	accounts.balance = stof(line);*/
	return inStream;
}

ofstream& operator<< (ofstream& outStream, const Account& accounts){
	outStream << accounts.id <<" "<<accounts.is_budget_account<<" "<< accounts.balance<<" "<<accounts.title<<endl;
	return outStream;
}

ostream& operator<< (ostream& outStream, const Account& accounts){
		outStream.unsetf(ios::floatfield);
		outStream.setf(ios::showpoint);
		outStream.setf(ios::fixed);
		outStream.precision(2);
		if (accounts.is_budget_account){
			outStream << accounts.id << "* " <<" $" << accounts.balance << " " << accounts.title << endl;
			return outStream;
		}
		outStream << accounts.id << " " << " $" << accounts.balance << " " << accounts.title << endl;
		return outStream;
}
