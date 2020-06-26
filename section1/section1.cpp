#include <iostream>
int main(int argc,char**argv)
{
	int itest=100;
	const char *str="this is a test";
	std::cout << "itest is " << itest << ",str is " << str << std::endl;
	std::cout << "参数为:" << std::endl;
	for(int i=0;i<argc;i++)
	{
		std::cout << argv[i]<<std::endl;
	}
	std::cout << "Hello world\n";
	return 0;
}
