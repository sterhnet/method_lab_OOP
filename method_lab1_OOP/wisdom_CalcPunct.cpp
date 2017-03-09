#include "wisdom_atd.h"

using namespace std;
namespace simple_wisdoms {
 
  int wisdom::CalcPunct() {
    int ans=0;
	char p[]=".,?!;:-)(\"\'";
	for(int i=0;i<content.size();++i)
	{
		for(int j=0;j<strlen(p);++j)
			if(p[j]==content[i])
			{
				++ans;
				break;
			}
	}
    return ans;
  }
}
