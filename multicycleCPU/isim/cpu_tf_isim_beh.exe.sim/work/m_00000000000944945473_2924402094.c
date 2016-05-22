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
static const char *ng0 = "C:/Users/Fade/Desktop/multicycle cpu/multicycleCPU/DM.v";
static int ng1[] = {0, 0};
static int ng2[] = {128, 0};
static int ng3[] = {1, 0};
static int ng4[] = {3, 0};
static int ng5[] = {2, 0};



static void Initial_33_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(34, ng0);

LAB2:    xsi_set_current_line(35, ng0);
    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1196);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 1196);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 1104);
    t16 = (t0 + 1104);
    t17 = (t16 + 44U);
    t18 = *((char **)t17);
    t19 = (t0 + 1104);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    t22 = (t0 + 1196);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1196);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 1196);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB6:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, *((unsigned int *)t15), t35, 0LL);
    goto LAB7;

}

static void Cont_39_1(char *t0)
{
    char t3[8];
    char t6[8];
    char t15[8];
    char t19[8];
    char t28[8];
    char t32[8];
    char t41[8];
    char t45[8];
    char *t1;
    char *t2;
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
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;

LAB0:    t1 = (t0 + 1864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1104);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t7 = (t0 + 1104);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = (t0 + 1104);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    t13 = (t0 + 600U);
    t14 = *((char **)t13);
    t13 = ((char*)((ng4)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t14, 32, t13, 32);
    xsi_vlog_generic_get_array_select_value(t6, 8, t5, t9, t12, 2, 1, t15, 32, 2);
    t16 = (t0 + 1104);
    t17 = (t16 + 36U);
    t18 = *((char **)t17);
    t20 = (t0 + 1104);
    t21 = (t20 + 44U);
    t22 = *((char **)t21);
    t23 = (t0 + 1104);
    t24 = (t23 + 40U);
    t25 = *((char **)t24);
    t26 = (t0 + 600U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng5)));
    memset(t28, 0, 8);
    xsi_vlog_unsigned_add(t28, 32, t27, 32, t26, 32);
    xsi_vlog_generic_get_array_select_value(t19, 8, t18, t22, t25, 2, 1, t28, 32, 2);
    t29 = (t0 + 1104);
    t30 = (t29 + 36U);
    t31 = *((char **)t30);
    t33 = (t0 + 1104);
    t34 = (t33 + 44U);
    t35 = *((char **)t34);
    t36 = (t0 + 1104);
    t37 = (t36 + 40U);
    t38 = *((char **)t37);
    t39 = (t0 + 600U);
    t40 = *((char **)t39);
    t39 = ((char*)((ng3)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_add(t41, 32, t40, 32, t39, 32);
    xsi_vlog_generic_get_array_select_value(t32, 8, t31, t35, t38, 2, 1, t41, 32, 2);
    t42 = (t0 + 1104);
    t43 = (t42 + 36U);
    t44 = *((char **)t43);
    t46 = (t0 + 1104);
    t47 = (t46 + 44U);
    t48 = *((char **)t47);
    t49 = (t0 + 1104);
    t50 = (t49 + 40U);
    t51 = *((char **)t50);
    t52 = (t0 + 600U);
    t53 = *((char **)t52);
    xsi_vlog_generic_get_array_select_value(t45, 8, t44, t48, t51, 2, 1, t53, 32, 2);
    xsi_vlogtype_concat(t3, 32, 32, 4U, t45, 8, t32, 8, t19, 8, t6, 8);
    t52 = (t0 + 2256);
    t54 = (t52 + 32U);
    t55 = *((char **)t54);
    t56 = (t55 + 40U);
    t57 = *((char **)t56);
    memcpy(t57, t3, 8);
    xsi_driver_vfirst_trans(t52, 0, 31);
    t58 = (t0 + 2204);
    *((int *)t58) = 1;

LAB1:    return;
}

static void Always_41_2(char *t0)
{
    char t6[8];
    char t28[8];
    char t39[8];
    char t40[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
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
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    int t50;
    char *t51;
    unsigned int t52;
    int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    int t57;
    int t58;

LAB0:    t1 = (t0 + 2008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2212);
    *((int *)t2) = 1;
    t3 = (t0 + 2036);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(44, ng0);

LAB13:    xsi_set_current_line(45, ng0);
    t29 = (t0 + 692U);
    t30 = *((char **)t29);
    memset(t28, 0, 8);
    t29 = (t28 + 4);
    t31 = (t30 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (t32 >> 24);
    *((unsigned int *)t28) = t33;
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 24);
    *((unsigned int *)t29) = t35;
    t36 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t36 & 255U);
    t37 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t37 & 255U);
    t38 = (t0 + 1104);
    t41 = (t0 + 1104);
    t42 = (t41 + 44U);
    t43 = *((char **)t42);
    t44 = (t0 + 1104);
    t45 = (t44 + 40U);
    t46 = *((char **)t45);
    t47 = (t0 + 600U);
    t48 = *((char **)t47);
    xsi_vlog_generic_convert_array_indices(t39, t40, t43, t46, 2, 1, t48, 32, 2);
    t47 = (t39 + 4);
    t49 = *((unsigned int *)t47);
    t50 = (!(t49));
    t51 = (t40 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (!(t52));
    t54 = (t50 && t53);
    if (t54 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 16);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 16);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 255U);
    t5 = (t0 + 1104);
    t7 = (t0 + 1104);
    t8 = (t7 + 44U);
    t21 = *((char **)t8);
    t22 = (t0 + 1104);
    t29 = (t22 + 40U);
    t30 = *((char **)t29);
    t31 = (t0 + 600U);
    t38 = *((char **)t31);
    t31 = ((char*)((ng3)));
    memset(t40, 0, 8);
    xsi_vlog_unsigned_add(t40, 32, t38, 32, t31, 32);
    xsi_vlog_generic_convert_array_indices(t28, t39, t21, t30, 2, 1, t40, 32, 2);
    t41 = (t28 + 4);
    t15 = *((unsigned int *)t41);
    t50 = (!(t15));
    t42 = (t39 + 4);
    t16 = *((unsigned int *)t42);
    t53 = (!(t16));
    t54 = (t50 && t53);
    if (t54 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 8);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 8);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 255U);
    t5 = (t0 + 1104);
    t7 = (t0 + 1104);
    t8 = (t7 + 44U);
    t21 = *((char **)t8);
    t22 = (t0 + 1104);
    t29 = (t22 + 40U);
    t30 = *((char **)t29);
    t31 = (t0 + 600U);
    t38 = *((char **)t31);
    t31 = ((char*)((ng5)));
    memset(t40, 0, 8);
    xsi_vlog_unsigned_add(t40, 32, t38, 32, t31, 32);
    xsi_vlog_generic_convert_array_indices(t28, t39, t21, t30, 2, 1, t40, 32, 2);
    t41 = (t28 + 4);
    t15 = *((unsigned int *)t41);
    t50 = (!(t15));
    t42 = (t39 + 4);
    t16 = *((unsigned int *)t42);
    t53 = (!(t16));
    t54 = (t50 && t53);
    if (t54 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 255U);
    t5 = (t0 + 1104);
    t7 = (t0 + 1104);
    t8 = (t7 + 44U);
    t21 = *((char **)t8);
    t22 = (t0 + 1104);
    t29 = (t22 + 40U);
    t30 = *((char **)t29);
    t31 = (t0 + 600U);
    t38 = *((char **)t31);
    t31 = ((char*)((ng4)));
    memset(t40, 0, 8);
    xsi_vlog_unsigned_add(t40, 32, t38, 32, t31, 32);
    xsi_vlog_generic_convert_array_indices(t28, t39, t21, t30, 2, 1, t40, 32, 2);
    t41 = (t28 + 4);
    t15 = *((unsigned int *)t41);
    t50 = (!(t15));
    t42 = (t39 + 4);
    t16 = *((unsigned int *)t42);
    t53 = (!(t16));
    t54 = (t50 && t53);
    if (t54 == 1)
        goto LAB20;

