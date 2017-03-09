#include "wisdom_atd.h"

#include "proverb_atd.h"
#include "aphorism_atd.h"
#include "conudrum_atd.h"
using namespace std;
namespace simple_wisdoms {
  wisdom* wisdom::In(ifstream &ifst) {
    wisdom *ws;
    int k;
    ifst >> k;
    switch(k) {
    case 1:
      ws = new proverb;
	  break;
    case 2:
      ws = new aphorism;
	  break;
	case 3:
      ws = new conudrum;
	  break;
	default:
      return 0;
    }
    ws->InData(ifst); //заполнение дочернего класса
	ifst >> ws->content;
    return ws;
  }
}
