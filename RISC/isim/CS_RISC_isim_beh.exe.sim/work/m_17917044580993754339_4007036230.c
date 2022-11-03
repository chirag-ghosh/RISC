/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/invisiblehat/Documents/Academics/COA/lab/RISC/RISC/Branch_Control.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};



static void Always_30_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    t1 = (t0 + 3000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3320);
    *((int *)t2) = 1;
    t3 = (t0 + 3032);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(32, ng0);

LAB16:    xsi_set_current_line(33, ng0);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);

LAB17:    t7 = ((char*)((ng2)));
    t9 = xsi_vlog_unsigned_case_compare(t8, 5, t7, 5);
    if (t9 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 5, t2, 5);
    if (t6 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 5, t2, 5);
    if (t6 == 1)
        goto LAB22;

LAB23:
LAB25:
LAB24:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB26:    goto LAB15;

LAB9:    xsi_set_current_line(62, ng0);

LAB50:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 1208U);
    t10 = *((char **)t3);

LAB51:    t3 = ((char*)((ng2)));
    t9 = xsi_vlog_unsigned_case_compare(t10, 5, t3, 5);
    if (t9 == 1)
        goto LAB52;

LAB53:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t10, 5, t2, 5);
    if (t6 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t10, 5, t2, 5);
    if (t6 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t10, 5, t2, 5);
    if (t6 == 1)
        goto LAB58;

LAB59:
LAB61:
LAB60:    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB62:    goto LAB15;

LAB11:    xsi_set_current_line(103, ng0);

LAB97:    xsi_set_current_line(104, ng0);
    t3 = (t0 + 1208U);
    t14 = *((char **)t3);

LAB98:    t3 = ((char*)((ng2)));
    t9 = xsi_vlog_unsigned_case_compare(t14, 5, t3, 5);
    if (t9 == 1)
        goto LAB99;

LAB100:
LAB102:
LAB101:    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB103:    goto LAB15;

LAB18:    xsi_set_current_line(34, ng0);

LAB27:    xsi_set_current_line(35, ng0);
    t10 = ((char*)((ng1)));
    t11 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 2, 0LL);
    goto LAB26;

LAB20:    xsi_set_current_line(37, ng0);

LAB28:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);

LAB29:    t3 = ((char*)((ng2)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 1, t3, 1);
    if (t9 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 1, t2, 1);
    if (t6 == 1)
        goto LAB32;

LAB33:
LAB35:
LAB34:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB36:    goto LAB26;

LAB22:    xsi_set_current_line(48, ng0);

LAB39:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 1528U);
    t7 = *((char **)t3);

LAB40:    t3 = ((char*)((ng2)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 1, t3, 1);
    if (t9 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 1, t2, 1);
    if (t6 == 1)
        goto LAB43;

LAB44:
LAB46:
LAB45:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB47:    goto LAB26;

LAB30:    xsi_set_current_line(39, ng0);

LAB37:    xsi_set_current_line(40, ng0);
    t7 = ((char*)((ng2)));
    t10 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t10, t7, 0, 0, 2, 0LL);
    goto LAB36;

LAB32:    xsi_set_current_line(42, ng0);

LAB38:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng1)));
    t7 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 2, 0LL);
    goto LAB36;

LAB41:    xsi_set_current_line(50, ng0);

LAB48:    xsi_set_current_line(51, ng0);
    t10 = ((char*)((ng1)));
    t11 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 2, 0LL);
    goto LAB47;

LAB43:    xsi_set_current_line(53, ng0);

LAB49:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng2)));
    t10 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t10, t3, 0, 0, 2, 0LL);
    goto LAB47;

LAB52:    xsi_set_current_line(64, ng0);

LAB63:    xsi_set_current_line(65, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    goto LAB62;

LAB54:    xsi_set_current_line(67, ng0);

LAB64:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 1688U);
    t11 = *((char **)t3);

LAB65:    t3 = ((char*)((ng2)));
    t9 = xsi_vlog_unsigned_case_compare(t11, 1, t3, 1);
    if (t9 == 1)
        goto LAB66;

LAB67:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t11, 1, t2, 1);
    if (t6 == 1)
        goto LAB68;

LAB69:
LAB71:
LAB70:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB72:    goto LAB62;

LAB56:    xsi_set_current_line(78, ng0);

LAB75:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 1368U);
    t12 = *((char **)t3);

LAB76:    t3 = ((char*)((ng2)));
    t9 = xsi_vlog_unsigned_case_compare(t12, 1, t3, 1);
    if (t9 == 1)
        goto LAB77;

LAB78:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t12, 1, t2, 1);
    if (t6 == 1)
        goto LAB79;

LAB80:
LAB82:
LAB81:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB83:    goto LAB62;

LAB58:    xsi_set_current_line(89, ng0);

LAB86:    xsi_set_current_line(90, ng0);
    t3 = (t0 + 1368U);
    t13 = *((char **)t3);

LAB87:    t3 = ((char*)((ng2)));
    t9 = xsi_vlog_unsigned_case_compare(t13, 1, t3, 1);
    if (t9 == 1)
        goto LAB88;

LAB89:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t13, 1, t2, 1);
    if (t6 == 1)
        goto LAB90;

LAB91:
LAB93:
LAB92:    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB94:    goto LAB62;

LAB66:    xsi_set_current_line(69, ng0);

LAB73:    xsi_set_current_line(70, ng0);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 2, 0LL);
    goto LAB72;

LAB68:    xsi_set_current_line(72, ng0);

LAB74:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng1)));
    t12 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t12, t3, 0, 0, 2, 0LL);
    goto LAB72;

LAB77:    xsi_set_current_line(80, ng0);

LAB84:    xsi_set_current_line(81, ng0);
    t13 = ((char*)((ng2)));
    t14 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 2, 0LL);
    goto LAB83;

LAB79:    xsi_set_current_line(83, ng0);

LAB85:    xsi_set_current_line(84, ng0);
    t3 = ((char*)((ng1)));
    t13 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t13, t3, 0, 0, 2, 0LL);
    goto LAB83;

LAB88:    xsi_set_current_line(91, ng0);

LAB95:    xsi_set_current_line(92, ng0);
    t14 = ((char*)((ng1)));
    t15 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, 0, 2, 0LL);
    goto LAB94;

LAB90:    xsi_set_current_line(94, ng0);

LAB96:    xsi_set_current_line(95, ng0);
    t3 = ((char*)((ng2)));
    t14 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t14, t3, 0, 0, 2, 0LL);
    goto LAB94;

LAB99:    xsi_set_current_line(105, ng0);

LAB104:    xsi_set_current_line(106, ng0);
    t15 = ((char*)((ng1)));
    t16 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, 0, 2, 0LL);
    goto LAB103;

}


extern void work_m_17917044580993754339_4007036230_init()
{
	static char *pe[] = {(void *)Always_30_0};
	xsi_register_didat("work_m_17917044580993754339_4007036230", "isim/CS_RISC_isim_beh.exe.sim/work/m_17917044580993754339_4007036230.didat");
	xsi_register_executes(pe);
}
