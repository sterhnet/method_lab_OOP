// method_lab1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

 #include "container_atd.h"
 #include <iostream>


using namespace std;
using namespace simple_wisdoms;
int main(int argc, char* argv[]) {
	if(argc !=3) {
		cout << "incorrect command line! "
 				"Waited: command in_file out_file" 
                 << endl;
		exit(1);
	}
	ifstream ifst(argv[1]); // 
	ofstream ofst(argv[2]);
	cout << "Start"<< endl;
	
	container c;
	c.In(ifst);
ofst << "Filled container. " << endl;
	c.Out(ofst);
ofst << "Prverb only. " << endl;
	c.OutProverb(ofst);
	c.Clear();
ofst << "Empty container. " << endl;
	c.Out(ofst);

cout << "Stop"<< endl;
return 0;
}


