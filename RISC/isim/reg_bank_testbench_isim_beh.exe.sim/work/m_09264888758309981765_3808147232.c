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
static const char *ng0 = "register 0 = %d, register 1 = %d, register 2 = %d, register 3 = %d, register 31 = %d";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {31, 0};
static const char *ng6 = "/home/invisiblehat/Documents/Academics/COA/lab/RISC/RISC/reg_bank_testbench.v";
static unsigned int ng7[] = {10U, 0U};
static unsigned int ng8[] = {0U, 0U};
static unsigned int ng9[] = {1U, 0U};
static unsigned int ng10[] = {2U, 0U};
static unsigned int ng11[] = {8U, 0U};
static unsigned int ng12[] = {3U, 0U};
static unsigned int ng13[] = {14U, 0U};
static unsigned int ng14[] = {20U, 0U};

void Monitor_64_2(char *);
void Monitor_64_2(char *);


static void Monitor_64_2_Func(char *t0)
{
    char t6[8];
    char t21[8];
    char t36[8];
    char t51[8];
    char t66[8];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;

LAB0:    t2 = (t0 + 6248);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 6264);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 6280);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t5, t10, t14, 2, 1, t15, 32, 1);
    t17 = (t0 + 6296);
    t18 = *((char **)t17);
    t19 = ((((char*)(t18))) + 56U);
    t20 = *((char **)t19);
    t22 = (t0 + 6312);
    t23 = *((char **)t22);
    t24 = ((((char*)(t23))) + 72U);
    t25 = *((char **)t24);
    t26 = (t0 + 6328);
    t27 = *((char **)t26);
    t28 = ((((char*)(t27))) + 64U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t21, 32, t20, t25, t29, 2, 1, t30, 32, 1);
    t32 = (t0 + 6344);
    t33 = *((char **)t32);
    t34 = ((((char*)(t33))) + 56U);
    t35 = *((char **)t34);
    t37 = (t0 + 6360);
    t38 = *((char **)t37);
    t39 = ((((char*)(t38))) + 72U);
    t40 = *((char **)t39);
    t41 = (t0 + 6376);
    t42 = *((char **)t41);
    t43 = ((((char*)(t42))) + 64U);
    t44 = *((char **)t43);
    t45 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t36, 32, t35, t40, t44, 2, 1, t45, 32, 1);
    t47 = (t0 + 6392);
    t48 = *((char **)t47);
    t49 = ((((char*)(t48))) + 56U);
    t50 = *((char **)t49);
    t52 = (t0 + 6408);
    t53 = *((char **)t52);
    t54 = ((((char*)(t53))) + 72U);
    t55 = *((char **)t54);
    t56 = (t0 + 6424);
    t57 = *((char **)t56);
    t58 = ((((char*)(t57))) + 64U);
    t59 = *((char **)t58);
    t60 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t51, 32, t50, t55, t59, 2, 1, t60, 32, 1);
    t62 = (t0 + 6440);
    t63 = *((char **)t62);
    t64 = ((((char*)(t63))) + 56U);
    t65 = *((char **)t64);
    t67 = (t0 + 6456);
    t68 = *((char **)t67);
    t69 = ((((char*)(t68))) + 72U);
    t70 = *((char **)t69);
    t71 = (t0 + 6472);
    t72 = *((char **)t71);
    t73 = ((((char*)(t72))) + 64U);
    t74 = *((char **)t73);
    t75 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t66, 32, t65, t70, t74, 2, 1, t75, 32, 1);
    xsi_vlogfile_write(1, 0, 3, ng0, 6, t0, (char)119, t6, 32, (char)119, t21, 32, (char)119, t36, 32, (char)119, t51, 32, (char)119, t66, 32);

LAB1:    return;
}

static void Always_52_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 3480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng6);
    t2 = (t0 + 3288);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng6);
    t4 = (t0 + 1768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1768);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_53_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 3728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng6);

LAB4:    xsi_set_current_line(55, ng6);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(56, ng6);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng6);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(58, ng6);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(59, ng6);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(60, ng6);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(63, ng6);
    t2 = (t0 + 3536);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(64, ng6);
    Monitor_64_2(t0);
    xsi_set_current_line(65, ng6);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(66, ng6);
    t2 = (t0 + 3536);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(69, ng6);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(70, ng6);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(71, ng6);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(72, ng6);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(73, ng6);
    t2 = (t0 + 3536);
    xsi_process_wait(t2, 4000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(74, ng6);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(75, ng6);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(76, ng6);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(77, ng6);
    t2 = (t0 + 3536);
    xsi_process_wait(t2, 4000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(78, ng6);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(79, ng6);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(80, ng6);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(81, ng6);
    t2 = (t0 + 3536);
    xsi_process_wait(t2, 4000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(82, ng6);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(83, ng6);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(84, ng6);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(85, ng6);
    t2 = (t0 + 3536);
    xsi_process_wait(t2, 4000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(86, ng6);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(87, ng6);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(88, ng6);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB1;

}

void Monitor_64_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3784);
    t2 = (t0 + 4296);
    xsi_vlogfile_monitor((void *)Monitor_64_2_Func, t1, t2);

LAB1:    return;
}


extern void work_m_09264888758309981765_3808147232_init()
{
	static char *pe[] = {(void *)Always_52_0,(void *)Initial_53_1,(void *)Monitor_64_2};
	xsi_register_didat("work_m_09264888758309981765_3808147232", "isim/reg_bank_testbench_isim_beh.exe.sim/work/m_09264888758309981765_3808147232.didat");
	xsi_register_executes(pe);
}
