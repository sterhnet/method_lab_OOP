 
#include "container_atd.h"
namespace simple_wisdoms {
  // Инициализация контейнера
  container::container(){ n=0; cont=NULL;}
  // Очистка контейнера от элементов
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
