#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "crypto.h"

int
main(void)
{
	unsigned char input[] = "pleasure.";
	char output[13];
	bzero(output, sizeof(output));
	base64_encode(input, sizeof(input) - 1, output);
	base64_decode(output, sizeof(output) - 1, decode);

	return 0;
}

