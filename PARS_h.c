/**************************************************************************
*																			*		
* REV    	DATE     	PROGRAMMER         	REVISION HISTORY                *
* V2.1.1	2010.07.20	Gergely Zsolt		50-90: 2/2 -> 2/4 							*
* V2.1.2	2015.11.11	Gergely Zsolt		Kimle DAC 							*
* V2.1.2	2016.04.07	Gergely Zsolt		40-55 							*





****************************************************************************
* NAME           :  PARS_H.c                                                *
* DESCRIPTION    :                                						    *
* PROCESS        :  
*****************************************************************************/

#include "CAPPLIC.H"
#include <stdio.h>
/* Parameterek strukturaja */
#include "strPar.H"




/*--------------------------------------------------------------------------*/
/* Prototypes and defines                                                   */
/*--------------------------------------------------------------------------*/


extern void fnSCTblIndx(int nIECOffset, int *nSCTblIndx, int *nOffset, short **p_col_SCAct);

/**********************************************/
/* Globals                                     */
/**********************************************/
/*extern STATION_DESC_MOT		sMOT[];
extern STATION_DESC_TALUS	sTAL[];
extern STATION_TYPE_INDEX 	sTI[];*/

/*extern COM_PAR				sCP;*/
/*extern STATION_COMM_DATA	sCD[];*/
/*extern RTU_RAD				sRAD;*/
/*extern RTU_RAD_NEW			ST[0].sRAD_K1[0];
extern RTU_RAD_NEW			ST[0].sRAD_K2[0];
extern RTU_RAD_NEW			ST[0].sRAD_K3[0];*/

/*extern RTU_LIN				ST[0].sLIN[0];*/
/*extern unsigned short		nNumOfSites;*/
/*extern unsigned short		ST[0].nSiteList[];
extern unsigned short		ST[0].nLinkList[];*/
/*extern unsigned char		byComStat[];
extern int					nTotalRTU;*/
extern void setdat2(unsigned char *input);
/*--------------------------------------------------------------------------*/
/* The list of the function included in this block */                         

/*--------------------------------------------------------------------------*/
/*const CB_JUMPTBL user_jumptable[]=
{
   {"setd2"   , setdat2},  	
   {0      , 0 }
};*/

/*--------------------------------------------------------------------------*/
/* 'C' Block Initialization and Completion                                  */
/*--------------------------------------------------------------------------*/
/*void user_control_function(int control)
{
unsigned long		lTotal;
unsigned long		lLargest;
unsigned long		lBlockSize;
unsigned char		*byP;	
int					nI;
	
	
   switch(control)
      {
         case CB_INIT :
         	
            break;

         case CB_EXIT :
         	
         break;
      }
}*/


