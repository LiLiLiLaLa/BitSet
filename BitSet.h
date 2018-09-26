#include <stdlib.h>
#include <assert.h>
#include <string.h>

typedef struct BitSet
{
	char* _bits;
	size_t _N;//λ����
}BitSet;

void BitSetInit(BitSet* pbs, size_t n);//��ʼ��λͼ
void BitSetDestroy(BitSet* pbs);//����λͼ
void BitSetSet(BitSet* pbs, size_t x);//
void BitSetReset(BitSet* pbs, size_t x);//
size_t BitSetTest(BitSet* pbs, size_t x);//