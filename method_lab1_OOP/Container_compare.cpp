 
#include "container_atd.h"
namespace simple_wisdoms {
  
  int container::compare(List* a,List* b)  
  {
	  if(a->wisd->CalcPunct() > b->wisd->CalcPunct())
		  return 1;
	  return 0;
  }
} 
