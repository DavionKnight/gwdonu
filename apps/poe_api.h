#ifndef __POE_API__
#define __POE_API__

#define POE_PORT_ENABLE 1
#define POE_POWER_DISABLE 0
#define POE_POWER_ENABLE 1

#define CPLD_VERSION_1 1


extern int onu_cpld_read_register(unsigned int type,unsigned char* val);
extern int onu_cpld_write_register(unsigned int type,unsigned int val);

extern int cmd_onu_cpld_reg_cfg_set(struct cli_def *cli, char *command, char *argv[], int argc);
extern gw_uint8 gw_onu_read_port_num();

#endif
