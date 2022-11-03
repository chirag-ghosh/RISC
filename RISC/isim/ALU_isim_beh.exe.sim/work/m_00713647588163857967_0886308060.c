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
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};



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

LAB0:    t1 = (t0 + 6040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1048U);
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
    t16 = (t0 + 8784);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t15, 8);
    xsi_driver_vfirst_trans(t16, 0, 31);
    t21 = (t0 + 8592);
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
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;

LAB0:    t1 = (t0 + 6288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 & t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t36 = (t0 + 8848);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memcpy(t40, t5, 8);
    xsi_driver_vfirst_trans(t36, 0, 31);
    t41 = (t0 + 8608);
    *((int *)t41) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = (t21 & t23);
    t29 = (t25 & t27);
    t30 = (~(t28));
    t31 = (~(t29));
    t32 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t32 & t30);
    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & t31);
    t34 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t34 & t30);
    t35 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t35 & t31);
    goto LAB6;

}

static void Cont_43_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;

LAB0:    t1 = (t0 + 6536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 ^ t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t18 = (t0 + 8912);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t22, 0, 8);
    t23 = 1U;
    t24 = t23;
    t25 = (t5 + 4);
    t26 = *((unsigned int *)t5);
    t23 = (t23 & t26);
    t27 = *((unsigned int *)t25);
    t24 = (t24 & t27);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 | t23);
    t30 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t30 | t24);
    xsi_driver_vfirst_trans(t18, 0, 0);
    t31 = (t0 + 8624);
    *((int *)t31) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    goto LAB6;

}

static void NetDecl_45_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t27[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;

LAB0:    t1 = (t0 + 6784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1528U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t14) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t28 = *((unsigned int *)t4);
    t29 = (~(t28));
    t30 = *((unsigned int *)t21);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t32, 8);

LAB16:    t25 = (t0 + 8976);
    t33 = (t25 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memset(t36, 0, 8);
    t37 = 1U;
    t38 = t37;
    t39 = (t3 + 4);
    t40 = *((unsigned int *)t3);
    t37 = (t37 & t40);
    t41 = *((unsigned int *)t39);
    t38 = (t38 & t41);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t43 | t37);
    t44 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t44 | t38);
    xsi_driver_vfirst_trans(t25, 0, 0U);
    t45 = (t0 + 8640);
    *((int *)t45) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t25 = (t0 + 1368U);
    t26 = *((char **)t25);
    memcpy(t27, t26, 8);
    goto LAB9;

LAB10:    t25 = (t0 + 1208U);
    t32 = *((char **)t25);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t27, 32, t32, 32);
    goto LAB16;

LAB14:    memcpy(t3, t27, 8);
    goto LAB16;

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

LAB0:    t1 = (t0 + 7032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 3928U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_unsigned_lshift(t5, 32, t3, 32, t4, 1);
    t2 = (t0 + 9040);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t10 = (t0 + 8656);
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

LAB0:    t1 = (t0 + 7280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 3928U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_unsigned_rshift(t5, 32, t3, 32, t4, 1);
    t2 = (t0 + 9104);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t10 = (t0 + 8672);
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

LAB0:    t1 = (t0 + 7528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 3928U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t5, 32, t3, 32, t4, 1);
    t2 = (t0 + 9168);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t10 = (t0 + 8688);
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
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    t1 = (t0 + 7776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 ^ t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t18 = (t0 + 9232);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t5, 8);
    xsi_driver_vfirst_trans(t18, 0, 31);
    t23 = (t0 + 8704);
    *((int *)t23) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    goto LAB6;

}

static void Always_53_8(char *t0)
{
    char t1[8];
    char t2[8];
    char t5[8];
    char t39[8];
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    int t48;

LAB0:    xsi_set_current_line(53, ng0);

LAB2:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t5, 0, 8);
    t6 = (t4 + 4);
    t7 = (t3 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t3);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = (t10 | t13);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t7);
    t17 = (t15 | t16);
    t18 = (~(t17));
    t19 = (t14 & t18);
    if (t19 != 0)
        goto LAB6;

