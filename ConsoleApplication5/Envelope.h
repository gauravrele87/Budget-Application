#ifndef ENVELOPE_H
#define ENVELOPE_H

#include<string>
using namespace std;
#include<fstream>
#include<ostream>
#include<iostream>

struct Envelope
{
	int id;
	//ifstream instream;
	string title;
	friend ifstream& operator>> (ifstream&, Envelope&);
	friend ofstream& operator<< (ofstream&, const Envelope&);
	friend ostream& operator<< (ostream&, const Envelope&);

};

#endif 