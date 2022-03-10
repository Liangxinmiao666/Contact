#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

typedef struct peoinfo {
	char name[20];
	int age;
	char sex[5];
	char tel[11];
	char addr[15];
}peoinfo;

//通讯录的结构体
typedef struct contact {
	peoinfo data[1000];
	int sz;
}contact;
//初始化通讯表
void initcontact(contact* p);
//增加联系人
int contact_add(contact* p);
//删减联系人
void contact_del(contact* p);
//展示通讯表
void contact_show(const contact* p);
//根据人名查找
int find_byname(const contact* p,char* name);
//根据电话查找
int find_bytel(const contact* p, char* tel);
//
int Find(const contact* p);

