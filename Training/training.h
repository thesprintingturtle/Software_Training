#ifndef TRAINING_H
#define TRAINING_H

#include "RoveComm.h"

#define LIMITSW_1 PE_2

RoveCommEthernet RoveComm;
rovecomm_packet packet;

uint32_t lat_update_time;

EthernetServer TCPServer(RC_ROVECOMM_DRIVEBOARD_PORT);

int16_t motorSpeeds[4];

#endif