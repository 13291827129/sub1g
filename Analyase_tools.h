#ifndef ANALYSE_TOOLS_H_
#define ANALYSE_TOOLS_H_
#include<stdio.h>
// 进行异或校验函数
int checkSum(char* addr,int len,int length);
enum TYPE
{ 	
	//温度
	TEMPERATURE = 0x01,
	//湿度
	HUMIDITY    = 0x02,
	//震动
	VIBRATE     = 0X71,
	//气压
	PRESSURE    = 0x15,
	//光线
	LINGHT      = 0x22,
	//电量
	ELECTRIC    = 0x73,
	//声音
	VOICE       = 0x5d,
	//二氧化碳
	CO2			= 0x07,
};
struct Exchange_data
{ 	
	char macaddr[256];
	signed short temperature	 = 0xff;
	signed short bodytemperature = 0xff;
	signed char  humidity    	 = 0xff;
	signed short co2             = 0xff;
	signed short light           = 0xff;
	float        co              = 0xff;
	signed char  vibrate_x		 = 0xff;
	signed char  vibrate_y		 = 0xff;
	signed char  vibrate_z		 = 0xff;
	signed short electric        = 0xff;
	signed short voice 	         = 0xff;
	signed short pressure 	     = 0xff;
	

};
int Analyase_data(char* data,int length,struct Exchange_data* exchange_value,int len);
//返回数据长度
int Analyase_num(char* data,int length,int len);

#endif
