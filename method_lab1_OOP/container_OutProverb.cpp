#include "container_atd.h"
using namespace std;
namespace simple_wisdoms {
  // Вывод содержимого контейнера
  void container::OutProverb(ofstream &ofst) {
	List* cur=cont;
	int i=1;
   while(cur!=NULL && n>=i)
	{
	  cur->wisd->OutProverb(ofst);
	  cur=cur->next;
	  ++i;
    }
  }
}

