#include <iostream>
#include <vector>

#include "empresa.h"
#include "funcionario.h"

using namespace std;

Empresa::Empresa(string n, string c): nome(n), cnpj(c){
	vector<Funcionario> listaFuncionarios;
}

string Empresa::getNome(){
	return nome;
}

void Empresa::addFuncionario(Funcionario f){
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

void Empresa::listarFuncionariosExperiencia(Data atual){
	int tamanho = listaFuncionarios.size();

	for (int i = 0; i < tamanho; i++){
		if(listaFuncionarios[i].getDataAdmissao().diferencaDeDias(atual) < 90)
			cout << "Dias de experiencia: " <<listaFuncionarios[i].getDataAdmissao().diferencaDeDias(atual) << endl << listaFuncionarios[i] << endl ;
	}
}

void Empresa::aumentoSalarios(float x){
	int tamanho = listaFuncionarios.size();
	
	for (int i = 0; i < tamanho; i++){
		listaFuncionarios[i].aumentaSalario(x);
	}	
}

ostream& operator<<(ostream &o, const Empresa &e){
	o << "Empresa: " << e.nome << "\nCNPJ: " << e.cnpj << "\nNúmero de funcionários: " << e.listaFuncionarios.size() << "\n-----------------------\n";
}

Empresa::~Empresa(){

}
