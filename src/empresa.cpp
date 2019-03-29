#include <vector>

#include "empresa.h"
#include "funcionario.h"

Empresa::Empresa(string n, string c): nome(n), cnpj(c){}

void Empresa::addFuncionario(Funcionario &f){
	listaFuncionarios.push_back(f);
}