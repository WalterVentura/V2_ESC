/*
 * UAVCAN data structure definition for libcanard.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /Users/jaime/Developer/ardupilot/modules/uavcan/dsdl/uavcan/equipment/esc/1030.RawCommand.uavcan
 */

#ifndef __UAVCAN_EQUIPMENT_ESC_RAWCOMMAND
#define __UAVCAN_EQUIPMENT_ESC_RAWCOMMAND

#include <stdint.h>
#include "canard.h"

#ifdef __cplusplus
extern "C"
{
#endif

/******************************* Source text **********************************
 #
 # Raw ESC command normalized into [-8192, 8191]; negative values indicate reverse rotation.
 # The ESC should normalize the setpoint into its effective input range.
 # Non-zero setpoint value below minimum should be interpreted as min valid setpoint for the given motor.
 #
 #
 # int14[<=20] cmd
 ******************************************************************************/

/********************* DSDL signature source definition ***********************
 * uavcan.equipment.esc.RawCommand
 * saturated int14[<=20] cmd
 ******************************************************************************/

#define UAVCAN_EQUIPMENT_ESC_RAWCOMMAND_ID             1030
#define UAVCAN_EQUIPMENT_ESC_RAWCOMMAND_NAME           "uavcan.equipment.esc.RawCommand"
#define UAVCAN_EQUIPMENT_ESC_RAWCOMMAND_SIGNATURE      (0x217F5C87D7EC951DULL)

#define UAVCAN_EQUIPMENT_ESC_RAWCOMMAND_MAX_SIZE       ((285 + 7) / 8)

// Constants

#define UAVCAN_EQUIPMENT_ESC_RAWCOMMAND_CMD_MAX_LENGTH 20

typedef struct
{
    // FieldTypes
    struct
    {
        uint8_t  len;  // Dynamic array length
        int16_t* data; // Dynamic Array 14bit[20] max items
    } cmd;
} uavcan_equipment_esc_RawCommand;

extern
uint32_t uavcan_equipment_esc_RawCommand_encode(uavcan_equipment_esc_RawCommand* source,
                                                void*                            msg_buf);

extern
int32_t uavcan_equipment_esc_RawCommand_decode(const CanardRxTransfer*          transfer,
                                               uint16_t                         payload_len,
                                               uavcan_equipment_esc_RawCommand* dest,
                                               uint8_t**                        dyn_arr_buf);

extern
uint32_t uavcan_equipment_esc_RawCommand_encode_internal(uavcan_equipment_esc_RawCommand* source,
                                                         void* msg_buf, uint32_t offset,
                                                         uint8_t root_item);

extern
int32_t uavcan_equipment_esc_RawCommand_decode_internal(const CanardRxTransfer* transfer,
                                                        uint16_t payload_len,
                                                        uavcan_equipment_esc_RawCommand* dest,
                                                        uint8_t** dyn_arr_buf, int32_t offset);

#ifdef __cplusplus
} // extern "C"
#endif
#endif // __UAVCAN_EQUIPMENT_ESC_RAWCOMMAND
