#include "wisdom_atd.h"
// ���������� ���������� ���������� ��� ���� ���������
// �������������� �������
#include "proverb_atd.h"
#include "aphorism_atd.h"
using namespace std;
namespace simple_wisdoms {
  // ���� ���������� ���������� ������ 
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
	default:
      return 0;
    }
    ws->InData(ifst);
	ifst >> ws->content;
    return ws;
  }
}
