
#ifndef __aphorism_atd__
#define __aphorism_atd__

#include "wisdom_atd.h"
namespace simple_wisdoms{
  class aphorism: public wisdom {
    char author[50];
  public:
    void InData(ifstream &ifst);  // ����
    void Out(ofstream &ofst);    // ����� 
    aphorism() {} // �������� ��� �������������.
  };
} 
#endif
