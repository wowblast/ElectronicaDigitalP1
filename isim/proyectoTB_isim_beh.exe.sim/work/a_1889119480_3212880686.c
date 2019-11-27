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
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_1889119480_3212880686_p_0(char *t0)
{
    char t15[16];
    char t16[16];
    char t17[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 5312U);
    t4 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t3, t2, 9);
    if (t4 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t4 = (t1 == (unsigned char)2);
    if (t4 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t4 = (t1 == (unsigned char)3);
    if (t4 != 0)
        goto LAB18;

LAB19:
LAB9:
LAB3:    t2 = (t0 + 3152);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(47, ng0);
    t8 = (t0 + 5393);
    t10 = (t0 + 3232);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t8, 4U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 5397);
    t5 = (t0 + 3296);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB3;

LAB5:    t5 = (t0 + 1192U);
    t6 = *((char **)t5);
    t5 = (t0 + 5328U);
    t7 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t6, t5, 9);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t2 = (t0 + 5312U);
    t6 = (t0 + 1192U);
    t8 = *((char **)t6);
    t6 = (t0 + 5328U);
    t9 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t15, t5, t2, t8, t6);
    t7 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t9, t15, 9);
    if (t7 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 5312U);
    t5 = (t0 + 1192U);
    t6 = *((char **)t5);
    t5 = (t0 + 5328U);
    t8 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t15, t3, t2, t6, t5);
    t9 = (t15 + 12U);
    t20 = *((unsigned int *)t9);
    t21 = (1U * t20);
    t1 = (4U != t21);
    if (t1 == 1)
        goto LAB16;

LAB17:    t10 = (t0 + 3232);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t8, 4U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 5401);
    t5 = (t0 + 3296);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);

LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(53, ng0);
    t10 = (t0 + 1032U);
    t11 = *((char **)t10);
    t10 = (t0 + 5312U);
    t12 = (t0 + 1192U);
    t13 = *((char **)t12);
    t12 = (t0 + 5328U);
    t14 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t17, t11, t10, t13, t12);
    t18 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t16, t14, t17, 10);
    t19 = (t16 + 12U);
    t20 = *((unsigned int *)t19);
    t21 = (1U * t20);
    t22 = (4U != t21);
    if (t22 == 1)
        goto LAB14;

LAB15:    t23 = (t0 + 3232);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t18, 4U);
    xsi_driver_first_trans_fast_port(t23);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 5399);
    t5 = (t0 + 3296);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB12;

LAB14:    xsi_size_not_matching(4U, t21, 0);
    goto LAB15;

LAB16:    xsi_size_not_matching(4U, t21, 0);
    goto LAB17;

LAB18:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t2 = (t0 + 5328U);
    t6 = (t0 + 1032U);
    t8 = *((char **)t6);
    t6 = (t0 + 5312U);
    t7 = ieee_std_logic_unsigned_greater_stdv_stdv(IEEE_P_3620187407, t5, t2, t8, t6);
    if (t7 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 5312U);
    t5 = (t0 + 1192U);
    t6 = *((char **)t5);
    t5 = (t0 + 5328U);
    t8 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t15, t3, t2, t6, t5);
    t9 = (t15 + 12U);
    t20 = *((unsigned int *)t9);
    t21 = (1U * t20);
    t1 = (4U != t21);
    if (t1 == 1)
        goto LAB25;

LAB26:    t10 = (t0 + 3232);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t8, 4U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 5405);
    t5 = (t0 + 3296);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);

LAB21:    goto LAB9;

LAB20:    xsi_set_current_line(61, ng0);
    t9 = (t0 + 1192U);
    t10 = *((char **)t9);
    t9 = (t0 + 5328U);
    t11 = (t0 + 1032U);
    t12 = *((char **)t11);
    t11 = (t0 + 5312U);
    t13 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t15, t10, t9, t12, t11);
    t14 = (t15 + 12U);
    t20 = *((unsigned int *)t14);
    t21 = (1U * t20);
    t22 = (4U != t21);
    if (t22 == 1)
        goto LAB23;

LAB24:    t18 = (t0 + 3232);
    t19 = (t18 + 56U);
    t23 = *((char **)t19);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t13, 4U);
    xsi_driver_first_trans_fast_port(t18);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 5403);
    t5 = (t0 + 3296);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB21;

LAB23:    xsi_size_not_matching(4U, t21, 0);
    goto LAB24;

LAB25:    xsi_size_not_matching(4U, t21, 0);
    goto LAB26;

}


extern void work_a_1889119480_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1889119480_3212880686_p_0};
	xsi_register_didat("work_a_1889119480_3212880686", "isim/proyectoTB_isim_beh.exe.sim/work/a_1889119480_3212880686.didat");
	xsi_register_executes(pe);
}