LAB3:    if (t17 != 0)
        goto LAB5;

LAB4:    *((unsigned int *)t5) = 1;

LAB6:    memset(t2, 0, 8);
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB7;

LAB8:    if (*((unsigned int *)t21) != 0)
        goto LAB9;

LAB10:    t28 = (t2 + 4);
    t29 = *((unsigned int *)t2);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB11;

LAB12:    t33 = *((unsigned int *)t2);
    t34 = (~(t33));
    t35 = *((unsigned int *)t28);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t28) > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t2) > 0)
        goto LAB17;

LAB18:    memcpy(t1, t37, 8);

LAB19:    t38 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t38, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t3 = (t5 + 4);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 31);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t3) = t13;
    t7 = ((char*)((ng1)));
    memset(t39, 0, 8);
    t20 = (t5 + 4);
    t21 = (t7 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t20);
    t18 = *((unsigned int *)t21);
    t19 = (t17 ^ t18);
    t22 = (t16 | t19);
    t23 = *((unsigned int *)t20);
    t24 = *((unsigned int *)t21);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t29 = (t22 & t26);
    if (t29 != 0)
        goto LAB23;

LAB20:    if (t25 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t39) = 1;

LAB23:    memset(t2, 0, 8);
    t28 = (t39 + 4);
    t30 = *((unsigned int *)t28);
    t31 = (~(t30));
    t33 = *((unsigned int *)t39);
    t34 = (t33 & t31);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t28) != 0)
        goto LAB26;

LAB27:    t37 = (t2 + 4);
    t36 = *((unsigned int *)t2);
    t40 = *((unsigned int *)t37);
    t41 = (t36 || t40);
    if (t41 > 0)
        goto LAB28;

LAB29:    t42 = *((unsigned int *)t2);
    t43 = (~(t42));
    t44 = *((unsigned int *)t37);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t37) > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t2) > 0)
        goto LAB34;

LAB35:    memcpy(t1, t46, 8);

LAB36:    t47 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t47, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(56, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    memset(t1, 0, 8);
    t3 = (t1 + 4);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t1) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t1);
    *((unsigned int *)t1) = (t12 & 7U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 7U);

LAB37:    t7 = ((char*)((ng3)));
    t48 = xsi_vlog_unsigned_case_compare(t1, 3, t7, 3);
    if (t48 == 1)
        goto LAB38;

LAB39:    t3 = ((char*)((ng1)));
    t48 = xsi_vlog_unsigned_case_compare(t1, 3, t3, 3);
    if (t48 == 1)
        goto LAB40;

LAB41:    t3 = ((char*)((ng4)));
    t48 = xsi_vlog_unsigned_case_compare(t1, 3, t3, 3);
    if (t48 == 1)
        goto LAB42;

LAB43:    t3 = ((char*)((ng5)));
    t48 = xsi_vlog_unsigned_case_compare(t1, 3, t3, 3);
    if (t48 == 1)
        goto LAB44;

LAB45:    t3 = ((char*)((ng6)));
    t48 = xsi_vlog_unsigned_case_compare(t1, 3, t3, 3);
    if (t48 == 1)
        goto LAB46;

LAB47:    t3 = ((char*)((ng7)));
    t48 = xsi_vlog_unsigned_case_compare(t1, 3, t3, 3);
    if (t48 == 1)
        goto LAB48;

LAB49:    t3 = ((char*)((ng8)));
    t48 = xsi_vlog_unsigned_case_compare(t1, 3, t3, 3);
    if (t48 == 1)
        goto LAB50;

LAB51:    t3 = ((char*)((ng9)));
    t48 = xsi_vlog_unsigned_case_compare(t1, 3, t3, 3);
    if (t48 == 1)
        goto LAB52;

LAB53:
LAB54:    goto LAB54;

LAB5:    t20 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB6;

LAB7:    *((unsigned int *)t2) = 1;
    goto LAB10;

