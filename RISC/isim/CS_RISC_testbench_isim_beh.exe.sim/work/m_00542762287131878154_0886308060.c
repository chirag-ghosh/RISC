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
static const char *ng0 = "/home/invisiblehat/Documents/Academics/COA/lab/RISC/RISC/ALU.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {3, 0};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};



static void Cont_39_0(char *t0)
{
    char t3[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 5240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    *((unsigned int *)t3) = t7;
    *((unsigned int *)t2) = 0;
    if (*((unsigned int *)t5) != 0)
        goto LAB5;

LAB4:    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 4294967295U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 4294967295U);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t3, 32, t14, 32);
    t16 = (t0 + 8000);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t15, 8);
    xsi_driver_vfirst_trans(t16, 0, 31);
    t21 = (t0 + 7792);
    *((int *)t21) = 1;

LAB1:    return;
LAB5:    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t5);
    *((unsigned int *)t3) = (t8 | t9);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t5);
    *((unsigned int *)t2) = (t10 | t11);
    goto LAB4;

}

static void Cont_41_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 5488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_signed_bit_and(t5, 32, t3, 32, t4, 32);
    t2 = (t0 + 8064);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t10 = (t0 + 7808);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_43_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 5736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_signed_bit_xor(t5, 32, t3, 32, t4, 32);
    t2 = (t0 + 8128);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t10 = (t0 + 7824);
    *((int *)t10) = 1;

LAB1:    return;
}

static void NetDecl_45_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t11[8];
    char t40[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;

LAB0:    t1 = (t0 + 5984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1528U);
    t5 = *((char **)t2);
    t2 = (t0 + 1488U);
    t7 = (t2 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t5, t8, 2, t9, 32, 1);
    t10 = ((char*)((ng3)));
    memset(t11, 0, 8);
    t12 = (t6 + 4);
    t13 = (t10 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB7;

LAB4:    if (t23 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t11) = 1;

LAB7:    memset(t4, 0, 8);
    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t27) != 0)
        goto LAB10;

LAB11:    t34 = (t4 + 4);
    t35 = *((unsigned int *)t4);
    t36 = *((unsigned int *)t34);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB12;

LAB13:    t41 = *((unsigned int *)t4);
    t42 = (~(t41));
    t43 = *((unsigned int *)t34);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t34) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t45, 8);

LAB20:    t38 = (t0 + 8192);
    t46 = (t38 + 56U);
    t47 = *((char **)t46);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    memcpy(t49, t3, 8);
    xsi_driver_vfirst_trans(t38, 0, 31U);
    t50 = (t0 + 7840);
    *((int *)t50) = 1;

LAB1:    return;
LAB6:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t33 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB11;

LAB12:    t38 = (t0 + 1368U);
    t39 = *((char **)t38);
    memcpy(t40, t39, 8);
    goto LAB13;

LAB14:    t38 = (t0 + 1208U);
    t45 = *((char **)t38);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t40, 32, t45, 32);
    goto LAB20;

LAB18:    memcpy(t3, t40, 8);
    goto LAB20;

}

static void Cont_47_4(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 6232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 3288U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_signed_lshift(t5, 32, t3, 32, t4, 32);
    t2 = (t0 + 8256);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t10 = (t0 + 7856);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_48_5(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 6480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 3288U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_signed_rshift(t5, 32, t3, 32, t4, 32);
    t2 = (t0 + 8320);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t10 = (t0 + 7872);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_49_6(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 6728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 3288U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_signed_arith_rshift(t5, 32, t3, 32, t4, 32);
    t2 = (t0 + 8384);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t10 = (t0 + 7888);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_51_7(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 6976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_signed_bit_xor(t5, 32, t3, 32, t4, 32);
    t2 = (t0 + 8448);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t10 = (t0 + 7904);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_53_8(char *t0)
{
    char t4[8];
    char t5[8];
    char t8[8];
    char t27[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    int t49;

LAB0:    t1 = (t0 + 7224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 7920);
    *((int *)t2) = 1;
    t3 = (t0 + 7256);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(54, ng0);
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t7, 32, t6, 32);
    memset(t5, 0, 8);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t9) != 0)
        goto LAB8;

LAB9:    t16 = (t5 + 4);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB10;

LAB11:    t21 = *((unsigned int *)t5);
    t22 = (~(t21));
    t23 = *((unsigned int *)t16);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t16) > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t5) > 0)
        goto LAB16;

LAB17:    memcpy(t4, t25, 8);

