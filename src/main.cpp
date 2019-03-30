#include <iostream>
#include <ctime>
#include <vector>
#include <sstream>

#include "data.h"
#include "funcionario.h"
#include "empresa.h"

using namespace std;

int main(int argc, char const *argv[])
{
	time_t tempo = time(nullptr);
	Data atual(tempo);

	vector<Empresa> empresas;

	int opc = 71;
	string aux;
	int empresaSelecionada;
	int run = 0; //vezes que o codigo rodou

	while(opc != 0){
		if(run == 0)
			cout << "(1)Deseja criar uma empresa?" << endl;
		else if(run > 0){
			cout << "\nEmpresa Selecionada: " << empresas[empresaSelecionada].getNome() << endl;
			cout << "\nSelecione a Opção Desejada" << endl;
			cout << "(1)Para criar outra empresa" << endl;
			cout << "(2)Para adicionar funcionários à sua empresa" << endl;
			cout << "(3)Para listar os funcionários da sua empresa" << endl;
			cout << "(4)Para listar apenas os funcionários em período de experiência em sua empresa" << endl;
			cout << "(5)Para dar um aumento aos funcionários" << endl;
			cout << "(9)Para selecionar outra empresa" << endl;
		}
		cout << "(0)Sair" << endl;
		getline(cin, aux);
		stringstream(aux) >> opc;

		switch(opc){
			case 1:{

				cout << "\n-----------------------ADICIONANDO EMPRESA-----------------------\n" << endl;
				cout << "Digite o nome da sua empresa:" << endl;
				string name;
				getline(cin, name);

				cout << "Digite o CNPJ da sua empresa:" << endl;
				string cnpj;
				getline(cin, cnpj);
				empresas.push_back(Empresa(name, cnpj));
				empresaSelecionada = empresas.size()-1;
				run++;
				cout << "Empresa Adicionada!" << endl;
			}
				break;
			case 2:{
				if(run == 0){
					cout << "Adicione uma empresa!" << endl;
					break;
				}else{
					cout << "\n-----------------------ADICIONANDO FUNCIONÁRIO-----------------------\n" << endl;
					cout << "Digite o nome do seu funcionário:" << endl;
					string name;
					getline(cin, name);
					cout << "Digite o salário do seu funcionário:" << endl;
					float sal;
					getline(cin, aux);
					stringstream(aux) >> sal;
					
					cout << "Digite o dia do mês em que seu funcionário foi admitido:" << endl;
					int d = 0;
					getline(cin, aux);
					stringstream(aux) >> d;
					while(d < 1 || d > 31){
						cout << "Digite um valor valido para ano (entre 1 e 31)" << endl;
						getline(cin, aux);
						stringstream(aux) >> d;
					}

					cout << "Digite o mês em que seu funcionário foi admitido:" << endl;
					int m = 0;
					getline(cin, aux);
					stringstream(aux) >> m;
					while(m < 1 || m > 12){
						cout << "Digite um valor valido para mês (entre 1 e 12)" << endl;
						getline(cin, aux);
						stringstream(aux) >> m;
					}

					cout << "Digite o ano em que seu funcionário foi admitido:" << endl;
					int a = 0;
					getline(cin, aux);
					stringstream(aux) >> a;
					while(a < 2000 || a > 2019){
						cout << "Digite um valor valido para ano (entre 2000 e 2019)" << endl;
						getline(cin, aux);
						stringstream(aux) >> a;
					}
					Funcionario temp(name, sal, Data(d,m,a));
					empresas[empresaSelecionada].addFuncionario(temp);
					run++;
					cout << "Funcionário Adicionado!" << endl;

				}
			}
				break;

			case 3:{
				if(run == 0){
					cout << "Adicione uma empresa!" << endl;
					break;
				}else{
					cout << "\n-----------------------LISTANDO FUNCIONÁRIOS-----------------------\n" << endl;
					empresas[empresaSelecionada].listarFuncionarios();
					run++;
				}
			}
				break;


			case 4:{
				if(run == 0){
					cout << "Adicione uma empresa!" << endl;
					break;
				}else{
					cout << "\n----------LISTANDO FUNCIONÁRIOS EM PERIODO DE EXPERIÊNCIA----------\n" << endl;
					empresas[empresaSelecionada].listarFuncionariosExperiencia(atual);
					run++;
				}
			}
				break;

			case 5:{
				cout << "\n-----------------------AMENTO DE SALÁRIOS-----------------------\n" << endl;
					
				cout << "Digite o valor do aumento: " << endl;
				float x;
				getline(cin, aux);
				stringstream(aux) >> x;


				empresas[empresaSelecionada].aumentoSalarios(x);
				cout << "Salários dos funcionários de "<< empresas[empresaSelecionada].getNome() <<" aumentados em " << x << "%!!" << endl;
			}
				break;

			case 9:{
				if(run == 0){
					cout << "Adicione uma empresa!" << endl;
					break;
				}else{
					cout << "\n-----------------------LISTANDO EMPRESAS-----------------------\n" << endl;
					
					int tam = empresas.size();
					for (int i = 0; i < tam; i++){
						cout << "(" << i << ")" << empresas[i];
					}
					cout << "Qual empresa deseja selecionar?" << endl;
					
					getline(cin, aux);
					stringstream(aux) >> empresaSelecionada;
					
					while(empresaSelecionada < 0 || empresaSelecionada > tam-1){
						cout << "Opção inválida!" << endl;
						getline(cin, aux);
						stringstream(aux) >> empresaSelecionada;
					}
					run++;
					break;
				}
			}

			case 0:
				cout << "Obrigado, tenha um bom dia!" << endl;
				break;

			default:
				cout << "Opção inválida!" << endl;
				break;
		}
	}


	return 0;
}