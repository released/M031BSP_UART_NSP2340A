#define CMD_READ_ID             0x10
#define CMD_READ_STATUS         0x11
#define CMD_DO_LVD              0x12
#define CMD_GET_LVD             0x13
#define CMD_CHECKSUM_RIGHT      0x14
#define CMD_GET_CHECKSUM        0x15
#define CMD_DO_CHECKSUM         0x16
#define CMD_GET_FW_VERSION      0x17
#define CMD_GET_MAX_INDEX	0x75
#define CMD_CHECK_INDEX_RCOUNT	0x76
#define CMD_GET_INDEX_RCOUNT	0x77
#define CMD_PAUSE              	0x78
#define CMD_RESUME              0x79
#define CMD_STOP_REPEAT         0x7B
#define CMD_REPEAT              0x7C
#define CMD_MULTI_PLAY          0x7D
#define CMD_MULTI_PLAY_2B       0x7A
#define CMD_PLAY_SLEEP          0x7E
#define CMD_PLAY                0x7F
#define CMD_STOP                0x80
#define CMD_RESET               0x81
#define CMD_PWR_DOWN            0x82
#define CMD_AUTO_SLEEP_EN       0x83
#define CMD_AUTO_SLEEP_DIS      0x84
#define CMD_IO_CONFIG           0x88
#define CMD_IO_TYPE             0x89
#define CMD_SET_OUT             0x8A
#define CMD_GET_INOUT           0x8B
#define CMD_BZPIN_EN            0x8E
#define CMD_BZPIN_DIS           0x8F
#define CMD_ISP_WRITE_START     0xD0
#define CMD_ISP_WRITE_END       0xD1
#define CMD_ISP_WRITE_PAGE      0xD2
#define CMD_ISP_READ_PAGE       0xD3
#define CMD_ISP_CHECKSUM        0xD4
#define CMD_ISP_READ_RES_INDEX 0xD5
#define CMD_ISP_GET_RES_INFO 	0xD6
#define CMD_ISP_WRITE_PARTIAL_START 0xD7
#define CMD_ISP_WRITE_PARTIAL_BAK 0xD8
#define CMD_ISP_WRITE_PARTIAL   0xD9
#define CMD_ISP_READ_PARTIAL    0xDA
#define CMD_ISP_GET_USER_SPACE_INFO    0xDB
#define CMD_SET_VOL_NSP         0xF0
#define CMD_GET_VOL             0xF1
#define CMD_PLAY_CHANNEL              0xA0
#define CMD_STOP_CHANNEL              0xA1
#define CMD_PAUSE_CHANNEL             0xA2
#define CMD_RESUME_CHANNEL            0xA3

#define CMD_READ_ID_TX_BYTE           0x2
#define CMD_READ_STATUS_TX_BYTE       0x2
#define CMD_DO_LVD_TX_BYTE            0x2
#define CMD_GET_LVD_TX_BYTE           0x2
#define CMD_CHECKSUM_RIGHT_TX_BYTE    0x2
#define CMD_GET_CHECKSUM_TX_BYTE      0x2
#define CMD_DO_CHECKSUM_TX_BYTE       0x2
#define CMD_GET_FW_VERSION_TX_BYTE    0x2
#define CMD_GET_MAX_INDEX_TX_BYTE     0x2
#define CMD_CHECK_INDEX_RCOUNT_TX_BYTE 0x4
#define CMD_GET_INDEX_RCOUNT_TX_BYTE   0x2
#define CMD_PAUSE_TX_BYTE             0x2
#define CMD_RESUME_TX_BYTE            0x2
#define CMD_STOP_REPEAT_TX_BYTE       0x2
#define CMD_REPEAT_TX_BYTE            0x3
#define CMD_MULTI_PLAY_TX_BYTE        0x4
#define CMD_MULTI_PLAY_2B_TX_BYTE     0x3
#define CMD_PLAY_SLEEP_TX_BYTE        0x4
#define CMD_PLAY_TX_BYTE              0x4
#define CMD_STOP_TX_BYTE              0x2
#define CMD_RESET_TX_BYTE             0x2
#define CMD_PWR_DOWN_TX_BYTE          0x2
#define CMD_AUTO_SLEEP_EN_TX_BYTE     0x2
#define CMD_AUTO_SLEEP_DIS_TX_BYTE    0x2
#define CMD_IO_CONFIG_TX_BYTE         0x3
#define CMD_IO_TYPE_TX_BYTE           0x2
#define CMD_SET_OUT_TX_BYTE           0x3
#define CMD_GET_INOUT_TX_BYTE         0x2
#define CMD_BZPIN_EN_TX_BYTE          0x2
#define CMD_BZPIN_DIS_TX_BYTE         0x2
#define CMD_ISP_WRITE_START_TX_BYTE   0x8
#define CMD_ISP_WRITE_END_TX_BYTE     0x2
#define CMD_ISP_WRITE_PAGE_TX_BYTE    0x205
#define CMD_ISP_READ_PAGE_TX_BYTE     0x5
#define CMD_ISP_CHECKSUM_TX_BYTE      0x2
#define CMD_ISP_READ_RES_INDEX_TX_BYTE 0x4
#define CMD_ISP_GET_RES_INFO_TX_BYTE  0x2
#define CMD_ISP_WRITE_PARTIAL_START_TX_BYTE  0x2
#define CMD_ISP_WRITE_PARTIAL_BAK_TX_BYTE 0x5
#define CMD_ISP_WRITE_PARTIAL_TX_BYTE 0x7
#define CMD_ISP_READ_PARTIAL_TX_BYTE  0x7
#define CMD_ISP_GET_USER_SPACE_INFO_TX_BYTE  0x02
#define CMD_SET_VOL_TX_BYTE           0x3
#define CMD_GET_VOL_TX_BYTE           0x2
#define CMD_PLAY_CHANNEL_TX_BYTE      0x3
#define CMD_STOP_CHANNEL_TX_BYTE      0x3
#define CMD_PAUSE_CHANNEL_TX_BYTE     0x3
#define CMD_RESUME_CHANNEL_TX_BYTE    0x3

