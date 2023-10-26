#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


class Data {
	int dia, mes, ano;

public:
	static int compara(Data d1, Data d2) { 
		return 0;
	}
	
	Data (int _dia, int _mes, int _ano) {
		dia = _dia;
		mes = _mes;
		ano = _ano;
	}
	string toString() {
		string ret = "";
		ret.append(to_string(dia));
		ret.append("/");
		ret.append(to_string(mes));
		ret.append("/");
		ret.append(to_string(ano));
		return ret;
	}
};

class Lista {

public:
    virtual void entradaDeDados() = 0;
    virtual void mostraMediana() = 0;
    virtual void mostraMenor() = 0;
    virtual void mostraMaior() = 0;
};

class ListaNomes : public Lista {
    vector<string> lista;

public:
    void entradaDeDados() {
        int numNames;
        cout << "Qauntos nomes serão? ";
        cin >> numNames;

        for (int i = 0; i < numNames; i++) {
            string name;
            cout << "Digite os nomes " << (i + 1) << ": ";
            cin >> name;
            lista.push_back(name);
        }
    }

    void mostraMediana() {
        sort(lista.begin(), lista.end());
        int size = lista.size();

        if (size % 2 == 0) {
            string name1 = lista[size / 2 - 1];
            string name2 = lista[size / 2];
            cout << "Mediana: " << name1 << " e " << name2 << endl;
        } else {
            string medianName = lista[size / 2];
            cout << "Mediana: " << medianName << endl;
        }
    }

    void mostraMenor() {
        if (!lista.empty()) {
            string smallestName = *min_element(lista.begin(), lista.end());
            cout << "Menor nome: " << smallestName << endl;
        } else {
            cout << "A lista de nomes está vazia." << endl;
        }
    }

    void mostraMaior() {
        if (!lista.empty()) {
            string largestName = *max_element(lista.begin(), lista.end());
            cout << "Maior nome: " << largestName << endl;
        } else {
            cout << "A lista de nomes está vazia." << endl;
        }
    }
};

class ListaDatas : public Lista  {
	vector<Data> lista;
	
public:
	void entradaDeDados() {
        int numDatas;
        cout << "Quantos salários serão? ";
        cin >> numDatas;

        for (int i = 0; i < numDatas; i++) {
            int dt_data;
            cout << "Digite os salários " << (i + 1) << ": ";
            cin >> dt_data;
            lista.push_back(dt_data);
        }
    }	
	
	void mostraMediana() {
		c if(!lista.empty()) {
            sort(lista.begin(), lista.end());

            int size = lista.size();

            if (size % 2 == 0) {
                int data1 = lista[size / 2 - 1];
                int data2 = lista[size / 2];
                 cout << "Mediana: " << static_cast<float>(data1 + data2) / 2.0 << endl;
            } else {
                int medianData = lista[size / 2];
                cout << "Mediana: " << medianData << endl;
            }
        } else {
            cout << "A lista de datas está vazia." << endl;
        }
    }
	
	void mostraMenor() {
		if (!lista.empty()) {
            int smallestData = *min_element(lista.begin(), lista.end());
            cout << "Menor data: " << smallestData << endl;
        } else {
            cout << "A lista de datas está vazia." << endl;
        }
    }

    void mostraMaior() {
        if (!lista.empty()) {
            int largestData = *max_element(lista.begin(), lista.end());
            cout << "Maior data: " << largestData << endl;
        } else {
            cout << "A lista de datas está vazia." << endl;
        }
    }
};

class ListaSalarios : public Lista {
	vector<float> lista;
	
public:
	void entradaDeDados() {
        int numSalarios;
        cout << "Quantos salários serão? ";
        cin >> numSalarios;

        for (int i = 0; i < numSalarios; i++) {
            float salario;
            cout << "Digite os salários " << (i + 1) << ": ";
            cin >> salario;
            lista.push_back(salario);
        }
    }
			
	 void mostraMediana() {
        if(!lista.empty()) {
            sort(lista.begin(), lista.end());

            int size = lista.size();

            if (size % 2 == 0) {
                float salario1 = lista[size / 2 - 1];
                float salario2 = lista[size / 2];
                cout << "Mediana: " << salario1 << " e " << salario2 << endl;
            } else {
                float medianSalario = lista[size / 2];
                cout << "Mediana: " << medianSalario << endl;
            }
        } else {
            cout << "A lista de salários está vazia." << endl;
        }
    }
	
	 void mostraMenor() {
        if (!lista.empty()) {
            float smallestSalario = *min_element(lista.begin(), lista.end());
            cout << "Menor salário: " << smallestSalario << endl;
        } else {
            cout << "A lista de salários está vazia." << endl;
        }
    }

    void mostraMaior() {
        if (!lista.empty()) {
            float largestSalario = *max_element(lista.begin(), lista.end());
            cout << "Maior salário: " << largestSalario << endl;
        } else {
            cout << "A lista de salários está vazia." << endl;
        }
    }
};

class ListaIdades  : public Lista {
	vector<int> lista;

public:
    void entradaDeDados() {
        int numIdades;
        cout << "Quantos idades serão? ";
        cin >> numIdades;

        for (int i = 0; i < numIdades; i++) {
            int idade;
            cout << "Digite os idades " << (i + 1) << ": ";
            cin >> idade;
            lista.push_back(idade);
        }
    }
	
	void mostraMediana() {
		if(!lista.empty()) {
            sort(lista.begin(), lista.end());

            int size = lista.size();

            if (size % 2 == 0) {
                int idade1 = lista[size / 2 - 1];
                int idade2 = lista[size / 2];
                cout << "Mediana: " << idade1 << " e " << idade2 << endl;
            } else {
                float medianIdade = lista[size / 2];
                cout << "Mediana: " << medianIdade << endl;
            }
        } else {
            cout << "A lista de Idades está vazia." << endl;
        }
    }
	
	void mostraMenor() {
		 if (!lista.empty()) {
            float smallestIdade = *min_element(lista.begin(), lista.end());
            cout << "Menor idade: " << smallestIdade << endl;
        } else {
            cout << "A lista de idades está vazia." << endl;
        }
    }
	void mostraMaior() {
		if (!lista.empty()) {
            float largestIdade = *max_element(lista.begin(), lista.end());
            cout << "Maior idade: " << largestIdade << endl;
        } else {
            cout << "A lista de idades está vazia." << endl;
        }
    }
};

int main() {
    vector<Lista*> listaDeListas;

    ListaNomes* listaNomes = new ListaNomes;
    listaNomes->entradaDeDados();
    listaDeListas.push_back(listaNomes);

    ListaDatas* listaDatas = new ListaDatas;
    listaDatas->entradaDeDados();
    listaDeListas.push_back(listaDatas);

    ListaSalarios* listaSalarios = new ListaSalarios;
    listaSalarios->entradaDeDados();
    listaDeListas.push_back(listaSalarios);

    ListaIdades* listaIdades = new ListaIdades;
	listaIdades->entradaDeDados();
	listaDeListas.push_back(listaIdades);

    for (Lista* l : listaDeListas) {
        l->mostraMediana();
        l->mostraMenor();
        l->mostraMaior();
    }

    

    // Para liberar a memória para cada objeto quando terminar
    // for (Lista* l : listaDeListas) {
    //     delete l;
    // }
}
