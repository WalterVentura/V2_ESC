// This file is autogenerated by VESC Tool

#ifndef APPCONF_LUNA_BBSHD_H_
#define APPCONF_LUNA_BBSHD_H_

// VESC ID
#define APPCONF_CONTROLLER_ID              74

// Timeout
#define APPCONF_TIMEOUT_MSEC               1000

// Timeout Brake Current
#define APPCONF_TIMEOUT_BRAKE_CURRENT      0

// Can Status Rate 1
#define APPCONF_CAN_STATUS_RATE_1          50

// Can Status Rate 2
#define APPCONF_CAN_STATUS_RATE_2          5

// Can Messages Rate 1
#define APPCONF_CAN_STATUS_MSGS_R1         0

// Can Messages Rate 2
#define APPCONF_CAN_STATUS_MSGS_R2         0

// CAN Baud Rate
#define APPCONF_CAN_BAUD_RATE              2

// Pairing Done
#define APPCONF_PAIRING_DONE               0

// Enable Permanent UART
#define APPCONF_PERMANENT_UART_ENABLED     1

// Shutdown Mode
#define APPCONF_SHUTDOWN_MODE              7

// CAN Mode
#define APPCONF_CAN_MODE                   0

// UAVCAN ESC Index
#define APPCONF_UAVCAN_ESC_INDEX           0

// UAVCAN Raw Throttle Mode
#define APPCONF_UAVCAN_RAW_MODE            0

// UAVCAN Raw RPM Max
#define APPCONF_UAVCAN_RAW_RPM_MAX         50000

// UAVCAN Status Current Mode
#define APPCONF_UAVCAN_STATUS_CURRENT_MODE 0

// Enable Servo Output
#define APPCONF_SERVO_OUT_ENABLE           0

// Kill Switch Mode
#define APPCONF_KILL_SW_MODE               0

// APP to Use
#define APPCONF_APP_TO_USE                 10

// Control Type
#define APPCONF_PPM_CTRL_TYPE              0

// PID Max ERPM
#define APPCONF_PPM_PID_MAX_ERPM           15000

// Input Deadband
#define APPCONF_PPM_HYST                   0.15

// Pulselength Start
#define APPCONF_PPM_PULSE_START            1

// Pulselength End
#define APPCONF_PPM_PULSE_END              2

// Pulselength Center
#define APPCONF_PPM_PULSE_CENTER           1.5

// Median Filter
#define APPCONF_PPM_MEDIAN_FILTER          1

// Safe Start
#define APPCONF_PPM_SAFE_START             1

// Throttle Expo
#define APPCONF_PPM_THROTTLE_EXP           0

// Throttle Expo Brake
#define APPCONF_PPM_THROTTLE_EXP_BRAKE     0

// Throttle Expo Mode
#define APPCONF_PPM_THROTTLE_EXP_MODE      2

// Positive Ramping Time
#define APPCONF_PPM_RAMP_TIME_POS          0.4

// Negative Ramping Time
#define APPCONF_PPM_RAMP_TIME_NEG          0.2

// Multiple VESCs Over CAN
#define APPCONF_PPM_MULTI_ESC              1

// Traction Control
#define APPCONF_PPM_TC                     0

// TC Max ERPM Difference
#define APPCONF_PPM_TC_MAX_DIFF            3000

// Max ERPM for direction switch
#define APPCONF_PPM_MAX_ERPM_FOR_DIR       4000

// Smart Reverse Max Duty Cycle
#define APPCONF_PPM_SMART_REV_MAX_DUTY     0.07

// Smart Reverse Ramp Time
#define APPCONF_PPM_SMART_REV_RAMP_TIME    3

// Control Type
#define APPCONF_ADC_CTRL_TYPE              8

// Input Deadband
#define APPCONF_ADC_HYST                   0.05

// ADC1 Start Voltage
#define APPCONF_ADC_VOLTAGE_START          0.6

// ADC1 End Voltage
#define APPCONF_ADC_VOLTAGE_END            2.54

// ADC1 Abs Min Voltage
#define APPCONF_ADC_VOLTAGE_MIN            0.4

// ADC1 Abs Max Voltage
#define APPCONF_ADC_VOLTAGE_MAX            3

// ADC1 Center Voltage
#define APPCONF_ADC_VOLTAGE_CENTER         0.6

// ADC2 Start Voltage
#define APPCONF_ADC_VOLTAGE2_START         0

// ADC2 End Voltage
#define APPCONF_ADC_VOLTAGE2_END           2

// Use Filter
#define APPCONF_ADC_USE_FILTER             1

// Safe Start
#define APPCONF_ADC_SAFE_START             1

// Button Inputs
#define APPCONF_ADC_BUTTONS                0

// Invert ADC1 Voltage
#define APPCONF_ADC_VOLTAGE_INVERTED       0

// Invert ADC2 Voltage
#define APPCONF_ADC_VOLTAGE2_INVERTED      1

// Throttle Expo
#define APPCONF_ADC_THROTTLE_EXP           -0.5

// Throttle Expo Brake
#define APPCONF_ADC_THROTTLE_EXP_BRAKE     0

// Throttle Expo Mode
#define APPCONF_ADC_THROTTLE_EXP_MODE      2

// Positive Ramping Time
#define APPCONF_ADC_RAMP_TIME_POS          0.3

// Negative Ramping Time
#define APPCONF_ADC_RAMP_TIME_NEG          0.1

// Multiple VESCs Over CAN
#define APPCONF_ADC_MULTI_ESC              1