/****************************************************************************/
/* Statikus site tabla feltoltes												*/
/****************************************************************************/
void setdat2(unsigned char *input)
{

	

	TOTAL_PAR			*ST;
	
	ST = (TOTAL_PAR *)input;
	
	


/*nNumOfSites=250;*/
				

				
ST[0].nSiteList[0]	=7185; 	ST[0].nLinkList[0]	=RADIO5_4; /* RADIO5_4 42-00		 				KOR */
ST[0].nSiteList[1]	=5174; 	ST[0].nLinkList[1]	=RADIO5_4; /* RADIO5_4 42-66		 				KOR */
ST[0].nSiteList[2]	=270; 	ST[0].nLinkList[2]	=RADIO5_4; /* RADIO5_4 42-69		 				KOR */
ST[0].nSiteList[3]	=5115; 	ST[0].nLinkList[3]	=RADIO5_4; /* RADIO5_4 42-70		 				KOR */
ST[0].nSiteList[4]	=271; 	ST[0].nLinkList[4]	=RADIO5_4; /* RADIO5_4 42-71		 				KOR */
ST[0].nSiteList[5]	=276; 	ST[0].nLinkList[5]	=RADIO5_3; /* RADIO5_4 42-74		 				KOR */
ST[0].nSiteList[6]	=268; 	ST[0].nLinkList[6]	=RADIO5_4; /* RADIO5_4 42-76		 				KOR */
ST[0].nSiteList[7]	=274; 	ST[0].nLinkList[7]	=RADIO5_4; /* RADIO5_4 42-83		 				KOR */
ST[0].nSiteList[8]	=5297; 	ST[0].nLinkList[8]	=RADIO5_4; /* RADIO5_4 43-17		 				KOR */
ST[0].nSiteList[9]	=5212; 	ST[0].nLinkList[9]	=RADIO5_4; /* RADIO5_4 49438		 				KOR */

ST[0].nSiteList[10]	=7030; 	ST[0].nLinkList[10]	=RADIO5_5; /* RADIO5_4 42-61		 				KOR */
ST[0].nSiteList[11]	=6085; 	ST[0].nLinkList[11]	=RADIO5_5; /* RADIO5_4 42-26		 				KOR */
ST[0].nSiteList[12]	=272; 	ST[0].nLinkList[12]	=RADIO5_5; /* RADIO5_5 Kondorfa ismétlõ				KOR */
ST[0].nSiteList[13]	=5305; 	ST[0].nLinkList[13]	=RADIO3_5; /* RADIO3_5 30-46						VAR */
ST[0].nSiteList[14]	=5071; 	ST[0].nLinkList[14]	=RADIO3_5; /* RADIO3_5 35-45						VAR */
ST[0].nSiteList[15]	=7170; 	ST[0].nLinkList[15]	=RADIO3_5; /* RADIO3_5 35-49						VAR */
ST[0].nSiteList[16]	=5064; 	ST[0].nLinkList[16]	=RADIO3_5; /* RADIO3_5 37-15						VAR */
ST[0].nSiteList[17]	=7078; 	ST[0].nLinkList[17]	=RADIO3_5; /* RADIO3_5 37-16						VAR */
ST[0].nSiteList[18]	=8120; 	ST[0].nLinkList[18]	=RADIO3_5; /* RADIO3_5 37-26						VAR */
ST[0].nSiteList[19]	=7173; 	ST[0].nLinkList[19]	=RADIO3_5; /* RADIO3_5 37-28						VAR */
ST[0].nSiteList[20]	=5245; 	ST[0].nLinkList[20]	=RADIO3_5; /* RADIO3_5 37-29						VAR */
ST[0].nSiteList[21]	=3163; 	ST[0].nLinkList[21]	=RADIO3_5; /* RADIO3_5 37-50						VAR */
ST[0].nSiteList[22]	=8037; 	ST[0].nLinkList[22]	=RADIO3_5; /* RADIO3_5 51-96						VAR */
ST[0].nSiteList[23]	=5304; 	ST[0].nLinkList[23]	=RADIO3_5; /* RADIO3_5 30-27						VAR */
ST[0].nSiteList[24]	=5069; 	ST[0].nLinkList[24]	=RADIO3_5; /* RADIO3_5 37-23						VAR */
ST[0].nSiteList[25]	=5055; 	ST[0].nLinkList[25]	=RADIO3_5; /* RADIO3_5 37-73 (54-33)				VAR */

ST[0].nSiteList[26]	=3109; 	ST[0].nLinkList[26]	=RADIO8_4; /* RADIO8_4 20-07						DOR */
ST[0].nSiteList[27]	=3111; 	ST[0].nLinkList[27]	=RADIO8_4; /* RADIO8_4 20-31						DOR */
ST[0].nSiteList[28]	=8212; 	ST[0].nLinkList[28]	=RADIO8_4; /* RADIO8_4 20-67						DOR */

ST[0].nSiteList[29]	=7059; 	ST[0].nLinkList[29]	=RADIO7_1; /* RADIO7_1 20-05						ESZT */
ST[0].nSiteList[30]	=7210; 	ST[0].nLinkList[30]	=RADIO7_2; /* RADIO7_1 20-60						ESZT */
ST[0].nSiteList[31]	=10001;	ST[0].nLinkList[31]	=RADIO9_1; /* RADIO9_1 Fonyód ismétlõ				TAP */
ST[0].nSiteList[32]	=2570;	ST[0].nLinkList[32]	=LINE1;    /* LINE1    Kimle DAC					KIM */
ST[0].nSiteList[33]	=10002;	ST[0].nLinkList[33]	=RADIO5_1; /* RADIO5_1 Jánossomorja, depónia		CSOR */
ST[0].nSiteList[34]	=269;	ST[0].nLinkList[34]	=RADIO5_3; /* RADIO3_4 42-67						KOR */
ST[0].nSiteList[35]	=5275;	ST[0].nLinkList[35]	=RADIO5_4; /* RADIO5_3 91-37						KOR */
ST[0].nSiteList[36]	=261;	ST[0].nLinkList[36]	=RADIO5_4; /* RADIO5_3 91-38						KOR */
ST[0].nSiteList[37]	=204;	ST[0].nLinkList[37]	=RADIO5_4; /* RADIO5_3 91-40						KOR */
ST[0].nSiteList[38]	=10003;	ST[0].nLinkList[38]	=RADIO3_5; /* RADIO3_5 Berhida, naperõmû			VESZ */
ST[0].nSiteList[39]	=10004;	ST[0].nLinkList[39]	=RADIO3_5; /* RADIO3_5 Peremarton I., naperõmû		VESZ */
ST[0].nSiteList[40]	=10005;	ST[0].nLinkList[40]	=RADIO3_5; /* RADIO3_5 Peremarton II., naperõmû		VESZ */
ST[0].nSiteList[41]	=5169;	ST[0].nLinkList[41]	=RADIO5_4; /* RADIO5_4 40-55						KOR */
ST[0].nSiteList[42]= 1013;  ST[0].nLinkList[42]	=RADIO4_1;	/* RADIO4_1	 	Kisbér, Sews (kábelköri)	VARS */
ST[0].nSiteList[43]= 296;   ST[0].nLinkList[43]	=RADIO4_1;	/* RADIO4_1	 	Kisbér, ORTECH (USIN)		VARS */
ST[0].nSiteList[44]= 8250;  ST[0].nLinkList[44] =RADIO7_5;	/* RADIO7_5	 	Vértesacsa ISM	 			BICS */
ST[0].nSiteList[45]	=7180;	ST[0].nLinkList[45]	=RADIO7_6; 	/* RADIO7_6 32-77						BICS */

ST[0].nSiteList[46]	=88;	ST[0].nLinkList[46]	=LINE11; 	/* LINE11	14-44						KIM */
ST[0].nSiteList[47]	=5268;	ST[0].nLinkList[47]	=LINE11; 	/* LINE11	12-85						KIM */
ST[0].nSiteList[48]	=5270;	ST[0].nLinkList[48]	=LINE11; 	/* LINE11	12-96						KIM */
ST[0].nSiteList[49]	=7046;	ST[0].nLinkList[49]	=LINE11; 	/* LINE11	14-10						KIM */
ST[0].nSiteList[50]	=5153;	ST[0].nLinkList[50]	=LINE11; 	/* LINE11	14-45						KIM */


ST[0].nSiteList[51]	=10006;	ST[0].nLinkList[51]	=RADIO1_1; 	/* RADIO1_1 Gyõr, Bercsényi liget		GYOR */
ST[0].nSiteList[52]	=10007;	ST[0].nLinkList[52]	=RADIO1_1; 	/* RADIO1_1 Gyõr, Töltés utca			GYOR */
ST[0].nSiteList[53]	=10008;	ST[0].nLinkList[53]	=RADIO1_1; 	/* RADIO1_1 Gyõr, Rudolph napelempark	GYOR */

ST[0].nSiteList[54]	=10009;	ST[0].nLinkList[54]	=RADIO6_1; 	/* RADIO6_1 51-29						ASZ */

ST[0].nSiteList[55]	=10010;	ST[0].nLinkList[55]	=RADIO1_1; 	/* RADIO1_1 Gyõr, Híd utca				GYORV */

ST[0].nSiteList[56]	=10011;	ST[0].nLinkList[56]	=RADIO6_1; 	/* RADIO6_1 Balatonfüred, Castricum		ASZ */
ST[0].nSiteList[57]	=10012;	ST[0].nLinkList[57]	=RADIO6_1; 	/* RADIO6_1 Balatonfüred, VW szerviz	ASZ */

ST[0].nSiteList[58]	=10013;	ST[0].nLinkList[58]	=RADIO6_1; 	/* RADIO6_1 51-31						ASZ */

ST[0].nSiteList[59]	=10014;	ST[0].nLinkList[59]	=RADIO3_5; 	/* RADIO3_5 Várpalota, napelempark		ASZ */
ST[0].nSiteList[60]	=10015;	ST[0].nLinkList[60]	=RADIO6_1; 	/* RADIO6_1 Balatonudvari napelempark	ASZ */
ST[0].nSiteList[61]	=10016;	ST[0].nLinkList[61]	=RADIO5_1; 	/* RADIO5_1 Szil napelempark			CSOR */
ST[0].nSiteList[62]=2000; 	ST[0].nLinkList[62]=RSLINK11;	/* Front end B							*/
ST[0].nSiteList[63]=6000; 	ST[0].nLinkList[63]=RSLINK11;	/* Front end D							*/
ST[0].nSiteList[64]=8000;	ST[0].nLinkList[64]=RSLINK11;	/* Front end F							*/
ST[0].nSiteList[65]=8999; 	ST[0].nLinkList[65]=RSLINK11;	/* B redundancia						*/

ST[0].nSiteList[66]	=273;	  ST[0].nLinkList[66]	=RADIO5_4; 	/* RADIO5_4 42-68						KOR */
ST[0].nSiteList[67]	=3045;	ST[0].nLinkList[67]	=RADIO1_8; 	/* RADIO1_8 64-26						KAP */
ST[0].nSiteList[68]	=10017;	ST[0].nLinkList[68]	=RADIO3_1; 	/* RADIO3_1 Fertõd, napelempark			SOP */
ST[0].nSiteList[69]	=10018;	ST[0].nLinkList[69]	=RADIO1_4; 	/* RADIO1_4 Gyõr, Pásztor u.			GYOR */   /* Nincs tartalék */
ST[0].nSiteList[70]	=10019;	ST[0].nLinkList[70]	=RADIO3_1; 	/* RADIO3_1 Sopron, Bútoripar			SOP */    /* OK */
ST[0].nSiteList[71]	=10020;	ST[0].nLinkList[71]	=RADIO3_3; 	/* RADIO3_3 Sopron, Petõfi tér			SOP */  /* OK */
ST[0].nSiteList[72]	=10021;	ST[0].nLinkList[72]	=RADIO8_4; 	/* RADIO8_4 Kesztölc napelempark, 032-18		DOR */
ST[0].nSiteList[73]	=10022;	ST[0].nLinkList[73]	=RADIO8_4; 	/* RADIO8_4 Kesztölc napelempark, 032-21		DOR */

ST[0].nSiteList[74]	=2580;	ST[0].nLinkList[74]	=LINE10;    /* LINE1    Répceleak DAC					REP */


ST[0].nSiteList[75]	=10023;	ST[0].nLinkList[75]	=RADIO2_1; 	/* RADIO2_1 Veszprém, Vörösmarty tér			VESZ */  /* OK */
ST[0].nSiteList[76]	=10024;	ST[0].nLinkList[76]	=RADIO9_1; 	/* RADIO9_1 Tapolca, Y 7-8			 TAP */      /* OK */                  
ST[0].nSiteList[77]	=10025;	ST[0].nLinkList[77]	=RADIO4_5; 	/* RADIO4_5 Pápa, jégpálya			 PAP */    /* OK */
ST[0].nSiteList[78]	=10026;	ST[0].nLinkList[78]	=RADIO1_5; 	/* RADIO1_5 Tét, 055-39 PV erõmû			 GYOR */
ST[0].nSiteList[79]	=10027;	ST[0].nLinkList[79]	=LINE11;    /* LINE11   12-18			             KIM */
ST[0].nSiteList[80]	=10029;	ST[0].nLinkList[80]	=RADIO1_1;  /* RADIO1_1 Gyõr, Fehérvári út         GYOR */     /* OK */
ST[0].nSiteList[81]	=10028;	ST[0].nLinkList[81]	=RADIO1_5;  /* RADIO1_5 Gyömöre, 011-4 PV erõmû          GYOR */

ST[0].nSiteList[82]	=10030;	ST[0].nLinkList[82]	=LINE11;  /* LINE11 Kimle, 1058,1059,1060 PV erõmû          GYOR */
ST[0].nSiteList[83]	=10031;	ST[0].nLinkList[83]	=RADIO2_1;  /* RADIO2_1 Vezprém Kis Tesco - tesztelve          VESZ */
ST[0].nSiteList[84]	=10032;	ST[0].nLinkList[84]	=RADIO3_5;  /* RADIO3_5 Várpalota Esso   - tesztelve          VAR */
ST[0].nSiteList[85]	=10033;	ST[0].nLinkList[85]	=RADIO4_5;  /* RADIO4_5 Ganna 044-2 PV erõmû   -  Tesztelve         PAP */
ST[0].nSiteList[86]	=10034;	ST[0].nLinkList[86]	=RADIO7_6;  /* RADIO7_6 Alcsútdoboz 071-11 PV erõmû   -  Tesztelve         BICS   */
ST[0].nSiteList[87]	=10035;	ST[0].nLinkList[87]	=RADIO2_3;  /* RADIO2_3 Pusztamiske 0133-6 PV erõmû   -  Tesztelve         AJK   */
ST[0].nSiteList[88]	=10036;	ST[0].nLinkList[88]	=RADIO7_5;  /* RADIO7_5 Mány 001706-200-B PV erõmû   -  Tesztelve          BICS */
ST[0].nSiteList[89]	=10037;	ST[0].nLinkList[89]	=RADIO1_1;  /* RADIO1_1 Gyõr, DNV24                   - Tesztelve          GYORV */
ST[0].nSiteList[90]	=10038;	ST[0].nLinkList[90]	=RADIO3_5;  /* RADIO3_5 Csór 65/1 PV erõmû            -  Tesztelve          VARP */
ST[0].nSiteList[91]	=10039;	ST[0].nLinkList[91]	=RADIO3_5;  /* RADIO3_5 Csór 65/2 PV erõmû            -  Tesztelve          VARP */
ST[0].nSiteList[92]	=10040;	ST[0].nLinkList[92]	=RADIO1_1;  /* RADIO1_1 Gyõr, Marcal10                -  Tesztelve         GYORV */
ST[0].nSiteList[93]	=10041;	ST[0].nLinkList[93]	=RADIO4_5;  /* RADIO4_5 Magyargencs, 184hrsz.         -  Tesztelve         PAP */
ST[0].nSiteList[94]	=10045;	ST[0].nLinkList[94]	=RADIO3_6;  /* RADIO3_6 50-63                                 -           VAR */
ST[0].nSiteList[95]	=10042;	ST[0].nLinkList[95]	=RADIO1_5;  /* RADIO1_5 Tét I. 12/2 PV erõmû          -   Tesztelve        GYOR */
ST[0].nSiteList[96]	=10043;	ST[0].nLinkList[96]	=RADIO2_3;  /* RADIO2_3 Devecser 09/2 PV erõmû        -   Tesztelve      AJK */
ST[0].nSiteList[97]	=10044;	ST[0].nLinkList[97]	=RADIO3_5;  /* RADIO3_5 Királyszentistván PV erõmû    -   Tesztelve      VARP */
ST[0].nSiteList[98]	=10046;	ST[0].nLinkList[98]	=RADIO3_3;  /* RADIO3_3 Sopron Kossuth u.                  Tesztelve -               SOPNY */
ST[0].nSiteList[99]	=10047;	ST[0].nLinkList[99]	=RADIO4_6;  /* RADIO4_6 Kajárpéc 0251/11 PV erõmû          Tesztelve        -       VARS */
ST[0].nSiteList[100]=10048;	ST[0].nLinkList[100]=RADIO4_6;  /* RADIO4_6 Kajárpéc 0241/74 PV erõmû          Tesztelve        -       VARS */
ST[0].nSiteList[101]=10049;	ST[0].nLinkList[101]=RADIO2_2;  /* RADIO2_2 Nagyvázsony 099/2 PV erõmû         Tesztelve         -       VESZ */
ST[0].nSiteList[102]=10050;	ST[0].nLinkList[102]=RADIO2_1;  /* RADIO2_1 Veszprém 071/8 PV erõmû            Tesztelve      -       VESZ */
ST[0].nSiteList[103]=10051;	ST[0].nLinkList[103]=RADIO3_1;  /* RADIO3_1 Fertõszéplak 424/2 PV erõmû        Tesztelve          -       SOP */
ST[0].nSiteList[104]=10052;	ST[0].nLinkList[104]=RADIO3_3;  /* RADIO3_3 Sopron, Sport u.                   Tesztelve                  -       SOP */
ST[0].nSiteList[105]=10053;	ST[0].nLinkList[105]=RADIO9_5;  /* RADIO9_5 Zalameggyes 62                     Tesztelve                -       SUM */
ST[0].nSiteList[106]=10054;	ST[0].nLinkList[106]=RADIO3_3;  /* RADIO3_3 Sopron Zárgyár                     Tesztelve                -       SUM */


ST[0].nSiteList[107]=10055;	ST[0].nLinkList[107]=RADIO9_9;  /* RADIO9_9 Kõvágóörs 0193/2                                     -       SUM */
ST[0].nSiteList[108]=10056;	ST[0].nLinkList[108]=RADIO4_5;  /* RADIO4_5 72-29                                    -       PAP */
ST[0].nSiteList[109]=10057;	ST[0].nLinkList[109]=RADIO2_1;  /* RADIO2_1 54-90                                    -       VESZ */

ST[0].nSiteList[110]=10058;	ST[0].nLinkList[110]=RADIO3_5;  /* RADIO3_5 Várpalota 4237/17                        -       VAR */
ST[0].nSiteList[111]=10059;	ST[0].nLinkList[111]=RADIO3_5;  /* RADIO3_5 Várpalota 4237/3                        -       VAR */
ST[0].nSiteList[112]=10060;	ST[0].nLinkList[112]=RADIO3_5;  /* RADIO3_5 37-63                        -       VAR */
ST[0].nSiteList[113]=10061;	ST[0].nLinkList[113]=RADIO3_5;  /* RADIO3_5 37-65                        -       VAR */
ST[0].nSiteList[114]=10062;	ST[0].nLinkList[114]=RADIO3_5;  /* RADIO3_5 37-66                        -       VAR */

ST[0].nSiteList[115]=10063;	ST[0].nLinkList[115]=RADIO9_1;  /* RADIO9_1 52-51                        -       TAP */
ST[0].nSiteList[116]=10064;	ST[0].nLinkList[116]=RADIO2_2;  /* RADIO2_2 Vigándpetend 012/1_1          -      VESZ */
ST[0].nSiteList[117]=10065;	ST[0].nLinkList[117]=RADIO2_2;  /* RADIO2_2 Vigándpetend 012/1_2          -      VESZ */
ST[0].nSiteList[118]=10066;	ST[0].nLinkList[118]=RADIO7_5;  /* RADIO7_5 Bicske, 041/8                 -      BICS */
ST[0].nSiteList[119]=10067;	ST[0].nLinkList[119]=RADIO2_1;  /* RADIO2_1 Veszprém 071/39                 -     VESZ */

ST[0].nSiteList[120]=10068;	ST[0].nLinkList[120]=RADIO1_4;  /* RADIO1_4 Gyõr, Selyem u.                 -     GYOR */
ST[0].nSiteList[121]=10069;	ST[0].nLinkList[121]=RADIO1_4;  /* RADIO1_4 Gyõr, 0747/9 PV erõmû                 -     GYOR */
ST[0].nSiteList[122]=10070;	ST[0].nLinkList[122]=RADIO1_5;  /* RADIO1_5 Tét, 055/39 PV erõmû                 -     GYOR */
ST[0].nSiteList[123]=10071;	ST[0].nLinkList[123]=RADIO1_1;  /* RADIO1_1 Gyõr, Rába gázmotor                -     GYORV */
ST[0].nSiteList[124]=10072;	ST[0].nLinkList[124]=RADIO1_4;  /* RADIO1_4 Gyõr, Gönyû 1182               -     GYOR */
ST[0].nSiteList[125]=10073;	ST[0].nLinkList[125]=RADIO3_1;  /* RADIO3_1 Fertõrákos, 030/5 PV erõmû               -     SOP */
ST[0].nSiteList[126]=10074;	ST[0].nLinkList[126]=RADIO9_6;  /* RADIO9_5 Zalavég 044/3 PV erõmû               -     SUM */
ST[0].nSiteList[127]=10076;	ST[0].nLinkList[127]=RADIO5_1;  /* RADIO5_1 Csorna 0123/3              -            CSOR */
ST[0].nSiteList[128]=10077;	ST[0].nLinkList[128]=RADIO3_1;  /* RADIO3_1 Fertõszéplak 424/5              -            SOP */
ST[0].nSiteList[129]=10078;	ST[0].nLinkList[129]=RADIO3_5;  /* RADIO3_5 Öskû 077/15               -            VARP */
ST[0].nSiteList[130]=10079;	ST[0].nLinkList[130]=RADIO3_5;  /* RADIO3_5 Öskû 077/17               -            VARP */
ST[0].nSiteList[131]=10080;	ST[0].nLinkList[131]=RADIO3_5;  /* RADIO3_5 37-81                     -            VARP */
ST[0].nSiteList[132]=10081;	ST[0].nLinkList[132]=RADIO3_1;  /* RADIO3_1 61-67                     -            SOP */
ST[0].nSiteList[133]=10082;	ST[0].nLinkList[133]=RADIO9_8;  /* RADIO9_5 Csabrendek 0469                     -  SUM */
ST[0].nSiteList[134]= 9077;	ST[0].nLinkList[134]=RADIO4_3;  /* RADIO4_3 Kisbér, Iskola u.                     -VAR  */
ST[0].nSiteList[135]=10083;	ST[0].nLinkList[135]=RADIO1_1;  /* RADIO1_1 Gyõr 0452/6 Árki                     -GYORV  */
ST[0].nSiteList[136]=10084;	ST[0].nLinkList[136]=RADIO2_1;  /* RADIO2_1 Szentkirályszabadja 067/6             -VESZ  */
ST[0].nSiteList[137]=10085;	ST[0].nLinkList[137]=RADIO2_1;  /* RADIO2_1 Felsõörs 03/41                        -VESZ  */
ST[0].nSiteList[138]=10086;	ST[0].nLinkList[138]=RADIO3_5;  /* RADIO3_5 Várpalota 4156/29                        -VARP  */
ST[0].nSiteList[139]=10087;	ST[0].nLinkList[139]=RADIO2_1;  /* RADIO2_1 54-91                                  -VESZ  */
ST[0].nSiteList[140]=10088;	ST[0].nLinkList[140]=RADIO2_3;  /* RADIO2_3 Kolontár 324                            -AJK  */
ST[0].nSiteList[141]=10089;	ST[0].nLinkList[141]=RADIO1_4;  /* RADIO1_4 10-13                                  -GYOR  */
ST[0].nSiteList[142]=2590;	ST[0].nLinkList[142]=LINE1;     /* LINE1    Fertõszentmiklós DAC                   -FSZM  */
ST[0].nSiteList[143]=10090;	ST[0].nLinkList[143]=RADIO3_5;  /* RADIO3_5 Várpalota 0192/4                        -VARP  */
ST[0].nSiteList[144]=10093;	ST[0].nLinkList[144]=RADIO9_9;  /* RADIO9_9 Révfülöp Csárda u.                      -TAP  */
ST[0].nSiteList[145]=10094;	ST[0].nLinkList[145]=RADIO6_1;  /* RADIO6_1 Pécsely Bagóhegy                      -ASZ  */



ST[0].nSiteList[249]=0;		ST[0].nLinkList[249]	=ALL_LINK;	/* RTUALL */





                                                                    

/*for (nI=0;nI<MAX_RTU;nI++)
{
	byComStat[nI] = 0;
}


   MOSCAD_set_sitetable(nNumOfSites,ST[0].nSiteList,ST[0].nLinkList,byComStat);*/




/****************************************************************************/
/* Dinamikus site tabla feltoltese											*/
/****************************************************************************/

	
	



/****************************************************************************/
/* Parancskuldes parameterei      											*/
/****************************************************************************/

/*int		nI;
int 			nSCTblIndx;
int 			nOffset;
short			*p_col_DCAct;
short			*p_col_SCAct;*/
	
	

/* IEC cimnek megfelelo RTU cimek -----------------------------------------------------------------------*/
/* Ha valamelyik darabszam = 0, akkor olyan tipusu parancs nem tartozik az RTU-hoz */
        	
         	





/*Nyugta inicializalas*/

/*for (nI=0;nI<sCP.nRtuNum && nI<MAX_RTU;nI++)
{
	if (sCP.sCPR[nI].nAckNum>0)
		{
 		fnSCTblIndx(sCP.sCPR[nI].nAckStart, &nSCTblIndx, &nOffset, &p_col_SCAct);

		p_col_SCAct[sCP.sCPR[nI].nAckStart-nOffset] = 1;
		}
}*/


/* Radios RTU-k indexei, periodikus lekerdezes miatt*/
/* Radios RTU-k indexei, periodikus lekerdezes miatt*/
/* K1 : GYOR, KAP, VARS*/
ST[0].sRAD_K1[0].nRtuNumRad = 38; /*63*/
ST[0].sRAD_K1[0].nIndx[0]=13; 
ST[0].sRAD_K1[0].nIndx[1]=14; 
ST[0].sRAD_K1[0].nIndx[2]=15; 
ST[0].sRAD_K1[0].nIndx[3]=16; 
ST[0].sRAD_K1[0].nIndx[4]=17; 
ST[0].sRAD_K1[0].nIndx[5]=18; 
ST[0].sRAD_K1[0].nIndx[6]=19; 
ST[0].sRAD_K1[0].nIndx[7]=20; 
ST[0].sRAD_K1[0].nIndx[8]=21; 
ST[0].sRAD_K1[0].nIndx[9]=22; 
ST[0].sRAD_K1[0].nIndx[10]=23; 
ST[0].sRAD_K1[0].nIndx[11]=24; 
ST[0].sRAD_K1[0].nIndx[12]=25; 
ST[0].sRAD_K1[0].nIndx[13]=42; 
ST[0].sRAD_K1[0].nIndx[14]=43; 
ST[0].sRAD_K1[0].nIndx[15]=51; 
ST[0].sRAD_K1[0].nIndx[16]=52; 
ST[0].sRAD_K1[0].nIndx[17]=53; 
ST[0].sRAD_K1[0].nIndx[18]=59; 
ST[0].sRAD_K1[0].nIndx[19]=67; 
ST[0].sRAD_K1[0].nIndx[20]=69; 
ST[0].sRAD_K1[0].nIndx[21]=78; 
ST[0].sRAD_K1[0].nIndx[22]=79; 
ST[0].sRAD_K1[0].nIndx[23]=80; 
ST[0].sRAD_K1[0].nIndx[24]=81; 
ST[0].sRAD_K1[0].nIndx[25]=82; 
ST[0].sRAD_K1[0].nIndx[26]=84; 
ST[0].sRAD_K1[0].nIndx[27]=94; 
ST[0].sRAD_K1[0].nIndx[28]=95; 
ST[0].sRAD_K1[0].nIndx[29]=97; 
ST[0].sRAD_K1[0].nIndx[30]=99; 
ST[0].sRAD_K1[0].nIndx[31]=100; 
ST[0].sRAD_K1[0].nIndx[32]=120; 
ST[0].sRAD_K1[0].nIndx[33]=121; 
ST[0].sRAD_K1[0].nIndx[34]=122; 
ST[0].sRAD_K1[0].nIndx[35]=124; 
ST[0].sRAD_K1[0].nIndx[36]=134; 
ST[0].sRAD_K1[0].nIndx[37]=141; 


      


/* K2 : VESZ, TAP, PAP, SUM, ESZT, CSOR, KIM, ASZ, GYORV, AJK, VARP */
ST[0].sRAD_K2[0].nRtuNumRad = 61; /*76*/
ST[0].sRAD_K2[0].nIndx[0]=29;
ST[0].sRAD_K2[0].nIndx[1]=30;
ST[0].sRAD_K2[0].nIndx[2]=31;
ST[0].sRAD_K2[0].nIndx[3]=33;
ST[0].sRAD_K2[0].nIndx[4]=34;
ST[0].sRAD_K2[0].nIndx[5]=38;
ST[0].sRAD_K2[0].nIndx[6]=39;
ST[0].sRAD_K2[0].nIndx[7]=40;
ST[0].sRAD_K2[0].nIndx[8]=46;
ST[0].sRAD_K2[0].nIndx[9]=47;
ST[0].sRAD_K2[0].nIndx[10]=48;
ST[0].sRAD_K2[0].nIndx[11]=49;
ST[0].sRAD_K2[0].nIndx[12]=50;
ST[0].sRAD_K2[0].nIndx[13]=54;
ST[0].sRAD_K2[0].nIndx[14]=55;
ST[0].sRAD_K2[0].nIndx[15]=56;
ST[0].sRAD_K2[0].nIndx[16]=57;
ST[0].sRAD_K2[0].nIndx[17]=58;
ST[0].sRAD_K2[0].nIndx[18]=60;
ST[0].sRAD_K2[0].nIndx[19]=61;
ST[0].sRAD_K2[0].nIndx[20]=75;
ST[0].sRAD_K2[0].nIndx[21]=76;
ST[0].sRAD_K2[0].nIndx[22]=77;
ST[0].sRAD_K2[0].nIndx[23]=83;
ST[0].sRAD_K2[0].nIndx[24]=85;
ST[0].sRAD_K2[0].nIndx[25]=87;
ST[0].sRAD_K2[0].nIndx[26]=89;
ST[0].sRAD_K2[0].nIndx[27]=90; /**/
ST[0].sRAD_K2[0].nIndx[28]=91; /**/
ST[0].sRAD_K2[0].nIndx[29]=92; /**/
ST[0].sRAD_K2[0].nIndx[30]=93; /**/
ST[0].sRAD_K2[0].nIndx[31]=96; /**/
ST[0].sRAD_K2[0].nIndx[32]=101; /**/
ST[0].sRAD_K2[0].nIndx[33]=102; /**/
ST[0].sRAD_K2[0].nIndx[34]=105; /**/
ST[0].sRAD_K2[0].nIndx[35]=107; /**/
ST[0].sRAD_K2[0].nIndx[36]=108; /**/
ST[0].sRAD_K2[0].nIndx[37]=109; /**/
ST[0].sRAD_K2[0].nIndx[38]=110; /**/
ST[0].sRAD_K2[0].nIndx[39]=111; /**/
ST[0].sRAD_K2[0].nIndx[40]=112; /**/
ST[0].sRAD_K2[0].nIndx[41]=113; /**/
ST[0].sRAD_K2[0].nIndx[42]=114; /**/
ST[0].sRAD_K2[0].nIndx[43]=115; /**/
ST[0].sRAD_K2[0].nIndx[44]=116; /**/
ST[0].sRAD_K2[0].nIndx[45]=119; /**/
ST[0].sRAD_K2[0].nIndx[46]=123; /**/
ST[0].sRAD_K2[0].nIndx[47]=126; /**/
ST[0].sRAD_K2[0].nIndx[48]=127; /**/
ST[0].sRAD_K2[0].nIndx[49]=129; /**/
ST[0].sRAD_K2[0].nIndx[50]=130; /**/
ST[0].sRAD_K2[0].nIndx[51]=131; /**/
ST[0].sRAD_K2[0].nIndx[52]=117; /**/
ST[0].sRAD_K2[0].nIndx[53]=133; /**/
ST[0].sRAD_K2[0].nIndx[54]=136; /**/
ST[0].sRAD_K2[0].nIndx[55]=137; /**/
ST[0].sRAD_K2[0].nIndx[56]=138; /**/
ST[0].sRAD_K2[0].nIndx[57]=140; /**/
ST[0].sRAD_K2[0].nIndx[58]=143; /**/
ST[0].sRAD_K2[0].nIndx[59]=144; /**/
ST[0].sRAD_K2[0].nIndx[60]=145; /**/




/* K3 : DOR, SOP, KOR, BI, GYVAR */
ST[0].sRAD_K3[0].nRtuNumRad = 39;  /**/
ST[0].sRAD_K3[0].nIndx[0]=0; /**/
ST[0].sRAD_K3[0].nIndx[1]=1; /**/
ST[0].sRAD_K3[0].nIndx[2]=2; /**/
ST[0].sRAD_K3[0].nIndx[3]=3; /**/
ST[0].sRAD_K3[0].nIndx[4]=4; /**/
ST[0].sRAD_K3[0].nIndx[5]=5; /**/
ST[0].sRAD_K3[0].nIndx[6]=6; /**/
ST[0].sRAD_K3[0].nIndx[7]=7; /**/
ST[0].sRAD_K3[0].nIndx[8]=8; /**/
ST[0].sRAD_K3[0].nIndx[9]=9; /**/
ST[0].sRAD_K3[0].nIndx[10]=10; /**/
ST[0].sRAD_K3[0].nIndx[11]=11; /**/
ST[0].sRAD_K3[0].nIndx[12]=12; /**/
ST[0].sRAD_K3[0].nIndx[13]=26; /**/
ST[0].sRAD_K3[0].nIndx[14]=27; /**/
ST[0].sRAD_K3[0].nIndx[15]=28; /**/
ST[0].sRAD_K3[0].nIndx[16]=35; /**/
ST[0].sRAD_K3[0].nIndx[17]=36; /**/
ST[0].sRAD_K3[0].nIndx[18]=37; /**/
ST[0].sRAD_K3[0].nIndx[19]=41; /**/
ST[0].sRAD_K3[0].nIndx[20]=44; /**/
ST[0].sRAD_K3[0].nIndx[21]=45; /**/
ST[0].sRAD_K3[0].nIndx[22]=66; /**/
ST[0].sRAD_K3[0].nIndx[23]=68; /**/
ST[0].sRAD_K3[0].nIndx[24]=70; /**/
ST[0].sRAD_K3[0].nIndx[25]=71; /**/
ST[0].sRAD_K3[0].nIndx[26]=72; /**/
ST[0].sRAD_K3[0].nIndx[27]=73; /**/
ST[0].sRAD_K3[0].nIndx[28]=86; /**/
ST[0].sRAD_K3[0].nIndx[29]=88; /**/
ST[0].sRAD_K3[0].nIndx[30]=98; /**/
ST[0].sRAD_K3[0].nIndx[31]=103; /**/
ST[0].sRAD_K3[0].nIndx[32]=104; /**/
ST[0].sRAD_K3[0].nIndx[33]=106; /**/
ST[0].sRAD_K3[0].nIndx[34]=118; /**/
ST[0].sRAD_K3[0].nIndx[35]=125; /**/
ST[0].sRAD_K3[0].nIndx[36]=128; /**/
ST[0].sRAD_K3[0].nIndx[37]=132; /**/
ST[0].sRAD_K3[0].nIndx[38]=135; /**/



/*RST[0].sLINK RTUk indexei*/
ST[0].sLIN[0].nRtuNumLin = 3;
ST[0].sLIN[0].nIndx[0] =32;
ST[0].sLIN[0].nIndx[1] =74;
ST[0].sLIN[0].nIndx[2] =142;




} /* end fnSetComPar()*/

