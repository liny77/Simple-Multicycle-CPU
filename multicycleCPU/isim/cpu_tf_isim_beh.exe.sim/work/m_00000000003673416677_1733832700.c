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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Fade/Desktop/multicycle cpu/multicycleCPU/PC.v";
static unsigned int ng1[] = {4U, 0U};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {4, 0};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {3U, 0U};



static void Cont_41_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 2272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1748);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2968);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 2900);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_42_1(char *t0)
{
    char t3[8];
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 2416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 968U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 67108863U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 67108863U);
    t12 = (t0 + 3004);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 67108863U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 25);
    t25 = (t0 + 2908);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_43_2(char *t0)
{
    char t6[8];
    char *t1;
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

LAB0:    t1 = (t0 + 2560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1748);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 3040);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t6, 8);
    xsi_driver_vfirst_trans(t7, 0, 31);
    t12 = (t0 + 2916);
    *((int *)t12) = 1;

LAB1:    return;
}

static void Always_45_3(char *t0)
{
    char t13[8];
    char t33[8];
    char t35[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
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
    int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;

LAB0:    t1 = (t0 + 2704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2924);
    *((int *)t2) = 1;
    t3 = (t0 + 2732);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB12;

LAB9:    if (t18 != 0)
        goto LAB11;

LAB10:    *((unsigned int *)t13) = 1;

LAB12:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB13;

LAB14:
LAB15:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(48, ng0);
    t11 = (t0 + 1244U);
    t12 = *((char **)t11);
    t11 = (t0 + 1748);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 32);
    goto LAB8;

LAB11:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(50, ng0);

LAB16:    xsi_set_current_line(51, ng0);
    t26 = (t0 + 876U);
    t27 = *((char **)t26);

LAB17:    t26 = ((char*)((ng3)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 2, t26, 2);
    if (t28 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng4)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 2, t2, 2);
    if (t28 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng6)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 2, t2, 2);
    if (t28 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng7)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 2, t2, 2);
    if (t28 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB15;

LAB18:    xsi_set_current_line(52, ng0);
    t29 = (t0 + 1748);
    t30 = (t29 + 36U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng1)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_add(t33, 32, t31, 32, t32, 32);
    t34 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t34, t33, 0, 0, 32, 0LL);
    goto LAB26;

LAB20:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1748);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t11 = (t0 + 1060U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_multiply(t13, 32, t12, 32, t11, 32);
    memset(t33, 0, 8);
    xsi_vlog_unsigned_add(t33, 32, t5, 32, t13, 32);
    t26 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t26, t33, 0, 0, 32, 0LL);
    goto LAB26;

LAB22:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1152U);
    t4 = *((char **)t3);
    t3 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    goto LAB26;

LAB24:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng3)));
    t4 = ((char*)((ng3)));
    t5 = (t0 + 1520U);
    t11 = *((char **)t5);
    memset(t33, 0, 8);
    t5 = (t33 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 0);
    *((unsigned int *)t33) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t10 & 67108863U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 67108863U);
    t26 = (t0 + 1748);
    t29 = (t26 + 36U);
    t30 = *((char **)t29);
    memset(t35, 0, 8);
    t31 = (t35 + 4);
    t32 = (t30 + 4);
    t15 = *((unsigned int *)t30);
    t16 = (t15 >> 28);
    *((unsigned int *)t35) = t16;
    t17 = *((unsigned int *)t32);
    t18 = (t17 >> 28);
    *((unsigned int *)t31) = t18;
    t19 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t19 & 15U);
    t20 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t20 & 15U);
    xsi_vlogtype_concat(t13, 32, 32, 4U, t35, 4, t33, 26, t4, 1, t3, 1);
    t34 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t34, t13, 0, 0, 32, 0LL);
    goto LAB26;

}


extern void work_m_00000000003673416677_1733832700_init()
{
	static char *pe[] = {(void *)Cont_41_0,(void *)Cont_42_1,(void *)Cont_43_2,(void *)Always_45_3};
	xsi_register_didat("work_m_00000000003673416677_1733832700", "isim/cpu_tf_isim_beh.exe.sim/work/m_00000000003673416677_1733832700.didat");
	xsi_register_executes(pe);
}
