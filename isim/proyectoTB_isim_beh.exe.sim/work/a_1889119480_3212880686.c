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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/ProgramFiles/xiling/proyectoElectro1/proyecto1electro/CircuitoSumaResta.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_2546454082_3965413181(char *, char *, char *, int );
char *ieee_p_3620187407_sub_436351764_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_1889119480_3212880686_p_0(char *t0)
{
    char t11[16];
    char t12[16];
    char t13[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5288U);
    t3 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t2, t1, 9);
    if (t3 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5288U);
    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t4 = (t0 + 5304U);
    t6 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t11, t2, t1, t5, t4);
    t3 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t6, t11, 9);
    if (t3 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5288U);
    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t4 = (t0 + 5304U);
    t6 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t11, t2, t1, t5, t4);
    t7 = (t11 + 12U);
    t17 = *((unsigned int *)t7);
    t18 = (1U * t17);
    t3 = (4U != t18);
    if (t3 == 1)
        goto LAB10;

LAB11:    t8 = (t0 + 3232);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 4U);
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 5377);
    t4 = (t0 + 3296);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_fast_port(t4);

LAB6:
LAB3:    t1 = (t0 + 3152);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 5369);
    t6 = (t0 + 3232);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 4U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 5373);
    t4 = (t0 + 3296);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB3;

LAB5:    xsi_set_current_line(53, ng0);
    t7 = (t0 + 1032U);
    t8 = *((char **)t7);
    t7 = (t0 + 5288U);
    t9 = (t0 + 1192U);
    t10 = *((char **)t9);
    t9 = (t0 + 5304U);
    t14 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t13, t8, t7, t10, t9);
    t15 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t12, t14, t13, 10);
    t16 = (t12 + 12U);
    t17 = *((unsigned int *)t16);
    t18 = (1U * t17);
    t19 = (4U != t18);
    if (t19 == 1)
        goto LAB8;

LAB9:    t20 = (t0 + 3232);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t15, 4U);
    xsi_driver_first_trans_fast_port(t20);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 5375);
    t4 = (t0 + 3296);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB6;

LAB8:    xsi_size_not_matching(4U, t18, 0);
    goto LAB9;

LAB10:    xsi_size_not_matching(4U, t18, 0);
    goto LAB11;

}


extern void work_a_1889119480_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1889119480_3212880686_p_0};
	xsi_register_didat("work_a_1889119480_3212880686", "isim/proyectoTB_isim_beh.exe.sim/work/a_1889119480_3212880686.didat");
	xsi_register_executes(pe);
}
