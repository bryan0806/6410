#ifndef LED_DRV_H
#define LED_DRV_H


#define LED_ON 1
#define LED_OFF 2

typedef struct _LED_PARAM{
	unsigned int num;
	//unsigned int state;
}LED_PARAM;

typedef struct _KEY_PARAM{
	unsigned int state;
}KEY_PARAM;

#endif
