 
#include "container_atd.h"
namespace simple_wisdoms {
  
  void container::Sort()  
  {
	  bool b=1;
	  if(n<2)
		  b=0;
	  while(b)
	  {
		b=0;
		List* prevprev=NULL;
		List* prev=cont;
		List* cur = cont->next;
		int num = n;
		while(cur!=NULL && num>0)
		{
			if(compare(prev,cur))
			{
				b=1;
				List* buf;
				buf = cur->next;
				cur->next=prev;
				prev->next=buf;
				if(prevprev!=NULL)
					prevprev->next=cur;
				else
					cont = cur;
				buf = cur;
				cur = prev;
				prev = buf;
			}
			prevprev=prev;
			prev=cur;
			cur=cur->next;
		}
			
	  }
  }
} 
