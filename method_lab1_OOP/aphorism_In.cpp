// Ввод параметров афоризма из файла
#include "aphorism_atd.h"
using namespace std;
namespace simple_wisdoms {
  void aphorism::InData(ifstream &ifst) {
    ifst >> author;
  }
} 