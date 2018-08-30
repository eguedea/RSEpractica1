#include "stdint.h"

void init_cypher(struct AES_ctx *ctx,const uint8_t* key)
{
    AES_init_ctx(&ctx, key);
}
void encryption(struct AES_ctx *ctx,uint8_t* buf,const uint8_t* key)
{


	AES_ECB_encrypt(&ctx, buf);
}

void decryption(struct AES_ctx *ctx,uint8_t* buf)
{
	AES_ECB_decrypt(&ctx, buf);
}
void redundancy_check(){


}
