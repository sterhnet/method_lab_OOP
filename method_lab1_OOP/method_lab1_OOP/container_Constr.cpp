 
#include "container_atd.h"
namespace simple_wisdoms {
  // ������������� ����������
  container::container(){ n=0; cont=NULL;}
  // ������� ���������� �� ���������
  void container::Clear()  {
    List* a;
	while(cont!=NULL && n>0)
	{
		a=cont->next;
		delete cont;
		cont=a;
		--n;
	}
		n=0;
		cont=NULL;
  }
} 
