/******************************************************************************
  ��Ȩ����  : 2007-2020����Ϊ�������޹�˾
  �� �� ��  : qosapi.h
  ��    ��  : c00126165
  ��    ��  : V100R002C03
  ��������  : 2008-9-25
  ��    ��  : 
  �����б�  :

  ��ʷ��¼      :
   1.��    ��   : 2008-9-25
     ��    ��   : c00126165
     �޸�����   : ��ɳ���

*********************************************************************************/
#ifndef __QOS_API_H__
#define __QOS_API_H__

#include "atputil.h"

#define ATP_IPRULE_DEL 0
#define ATP_IPRULE_ADD 1



/******************************************************************************
  ��������  : ATP_QOS_Init
  ��������  : 
              QOS��ʼ��
  �������  : 
  ���ú���  : 
  ��������  : 
  �������  : ��
  �� �� ֵ  : ��

  �޸���ʷ      :
   1.��    ��   : 2010-1-28
     ��    ��   : 
     �޸�����   : ��ɳ���

******************************************************************************/
extern VOS_UINT32 ATP_QOS_Init(VOS_VOID);

/******************************************************************************
  ��������  : ATP_QOS_WanLinkUp
  ��������  : 
              ADSL�����QoS�ṩ�Ķ���ӿ�
  �������  : 
              1.  ulWdInstId:
  ���ú���  : 
  ��������  : 
  �������  : ��
  �� �� ֵ  : ��

  �޸���ʷ      :
   1.��    ��   : 2008-9-25
     ��    ��   : c00126165
     �޸�����   : ��ɳ���

******************************************************************************/
extern VOS_UINT32 ATP_QOS_WanLinkUp(VOS_UINT32 ulWdInstId);

/******************************************************************************
  ��������  : ATP_QOS_WanLinkDown
  ��������  : 
              ADSL Down��QoS�ṩ�Ķ���ӿ�
  �������  : 
              1.  ulWdInstId:
  ���ú���  : 
  ��������  : 
  �������  : ��
  �� �� ֵ  : ��

  �޸���ʷ      :
   1.��    ��   : 2008-9-25
     ��    ��   : c00126165
     �޸�����   : ��ɳ���

******************************************************************************/
extern VOS_UINT32 ATP_QOS_WanLinkDown(VOS_UINT32 ulWdInstId);


extern VOS_VOID DT_QOS_LanChange(VOS_CHAR* pszNewLanIp, VOS_CHAR* pszNewSubnetMask);



#endif