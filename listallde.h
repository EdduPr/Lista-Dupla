#ifndef LISTALLDE_H
#define LISTALLDE_H

#include <no.h>
#include <qstring.h>

namespace edu {

class ListaLLDE {
private:
    No *inicio;
    int quantidadeElemento;
    No *fim;

public:
    ListaLLDE();
    int getQuantidadeElemento() const;
    void inserirInicio(int dado);
    void retirarInicio();
    int acessarInicio() const;
    bool estaVazia() const;
    QString toSTringIniciofim() const;
    QString toStirngfimInicio() const;
    int acessarFim() const;
    void retirarFim();
    void inserirFim(int dado);
};

}

#endif // LISTALLDE_H
