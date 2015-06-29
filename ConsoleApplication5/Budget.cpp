#include"Budget.h"

Budget::Budget()
{
	Account tempAccount;
	Envelope tempEnvelope;
}

ifstream& operator>>(ifstream& inStream, Budget& budget){
	int account_count = 0, envelope_count = 0;
	string line;
	if (inStream.is_open())
	{
		getline(inStream, budget.user_name);
		getline(inStream, budget.title);
		inStream>> budget.month>> budget.year;
		inStream.get();
		cout << budget.user_name << "and" << budget.title << "and" << budget.month << " " << budget.year << "and" <<endl;
		//getline(inStream, month, ' ');
		//getline(inStream, year, ' ');
		//budget.month = stoi(month);
		//budget.year = stoi(year);
		inStream >> account_count;
		cout << account_count<<endl;
		for (int i = 0; i < account_count; i++)
		{
			Account tempAccount;
			inStream >> tempAccount;
			budget.accounts.push_back(tempAccount);
			//inStream.get();
		}
		inStream >> envelope_count;
		for (int i = 0; i < envelope_count; i++)
		{
			Envelope tempEnvelope;
			inStream >> tempEnvelope;
			budget.envelopes.push_back(tempEnvelope);
		}
	}
	return inStream;
}

ofstream& operator<< (ofstream& outStream, const Budget& budget){
	if (outStream.is_open())
	{
		outStream.setf(ios::fixed);
		outStream.setf(ios::showpoint);
		outStream.precision(2);
		outStream << budget.user_name << endl;
		outStream << budget.title << endl;
		outStream << budget.month << " " << budget.year << endl;
		outStream << budget.accounts.size()<<endl;
		for (int i = 0; i < budget.accounts.size(); i++){
			outStream << budget.accounts[i];
		}
		outStream << budget.envelopes.size()<< endl;
		for (int i = 0; i < budget.envelopes.size(); i++){
			outStream << budget.envelopes[i];
		}
		outStream.close();
	}
	else
	{
		cout << "File open failed.\n";
	}
	return outStream;
}

ostream& operator<< (ostream& outStream, const Budget& budget){
	outStream << "------ " << budget.user_name << " | " << budget.title << " ------" << endl;
	outStream << "----- " << budget.month << " " << budget.year << " -----" << endl;
	return outStream;
}

void Budget::show_envelopes(){
	cout << "------ " << user_name << " | " << title << " ------" << endl;
	cout << "----- " << month << " " << year << " -----" << endl;
	cout << envelopes.size() << " Envelopes:" << endl;
	for (int i = 0; i < envelopes.size(); i++){
		cout << envelopes[i];
	}
}

void Budget::show_budget()
{
	cout << "------ "<< user_name<< " | "<< title<< " ------" << endl;
	cout << "----- " << month << " " << year << " -----" << endl;
	cout << accounts.size() << " Accounts:" << endl;
	for (int i = 0; i < accounts.size(); i++){
		cout << accounts[i];
	}
}

void Budget::account_transaction(int account_id, double amount)
{
	for (int i = 0; i < accounts.size(); i++){
		if (accounts[i].id == account_id){
			accounts[i].balance = accounts[i].balance + amount;
		}
	}
}

void Budget::set_current_date(int month, int year){
	this->month = month;
	this->year = year;
}

void Budget::show_monthly_envelopes(){

}

void close_monthly_envelopes(){

}

void spend_from_envelope(int envelope_id, double amount){

}

void deposit_to_envelope(int account_id, int envelope_id, double amount){

}