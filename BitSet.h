#include <stdlib.h>
#include <assert.h>
#include <string.h>

typedef struct BitSet
{
	char* _bits;
	size_t _N;//位个数
}BitSet;

void BitSetInit(BitSet* pbs, size_t n);//初始化位图
void BitSetDestroy(BitSet* pbs);//销毁位图
void BitSetSet(BitSet* pbs, size_t x);//
void BitSetReset(BitSet* pbs, size_t x);//
size_t BitSetTest(BitSet* pbs, size_t x);//