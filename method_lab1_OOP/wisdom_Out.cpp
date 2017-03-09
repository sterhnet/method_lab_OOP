

#include "wisdom_atd.h"

#include "proverb_atd.h"
#include "aphorism_atd.h"
using namespace std;
namespace simple_wisdoms {

 void wisdom::OutData(ofstream &ofst) {
	 this->Out(ofst);
	 ofst <<": "<< content;
	 ofst <<": Mark - "<< mark;
	 ofst << endl;
  }
}