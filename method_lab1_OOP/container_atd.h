#ifndef __container_atd__
#define __container_atd__
#include "wisdom_atd.h"
#include "list_atd.h"
namespace simple_wisdoms {
  class container  {
    int n; // ������� �����
    List *cont; // ��������� �� ������ ������
  public:
    void In(ifstream &ifst);     // ���� 
    void Out(ofstream &ofst);    // ����� 
    void Clear();  // ������� ���������� �� �����
    container();    // ������������� ����������
    ~container() {Clear();} // ���������� ����������
  };
} 
#endif
