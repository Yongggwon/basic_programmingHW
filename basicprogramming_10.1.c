#include <stdio.h>
#define SIZEx 4		
#define SIZEy 4		//�迭�� ũ�� ����

void change(int a, int b)		//�迭 �ΰ��� �Ű������� �޴� �Լ��̴�.
{
	int z, i;		//z�� �迭�� ���ұ�ȯ�� ���� �� 3�� ������ ����
	int* pa = a, * pb = b;		//�Է¹��� �迭 �� ���� ���� �����ͺ����� ����

	if (SIZEx == SIZEy)		//�迭�� ����� ���ƾ߸� �Լ� ����
	{
		for (i = 0; i < SIZEx; i++)	//�迭�� ũ�⸸ŭ �ݺ�
		{
			z = *(pa + i);	//a�� z��, b�� a��, z�� b�� �����ϸ� a, b�±�ȯ��
			*(pa + i) = *(pb + i);
			*(pb + i) = z;		//+i�� ���� �� �迭�� index�� ���� ���ҳ��� ��ȯ��
		}
		printf("�ٲ� �迭 a�� %d %d %d %d \n", *(pa), *(pa + 1), *(pa + 2), *(pa + 3));
		printf("�ٲ� �迭 b�� %d %d %d %d \n", *(pb), *(pb + 1), *(pb + 2), *(pb + 3));		//�ٲ� �迭 ���
	}
	else
		printf("�迭�� ũ�Ⱑ �ٸ��ϴ�.");		//����� �ٸ��� ����� �޼���
}
int main(void)
{
	int a[SIZEx] = { 1,2,3,4 };
	int b[SIZEy] = { 5,6,7,8 };

	change(a, b);
}