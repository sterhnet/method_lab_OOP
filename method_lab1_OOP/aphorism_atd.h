
#ifndef __aphorism_atd__
#define __aphorism_atd__

#include "wisdom_atd.h"
namespace simple_wisdoms{
  class aphorism: public wisdom {
    char author[50];
  public:
    void InData(ifstream &ifst);  // ввод
    void Out(ofstream &ofst);    // вывод 
    aphorism() {} // создание без инициализации.
  };
} 
#endif
