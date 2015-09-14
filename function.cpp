#include "common.h"
#include "function.h"
int numOfCustomer=0;
Customer arr[MAX];

/* void newAccount(void)
 * 고객 신규가입 함수
 * parameter	:	void
 * return type	:	void
 *
 */
void newAccount(void) {

	if (numOfCustomer > MAX) {
		std::cout << "고객 목록이 가득 찼습니다." << std::endl;
		return;
	}

	std::cout << "[계좌개설]" << std::endl;
	std::cout << "계좌 ID : ";
	std::cin >> arr[numOfCustomer].id;

	std::cout << "이름 : ";
	std::cin >> arr[numOfCustomer].name;

	std::cout << "입금액 : ";
	std::cin >> arr[numOfCustomer].money;
	
	::numOfCustomer += 1;
}

/* void inputMoney(void)
 * 입금기능을 제공하는 함수
 * parameter	:	void
 * return type	:	void
 *
 */
void inputMoney(void) {
	int num;
	int money;
	std::cout << "[입금]" << std::endl;
	std::cout << "계좌 ID : ";
	std::cin >> num;

	for (int i = 0; i < numOfCustomer; i++) {
		if (num == arr[i].id) {
			std::cout << "입금액 : ";
			std::cin >> money;
			arr[i].money += money;
			return;
		}
	}
	std::cout << "없는 계좌입니다." << std::endl;
	return;
}

/* void withdrawMoney(void)
 * 출금기능을 제공하는 함수
 * parameter	:	void
 * return type	:	void
 *
 */
void withdrawMoney(void) {
	int num;
	int money;
	std::cout << "[출금]"<<std::endl;
	std::cout << "계좌 ID : ";
	std::cin >> num;

	for (int i = 0; i < numOfCustomer; i++) {
		if(num == arr[i].id) {
			while(1) {
			std::cout << "출금액 : ";
			std::cin >> money;
			
			if (money <= arr[i].money) {
				std::cout << money <<"원 출금" << std::endl;
				std::cout << "계좌 잔액 : " << arr[i].money << std::endl;
				break;
			}
			else
				std::cout << "한도 초과입니다." <<  std::endl;
			}
		}
	}
}

/* void showAll(void)
 * 가입된 계좌의 전체 정보 출력
 * parameter	:	void
 * return type	:	void
 *
 */
void showAll(void) {
	int stopScreen;
	if ( ::numOfCustomer == 0) {
		std::cout << "가입된 고객이 없습니다." << std::endl;
	}
	
	else
		for(int i = 0; i < numOfCustomer; i++) {
			std::cout << "[ID] : " << arr[i].id << std::endl;
			std::cout << "[이름] : " <<  arr[i].name << std::endl;
			std::cout << "[계좌 잔고] : " << arr[i].money << std::endl << std::endl;
		}
	
}
