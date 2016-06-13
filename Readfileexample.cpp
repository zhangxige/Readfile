
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
