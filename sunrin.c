//1학년 4반 21번 엄민석입니다. C++로 구현했습니다.
#include <iostream>
using namespace std;

int main(void)
{
    int Tape[100];
	int* Head = Tape;
	char String[100];

	for( ; ; )
	{
		fgets(String, 100, stdin);
    
		for(unsigned int i = 0 ; i < (strlen(String) - 1) ; i++)
		{
			switch(String[i])
			{
			case '>':
				Head++;
				break;
			case '<':
				Head--;
				break;
			case '!':
				cout << *Head << endl;
				break;
			case '?':
				cin >> *Head;
				break;
			case '+':
				++*Head;
				break;
			case '-':
				--*Head;
				break;
			case '*':
				for(int i = 0 ; i < *Head ; i++)
					cout << '*';
				cout << endl;
				break;
			}
		}
	}
}