#define CMD_READ_ID_RX_BYTE           0x5
#define CMD_READ_STATUS_RX_BYTE       0x2
#define CMD_DO_LVD_RX_BYTE            0x1
#define CMD_GET_LVD_RX_BYTE           0x2
#define CMD_CHECKSUM_RIGHT_RX_BYTE    0x2
#define CMD_GET_CHECKSUM_RX_BYTE      0x3
#define CMD_DO_CHECKSUM_RX_BYTE       0x1
#define CMD_GET_FW_VERSION_RX_BYTE    0x4
#define CMD_GET_MAX_INDEX_RX_BYTE     0x3
#define CMD_CHECK_INDEX_RCOUNT_RX_BYTE 0x1
#define CMD_GET_INDEX_RCOUNT_RX_BYTE   0x2
#define CMD_PAUSE_RX_BYTE             0x1
#define CMD_RESUME_RX_BYTE            0x1
#define CMD_STOP_REPEAT_RX_BYTE       0x1
#define CMD_REPEAT_RX_BYTE            0x1
#define CMD_MULTI_PLAY_RX_BYTE        0x1
#define CMD_MULTI_PLAY_2B_RX_BYTE     0x1
#define CMD_PLAY_SLEEP_RX_BYTE        0x1
#define CMD_PLAY_RX_BYTE              0x1
#define CMD_STOP_RX_BYTE              0x1
#define CMD_RESET_RX_BYTE             0x1
#define CMD_PWR_DOWN_RX_BYTE          0x1
#define CMD_AUTO_SLEEP_EN_RX_BYTE     0x1
#define CMD_AUTO_SLEEP_DIS_RX_BYTE    0x1
#define CMD_IO_CONFIG_RX_BYTE         0x1
#define CMD_IO_TYPE_RX_BYTE           0x2
#define CMD_SET_OUT_RX_BYTE           0x1
#define CMD_GET_INOUT_RX_BYTE         0x2
#define CMD_BZPIN_EN_RX_BYTE          0x1
#define CMD_BZPIN_DIS_RX_BYTE         0x1
#define CMD_ISP_WRITE_START_RX_BYTE   0x1
#define CMD_ISP_WRITE_END_RX_BYTE     0x1
#define CMD_ISP_WRITE_PAGE_RX_BYTE    0x1
#define CMD_ISP_READ_PAGE_RX_BYTE     0x201
#define CMD_ISP_CHECKSUM_RX_BYTE      0x3
#define CMD_ISP_READ_RES_INDEX_RX_BYTE 0x1
#define CMD_ISP_GET_RES_INFO_RX_BYTE  0xD
#define CMD_ISP_WRITE_PARTIAL_START_RX_BYTE  0x1
#define CMD_ISP_WRITE_PARTIAL_BAK_RX_BYTE 0x1
#define CMD_ISP_WRITE_PARTIAL_RX_BYTE 0x1
#define CMD_ISP_READ_PARTIAL_RX_BYTE  0x1
#define CMD_ISP_GET_USER_SPACE_INFO_RX_BYTE  0xD
#define CMD_SET_VOL_RX_BYTE           0x1
#define CMD_GET_VOL_RX_BYTE           0x2
#define CMD_PLAY_CHANNEL_RX_BYTE      0x1
#define CMD_STOP_CHANNEL_RX_BYTE      0x1
#define CMD_PAUSE_CHANNEL_RX_BYTE     0x1
#define CMD_RESUME_CHANNEL_RX_BYTE    0x1
//-----------------------------------------
#define RIGHT_RTN		0xA5
#define ERROR_RTN		0xFA
#define UNSUPPORTED_RTN	0x5F
//-----------------------------------------
// #define BIT0	0x1
// #define BIT1	0x2
// #define BIT2	0x4
// #define BIT3	0x8
// #define BIT4	0x10
// #define BIT5	0x20
// #define BIT6	0x40
// #define BIT7	0x80
//-----------------------------------------
#define SP_BUSY			BIT7
#define CMD_VALID		BIT6
//-----------------------------------------
#define MAX_EQU_LIST 		0x0006
#define RESET_ERROR_COUNT	0x05
//-----------------------------------------
    /* exact-width unsigned integer types */
