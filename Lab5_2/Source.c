#include<stdio.h>
#include<stdlib.h>
#include"arrays.h"
#include<locale.h>
main()
{
	setlocale(LC_ALL, "RUS");
	printf("� ��������� ������� ����� ����� ������� ��� ������������� ��������. ���������� ����� � ������ ����� ���� ���������, ��������� ����� - 100\n");
	int** array;
	int row;

	printf("������� ���������� �����\n");
	row = check_number_of_elements();
	memory(&array, row, 0);
	input_row(array, row);
	output_matrix(array, row);
	delete_neg_elements(array, row);
	printf("\n����� �������\n");
	output_matrix(array, row);
	memory(&array, row, 1);
	return 0;
}