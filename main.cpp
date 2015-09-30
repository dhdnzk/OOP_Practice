#include "common.h"
#include "screenOut.h"
#include "function.h"

enum {NEW_ACCOUNT=1, INPUT, WITHDRAW, SHOW_ALL, QUIT};

int main(void) {

	while ( 1 ) {
		int num;
		system("clear");
		showMenu();
		std::cin >> num;

		switch (num) {
			
			case NEW_ACCOUNT :
				newAccount();
				break;

			case INPUT:
				inputMoney();
				break;

			case WITHDRAW :
				withdrawMoney();
				break;

			case SHOW_ALL : 
				showAll();
				break;
			case QUIT :
				std::cout << "프로그램을 종료합니다." << std::endl;
				return 0;
		}
	}
}
