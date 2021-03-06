/*
********************************************************************************************
*
*  Copyright (c):Fuzhou Rockchip Electronics Co., Ltd
*                         All rights reserved.
*
* FileName: Driver\Example\DeviceFormat.h
* Owner: Aaron.sun
* Date: 2014.5.16
* Time: 16:49:25
* Desc:
* History:
*    <author>	 <date> 	  <time>	 <version>	   <Desc>
*    Aaron.sun     2014.5.16     16:49:25   1.0
********************************************************************************************
*/

#ifndef __DRIVER_EXAMPLE_DEVICEFORMAT_H__
#define __DRIVER_EXAMPLE_DEVICEFORMAT_H__

/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   #include define
*
*---------------------------------------------------------------------------------------------------------------------
*/



/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   #define / #typedef define
*
*---------------------------------------------------------------------------------------------------------------------
*/

/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   global variable declare
*
*---------------------------------------------------------------------------------------------------------------------
*/



/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   API Declare
*
*---------------------------------------------------------------------------------------------------------------------
*/
extern rk_err_t TestDev_Shell(HDC dev, uint8 * pstr);
extern rk_err_t TestDev_Write(HDC dev);
extern rk_err_t TestDev_Read(HDC dev);
extern HDC TestDev_Create(void * arg);



#endif

