/**
 * @file data.h
 * @brief Classe que guarda dia, mês e ano de uma data.
 * @author Mateus Patricio
 */


#ifndef DATA_H
#define DATA_H

#include <ctime>

using namespace std;

class Data{
	private:
		int dia;
		int mes;
		int ano;

	public:

		Data(int d, int m, int a);
		Data(time_t &t);

		int diferencaDeDias(Data d);

		bool operator==(Data d);
		friend ostream& operator<<(ostream &o, const Data &d);

};

#endif