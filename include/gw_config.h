#ifndef __GW_CONFIG__
#define __GW_CONFIG__

/*----------------------------------------------------------------------*/
/*
 * ���������궨���ˡ������͡��ء�����״̬���������걻�����
 * �����á����磺
 *
 *	#define	RPU_MODULE_RTPRO_OSPF	RPU_NO
 *	#define	RPU_MODULE_RTPRO_RIP	RPU_YES
 *
 * ��ʾ��̬·��Э��OSPF���رգ�����̬·��Э��RIP����������
 * ����ϵͳ�ڱ���ʱ���Ϳ��Բ��OSPFģ�������RIPģ�顣
 * ��Ҫע�������Щ�����ϻ����һ�Ժ꣬���ܱ�ͬʱ��Ϊ
 * ��RPU_YES����RPU_NO������һ�㽫�����ں���������С�
 * ע�⣬�벻Ҫ�޸����������ֵ��
 */
#define	RPU_YES		1
#define	RPU_NO		0

#define	_LITTLE_ENDIAN_		RPU_NO
#define	_BIG_ENDIAN_		    RPU_YES

/***************************************************************************/

/*
 * os type enum
 * using micro _OS_ to select os type
 */
#define OS_TYPE_CYG_LINUX 1
#define OS_TYPE_LINUX 2
#define OS_TYPE_VXWORKS 3
#define OS_TYPE_UNKNOWN 4

/*
 * socket api class select
 * using micro _SOCKET_CLASS_ to select socket type
 */
#define BSD_SOCKET 1
#define LWIP_SOCKET 2

/*functions*/
#define RPU_MODULE_PPPOE_RELAY 			RPU_NO
#define RPU_MODULE_RCP_SWITCH			RPU_NO
#define RPU_MODULE_LOOPBACK_DETECT		RPU_NO
#define RPU_MODULE_S2E					RPU_NO
#define RPU_MODULE_POE					RPU_NO
#define RPU_MODULE_USER_LOCATE			RPU_NO


/*device info*/
#define NUMBER_PORTS_PER_SYSTEM			32

/*system type define*/
#define _OS_ OS_TYPE_LINUX

/*min stack size of threads*/
#define GW_THREAD_STACK_MIN_SIZE (4*1024)

/*socket class select*/
#define _SOCKET_CLASS_ BSD_SOCKET

#define OS_CYG_LINUX (_OS_ == OS_TYPE_CYG_LINUX)
#define OS_LINUX (_OS_ == OS_TYPE_LINUX)
#define OS_VXWORKS (_OS_ == OS_TYPE_VXWORKS)

#define USING_BSD_SOCK (_SOCKET_CLASS_ == BSD_SOCKET)
#define USING_LWIP_SOCK (_SOCKET_CLASS_ == LWIP_SOCKET)


#endif

