//
// Created by JiangYC on 2024/11/6.
//

#ifndef MOTOR_H
#define MOTOR_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include<can.h>

void receiveMessage(CAN_RxHeaderTypeDef *pHeader, uint8_t *rxData);
void transmitMessage(CAN_TxHeaderTypeDef *pHeader, uint32_t *mailbox, uint8_t *txData);

#ifdef __cplusplus
}
#endif
#endif //MOTOR_H
