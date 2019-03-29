#ifndef DATA_H
#define DATA_H

using namespace std;

class Data{
	private:
		short dia;
		short mes;
		short ano;
	public:

		Data(short d, short m, short a);

		friend ostream& operator<<(ostream &o, const Data d);

};

#endif