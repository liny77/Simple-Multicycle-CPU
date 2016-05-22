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
static const char *ng0 = "C:/Users/Fade/Desktop/multicycle cpu/multicycleCPU/Ext.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static int ng4[] = {16, 0};



static void Cont_32_0(char *t0)
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

LAB0:    t1 = (t0 + 1628U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2172);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 2112);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_33_1(char *t0)
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

LAB0:    t1 = (t0 + 1772U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 692U);
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
    *((unsigned int *)t3) = (t10 & 65535U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 65535U);
    t12 = (t0 + 2208);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 65535U;
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
    xsi_driver_vfirst_trans(t12, 0, 15);
    t25 = (t0 + 2120);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Always_35_2(char *t0)
{
    char t7[8];
    char t8[8];
    char t20[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;

LAB0:    t1 = (t0 + 1916U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2128);
    *((int *)t2) = 1;
    t3 = (t0 + 1944);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);

LAB5:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB6:    xsi_set_current_line(37, ng0);
    t9 = (t0 + 876U);
    t10 = *((char **)t9);
    memset(t8, 0, 8);
    t9 = (t8 + 4);
    t11 = (t10 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (t12 >> 6);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 6);
    *((unsigned int *)t9) = t15;
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 31U);
    t17 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t17 & 31U);
    t18 = ((char*)((ng1)));
    xsi_vlogtype_concat(t7, 32, 32, 2U, t18, 27, t8, 5);
    t19 = (t0 + 1104);
    xsi_vlogvar_assign_value(t19, t7, 0, 0, 32);
    goto LAB12;

LAB8:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 876U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t3 = (t8 + 4);
    t9 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 0);
    *((unsigned int *)t3) = t15;
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 65535U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 65535U);
    t10 = ((char*)((ng1)));
    xsi_vlogtype_concat(t7, 32, 32, 2U, t10, 16, t8, 16);
    t11 = (t0 + 1104);
    xsi_vlogvar_assign_value(t11, t7, 0, 0, 32);
    goto LAB12;

LAB10:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 876U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t3 = (t8 + 4);
    t9 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 0);
    *((unsigned int *)t3) = t15;
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 65535U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 65535U);
    t10 = ((char*)((ng4)));
    t11 = (t0 + 876U);
    t18 = *((char **)t11);
    memset(t21, 0, 8);
    t11 = (t21 + 4);
    t19 = (t18 + 4);
    t22 = *((unsigned int *)t18);
    t23 = (t22 >> 15);
    t24 = (t23 & 1);
    *((unsigned int *)t21) = t24;
    t25 = *((unsigned int *)t19);
    t26 = (t25 >> 15);
    t27 = (t26 & 1);
    *((unsigned int *)t11) = t27;
    xsi_vlog_mul_concat(t20, 16, 1, t10, 1U, t21, 1);
    xsi_vlogtype_concat(t7, 32, 32, 2U, t20, 16, t8, 16);
    t28 = (t0 + 1104);
    xsi_vlogvar_assign_value(t28, t7, 0, 0, 32);
    goto LAB12;

}


extern void work_m_00000000003721758285_3298408361_init()
{
	static char *pe[] = {(void *)Cont_32_0,(void *)Cont_33_1,(void *)Always_35_2};
	xsi_register_didat("work_m_00000000003721758285_3298408361", "isim/cpu_tf_isim_beh.exe.sim/work/m_00000000003721758285_3298408361.didat");
	xsi_register_executes(pe);
}
