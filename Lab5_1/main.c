#include <stdio.h>
#include<stdlib.h>
#include"arrays.h"
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	printf("��������� ������ � ����������. ������� ��� ������������� ����� (�������� ������ ������ ��������� ������� �����)\n");
	int* array;
	int num_of_elem;
	printf("������� ���������� ��������� � �������\n");
	num_of_elem = check_number_of_elements();
	memory(&array, num_of_elem, 0);
	printf("%p\n", array);
	printf("%p\n", &array);
	printf("������� ������\n");
	hand_input_array(array, num_of_elem);
	output_array(array, num_of_elem);
	
	del_double(array, &num_of_elem);

	printf("\n����� ������\n");
	output_array(array, num_of_elem);
	memory(&array, num_of_elem, 1);

	return 0;
}