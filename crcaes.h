/*
 * crcaes.h
 *
 *  Created on: Aug 30, 2018
 *      Author: eric_
 */
#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MK64F12.h"
#include "fsl_gpio.h"
#include "fsl_uart.h"
#include "fsl_port.h"
#include "aes.h"
#include "stdint.h"
#ifndef CRCAES_H_
#define CRCAES_H_

void encryption(uint8_t* buf);
void decryption(uint8_t* buf);
void init_cypher(struct AES_ctx* ctx, const uint8_t* key);
void redundancy_check(uint8_t* texto);




#endif /* CRCAES_H_ */
