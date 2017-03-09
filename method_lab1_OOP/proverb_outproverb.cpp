#include "proverb_atd.h"
using namespace std;
namespace simple_wisdoms {
  void proverb::OutProverb(ofstream &ofst) {
    Out(ofst);
	ofst <<": "<< content;
	ofst << endl;
  }
} 
