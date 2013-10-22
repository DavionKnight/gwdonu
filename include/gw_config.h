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

#define	LITTLE_ENDIAN		RPU_NO
#define	BIG_ENDIAN		    RPU_NO

/***************************************************************************/

/*functions*/
#define RPU_MODULE_PPPOE_RELAY 			RPU_NO
#define RPU_MODULE_RCP_SWITCH			RPU_NO
#define RPU_MODULE_LOOPBACK_DETECT		RPU_NO
#define RPU_MODULE_S2E					RPU_NO
#define RPU_MODULE_POE					RPU_NO
#define RPU_MODULE_USER_LOCATE			RPU_NO


/*device info*/
#define NUMBER_PORTS_PER_SYSTEM			32



#endif

