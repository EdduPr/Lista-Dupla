#include "no.h"
namespace edu {


No *No::getAnterior() const
{
    return anterior;
}

void No::setAnterior(No *newAnterior)
{
    anterior = newAnterior;
}

int No::getDado() const
{
    return dado;
}

void No::setDado(int newDado)
{
    dado = newDado;
}

No *No::getProximo() const
{
    return proximo;
}

void No::setProximo(No *newProximo)
{
    proximo = newProximo;
}


No::No(int dado):anterior(0),dado(dado),proximo(0)
{


}
QString No::toString() const
{
    return "|" + QString::number(dado)+ "|->";
}
}
