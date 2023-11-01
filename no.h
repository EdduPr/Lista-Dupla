#ifndef NO_H
#define NO_H
#include <QString>
namespace edu

{
class No
{
private:
    No *anterior;
    int dado;
    No *proximo;
public:
    No(int dado);
    No *getAnterior() const;
    void setAnterior(No *newAnterior);
    int getDado() const;
    void setDado(int newDado);
    No *getProximo() const;
    void setProximo(No *newProximo);
    QString toString()const;


};
}
#endif
