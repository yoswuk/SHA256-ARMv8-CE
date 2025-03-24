#include <stdio.h>
#include "sha2.h"
#include "sha256.h"

int main(void)
{
    uint8_t buf[1000] = {0};
    uint8_t out[32];

    sha256(out, buf, 1000);
    
    for (int i = 0; i < 32; i++)
    {
        printf("%02x ", out[i]);
    }
    printf("\n");
    
    sha256_2(out, buf, 1000);
    
    for (int i = 0; i < 32; i++)
    {
        printf("%02x ", out[i]);
    }
    printf("\n");

    return 0;
}