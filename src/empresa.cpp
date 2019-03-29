#include <iostream>
#include <vector>

#include "empresa.h"
#include "funcionario.h"

using namespace std;

Empresa::Empresa(string n, string c): nome(n), cnpj(c){}

void Empresa::addFuncionario(Funcionario &f){
	listaFuncionarios.push_back(f);
}

void Empresa::listarFuncionarios(){
	int tamanho = listaFuncionarios.size();

	for (int i = 0; i < tamanho; i++){
		cout << listaFuncionarios[i] << endl;
	}
}