LAB9:    t27 = (t2 + 4);
    *((unsigned int *)t2) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB10;

LAB11:    t32 = ((char*)((ng1)));
    goto LAB12;

LAB13:    t37 = ((char*)((ng3)));
    goto LAB14;

LAB15:    xsi_vlog_unsigned_bit_combine(t1, 1, t32, 1, t37, 1);
    goto LAB19;

LAB17:    memcpy(t1, t32, 8);
    goto LAB19;

LAB22:    t27 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB23;

LAB24:    *((unsigned int *)t2) = 1;
    goto LAB27;

LAB26:    t32 = (t2 + 4);
    *((unsigned int *)t2) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB27;

LAB28:    t38 = ((char*)((ng1)));
    goto LAB29;

LAB30:    t46 = ((char*)((ng3)));
    goto LAB31;

LAB32:    xsi_vlog_unsigned_bit_combine(t1, 1, t38, 1, t46, 1);
    goto LAB36;

LAB34:    memcpy(t1, t38, 8);
    goto LAB36;

LAB38:    xsi_set_current_line(57, ng0);

LAB55:    xsi_set_current_line(58, ng0);
    t20 = (t0 + 1688U);
    t21 = *((char **)t20);
    t20 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t20, t21, 0, 0, 32, 0LL);
    xsi_set_current_line(59, ng0);
    t3 = (t0 + 3768U);
    t4 = *((char **)t3);
    t3 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 1, 0LL);
    goto LAB54;

LAB40:    xsi_set_current_line(61, ng0);

LAB56:    xsi_set_current_line(62, ng0);
    t4 = (t0 + 1848U);
    t6 = *((char **)t4);
    t4 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t4, t6, 0, 0, 32, 0LL);
    goto LAB54;

LAB42:    xsi_set_current_line(64, ng0);

LAB57:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 2008U);
    t6 = *((char **)t4);
    t4 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t4, t6, 0, 0, 32, 0LL);
    goto LAB54;

LAB44:    xsi_set_current_line(67, ng0);

LAB58:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 2168U);
    t6 = *((char **)t4);
    t4 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t4, t6, 0, 0, 32, 0LL);
    goto LAB54;

LAB46:    xsi_set_current_line(70, ng0);

LAB59:    xsi_set_current_line(71, ng0);
    t4 = (t0 + 2328U);
    t6 = *((char **)t4);
    t4 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t4, t6, 0, 0, 32, 0LL);
    goto LAB54;

LAB48:    xsi_set_current_line(73, ng0);

LAB60:    xsi_set_current_line(74, ng0);
    t4 = (t0 + 2488U);
    t6 = *((char **)t4);
    t4 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t4, t6, 0, 0, 32, 0LL);
    goto LAB54;

LAB50:    xsi_set_current_line(76, ng0);

LAB61:    xsi_set_current_line(77, ng0);
    t4 = (t0 + 2648U);
    t6 = *((char **)t4);
    t4 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t4, t6, 0, 0, 32, 0LL);
    goto LAB54;

LAB52:    xsi_set_current_line(79, ng0);

LAB62:    xsi_set_current_line(80, ng0);
    t4 = (t0 + 2808U);
    t6 = *((char **)t4);
    t4 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t4, t6, 0, 0, 32, 0LL);
    goto LAB54;

LAB1:    return;
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

LAB0:    t1 = (t0 + 8272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng2)));
    t3 = (t0 + 9296);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}


extern void work_m_00713647588163857967_0886308060_init()
{
	static char *pe[] = {(void *)Cont_39_0,(void *)Cont_41_1,(void *)Cont_43_2,(void *)NetDecl_45_3,(void *)Cont_47_4,(void *)Cont_48_5,(void *)Cont_49_6,(void *)Cont_51_7,(void *)Always_53_8,(void *)implSig1_execute};
	xsi_register_didat("work_m_00713647588163857967_0886308060", "isim/ALU_isim_beh.exe.sim/work/m_00713647588163857967_0886308060.didat");
	xsi_register_executes(pe);
}
