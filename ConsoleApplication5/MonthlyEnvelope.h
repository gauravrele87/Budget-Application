#ifndef MONTHLYENVELOPE_H
#define MONTHLYENVELOPE_H

#include"Envelope.h"

class MonthlyEnvelope
{
public:
	double balance;
	const Envelope& envelope;
	int month, year;
	MonthlyEnvelope* next;
	MonthlyEnvelope(int month,int year, const Envelope& envelope, double starting_balance, MonthlyEnvelope* next);
	~MonthlyEnvelope();

	

private:

};


#endif // !MONTHLYENVELOPE_H
