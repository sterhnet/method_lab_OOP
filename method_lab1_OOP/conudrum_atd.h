
#ifndef __conudrum_atd__
#define __conudrum_atd__

#include "wisdom_atd.h"
namespace simple_wisdoms{
  class conudrum: public wisdom {
    char answer[50];
  public:
    void InData(ifstream &ifst);  // ����
    void Out(ofstream &ofst);    // ����� 
    conudrum() {} // �������� ��� �������������.
  };
} 
#endif
