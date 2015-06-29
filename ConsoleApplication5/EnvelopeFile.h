#ifndef ENVELOPEFILE_H
#define ENVELOPEFILE_H

#include"Envelope.h"
#include"MonthlyEnvelope.h"
#include<vector>

class EnvelopeFile
{
public:
	MonthlyEnvelope* first;
	
	void add_month(int month, int year, vector<Envelope> envelopes);
	void close_month(int month, int year, vector<Envelope> envelopes);
	void add_to_envelope(int month, int year, int envelope_id, double amount);
	void display(int month, int year);
private:

};

#endif // !ENVELOPEFILE_H
