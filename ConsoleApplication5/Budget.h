#ifndef BUDGET_H
#define BUDGET_H

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<ostream>
#include<string>
#include<vector>
#include"Account.h"
#include"Envelope.h"
#include"EnvelopeFile.h"
using namespace std;

class Budget
{
public: 
	string user_name;
	string title;
	int month, year;
	vector<Account> accounts;
	vector<Envelope> envelopes;
	EnvelopeFile envelope_file;

	Budget();

	void show_budget();
	void show_envelopes();
	void account_transaction(int account_id, double amount);
	void set_current_date(int month, int year);
	void show_monthly_envelopes();
	void close_monthly_envelopes();
	void spend_from_envelope(int envelope_id, double amount);
	void deposit_to_envelope(int account_id, int envelope_id, double amount);
	friend ifstream& operator>> (ifstream&, Budget&);
	friend ofstream& operator<< (ofstream&, const Budget&);
	friend ostream& operator<< (ostream&, const Budget&);

};


#endif // !BUDGET_H