#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include <locale.h>
void first_task(void);
void second_task(void);
int main()
{
	setlocale(LC_ALL, "Rus");
	int choice_task = 0, go_choice = 0;
	void (**menu)() = NULL;
	menu = (void(**)())calloc(2, sizeof(void(*)()));
	if (menu != NULL)
	{
		menu[0] = first_task;
		menu[1] = second_task;
		do
		{
			printf("���� �������:\n1.���� ������. ����� ���������� ���� � ���.\n2.��� ������ C � ������ S. ������� ������ ��������� ������� C � ������ S.\n\n���� �� �������� ��������� ������, �� ������� ����� <3>\n\n�������� �������:");
			check_choice_task(&choice_task);
			if (choice_task == 3)
				return 0;
			system("cls");
			printf("%d ������.\n\n", choice_task);
			menu[choice_task - 1]();
			printf("\n\n������ ��������� � ����?\n1-��\n2-���\n\n�����:");
			check_go_choice(&go_choice);
			system("cls");
		} while (go_choice == 1);
		return 0;
	}
}