#include "container_atd.h"
using namespace std;
namespace simple_wisdoms {
  // Ввод содержимого контейнера
  void container::In(ifstream &ifst) {
    List* cur=cont;
	if(cont==NULL)
	{
		cont=new List;
		cur=cont;
	}else
	{
		while(cur->next!=NULL)
			cur=cur->next;
		cur->next=new List;
		cur=cur->next;
	}
	List* prev=cur;
    while(!ifst.eof()) {
		if((cur->wisd = wisdom::In(ifst)) != 0) 
		{ 
			n++; 
			prev=cur;
			cur->next=new List; 
			cur=cur->next;
		}
    }
	prev->next=NULL;
  }
}