typedef unsigned          char UINT8;
typedef unsigned short     int UINT16;
typedef unsigned           int UINT32;
typedef unsigned char *		PUINT8;
typedef unsigned short int  *	PUINT16;

void HOST_SYS_Init(void);
void HOST_BUS_Init(void);
UINT16 N_UART_READ(UINT16 READ_SIZE);
UINT16 N_UART_WRITE(UINT16 WRITE_SIZE);

void HOST_Init(UINT8* SP_VOL);
void HOST_UART_WRITE_DURATION(void);
void HOST_UART_READ_DURATION(void);
void HOST_CMD_INTERVAL(void);
void HOST_Delay500uS(void);

UINT8 N_READ_ID(UINT32* PID);
UINT8 N_READ_STATUS(UINT8* COMMAND_STATUS);
UINT8 N_DO_LVD(void);
UINT8 N_GET_LVD(UINT8* LVD_STATUS);
UINT8 N_CHECKSUM_RIGHT(UINT8* CHECKSUM_BIT);
UINT8 N_GET_CHECKSUM(UINT16* CHECKSUM_BYTES);
UINT8 N_DO_CHECKSUM(void);
UINT8 N_GET_FW_VERSION(UINT32* PFW_VERSION);
UINT8 N_STOP_REPEAT(void);
UINT8 N_PLAY_REPEAT(UINT8 REPEAT_COUNT);
UINT8 N_PLAY(UINT16 PlayListIndex);
UINT8 N_PLAY_SLEEP(UINT16 PlayListIndex);
UINT8 N_IO_CONFIG(UINT8 IO_FLAG);
UINT8 N_IO_TYPE(UINT8* READ_IO_FLAG);
UINT8 N_SET_OUT(UINT8 IO_VALUE);
UINT8 N_GET_INOUT(UINT8* READ_IO_VALUE);
UINT8 N_BZPIN_EN(void);
UINT8 N_BZPIN_DIS(void);
UINT8 N_SET_VOL(UINT8 SP_VOL);
UINT8 N_GET_VOL(UINT8* SP_VOL);
UINT8 N_STOP(void);
UINT8 N_RESET(void);
UINT8 N_PWR_DOWN(void);
UINT8 N_ISP_CHECKSUM(UINT16* ISP_CHECKSUM_BYTES);
UINT8 N_ISP_WRITE_START(UINT32 PROC_ID,UINT32 CHIP_PDID);
UINT8 N_ISP_WRITE_END(void);
UINT8 N_ISP_WRITE_PAGE(UINT32 ISP_ADDR,PUINT8 ISP_BUFFER);
UINT8 N_ISP_READ_PAGE(UINT32 ISP_ADDR,PUINT8 ISP_BUFFER);
UINT8 N_ISP_READ_RES_INDEX(UINT16 ResourceIndex);
UINT8 N_ISP_GET_RES_INFO(UINT32* SpaceSize,UINT32* ResourceStartAddr,UINT16* FisrtPageDataByte,UINT16* PageCount,UINT16* LastPageDataByte);
UINT8 N_ISP_WRITE_PARTIAL_START(void);
UINT8 N_ISP_WRITE_PARTIAL_BAK(UINT32 ISP_ADDR);
UINT8 N_ISP_WRITE_PARTIAL(UINT32 ISP_ADDR,UINT16 ISPSize,PUINT8 ISP_BUFFER);
UINT8 N_ISP_READ_PARTIAL(UINT32 ISP_ADDR,UINT16 ISPSize,PUINT8 ISP_BUFFER);
UINT8 N_ISP_GET_USER_SPACE_INFO(UINT32* SpaceSize,UINT32* ResourceStartAddr,UINT16* FisrtPageDataByte,UINT16* PageCount,UINT16* LastPageDataByte);
UINT8 N_MULTI_PLAY(UINT8 PlayListNum,PUINT8 DATA_BUFFER);
UINT8 N_MULTI_PLAY_2B(UINT8 PlayListNum,PUINT16 DATA_BUFFER);
UINT8 N_AUTO_SLEEP_EN(void);
UINT8 N_AUTO_SLEEP_DIS(void);
UINT8 N_PAUSE(void);
UINT8 N_RESUME(void);
UINT8 N_CHECK_INDEX_RCOUNT(UINT16 PlayListIndex);
UINT8 N_GET_INDEX_RCOUNT(UINT8* RESOURCE_COUNT);
UINT8 N_GET_MAX_INDEX(UINT16* MAX_INDEX);
void N_WAKUP(void);

UINT8 N_PLAY_CHANNEL(UINT8 ChannelMsk, UINT16* PlayIndexArry);
UINT8 N_STOP_CHANNEL(UINT8 ChannelMsk);
UINT8 N_PAUSE_CHANNEL(UINT8 ChannelMsk);
UINT8 N_RESUME_CHANNEL(UINT8 ChannelMsk);

