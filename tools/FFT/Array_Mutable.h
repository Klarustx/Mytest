//����䳤����

typedef struct
{
	double*array;
	int size;
}Array;

Array array_creat(int init_size)
{
	Array a;
	a.array = (double*)malloc(sizeof(double)*init_size);
	a.size = init_size;
	return a;
}
 
//���տռ�
void array_free(Array *a)
{
	free(a->array);
	a->array = NULL;
	a->size = 0;
}
 
//Ŀǰ�ж��ٸ��ռ������
int  array_size(Array *a)
{
	return a->size;
}
 
void array_set(Array*a, int index, double value)
{
	a->array[index] = value;
}
