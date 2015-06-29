#include"Menu.h"

void Menu::show_menu(){
	cout << "\nSELECT AN OPTION:\n" << SHOW_BUDGET << ".View Budget\n" << ADD_TO_ACCOUNT << ".Add to Account\n" << SPEND_FROM_ACCOUNT;
	cout << ". Spend from Account\n" << ADD_ACCOUNT << ". Add Account\n" << SHOW_ENVELOPES << ". Show Envelopes\n";
	cout << CHANGE_DATE << ". Change Date\n";
	cout << SHOW_MONTH_ENVELOPES << ". Show Current Month's Envelopes \n";
	cout << CLOSE_MONTH_ENVELOPES << ". Close Current Month's Envelopes \n";
	cout << SPEND_FROM_ENVELOPE << ". Spend from Envelope \n";
	cout << DEPOSIT_TO_ENVELOPE << ". Deposit to Envelope \n";
	cout << EXIT_PROGRAM << ". Exit\n";
}

int Menu::last_selection(){
	return selection;
}
int Menu::prompt_for_selection(){
	cout << "Enter your selection: ";
	cin >> selection;
	return selection;
}