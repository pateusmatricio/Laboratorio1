#ifndef DATA_H
#define DATA_H

#include <ctime>

using namespace std;

class Data{
	private:
		int dia;
		int mes;
		int ano;
		int dias;//numero de dias que essa data representa desde 00/00/0000

	public:

		Data(int d, int m, int a);
		Data(time_t &t);

		bool operator==(Data d);

		friend ostream& operator<<(ostream &o, const Data d);

};

#endif