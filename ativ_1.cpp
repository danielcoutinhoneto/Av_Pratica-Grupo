#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

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
    /*
	O m�todo abaixo pergunta ao usu�rios quantos
	elementos v�o existir na lista e depois
	solicita a digita��o de cada um deles
	*/	

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
            // If the number of names is even, average the middle two names
            string name1 = lista[size / 2 - 1];
            string name2 = lista[size / 2];
            cout << "Mediana: " << name1 << " e " << name2 << endl;
        } else {
            // If the number of names is odd, simply take the middle name
            string medianName = lista[size / 2];
            cout << "Mediana: " << medianName << endl;
        }
    }

    void mostraMenor() {
        if (!lista.empty()) {
            string smallestName = *min_element(lista.begin(), lista.end());
            cout << "Menor nome: " << smallestName << endl;
        } else {
            cout << "A lista está vazia." << endl;
        }
    }

    void mostraMaior() {
        if (!lista.empty()) {
            string largestName = *max_element(lista.begin(), lista.end());
            cout << "Maior nome: " << largestName << endl;
        } else {
            cout << "A lista está vazia." << endl;
        }
    }
};

// class ListaSalarios  {
// 	vector<float> lista;
	
// 	public:
	
// 	/*
// 	O m�todo abaixo pergunta ao usu�rios quantos
// 	elementos v�o existir na lista e depois
// 	solicita a digita��o de cada um deles
// 	*/	

// 	void entradaDeDados() {
//         int numSalarios;
//         cout << "Quantos salários serão? ";
//         cin >> numSalarios;

//         for (int i = 0; i < numSalarios; i++) {
//             string salario;
//             cout << "Digite os salários " << (i + 1) << ": ";
//             cin >> salario;
//             lista.push_back(salario);
//         }
//     }
			
// 	 void mostraMediana() {
//         sort(lista.begin(), lista.end());
//         int size = lista.size();

//         if (size % 2 == 0) {
//             // If the number of names is even, average the middle two names
//             string salario1 = lista[size / 2 - 1];
//             string salario2 = lista[size / 2];
//             cout << "Mediana: " << salario1 << " e " << salario2 << endl;
//         } else {
//             // If the number of names is odd, simply take the middle name
//             string medianSalario = lista[size / 2];
//             cout << "Mediana: " << medianSalario << endl;
//         }
//     }
	
// 	 void mostraMenor() {
//         if (!lista.empty()) {
//             string smallestSalario = *min_element(lista.begin(), lista.end());
//             cout << "Menor salário: " << smallestSalario << endl;
//         } else {
//             cout << "A lista está vazia." << endl;
//         }
//     }

//     void mostraMaior() {
//         if (!lista.empty()) {
//             string largestSalario = *max_element(lista.begin(), lista.end());
//             cout << "Maior salário: " << largestSalario << endl;
//         } else {
//             cout << "A lista está vazia." << endl;
//         }
//     }
// };

int main() {
    vector<Lista*> listaDeListas;

    ListaNomes* listaNomes = new ListaNomes;
    listaNomes->entradaDeDados();
    listaDeListas.push_back(listaNomes);

    for (Lista* l : listaDeListas) {
        l->mostraMediana();
        l->mostraMenor();
        l->mostraMaior();
    }

    // ListaSalarios* listaSalarios = new ListaSalarios;
    // listaSalarios->entradaDeDados();
    // listaDeListas.push_back(listaSalarios);

    // for (Lista* l : listaDeListas) {
    //     l->mostraMediana();
    //     l->mostraMenor();
    //     l->mostraMaior();
    // }

    // Don't forget to release the memory for each object when you're done
    // for (Lista* l : listaDeListas) {
    //     delete l;
    // }
}
