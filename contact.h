#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//��������
//#define MAX 1000

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#define DEFAULT_SZ 3

enum Option
{
	EXIT,//0
	ADD,//1
	DEL,//2
	SEARCH,//3
	MODIFY,//4
	SHOW,//5
	SORT//6
};

struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//ͨѶ¼����
struct Contact
{
	struct PeoInfo *data;//���1000����Ϣ
	int size; //��¼��ǰ���е�Ԫ�ظ���
	int capacity;//��ǰͨѶ¼���������
};

//��������
//��ʼ��ͨѶ¼
void InitContact(struct Contact* ps);
//������ϵ��
void AddContact(struct Contact* ps);
//�鿴ͨѶ¼
void ShowContact(const struct Contact* ps);
//ɾ��һ����ϵ��
void DelContact(struct Contact* ps);
//������ϵ��
void SearchContact(const struct Contact* ps);
//�޸���ϵ��
void ModifyContact(const struct Contact* ps);
//����ͨѶ¼����
void SortContact(const struct Contact* ps);
//����ͨѶ¼
void DestroyContact(struct Contact* ps);
