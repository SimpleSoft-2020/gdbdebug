#include <iostream>
int main(int argc,char**argv)
{
	std::cout << "参数为:" << std::endl;
	for(int i=0;i<argc;i++)
	{
		std::cout << argv[i]<<std::endl;
	}
	std::cout << "Hello world\n";
	return 0;
}
