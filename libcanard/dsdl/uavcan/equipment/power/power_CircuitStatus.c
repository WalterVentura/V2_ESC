/*
 * UAVCAN data structure definition for libcanard.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/benjamin/Skrivbord/tmp/uavcan/libcanard/dsdl_compiler/pyuavcan/uavcan/dsdl_files/uavcan/equipment/power/1091.CircuitStatus.uavcan
 */
#include "uavcan/equipment/power/CircuitStatus.h"
#include "canard.h"

#ifndef CANARD_INTERNAL_SATURATE
#define CANARD_INTERNAL_SATURATE(x,                       \
                                 max)             (((x) > \
                                                    max) ? max : ((-(x) > max) ? (-max) : (x)));
#endif

#ifndef CANARD_INTERNAL_SATURATE_UNSIGNED
#define CANARD_INTERNAL_SATURATE_UNSIGNED(x, max) (((x) > max) ? max : (x));
#endif

#define CANARD_INTERNAL_ENABLE_TAO  ((uint8_t) 1)
#define CANARD_INTERNAL_DISABLE_TAO ((uint8_t) 0)

#if defined(__GNUC__)
# define CANARD_MAYBE_UNUSED(x) x __attribute__((unused))
#else
# define CANARD_MAYBE_UNUSED(x) x
#endif

/**
 * @brief uavcan_equipment_power_CircuitStatus_encode_internal
 * @param source : pointer to source data struct
 * @param msg_buf: pointer to msg storage
 * @param offset: bit offset to msg storage
 * @param root_item: for detecting if TAO should be used
 * @retval returns offset
 */
uint32_t uavcan_equipment_power_CircuitStatus_encode_internal(
    uavcan_equipment_power_CircuitStatus* source, void* msg_buf, uint32_t offset, uint8_t CANARD_MAYBE_UNUSED(
        root_item))
{
#ifndef CANARD_USE_FLOAT16_CAST
    uint16_t tmp_float = 0;
#else
    CANARD_USE_FLOAT16_CAST tmp_float = 0;
#endif

    canardEncodeScalar(msg_buf, offset, 16, (void*) &source->circuit_id); // 65535
    offset += 16;

    // float16 special handling
#ifndef CANARD_USE_FLOAT16_CAST
    tmp_float = canardConvertNativeFloatToFloat16(source->voltage);
#else
    tmp_float = (CANARD_USE_FLOAT16_CAST) source->voltage;
#endif
    canardEncodeScalar(msg_buf, offset, 16, (void*) &tmp_float); // 32767
    offset += 16;

    // float16 special handling
#ifndef CANARD_USE_FLOAT16_CAST
    tmp_float = canardConvertNativeFloatToFloat16(source->current);
#else
    tmp_float = (CANARD_USE_FLOAT16_CAST) source->current;
#endif
    canardEncodeScalar(msg_buf, offset, 16, (void*) &tmp_float); // 32767
    offset += 16;
    canardEncodeScalar(msg_buf, offset, 8, (void*) &source->error_flags); // 255
    offset += 8;

    return offset;
}

/**
 * @brief uavcan_equipment_power_CircuitStatus_encode
 * @param source : Pointer to source data struct
 * @param msg_buf: Pointer to msg storage
 * @retval returns message length as bytes
 */
uint32_t uavcan_equipment_power_CircuitStatus_encode(uavcan_equipment_power_CircuitStatus* source,
                                                     void*                                 msg_buf)
{
    uint32_t offset = 0;

    offset = uavcan_equipment_power_CircuitStatus_encode_internal(source, msg_buf, offset, 1);

    return (offset + 7) / 8;
}

/**
 * @brief uavcan_equipment_power_CircuitStatus_decode_internal
 * @param transfer: Pointer to CanardRxTransfer transfer
 * @param payload_len: Payload message length
 * @param dest: Pointer to destination struct
 * @param dyn_arr_buf: NULL or Pointer to memory storage to be used for dynamic arrays
 *                     uavcan_equipment_power_CircuitStatus dyn memory will point to dyn_arr_buf memory.
 *                     NULL will ignore dynamic arrays decoding.
 * @param offset: Call with 0, bit offset to msg storage
 * @param tao: is tail array optimization used
 * @retval offset or ERROR value if < 0
 */
