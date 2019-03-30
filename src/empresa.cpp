#include <iostream>
#include <vector>

#include "empresa.h"
#include "funcionario.h"

using namespace std;

Empresa::Empresa(string n, string c): nome(n), cnpj(c){
	vector<Funcionario> listaFuncionarios;
}

void Empresa::addFuncionario(Funcionario &f){
	int tamanho = listaFuncionarios.size();
	for (int i = 0; i < tamanho; i++){
		if(f == listaFuncionarios[i]){
			cout << "Funcionário já consta nessa empresa" << endl;
			return;
		}
	}
	listaFuncionarios.push_back(f);
}

void Empresa::listarFuncionarios(){
	int tamanho = listaFuncionarios.size();

	for (int i = 0; i < tamanho; i++){
		cout << listaFuncionarios[i] << endl;
	}
}
/*
void Empresa::listarFuncionariosExperiencia(){
	int tamanho = listaFuncionarios.size();

	for (int i = 0; i < tamanho; i++){
		if(listaFuncionarios[i].getDataAdmissao().getDias() > 90)
		cout << listaFuncionarios[i] << endl;
	}
}*/

void Empresa::aumentoSalarios(float x){
	int tamanho = listaFuncionarios.size();
	
	for (int i = 0; i < tamanho; i++){
		listaFuncionarios[i].aumentaSalario(x);
	}	
}
