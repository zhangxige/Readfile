

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
 ifstream ifs("F:\text.txt"); // 改成你要打开的文件

 string read;
 while(getline(ifs, read, ' ')) // 逐词读取方法三
 {
  cout << read << endl;
 }
  system("pause");
}

int new_main()
{
	double array[100][2] = { 0.0 };
	ifstream infile;
	infile.open("1.txt");
	double* ptr = &array[0][0];
	while (!infile.eof())
	{
		infile >> *ptr;
		ptr++;
	}
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 2; j++) {
			cout << array[i][j] << "  ";
		}
		cout << endl;
	}
	infile.close();
	return 0;
}
