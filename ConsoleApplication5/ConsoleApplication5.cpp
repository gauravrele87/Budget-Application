// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "BudgetApplication.h"


int _tmain(int argc, _TCHAR* argv[])
{
	BudgetApplication app;
	while (app.is_running())
	{
		app.prompt_loop();
	}
}

