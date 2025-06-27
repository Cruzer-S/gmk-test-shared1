#include "gmk-test-shared1.h"

#include <stdio.h>

#include "gmk-test-shared2.h"

void gmk_test_shared1(void)
{
	printf("gmk_test_shared1\n");

	gmk_test_shared2(5, "gmk_test_shared1");
}