// Traction Control
#define APPCONF_ADC_TC                     0

// TC Max ERPM Difference
#define APPCONF_ADC_TC_MAX_DIFF            3000

// Update Rate
#define APPCONF_ADC_UPDATE_RATE_HZ         500

// Baudrate
#define APPCONF_UART_BAUDRATE              115200

// Control Type
#define APPCONF_CHUK_CTRL_TYPE             1

// Input Deadband
#define APPCONF_CHUK_HYST                  0.15

// Positive Ramping Time
#define APPCONF_CHUK_RAMP_TIME_POS         0.4

// Negative Ramping Time
#define APPCONF_CHUK_RAMP_TIME_NEG         0.2

// ERPM Per Second Cruise Control
#define APPCONF_STICK_ERPM_PER_S_IN_CC     3000

// Throttle Expo
#define APPCONF_CHUK_THROTTLE_EXP          0

// Throttle Expo Brake
#define APPCONF_CHUK_THROTTLE_EXP_BRAKE    0

// Throttle Expo Mode
#define APPCONF_CHUK_THROTTLE_EXP_MODE     2

// Multiple VESCs Over CAN
#define APPCONF_CHUK_MULTI_ESC             1

// Traction Control
#define APPCONF_CHUK_TC                    0

// TC Max ERPM Difference
#define APPCONF_CHUK_TC_MAX_DIFF           3000

// Use Smart Reverse
#define APPCONF_CHUK_USE_SMART_REV         1

// Smart Reverse Max Duty Cycle
#define APPCONF_CHUK_SMART_REV_MAX_DUTY    0.07

// Smart Reverse Ramp Time
#define APPCONF_CHUK_SMART_REV_RAMP_TIME   3

// Speed
#define APPCONF_NRF_SPEED                  1

// TX Power
#define APPCONF_NRF_POWER                  3

// CRC
#define APPCONF_NRF_CRC                    1

// Retry Delay
#define APPCONF_NRF_RETR_DELAY             0

// Retries
#define APPCONF_NRF_RETRIES                3

// Radio Channel
#define APPCONF_NRF_CHANNEL                76

// Address 0
#define APPCONF_NRF_ADDR_B0                198

// Address 1
#define APPCONF_NRF_ADDR_B1                199

// Address 2
#define APPCONF_NRF_ADDR_B2                0

// Send ACK
#define APPCONF_NRF_SEND_CRC_ACK           1

// Control Type
#define APPCONF_PAS_CTRL_TYPE              1

// Sensor Type
#define APPCONF_PAS_SENSOR_TYPE            0

// PAS Max Current
#define APPCONF_PAS_CURRENT_SCALING        0.35

// Pedal RPM Start
#define APPCONF_PAS_PEDAL_RPM_START        10

// Pedal RPM End
#define APPCONF_PAS_PEDAL_RPM_END          120

// Invert Pedal Direction
#define APPCONF_PAS_INVERT_PEDAL_DIRECTION 0

// Sensor Magnets
#define APPCONF_PAS_MAGNETS                24

// Use Filter
#define APPCONF_PAS_USE_FILTER             1

// Positive Ramping Time
#define APPCONF_PAS_RAMP_TIME_POS          1.25

// Negative Ramping Time
#define APPCONF_PAS_RAMP_TIME_NEG          1.25

// Update Rate
#define APPCONF_PAS_UPDATE_RATE_HZ         500

// IMU Type
#define APPCONF_IMU_TYPE                   1

// IMU AHRS Mode
#define APPCONF_IMU_AHRS_MODE              0

// Accel/Gyro Filter
#define APPCONF_IMU_FILTER                 1

// Accel lowpass filter X
#define APPCONF_IMU_ACCEL_LOWPASS_FILTER_X 0

// Accel lowpass filter Y
#define APPCONF_IMU_ACCEL_LOWPASS_FILTER_Y 0

// Accel lowpass filter Z
#define APPCONF_IMU_ACCEL_LOWPASS_FILTER_Z 0

// Gyro lowpass filter
#define APPCONF_IMU_GYRO_LOWPASS_FILTER    0

// Sample Rate
#define APPCONF_IMU_SAMPLE_RATE_HZ         200

// Use magnetometer
#define APPCONF_IMU_USE_MAGNETOMETER       1

// Accelerometer Confidence Decay
#define APPCONF_IMU_ACCEL_CONFIDENCE_DECAY 1

// Mahony KP
#define APPCONF_IMU_MAHONY_KP              0.3

// Mahony KI
#define APPCONF_IMU_MAHONY_KI              0

// Madgwick Beta
#define APPCONF_IMU_MADGWICK_BETA          0.1

// Imu Rotation Roll
#define APPCONF_IMU_ROT_ROLL               0

// Imu Rotation Pitch
#define APPCONF_IMU_ROT_PITCH              0

// Imu Rotation Yaw
#define APPCONF_IMU_ROT_YAW                0

// Accel Offset X
#define APPCONF_IMU_A_OFFSET_0             0

// Accel Offset Y
#define APPCONF_IMU_A_OFFSET_1             0

// Accel Offset Z
#define APPCONF_IMU_A_OFFSET_2             0

// Gyro Offset X
#define APPCONF_IMU_G_OFFSET_0             0

// Gyro Offset Y
#define APPCONF_IMU_G_OFFSET_1             0

// Gyro Offset Z
#define APPCONF_IMU_G_OFFSET_2             0

// APPCONF_LUNA_BBSHD_H_
#endif
