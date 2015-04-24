#include <stdio.h>
#include <assert.h>
#include "api.h"

int main()
{
	test_structure_t data;

	int i = 100;

	while (i--) {
		int c = 100;
		test_scale(c);
		test_scale_pointer(&c);
		assert(c == 200);

		data.a = 1;
		data.b = 1;
		assert(test_structure(data) == 2);

		data.a = 2;
		data.b = 2;
		assert(test_structure_pointer(&data) == 4);
	}
}