#include <iostream>
#include <ctime>

#include "data.h"
#include "funcionario.h"
#include "empresa.h"

using namespace std;

int main(int argc, char const *argv[])
{
	time_t tempo = time(nullptr);
	Data atual(tempo);

	Data atuale(2, 12, 1968);

	cout << asctime(localtime(&tempo)) << endl;

	cout << atual << endl;


	cout << atuale << endl;

	return 0;
}