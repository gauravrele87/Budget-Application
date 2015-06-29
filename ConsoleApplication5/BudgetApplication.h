#ifndef BUDGETAPPLICATION_H
#define BUDGETAPPLICATION_H
#include"stdafx.h"
#include"Budget.h"
#include"Menu.h"
#include<iostream>
#include<fstream>
#include<ostream>
using namespace std;



class BudgetApplication
{
private:
	Budget budget;
	Menu menu;
public:

	BudgetApplication(){
		ifstream inStream;
		string file = "C:\\Users\\Gaurav\\Desktop\\CSC 340\\ConsoleApplication3\\ConsoleApplication3\\file.txt", line = "";
		inStream.open(file, ios::out);
		inStream >> budget;
	}
	bool is_running();
	void prompt_loop();
	~BudgetApplication();
private:
	void process_menu_selection();
};




#endif // !BUDGETAPPLICATION_H
