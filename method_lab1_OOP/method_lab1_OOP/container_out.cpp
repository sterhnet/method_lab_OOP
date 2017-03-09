#include "container_atd.h"
using namespace std;
namespace simple_wisdoms {
  // Вывод содержимого контейнера
  void container::Out(ofstream &ofst) {
    ofst << "Container contains " << n << " elements." << endl;
	List* cur=cont;
	int i=1;
   while(cur!=NULL && n>=i)
	{
      ofst << i << ": ";
	  cur->wisd->OutData(ofst);
	  cur=cur->next;
	  ++i;
    }
  }
}

