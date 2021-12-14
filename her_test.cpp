#include <iostream>
#include <string.h>

using namespace std;

class Animal
{
protected:
    char *nome;

public:
    Animal(const char *nome)
    {
        cout << "Construindo animal..." << endl;
        this->nome = new char[strlen(nome) + 1];
        strcpy(this->nome, nome);
    }
    ~Animal()
    {
        delete[] nome;
        nome = 0;
    }
    const char *getNome()
    {
        return nome;
    }
};

class Domestico : public Animal
{
public:
    Domestico(const char *nome) : Animal(nome)
    {
        cout << "Construindo animal domestico..." << endl;
    }

    void fazBarulho()
    {
        cout << "Barulho do animal domestico..." << endl;
    }

    void fazBarulho(const char *barulho)
    {
        cout << "Barulho do animal domestico: " << barulho << endl;
    }

    void querComer()
    {
        cout << "Quer comer o animal domestico..." << endl;
    }

    void querComer(const char *comida)
    {
        cout << "Quer comer o animal domestico: " << comida << endl;
    }

    void querDormir()
    {
        cout << "Quer dormir o animal domestico..." << endl;
    }

    void querDormir(const char *dormir)
    {
        cout << "Quer dormir o animal domestico: " << dormir << endl;
    }
};

class Cachorro : public Domestico
{
public:
    Cachorro(const char *nome) : Domestico(nome)
    {
        cout << "Construindo cachorro..." << endl;
    }

    //metodos herdados
    void fazBarulho()
    {
        cout << "Barulho do cachorro..." << endl;
    }

    void fazBarulho(const char *barulho)
    {
        cout << "Barulho do cachorro: " << barulho << endl;
    }

    void querComer()
    {
        cout << "Quer comer o cachorro..." << endl;
    }

    void querComer(const char *comida)
    {
        cout << "Quer comer o cachorro: " << comida << endl;
    }

    void querDormir()
    {
        cout << "Quer dormir o cachorro..." << endl;
    }

    void querDormir(const char *dormir)
    {
        cout << "Quer dormir o cachorro: " << dormir << endl;
    }

    void fazLatir()
    {
        cout << "Latir do cachorro..." << endl;
    }

    void fazLatir(const char *latir)
    {
        cout << "Latir do cachorro: " << latir << endl;
    }

};

int main()
{
    Cachorro cachorro("Cachorro");
    cachorro.fazBarulho();
    cachorro.fazBarulho("Au au");
    cachorro.querComer();
    cachorro.querComer("Alimento");
    cachorro.querDormir();
    cachorro.querDormir("Dormir");
    cachorro.fazLatir();
    cachorro.fazLatir("Au au");
    return 0;
}
