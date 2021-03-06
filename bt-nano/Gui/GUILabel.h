/*
********************************************************************************************
*
*  Copyright (c):  Fuzhou Rockchip Electronics Co., Ltd
*                        All rights reserved.
*
* FileName: ..\Gui\GUILabel.h
* Owner: zhuzhe
* Date: 2014.5.12
* Time: 15:07:56
* Desc:
* History:
*     <author>     <date>       <time>     <version>       <Desc>
* zhuzhe      2014.5.12     15:07:56   1.0
********************************************************************************************
*/

#ifndef __GUI_GUILABEL_H__
#define __GUI_GUILABEL_H__

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
extern rk_err_t GUI_LabelFocus(HGC pLabel,uint8* PanelBuf);
extern rk_err_t GUI_LabelDraw(HGC pLabel,uint8* PanelBuf);
extern HGC GUI_LabelCreate(uint16 x1,uint16 x2,uint16 y1,uint16 y2,uint8  Layer,uint16  BackgroundColor,uint16  ForegroundColor, uint32  PictureID,uint8* TextBuf);



#endif