LAB18:    t26 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t26, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t6 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 31);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 31);
    t17 = (t14 & 1);
    *((unsigned int *)t2) = t17;
    t7 = ((char*)((ng1)));
    memset(t27, 0, 8);
    t9 = (t8 + 4);
    t15 = (t7 + 4);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t7);
    t21 = (t18 ^ t19);
    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t15);
    t24 = (t22 ^ t23);
    t28 = (t21 | t24);
    t29 = *((unsigned int *)t9);
    t30 = *((unsigned int *)t15);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB22;

LAB19:    if (t31 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t27) = 1;

LAB22:    memset(t5, 0, 8);
    t20 = (t27 + 4);
    t34 = *((unsigned int *)t20);
    t35 = (~(t34));
    t36 = *((unsigned int *)t27);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t20) != 0)
        goto LAB25;

LAB26:    t26 = (t5 + 4);
    t39 = *((unsigned int *)t5);
    t40 = *((unsigned int *)t26);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB27;

LAB28:    t43 = *((unsigned int *)t5);
    t44 = (~(t43));
    t45 = *((unsigned int *)t26);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t26) > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t5) > 0)
        goto LAB33;

LAB34:    memcpy(t4, t47, 8);

LAB35:    t48 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t48, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    *((unsigned int *)t4) = t11;
    t12 = *((unsigned int *)t6);
    t13 = (t12 >> 0);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 7U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 7U);

LAB36:    t7 = ((char*)((ng4)));
    t49 = xsi_vlog_unsigned_case_compare(t4, 3, t7, 3);
    if (t49 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng1)));
    t49 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t49 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng5)));
    t49 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t49 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng6)));
    t49 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t49 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng7)));
    t49 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t49 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng8)));
    t49 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t49 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng9)));
    t49 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t49 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng10)));
    t49 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t49 == 1)
        goto LAB51;

LAB52:
LAB54:
LAB53:    xsi_set_current_line(89, ng0);

LAB64:    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB55:    goto LAB2;

LAB6:    *((unsigned int *)t5) = 1;
    goto LAB9;

LAB8:    t15 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB9;

LAB10:    t20 = ((char*)((ng1)));
    goto LAB11;

LAB12:    t25 = ((char*)((ng4)));
    goto LAB13;

LAB14:    xsi_vlog_unsigned_bit_combine(t4, 1, t20, 1, t25, 1);
    goto LAB18;

LAB16:    memcpy(t4, t20, 8);
    goto LAB18;

LAB21:    t16 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB22;

LAB23:    *((unsigned int *)t5) = 1;
    goto LAB26;

LAB25:    t25 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB26;

LAB27:    t42 = ((char*)((ng1)));
    goto LAB28;

LAB29:    t47 = ((char*)((ng4)));
    goto LAB30;

LAB31:    xsi_vlog_unsigned_bit_combine(t4, 1, t42, 1, t47, 1);
    goto LAB35;

LAB33:    memcpy(t4, t42, 8);
    goto LAB35;

LAB37:    xsi_set_current_line(57, ng0);

LAB56:    xsi_set_current_line(58, ng0);
    t9 = (t0 + 1688U);
    t15 = *((char **)t9);
    t9 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t9, t15, 0, 0, 32, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    t2 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    goto LAB55;

LAB39:    xsi_set_current_line(61, ng0);

LAB57:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 1848U);
    t6 = *((char **)t3);
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB55;

LAB41:    xsi_set_current_line(65, ng0);

LAB58:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 2008U);
    t6 = *((char **)t3);
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB55;

LAB43:    xsi_set_current_line(69, ng0);

LAB59:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 2168U);
    t6 = *((char **)t3);
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB55;

LAB45:    xsi_set_current_line(73, ng0);

LAB60:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 2328U);
    t6 = *((char **)t3);
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB55;

LAB47:    xsi_set_current_line(77, ng0);

LAB61:    xsi_set_current_line(78, ng0);
    t3 = (t0 + 2488U);
    t6 = *((char **)t3);
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB55;

LAB49:    xsi_set_current_line(81, ng0);

LAB62:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 2648U);
    t6 = *((char **)t3);
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB55;

LAB51:    xsi_set_current_line(85, ng0);

LAB63:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 2808U);
    t6 = *((char **)t3);
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB55;

}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 7472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng4)));
    t3 = (t0 + 8512);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}


extern void work_m_00542762287131878154_0886308060_init()
{
	static char *pe[] = {(void *)Cont_39_0,(void *)Cont_41_1,(void *)Cont_43_2,(void *)NetDecl_45_3,(void *)Cont_47_4,(void *)Cont_48_5,(void *)Cont_49_6,(void *)Cont_51_7,(void *)Always_53_8,(void *)implSig1_execute};
	xsi_register_didat("work_m_00542762287131878154_0886308060", "isim/CS_RISC_testbench_isim_beh.exe.sim/work/m_00542762287131878154_0886308060.didat");
	xsi_register_executes(pe);
}
