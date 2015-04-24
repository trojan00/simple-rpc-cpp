#ifndef _API_H_
#define _API_H_

typedef struct {
	char dummy1[1000];
	int a;
	char dummy2[1000];
	int b;
} test_structure_t;

void test_scale(int c);
void test_scale_pointer(int *c);
int test_structure(test_structure_t data);
int test_structure_pointer(test_structure_t *pdata);

#endif