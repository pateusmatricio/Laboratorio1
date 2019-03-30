#include <ostream>
#include <ctime>
#include <cstdlib>

#include "data.h"

Data::Data(int d, int m, int a): dia(d), mes(m), ano(a) {

}

Data::Data(time_t &t){
	dia = (asctime(localtime(&t))[8] - '0' ) * 10 + asctime(localtime(&t))[9] - '0';
	
	if((asctime(localtime(&t))[4]) == 'J'){
		if(asctime(localtime(&t))[5] == 'a')	
			mes = 1;
		else if (asctime(localtime(&t))[6] == 'l')	
			mes = 7;
		else
			mes = 6;
	}
	if((asctime(localtime(&t))[4]) == 'F')
		mes = 2;
	if((asctime(localtime(&t))[4]) == 'M'){
		if((asctime(localtime(&t))[6]) == 'r')
			mes = 3;
		else
			mes = 5;
	}
	if((asctime(localtime(&t))[4]) == 'A'){
		if((asctime(localtime(&t))[5]) == 'p')
			mes = 4;
		else
			mes = 8;
	}
	if((asctime(localtime(&t))[4]) == 'S')
		mes = 9;
	if((asctime(localtime(&t))[4]) == 'O')
		mes = 10;
	if((asctime(localtime(&t))[4]) == 'N')
		mes = 11;
	if((asctime(localtime(&t))[4]) == 'D')
		mes = 12;

	ano = (asctime(localtime(&t))[20] - '0') * 1000 + (asctime(localtime(&t))[21] - '0') * 100 + (asctime(localtime(&t))[22] - '0') * 10 + asctime(localtime(&t))[23] - '0'; 
}

bool Data::operator==(Data d){
	if(dia == d.dia && mes == d.mes && ano == d.ano)
		return true;
	return false;
}

ostream& operator<<(ostream &o, const Data d){
	o << d.dia << "/" << d.mes << "/" << d.ano;
}