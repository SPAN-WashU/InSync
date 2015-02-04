
#ifndef _SDR_DEF_H
#define _SDR_DEF_H

// This file put the definition for both kernel and user

typedef enum MSS_GPIO_ID{
	MSS_GPIO_0 = 0,
	MSS_GPIO_1 = 1,
	MSS_GPIO_2 = 2,
	MSS_GPIO_3 = 3,
	MSS_GPIO_4 = 4,
	MSS_GPIO_5 = 5,
	MSS_GPIO_6 = 6,
	MSS_GPIO_7 = 7,
	MSS_GPIO_8 = 8,
	MSS_GPIO_9 = 9,
	MSS_GPIO_10 = 10,
	MSS_GPIO_11 = 11,
	MSS_GPIO_12 = 12,
	MSS_GPIO_13 = 13,
	MSS_GPIO_14 = 14,
	MSS_GPIO_15 = 15,
	MSS_GPIO_16 = 16,
	MSS_GPIO_17 = 17,
	MSS_GPIO_18 = 18,
	MSS_GPIO_19 = 19,
	MSS_GPIO_20 = 20,
	MSS_GPIO_21 = 21,
	MSS_GPIO_22 = 22,
	MSS_GPIO_23 = 23,
	MSS_GPIO_24 = 24,
	MSS_GPIO_25 = 25,
	MSS_GPIO_26 = 26,
	MSS_GPIO_27 = 27,
	MSS_GPIO_28 = 28,
	MSS_GPIO_29 = 29,
	MSS_GPIO_30 = 30,
	MSS_GPIO_31 = 31
} MSS_GPIO_Type;

typedef enum mss_timer2_mode{
	MSS_TIMER_PERIODIC_MODE = 0,
	MSS_TIMER_ONE_SHOT_MODE = 1
} MSS_TIMER2_MODE_Type;


#define CLEAR_PORT_A_DONE_MASK	0x00000080
#define CLEAR_PORT_B_DONE_MASK	0x00000100

typedef enum pdma_channel_id{
	PDMA_CHANNEL_0 = 0,
	PDMA_CHANNEL_1 = 1,
	PDMA_CHANNEL_2 = 2,
	PDMA_CHANNEL_3 = 3,
	PDMA_CHANNEL_4 = 4,
	PDMA_CHANNEL_5 = 5,
	PDMA_CHANNEL_6 = 6,
	PDMA_CHANNEL_7 = 7
} PDMA_CHANNEL_ID_Type;

/* IOCTL Definition */
#define SDR_IOC_MAGIC 's'
#define GPIO_IOC_ENABLE_IRQ		_IOW(SDR_IOC_MAGIC, 0, MSS_GPIO_Type)
#define GPIO_IOC_DISABLE_IRQ	_IOW(SDR_IOC_MAGIC, 1, MSS_GPIO_Type)
#define TIMER2_IOC_INIT			_IOW(SDR_IOC_MAGIC, 2, MSS_TIMER2_MODE_Type)
#define TIMER2_IOC_ENABLE_IRQ	_IO(SDR_IOC_MAGIC, 3)
#define TIMER2_IOC_DISABLE_IRQ	_IO(SDR_IOC_MAGIC, 4)
#define PDMA_IOC_ENABLE_IRQ		_IOW(SDR_IOC_MAGIC, 5, PDMA_CHANNEL_ID_Type)
#define PDMA_IOC_DISABLE_IRQ	_IOW(SDR_IOC_MAGIC, 6, PDMA_CHANNEL_ID_Type)
#define SDR_IOC_SLEEP_PROC		_IOR(SDR_IOC_MAGIC, 7, int)

#define SDR_IOC_MAXNR 7

#endif
