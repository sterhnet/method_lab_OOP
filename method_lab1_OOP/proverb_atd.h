
#ifndef __proverb_atd__
#define __proverb_atd__

#include "wisdom_atd.h"
namespace simple_wisdoms{
  class proverb: public wisdom {
    char country[50];
  public:
    void InData(ifstream &ifst);  // ввод
    void Out(ofstream &ofst);    // вывод 
	void OutProverb(ofstream &ofst); 
    proverb() {} // создание без инициализации.
  };
} 
#endif
