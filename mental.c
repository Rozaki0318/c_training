// �ÎZ�g���[�j���O�i�R�̂R���̐�����������j

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	srand(time(NULL));			// �����̎��ݒ�

	int a = 100 + rand() % 900;		// ���Z���鐔�l�F100�`999�̗���
	int b = 100 + rand() % 900;		// �@�@�@�@�@�@�V
	int c = 100 + rand() % 900;		// �@�@�@�@�@�@�V

	printf("%d + %d + %d�͉��ł����F", a, b, c);

	clock_t start = clock();			// �v���J�n

	while (1) {
		int x;					// �ǂݍ��񂾒l
		scanf("%d", &x);
		if (x == a + b + c)
			break;
		printf("\a�Ⴂ�܂���!!\n�ē��͂��Ă��������F");
	}

	clock_t end = clock();				// �v���I��

	double req_time = (double)(end - start) / CLOCKS_PER_SEC;

	printf("%.1f�b������܂����B\n", req_time);

	if (req_time > 30.0)
		printf("���Ԃ������肷���ł��B\n");
	else if (req_time > 17.0)
		printf("�܂��܂��ł��ˁB\n");
	else
		printf("�f�����ł��ˁB\n");

	return 0;
}
