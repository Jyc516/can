//
// Created by JiangYC on 2024/11/6.
//



#include "motor.h"

void receiveMessage(CAN_RxHeaderTypeDef *pHeader, uint8_t* rxData) {
    CAN_FilterTypeDef FilterConfig = {0, 0, 0, 0, CAN_FILTER_FIFO0, 13,CAN_FILTERMODE_IDMASK, CAN_FILTERSCALE_32BIT, CAN_FILTER_ENABLE, 0};
    HAL_CAN_ConfigFilter(&hcan1, &FilterConfig);
    HAL_CAN_Start(&hcan1);
    HAL_CAN_ActivateNotification(&hcan1, CAN_IT_RX_FIFO0_MSG_PENDING);
    //HAL_CAN_GetRxMessage(&hcan1, CAN_RX_FIFO0, pHeader, rxData);
}

void transmitMessage(CAN_TxHeaderTypeDef *pHeader, uint32_t *mailbox, uint8_t* txData) {
    HAL_CAN_AddTxMessage(&hcan1, pHeader, txData, mailbox);
}




