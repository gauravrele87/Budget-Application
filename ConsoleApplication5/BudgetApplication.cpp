#include"BudgetApplication.h"

bool BudgetApplication::is_running(){
	if (menu.last_selection() != 0){
		return true;
	}
	else{
		return false;
	}
}

void BudgetApplication::prompt_loop(){
	//budget.show_budget();
	menu.show_menu();
	menu.prompt_for_selection();
	BudgetApplication::process_menu_selection();
}

void BudgetApplication::process_menu_selection(){
	double amount = 0;
	int account_id = 0;
	if (menu.last_selection() == 0){
		return;
		//exit(1);
	}
	if ((menu.last_selection() < 0) | (menu.last_selection() > 10)){
		cout << "Invalid selection." << endl;
		return;
	}
	switch (menu.last_selection()){
	case 1:
		budget.show_budget();
		break;
	case 2:
		cout << "Select Account: ";
		cin >> account_id;
		cout << "How much would you like to deposit? ";
		cin >> amount;
		budget.account_transaction(account_id, amount);
		break;
	case 3:
		cout << "Select Account: ";
		cin >> account_id;
		cout << "How much would you like to withdraw? ";
		cin >> amount;
		amount = -1 * amount;
		budget.account_transaction(account_id, amount);
		break;
	case ADD_ACCOUNT:{
		Account newAccount;
		cout << "Enter new Account id: ";
		cin >> newAccount.id;
		cout << "Enter new Account name: ";
		cin >> newAccount.title; 
		cout << "How much would you like to deposit? ";
		cin >> newAccount.balance;
		budget.accounts.push_back(newAccount);
		break; }
	case SHOW_ENVELOPES:
		budget.show_envelopes();
		break;
	case CHANGE_DATE:
		int cmonth, cyear;
		cout << "Enter month and year: ";
		cin >> cmonth >> cyear;
		budget.set_current_date(cmonth, cyear);
		break;
	case SHOW_MONTH_ENVELOPES:
		break;
	case CLOSE_MONTH_ENVELOPES:
		break;
	case SPEND_FROM_ENVELOPE:
		break;
	case DEPOSIT_TO_ENVELOPE:
		break;
	default:
		break;
	}
}

BudgetApplication::~BudgetApplication(){
	ofstream outStream;
	string file = "C:\\Users\\Gaurav\\Desktop\\CSC 340\\ConsoleApplication3\\ConsoleApplication3\\file.txt";
	outStream.open(file, ios::trunc);
	outStream << budget;
	outStream.close();
}