LAB21:    goto LAB12;

LAB14:    t55 = *((unsigned int *)t39);
    t56 = *((unsigned int *)t40);
    t57 = (t55 - t56);
    t58 = (t57 + 1);
    xsi_vlogvar_wait_assign_value(t38, t28, 0, *((unsigned int *)t40), t58, 0LL);
    goto LAB15;

LAB16:    t17 = *((unsigned int *)t28);
    t18 = *((unsigned int *)t39);
    t57 = (t17 - t18);
    t58 = (t57 + 1);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t39), t58, 0LL);
    goto LAB17;

LAB18:    t17 = *((unsigned int *)t28);
    t18 = *((unsigned int *)t39);
    t57 = (t17 - t18);
    t58 = (t57 + 1);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t39), t58, 0LL);
    goto LAB19;

LAB20:    t17 = *((unsigned int *)t28);
    t18 = *((unsigned int *)t39);
    t57 = (t17 - t18);
    t58 = (t57 + 1);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t39), t58, 0LL);
    goto LAB21;

}


extern void work_m_00000000000944945473_2924402094_init()
{
	static char *pe[] = {(void *)Initial_33_0,(void *)Cont_39_1,(void *)Always_41_2};
	xsi_register_didat("work_m_00000000000944945473_2924402094", "isim/cpu_tf_isim_beh.exe.sim/work/m_00000000000944945473_2924402094.didat");
	xsi_register_executes(pe);
}
