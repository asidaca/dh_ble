/**
 * @file				DhError.h
 * @brief			错误宏相关定义
 * @author			fengxun
 * @date			2017年12月6日
*/

#define DH_SUCCESS							(0x00)

#define ERR_LINK_BASE						(0xFF000000)
#define ERR_LINK_INVALID_PARAMS				(ERR_LINK_BASE+0x000001)
#define ERR_LINK_INVALID_LEN				(ERR_LINK_BASE+0x000003)
#define ERR_LINK_START_ERROR				(ERR_LINK_BASE+0x000004)
#define ERR_LINK_NOT_CHANNEL_MAP_REQ        (ERR_LINK_BASE+0x000005)
#define ERR_LINK_NOT_CONN_UPDATE_REQ        (ERR_LINK_BASE+0x000006)
#define ERR_HA_TIMER_BASE					(0xFE000000)
#define ERR_LP_TIMER_BASE					(0xFD000000)

#define ERR_DH_QUEUE_BASE					(0xFC000000)
#define ERR_DH_QUEUE_SIZE_INVALID			(ERR_DH_QUEUE_BASE + 0x000001)
#define ERR_DH_QUEUE_FULL					(ERR_DH_QUEUE_BASE + 0x000002)
#define ERR_DH_QEUEUE_EMPTY					(ERR_DH_QUEUE_BASE + 0x000003)

#define ERR_L2CAP_BASE						(0xFB000000)
#define ERR_L2CAP_INVALID_PARAM				(ERR_L2CAP_BASE+0x000001)
#define ERR_L2CAP_INVALID_CHANNEL			(ERR_L2CAP_BASE+0x000002)
#define ERR_L2CAP_INVALID_LENGTH			(ERR_L2CAP_BASE+0x000003)
#define ERR_L2CAP_INSUFFICIENT_RESOURCE		(ERR_L2CAP_BASE+0x000004)

#define ERR_GATT_BASE						(0xFA000000)
#define ERR_GATT_INVALID_HANDLE				(ERR_GATT_BASE+0x000001)
#define ERR_GATT_NOT_FIND_ATT				(ERR_GATT_BASE+0x000002)
#define ERR_GATT_RESOURCE_INSUFFICCIENT     (ERR_GATT_BASE+0x000003)
#define ERR_GATT_INVALID_PARAMS             (ERR_GATT_BASE+0x000004)

#define ERR_ATT_BASE						(0xF9000000)
#define ERR_ATT_SEND_RSP_FAILED				(ERR_ATT_BASE+0x000001)
#define ERR_ATT_INVALID_PARAMS              (ERR_ATT_BASE+0x000002)
#define ERR_ATT_NOT_FIND                    (ERR_ATT_BASE+0x000003)

#define ERR_DH_MEMORY_BASE                  (0xF8000000)
#define ERR_DH_MEMORY_PARAMS_IINVALID       (ERR_DH_MEMORY_BASE+0x000001)
#define ERR_DH_MEMORY_INSUFFICIENT          (ERR_DH_MEMORY_BASE+0x000002)

#define ERR_GAP_BASE                        (0xF7000000)
#define ERR_GAP_ADV_INVALID_PARAMS          (ERR_GAP_BASE+0x000001)
#define ERR_GAP_INTERNAL                    (ERR_GAP_BASE+0x000002)
#define ERR_GAP_INVALID_PARAMS              (ERR_GAP_BASE+0x000003)
#define ERR_GAP_BUFF_LEN                    (ERR_GAP_BASE+0x000004)
