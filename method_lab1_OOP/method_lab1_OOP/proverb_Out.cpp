#include "proverb_atd.h"
using namespace std;
namespace simple_wisdoms {
  void proverb::Out(ofstream &ofst) {
    ofst << "It is proverb from " << country; 
  }
} 