int32_t uavcan_equipment_power_CircuitStatus_decode_internal(const CanardRxTransfer* transfer, uint16_t CANARD_MAYBE_UNUSED(
                                                                 payload_len), uavcan_equipment_power_CircuitStatus* dest, uint8_t** CANARD_MAYBE_UNUSED(
                                                                 dyn_arr_buf), int32_t offset, uint8_t CANARD_MAYBE_UNUSED(
                                                                 tao))
{
    int32_t ret = 0;
#ifndef CANARD_USE_FLOAT16_CAST
    uint16_t tmp_float = 0;
#else
    CANARD_USE_FLOAT16_CAST tmp_float = 0;
#endif

    ret = canardDecodeScalar(transfer, offset, 16, false, (void*) &dest->circuit_id);

    if(ret != 16)
    {
        goto uavcan_equipment_power_CircuitStatus_error_exit;
    }

    offset += 16;

    // float16 special handling
    ret = canardDecodeScalar(transfer, offset, 16, false, (void*) &tmp_float);

    if(ret != 16)
    {
        goto uavcan_equipment_power_CircuitStatus_error_exit;
    }

#ifndef CANARD_USE_FLOAT16_CAST
    dest->voltage = canardConvertFloat16ToNativeFloat(tmp_float);
#else
    dest->voltage = (float) tmp_float;
#endif
    offset += 16;

    // float16 special handling
    ret = canardDecodeScalar(transfer, offset, 16, false, (void*) &tmp_float);

    if(ret != 16)
    {
        goto uavcan_equipment_power_CircuitStatus_error_exit;
    }

#ifndef CANARD_USE_FLOAT16_CAST
    dest->current = canardConvertFloat16ToNativeFloat(tmp_float);
#else
    dest->current = (float) tmp_float;
#endif
    offset += 16;

    ret = canardDecodeScalar(transfer, offset, 8, false, (void*) &dest->error_flags);

    if(ret != 8)
    {
        goto uavcan_equipment_power_CircuitStatus_error_exit;
    }

    offset += 8;
    return offset;

uavcan_equipment_power_CircuitStatus_error_exit:

    if(ret < 0)
    {
        return ret;
    }
    else
    {
        return -CANARD_ERROR_INTERNAL;
    }
}

/**
 * @brief uavcan_equipment_power_CircuitStatus_decode
 * @param transfer: Pointer to CanardRxTransfer transfer
 * @param payload_len: Payload message length
 * @param dest: Pointer to destination struct
 * @param dyn_arr_buf: NULL or Pointer to memory storage to be used for dynamic arrays
 *                     uavcan_equipment_power_CircuitStatus dyn memory will point to dyn_arr_buf memory.
 *                     NULL will ignore dynamic arrays decoding.
 * @retval offset or ERROR value if < 0
 */
int32_t uavcan_equipment_power_CircuitStatus_decode(const CanardRxTransfer*               transfer,
                                                    uint16_t                              payload_len,
                                                    uavcan_equipment_power_CircuitStatus* dest,
                                                    uint8_t**                             dyn_arr_buf)
{
    const int32_t offset = 0;
    int32_t ret = 0;

    /* Backward compatibility support for removing TAO
     *  - first try to decode with TAO DISABLED
     *  - if it fails fall back to TAO ENABLED
     */
    uint8_t tao = CANARD_INTERNAL_DISABLE_TAO;

    while(1)
    {
        // Clear the destination struct
        for(uint32_t c = 0; c < sizeof(uavcan_equipment_power_CircuitStatus); c++)
        {
            ((uint8_t*) dest)[c] = 0x00;
        }

        ret = uavcan_equipment_power_CircuitStatus_decode_internal(transfer, payload_len, dest,
                                                                   dyn_arr_buf, offset, tao);

        if(ret >= 0)
        {
            break;
        }

        if(tao == CANARD_INTERNAL_ENABLE_TAO)
        {
            break;
        }

        tao = CANARD_INTERNAL_ENABLE_TAO;
    }

    return ret;
}
