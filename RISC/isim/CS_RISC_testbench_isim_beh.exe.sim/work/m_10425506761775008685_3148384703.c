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
static const char *ng0 = "/home/invisiblehat/Documents/Academics/COA/lab/RISC/RISC/ALU_Control.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {8U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {9U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {12U, 0U};
static unsigned int ng10[] = {13U, 0U};
static unsigned int ng11[] = {14U, 0U};
static unsigned int ng12[] = {6U, 0U};
static unsigned int ng13[] = {7U, 0U};



static void Always_26_0(char *t0)
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

LAB0:    t1 = (t0 + 2520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 2840);
    *((int *)t2) = 1;
    t3 = (t0 + 2552);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(28, ng0);

LAB22:    xsi_set_current_line(29, ng0);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);

LAB23:    t7 = ((char*)((ng1)));
    t9 = xsi_vlog_unsigned_case_compare(t8, 5, t7, 5);
    if (t9 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 5, t2, 5);
    if (t6 == 1)
        goto LAB26;

LAB27:
LAB29:
LAB28:    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB30:    goto LAB21;

LAB9:    xsi_set_current_line(39, ng0);

LAB33:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB21;

LAB11:    xsi_set_current_line(42, ng0);

LAB34:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);

LAB35:    t3 = ((char*)((ng1)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 5);
    if (t9 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t6 == 1)
        goto LAB38;

LAB39:
LAB41:
LAB40:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB42:    goto LAB21;

LAB13:    xsi_set_current_line(53, ng0);

LAB45:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng7)));
    t7 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 4, 0LL);
    goto LAB21;

LAB15:    xsi_set_current_line(56, ng0);

LAB46:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);

LAB47:    t3 = ((char*)((ng1)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 5, t3, 5);
    if (t9 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 5, t2, 5);
    if (t6 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 5, t2, 5);
    if (t6 == 1)
        goto LAB52;

LAB53:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 5, t2, 5);
    if (t6 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 5, t2, 5);
    if (t6 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 5, t2, 5);
    if (t6 == 1)
        goto LAB58;

LAB59:
LAB61:
LAB60:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB62:    goto LAB21;

LAB17:    xsi_set_current_line(79, ng0);

LAB69:    xsi_set_current_line(80, ng0);
    t3 = ((char*)((ng13)));
    t10 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t10, t3, 0, 0, 4, 0LL);
    goto LAB21;

LAB24:    xsi_set_current_line(30, ng0);

LAB31:    xsi_set_current_line(31, ng0);
    t10 = ((char*)((ng1)));
    t11 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 4, 0LL);
    goto LAB30;

LAB26:    xsi_set_current_line(33, ng0);

LAB32:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB30;

LAB36:    xsi_set_current_line(44, ng0);

LAB43:    xsi_set_current_line(45, ng0);
    t7 = ((char*)((ng3)));
    t10 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t10, t7, 0, 0, 4, 0LL);
    goto LAB42;

LAB38:    xsi_set_current_line(47, ng0);

LAB44:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng5)));
    t7 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 4, 0LL);
    goto LAB42;

LAB48:    xsi_set_current_line(58, ng0);

LAB63:    xsi_set_current_line(59, ng0);
    t10 = ((char*)((ng9)));
    t11 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 4, 0LL);
    goto LAB62;

LAB50:    xsi_set_current_line(61, ng0);

LAB64:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng10)));
    t10 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t10, t3, 0, 0, 4, 0LL);
    goto LAB62;

LAB52:    xsi_set_current_line(64, ng0);

LAB65:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng6)));
    t10 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t10, t3, 0, 0, 4, 0LL);
    goto LAB62;

LAB54:    xsi_set_current_line(67, ng0);

LAB66:    xsi_set_current_line(68, ng0);
    t3 = ((char*)((ng8)));
    t10 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t10, t3, 0, 0, 4, 0LL);
    goto LAB62;

LAB56:    xsi_set_current_line(70, ng0);

LAB67:    xsi_set_current_line(71, ng0);
    t3 = ((char*)((ng11)));
    t10 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t10, t3, 0, 0, 4, 0LL);
    goto LAB62;

LAB58:    xsi_set_current_line(73, ng0);

LAB68:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng12)));
    t10 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t10, t3, 0, 0, 4, 0LL);
    goto LAB62;

}


extern void work_m_10425506761775008685_3148384703_init()
{
	static char *pe[] = {(void *)Always_26_0};
	xsi_register_didat("work_m_10425506761775008685_3148384703", "isim/CS_RISC_testbench_isim_beh.exe.sim/work/m_10425506761775008685_3148384703.didat");
	xsi_register_executes(pe);
}
