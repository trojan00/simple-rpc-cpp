#include <stdio.h>
#include "api.h"

#define PRINTF(fmt...)	do{printf("%s<%d>: ", __FUNCTION__, __LINE__); printf(fmt);}while(0)

void test_scale(int c)
{
	PRINTF("c: %d\n", c);
}
void test_scale_pointer(int *c)
{
	PRINTF("c: %d\n", *c);
	*c = 200;
}
int test_structure(test_structure_t data)
{
	PRINTF("data.a: %d, data.b: %d\n", data.a, data.b);
	return data.a + data.b;
}
int test_structure_pointer(test_structure_t *pdata)
{
	PRINTF("data->a: %d, data->b: %d\n", pdata->a, pdata->b);
	return pdata->a + pdata->b;
}
