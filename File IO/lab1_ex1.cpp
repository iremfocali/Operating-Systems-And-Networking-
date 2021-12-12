#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream MyFile("filename.txt");
  for(int i = 0 ; i<10 ; i++){
		 MyFile << "irem focali \n";	
	}
  MyFile.close();
}
