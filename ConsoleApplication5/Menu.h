#ifndef MENU_H
#define MENU_H
#include<iostream>
using namespace std;

enum MenuOptions{
	EXIT_PROGRAM, SHOW_BUDGET, ADD_TO_ACCOUNT, SPEND_FROM_ACCOUNT,
	ADD_ACCOUNT,SHOW_ENVELOPES, CHANGE_DATE,SHOW_MONTH_ENVELOPES,
	CLOSE_MONTH_ENVELOPES, SPEND_FROM_ENVELOPE, DEPOSIT_TO_ENVELOPE
};

class Menu
{
private:
	int selection;
public:
	Menu()
	{
		selection = -1;
	}
	void show_menu();
	int last_selection();
	int prompt_for_selection();
};



#endif // !MENU_H

	

