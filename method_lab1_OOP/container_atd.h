#ifndef __container_atd__
#define __container_atd__
#include "wisdom_atd.h"
#include "list_atd.h"
namespace simple_wisdoms {
  class container  {
    int n; // текущая длина
    List *cont; // указатель на начало списка
  public:
    void In(ifstream &ifst);     // ввод 
    void Out(ofstream &ofst);    // вывод 
    void Clear();  // очистка контейнера 
    container();    // инициализация контейнера
    ~container() {Clear();} // утилизация контейнера
  };
} 
#endif
