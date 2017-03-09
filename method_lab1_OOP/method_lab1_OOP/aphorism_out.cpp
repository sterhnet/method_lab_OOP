#include "aphorism_atd.h"
using namespace std;
namespace simple_wisdoms {
  void aphorism::Out(ofstream &ofst) {
    ofst << "It is " << author <<"\' aphorism"; 
  }
} 
