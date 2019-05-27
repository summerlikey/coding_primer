#include <iostream>
#include <vector>
using std::vector;

int main()
{
	vector<unsigned> scores(11,0);
	unsigned grade;
	while(std::cin>>grade)
	{
		if(grade<=100)
			++scores[grade/10];
	}
	for(int i=0;i<=10;i++)
		std::cout<<scores[i]<<" ";
	return 0;
}

