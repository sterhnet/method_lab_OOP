
#include <string>
#ifndef __wisdom_atd__
#define __wisdom_atd__
#include <fstream>
using namespace std;
namespace simple_wisdoms {
 
  class wisdom {
  public:
	string content;
	static  wisdom* In(ifstream &ifst);	
	void OutData(ofstream &ofst);	
    virtual void InData(ifstream &ifst) = 0;  // ����
    virtual void Out(ofstream &ofst) = 0;     // �����
  };
} 
#endif

