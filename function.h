#ifndef __FUNCTION_H__
#define __FUNCTION_H__

#include "common.h"
#define MAX	100
#define NAME_LEN 30

typedef struct customer {	
	char name[NAME_LEN];
	int id;
	int money;
} Customer;

void newAccount(void);
void inputMoney(void);
void withdrawMoney(void);
void showAll(void);

#endif
