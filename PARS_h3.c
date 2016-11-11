/****************************************************************************
*																			*		
* REV    	DATE     	PROGRAMMER         	REVISION HISTORY                *
* V2.1.1	2007.05.02	Gergely Zsolt		21-13 NPS						*


****************************************************************************
* NAME           :  PARS_H3.c                                                 *
* DESCRIPTION    :                                         *
* PROCESS        : 
*****************************************************************************/

#include "CAPPLIC.H"
#include <stdio.h>
/* Parameterek strukturaja */
#include "strPar.H"




/*--------------------------------------------------------------------------*/
/* Prototypes and defines                                                   */
/*--------------------------------------------------------------------------*/

extern void setdat(unsigned char *input);

/**********************************************/
/* Globals                                     */
/**********************************************/


/*--------------------------------------------------------------------------*/
/* The list of the function included in this block                          */
/*--------------------------------------------------------------------------*/
/*const CB_JUMPTBL user_jumptable[]=
{
   {"setdat"   , setdat},  	
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
/* Parameter strukturak feltoltese     											*/
/***************************************************************************/
void setdat(unsigned char *input)
{
	int					nI;
	TOTAL_PAR			*sT;
	
	sT = (TOTAL_PAR *)input;

/* Single command inicializálása ciklusban */	
for (nI = 0;nI<	MAX_RTU;nI++)
{
sT[0].sCP[0].sCPR[nI].nSCNum  = 1;
}	
	
	
	
	
sT[0].sCP[0].sCPR[0].nDCStart  = 10;    sT[0].sCP[0].sCPR[0].nDCNum  = 1;    sT[0].sCP[0].sCPR[0].nSCStart  = 11;    sT[0].sCP[0].sCPR[0].nAckStart  =12;     sT[0].sCP[0].sCPR[0].nAckNum  =1;   sT[0].sCP[0].sCPR[0].nSPOffsetCS  = 24;   sT[0].sCP[0].sCPR[0].nSPOffsetLek  = 25; 	
sT[0].sCP[0].sCPR[1].nDCStart  = 13;    sT[0].sCP[0].sCPR[1].nDCNum  = 1;    sT[0].sCP[0].sCPR[1].nSCStart  = 14;    sT[0].sCP[0].sCPR[1].nAckStart  =15;     sT[0].sCP[0].sCPR[1].nAckNum  =1;   sT[0].sCP[0].sCPR[1].nSPOffsetCS  = 40;   sT[0].sCP[0].sCPR[1].nSPOffsetLek  = 41;
sT[0].sCP[0].sCPR[2].nDCStart  = 16;    sT[0].sCP[0].sCPR[2].nDCNum  = 1;    sT[0].sCP[0].sCPR[2].nSCStart  = 17;    sT[0].sCP[0].sCPR[2].nAckStart  =18;     sT[0].sCP[0].sCPR[2].nAckNum  =1;   sT[0].sCP[0].sCPR[2].nSPOffsetCS  = 56;   sT[0].sCP[0].sCPR[2].nSPOffsetLek  = 57;
sT[0].sCP[0].sCPR[3].nDCStart  = 19;    sT[0].sCP[0].sCPR[3].nDCNum  = 1;    sT[0].sCP[0].sCPR[3].nSCStart  = 20;    sT[0].sCP[0].sCPR[3].nAckStart  =0;      sT[0].sCP[0].sCPR[3].nAckNum  =0;   sT[0].sCP[0].sCPR[3].nSPOffsetCS  = 72;   sT[0].sCP[0].sCPR[3].nSPOffsetLek  = 73;
sT[0].sCP[0].sCPR[4].nDCStart  = 22;    sT[0].sCP[0].sCPR[4].nDCNum  = 1;    sT[0].sCP[0].sCPR[4].nSCStart  = 23;    sT[0].sCP[0].sCPR[4].nAckStart  =24;     sT[0].sCP[0].sCPR[4].nAckNum  =1;   sT[0].sCP[0].sCPR[4].nSPOffsetCS  = 88;   sT[0].sCP[0].sCPR[4].nSPOffsetLek  = 89;
sT[0].sCP[0].sCPR[5].nDCStart  = 25;    sT[0].sCP[0].sCPR[5].nDCNum  = 1;    sT[0].sCP[0].sCPR[5].nSCStart  = 26;    sT[0].sCP[0].sCPR[5].nAckStart  =0;      sT[0].sCP[0].sCPR[5].nAckNum  =0;   sT[0].sCP[0].sCPR[5].nSPOffsetCS  = 104;  sT[0].sCP[0].sCPR[5].nSPOffsetLek  = 105;
sT[0].sCP[0].sCPR[6].nDCStart  = 28;    sT[0].sCP[0].sCPR[6].nDCNum  = 1;    sT[0].sCP[0].sCPR[6].nSCStart  = 29;    sT[0].sCP[0].sCPR[6].nAckStart  =0;      sT[0].sCP[0].sCPR[6].nAckNum  =0;   sT[0].sCP[0].sCPR[6].nSPOffsetCS  = 120;  sT[0].sCP[0].sCPR[6].nSPOffsetLek  = 121;
sT[0].sCP[0].sCPR[7].nDCStart  = 31;    sT[0].sCP[0].sCPR[7].nDCNum  = 1;    sT[0].sCP[0].sCPR[7].nSCStart  = 32;    sT[0].sCP[0].sCPR[7].nAckStart  =33;     sT[0].sCP[0].sCPR[7].nAckNum  =1;   sT[0].sCP[0].sCPR[7].nSPOffsetCS  = 136;  sT[0].sCP[0].sCPR[7].nSPOffsetLek  = 137;
sT[0].sCP[0].sCPR[8].nDCStart  = 34;    sT[0].sCP[0].sCPR[8].nDCNum  = 1;    sT[0].sCP[0].sCPR[8].nSCStart  = 35;    sT[0].sCP[0].sCPR[8].nAckStart  =36;     sT[0].sCP[0].sCPR[8].nAckNum  =1;   sT[0].sCP[0].sCPR[8].nSPOffsetCS  = 152;  sT[0].sCP[0].sCPR[8].nSPOffsetLek  = 153;
sT[0].sCP[0].sCPR[9].nDCStart  = 37;    sT[0].sCP[0].sCPR[9].nDCNum  = 1;    sT[0].sCP[0].sCPR[9].nSCStart  = 38;    sT[0].sCP[0].sCPR[9].nAckStart  =39;     sT[0].sCP[0].sCPR[9].nAckNum  =1;   sT[0].sCP[0].sCPR[9].nSPOffsetCS  = 168;  sT[0].sCP[0].sCPR[9].nSPOffsetLek  = 169;
sT[0].sCP[0].sCPR[10].nDCStart = 40;    sT[0].sCP[0].sCPR[10].nDCNum = 1;    sT[0].sCP[0].sCPR[10].nSCStart = 41;    sT[0].sCP[0].sCPR[10].nAckStart =42;     sT[0].sCP[0].sCPR[10].nAckNum =1;   sT[0].sCP[0].sCPR[10].nSPOffsetCS = 184;  sT[0].sCP[0].sCPR[10].nSPOffsetLek = 185;
sT[0].sCP[0].sCPR[11].nDCStart = 43;    sT[0].sCP[0].sCPR[11].nDCNum = 1;    sT[0].sCP[0].sCPR[11].nSCStart = 44;    sT[0].sCP[0].sCPR[11].nAckStart =0;      sT[0].sCP[0].sCPR[11].nAckNum =0;   sT[0].sCP[0].sCPR[11].nSPOffsetCS = 200;  sT[0].sCP[0].sCPR[11].nSPOffsetLek = 201;
sT[0].sCP[0].sCPR[12].nDCStart = 0;     sT[0].sCP[0].sCPR[12].nDCNum = 0;    sT[0].sCP[0].sCPR[12].nSCStart = 46;    sT[0].sCP[0].sCPR[12].nAckStart =0;      sT[0].sCP[0].sCPR[12].nAckNum =0;   sT[0].sCP[0].sCPR[12].nSPOffsetCS = 207;  sT[0].sCP[0].sCPR[12].nSPOffsetLek = 208;
sT[0].sCP[0].sCPR[13].nDCStart = 47;    sT[0].sCP[0].sCPR[13].nDCNum = 1;    sT[0].sCP[0].sCPR[13].nSCStart = 48;    sT[0].sCP[0].sCPR[13].nAckStart =49;     sT[0].sCP[0].sCPR[13].nAckNum =1;   sT[0].sCP[0].sCPR[13].nSPOffsetCS = 223;  sT[0].sCP[0].sCPR[13].nSPOffsetLek = 224;
sT[0].sCP[0].sCPR[14].nDCStart = 50;    sT[0].sCP[0].sCPR[14].nDCNum = 1;    sT[0].sCP[0].sCPR[14].nSCStart = 51;    sT[0].sCP[0].sCPR[14].nAckStart =52;     sT[0].sCP[0].sCPR[14].nAckNum =1;   sT[0].sCP[0].sCPR[14].nSPOffsetCS = 239;  sT[0].sCP[0].sCPR[14].nSPOffsetLek = 240;
sT[0].sCP[0].sCPR[15].nDCStart = 53;    sT[0].sCP[0].sCPR[15].nDCNum = 1;    sT[0].sCP[0].sCPR[15].nSCStart = 54;    sT[0].sCP[0].sCPR[15].nAckStart =55;     sT[0].sCP[0].sCPR[15].nAckNum =1;   sT[0].sCP[0].sCPR[15].nSPOffsetCS = 255;  sT[0].sCP[0].sCPR[15].nSPOffsetLek = 256;
sT[0].sCP[0].sCPR[16].nDCStart = 56;    sT[0].sCP[0].sCPR[16].nDCNum = 1;    sT[0].sCP[0].sCPR[16].nSCStart = 57;    sT[0].sCP[0].sCPR[16].nAckStart =58;     sT[0].sCP[0].sCPR[16].nAckNum =1;   sT[0].sCP[0].sCPR[16].nSPOffsetCS = 271;  sT[0].sCP[0].sCPR[16].nSPOffsetLek = 272;
sT[0].sCP[0].sCPR[17].nDCStart = 59;    sT[0].sCP[0].sCPR[17].nDCNum = 1;    sT[0].sCP[0].sCPR[17].nSCStart = 60;    sT[0].sCP[0].sCPR[17].nAckStart =61;     sT[0].sCP[0].sCPR[17].nAckNum =1;   sT[0].sCP[0].sCPR[17].nSPOffsetCS = 287;  sT[0].sCP[0].sCPR[17].nSPOffsetLek = 288;
sT[0].sCP[0].sCPR[18].nDCStart = 62;    sT[0].sCP[0].sCPR[18].nDCNum = 1;    sT[0].sCP[0].sCPR[18].nSCStart = 63;    sT[0].sCP[0].sCPR[18].nAckStart =64;     sT[0].sCP[0].sCPR[18].nAckNum =1;   sT[0].sCP[0].sCPR[18].nSPOffsetCS = 303;  sT[0].sCP[0].sCPR[18].nSPOffsetLek = 304;
sT[0].sCP[0].sCPR[19].nDCStart = 65;    sT[0].sCP[0].sCPR[19].nDCNum = 1;    sT[0].sCP[0].sCPR[19].nSCStart = 66;    sT[0].sCP[0].sCPR[19].nAckStart =67;     sT[0].sCP[0].sCPR[19].nAckNum =1;   sT[0].sCP[0].sCPR[19].nSPOffsetCS = 319;  sT[0].sCP[0].sCPR[19].nSPOffsetLek = 320;
sT[0].sCP[0].sCPR[20].nDCStart = 68;    sT[0].sCP[0].sCPR[20].nDCNum = 1;    sT[0].sCP[0].sCPR[20].nSCStart = 69;    sT[0].sCP[0].sCPR[20].nAckStart =70;     sT[0].sCP[0].sCPR[20].nAckNum =1;   sT[0].sCP[0].sCPR[20].nSPOffsetCS = 335;  sT[0].sCP[0].sCPR[20].nSPOffsetLek = 336;
sT[0].sCP[0].sCPR[21].nDCStart = 71;    sT[0].sCP[0].sCPR[21].nDCNum = 1;    sT[0].sCP[0].sCPR[21].nSCStart = 72;    sT[0].sCP[0].sCPR[21].nAckStart =73;     sT[0].sCP[0].sCPR[21].nAckNum =1;   sT[0].sCP[0].sCPR[21].nSPOffsetCS = 351;  sT[0].sCP[0].sCPR[21].nSPOffsetLek = 352;
sT[0].sCP[0].sCPR[22].nDCStart = 74;    sT[0].sCP[0].sCPR[22].nDCNum = 1;    sT[0].sCP[0].sCPR[22].nSCStart = 75;    sT[0].sCP[0].sCPR[22].nAckStart =76;     sT[0].sCP[0].sCPR[22].nAckNum =1;   sT[0].sCP[0].sCPR[22].nSPOffsetCS = 367;  sT[0].sCP[0].sCPR[22].nSPOffsetLek = 368;
sT[0].sCP[0].sCPR[23].nDCStart = 77;    sT[0].sCP[0].sCPR[23].nDCNum = 1;    sT[0].sCP[0].sCPR[23].nSCStart = 78;    sT[0].sCP[0].sCPR[23].nAckStart =79;     sT[0].sCP[0].sCPR[23].nAckNum =1;   sT[0].sCP[0].sCPR[23].nSPOffsetCS = 383;  sT[0].sCP[0].sCPR[23].nSPOffsetLek = 384;
sT[0].sCP[0].sCPR[24].nDCStart = 80;    sT[0].sCP[0].sCPR[24].nDCNum = 1;    sT[0].sCP[0].sCPR[24].nSCStart = 81;    sT[0].sCP[0].sCPR[24].nAckStart =82;     sT[0].sCP[0].sCPR[24].nAckNum =1;   sT[0].sCP[0].sCPR[24].nSPOffsetCS = 399;  sT[0].sCP[0].sCPR[24].nSPOffsetLek = 400;
sT[0].sCP[0].sCPR[25].nDCStart = 83;    sT[0].sCP[0].sCPR[25].nDCNum = 1;    sT[0].sCP[0].sCPR[25].nSCStart = 84;    sT[0].sCP[0].sCPR[25].nAckStart =85;     sT[0].sCP[0].sCPR[25].nAckNum =1;   sT[0].sCP[0].sCPR[25].nSPOffsetCS = 415;  sT[0].sCP[0].sCPR[25].nSPOffsetLek = 416;
sT[0].sCP[0].sCPR[26].nDCStart = 86;    sT[0].sCP[0].sCPR[26].nDCNum = 1;    sT[0].sCP[0].sCPR[26].nSCStart = 87;    sT[0].sCP[0].sCPR[26].nAckStart =88;     sT[0].sCP[0].sCPR[26].nAckNum =1;   sT[0].sCP[0].sCPR[26].nSPOffsetCS = 431;  sT[0].sCP[0].sCPR[26].nSPOffsetLek = 432;
sT[0].sCP[0].sCPR[27].nDCStart = 89;    sT[0].sCP[0].sCPR[27].nDCNum = 1;    sT[0].sCP[0].sCPR[27].nSCStart = 90;    sT[0].sCP[0].sCPR[27].nAckStart =91;     sT[0].sCP[0].sCPR[27].nAckNum =1;   sT[0].sCP[0].sCPR[27].nSPOffsetCS = 447;  sT[0].sCP[0].sCPR[27].nSPOffsetLek = 448;
sT[0].sCP[0].sCPR[28].nDCStart = 92;    sT[0].sCP[0].sCPR[28].nDCNum = 1;    sT[0].sCP[0].sCPR[28].nSCStart = 93;    sT[0].sCP[0].sCPR[28].nAckStart =94;     sT[0].sCP[0].sCPR[28].nAckNum =1;   sT[0].sCP[0].sCPR[28].nSPOffsetCS = 463;  sT[0].sCP[0].sCPR[28].nSPOffsetLek = 464;
sT[0].sCP[0].sCPR[29].nDCStart = 95;    sT[0].sCP[0].sCPR[29].nDCNum = 1;    sT[0].sCP[0].sCPR[29].nSCStart = 96;    sT[0].sCP[0].sCPR[29].nAckStart =97;     sT[0].sCP[0].sCPR[29].nAckNum =1;   sT[0].sCP[0].sCPR[29].nSPOffsetCS = 479;  sT[0].sCP[0].sCPR[29].nSPOffsetLek = 480;
sT[0].sCP[0].sCPR[30].nDCStart = 98;    sT[0].sCP[0].sCPR[30].nDCNum = 1;    sT[0].sCP[0].sCPR[30].nSCStart = 99;    sT[0].sCP[0].sCPR[30].nAckStart = 0;     sT[0].sCP[0].sCPR[30].nAckNum =0;   sT[0].sCP[0].sCPR[30].nSPOffsetCS = 494;  sT[0].sCP[0].sCPR[30].nSPOffsetLek = 496;
sT[0].sCP[0].sCPR[31].nDCStart = 0;     sT[0].sCP[0].sCPR[31].nDCNum = 0;    sT[0].sCP[0].sCPR[31].nSCStart = 101;   sT[0].sCP[0].sCPR[31].nAckStart = 0;     sT[0].sCP[0].sCPR[31].nAckNum =0;   sT[0].sCP[0].sCPR[31].nSPOffsetCS = 502;  sT[0].sCP[0].sCPR[31].nSPOffsetLek = 503;
sT[0].sCP[0].sCPR[32].nDCStart = 0;     sT[0].sCP[0].sCPR[32].nDCNum = 0;    sT[0].sCP[0].sCPR[32].nSCStart = 102;   sT[0].sCP[0].sCPR[32].nAckStart = 0;     sT[0].sCP[0].sCPR[32].nAckNum =0;   sT[0].sCP[0].sCPR[32].nSPOffsetCS = 509;  sT[0].sCP[0].sCPR[32].nSPOffsetLek = 510;
sT[0].sCP[0].sCPR[33].nDCStart = 103;   sT[0].sCP[0].sCPR[33].nDCNum = 4;    sT[0].sCP[0].sCPR[33].nSCStart = 107;   sT[0].sCP[0].sCPR[33].nAckStart = 0;     sT[0].sCP[0].sCPR[33].nAckNum =0;   sT[0].sCP[0].sCPR[33].nSPOffsetCS = 546;  sT[0].sCP[0].sCPR[33].nSPOffsetLek = 547;
sT[0].sCP[0].sCPR[34].nDCStart = 108;   sT[0].sCP[0].sCPR[34].nDCNum = 1;    sT[0].sCP[0].sCPR[34].nSCStart = 109;   sT[0].sCP[0].sCPR[34].nAckStart = 0;     sT[0].sCP[0].sCPR[34].nAckNum =0;   sT[0].sCP[0].sCPR[34].nSPOffsetCS = 562;  sT[0].sCP[0].sCPR[34].nSPOffsetLek = 563;
sT[0].sCP[0].sCPR[35].nDCStart = 111;   sT[0].sCP[0].sCPR[35].nDCNum = 1;    sT[0].sCP[0].sCPR[35].nSCStart = 112;   sT[0].sCP[0].sCPR[35].nAckStart =113;    sT[0].sCP[0].sCPR[35].nAckNum =1;   sT[0].sCP[0].sCPR[35].nSPOffsetCS = 578;  sT[0].sCP[0].sCPR[35].nSPOffsetLek = 579;
sT[0].sCP[0].sCPR[36].nDCStart = 114;   sT[0].sCP[0].sCPR[36].nDCNum = 1;    sT[0].sCP[0].sCPR[36].nSCStart = 115;   sT[0].sCP[0].sCPR[36].nAckStart =  0;    sT[0].sCP[0].sCPR[36].nAckNum =0;   sT[0].sCP[0].sCPR[36].nSPOffsetCS = 594;  sT[0].sCP[0].sCPR[36].nSPOffsetLek = 595;
sT[0].sCP[0].sCPR[37].nDCStart = 117;   sT[0].sCP[0].sCPR[37].nDCNum = 1;    sT[0].sCP[0].sCPR[37].nSCStart = 118;   sT[0].sCP[0].sCPR[37].nAckStart =119;    sT[0].sCP[0].sCPR[37].nAckNum =1;   sT[0].sCP[0].sCPR[37].nSPOffsetCS = 610;  sT[0].sCP[0].sCPR[37].nSPOffsetLek = 611;
sT[0].sCP[0].sCPR[38].nDCStart = 120;   sT[0].sCP[0].sCPR[38].nDCNum = 4;    sT[0].sCP[0].sCPR[38].nSCStart = 124;   sT[0].sCP[0].sCPR[38].nAckStart = 0 ;    sT[0].sCP[0].sCPR[38].nAckNum =0;   sT[0].sCP[0].sCPR[38].nSPOffsetCS = 647;  sT[0].sCP[0].sCPR[38].nSPOffsetLek = 648;
sT[0].sCP[0].sCPR[39].nDCStart = 125;   sT[0].sCP[0].sCPR[39].nDCNum = 4;    sT[0].sCP[0].sCPR[39].nSCStart = 129;   sT[0].sCP[0].sCPR[39].nAckStart = 0 ;    sT[0].sCP[0].sCPR[39].nAckNum =0;   sT[0].sCP[0].sCPR[39].nSPOffsetCS = 684;  sT[0].sCP[0].sCPR[39].nSPOffsetLek = 685;
sT[0].sCP[0].sCPR[40].nDCStart = 130;   sT[0].sCP[0].sCPR[40].nDCNum = 4;    sT[0].sCP[0].sCPR[40].nSCStart = 134;   sT[0].sCP[0].sCPR[40].nAckStart = 0 ;    sT[0].sCP[0].sCPR[40].nAckNum =0;   sT[0].sCP[0].sCPR[40].nSPOffsetCS = 721;  sT[0].sCP[0].sCPR[40].nSPOffsetLek = 722;
sT[0].sCP[0].sCPR[41].nDCStart = 135;   sT[0].sCP[0].sCPR[41].nDCNum = 1;    sT[0].sCP[0].sCPR[41].nSCStart = 136;   sT[0].sCP[0].sCPR[41].nAckStart =137;    sT[0].sCP[0].sCPR[41].nAckNum =1;   sT[0].sCP[0].sCPR[41].nSPOffsetCS = 737;  sT[0].sCP[0].sCPR[41].nSPOffsetLek = 738;
sT[0].sCP[0].sCPR[42].nDCStart = 138;   sT[0].sCP[0].sCPR[42].nDCNum = 4;    sT[0].sCP[0].sCPR[42].nSCStart = 142;   sT[0].sCP[0].sCPR[42].nAckStart =0;      sT[0].sCP[0].sCPR[42].nAckNum =0;   sT[0].sCP[0].sCPR[42].nSPOffsetCS = 753;  sT[0].sCP[0].sCPR[42].nSPOffsetLek = 754;
sT[0].sCP[0].sCPR[43].nDCStart = 143;   sT[0].sCP[0].sCPR[43].nDCNum = 4;    sT[0].sCP[0].sCPR[43].nSCStart = 148;   sT[0].sCP[0].sCPR[43].nAckStart =147;    sT[0].sCP[0].sCPR[43].nAckNum =1;   sT[0].sCP[0].sCPR[43].nSPOffsetCS = 790;  sT[0].sCP[0].sCPR[43].nSPOffsetLek = 791;
sT[0].sCP[0].sCPR[44].nDCStart = 0;     sT[0].sCP[0].sCPR[44].nDCNum = 0;    sT[0].sCP[0].sCPR[44].nSCStart = 149;   sT[0].sCP[0].sCPR[44].nAckStart =0;      sT[0].sCP[0].sCPR[44].nAckNum =0;   sT[0].sCP[0].sCPR[44].nSPOffsetCS = 797;  sT[0].sCP[0].sCPR[44].nSPOffsetLek = 798;
sT[0].sCP[0].sCPR[45].nDCStart = 150;   sT[0].sCP[0].sCPR[45].nDCNum = 1;    sT[0].sCP[0].sCPR[45].nSCStart = 151;   sT[0].sCP[0].sCPR[45].nAckStart =152;    sT[0].sCP[0].sCPR[45].nAckNum =1;   sT[0].sCP[0].sCPR[45].nSPOffsetCS = 813;  sT[0].sCP[0].sCPR[45].nSPOffsetLek = 814;

sT[0].sCP[0].sCPR[46].nDCStart = 153;   sT[0].sCP[0].sCPR[46].nDCNum = 1;    sT[0].sCP[0].sCPR[46].nSCStart = 154;   sT[0].sCP[0].sCPR[46].nAckStart =155;    sT[0].sCP[0].sCPR[46].nAckNum =1;   sT[0].sCP[0].sCPR[46].nSPOffsetCS = 829;  sT[0].sCP[0].sCPR[46].nSPOffsetLek = 830;
sT[0].sCP[0].sCPR[47].nDCStart = 156;   sT[0].sCP[0].sCPR[47].nDCNum = 1;    sT[0].sCP[0].sCPR[47].nSCStart = 157;   sT[0].sCP[0].sCPR[47].nAckStart =158;    sT[0].sCP[0].sCPR[47].nAckNum =1;   sT[0].sCP[0].sCPR[47].nSPOffsetCS = 845;  sT[0].sCP[0].sCPR[47].nSPOffsetLek = 846;
sT[0].sCP[0].sCPR[48].nDCStart = 159;   sT[0].sCP[0].sCPR[48].nDCNum = 1;    sT[0].sCP[0].sCPR[48].nSCStart = 160;   sT[0].sCP[0].sCPR[48].nAckStart =161;    sT[0].sCP[0].sCPR[48].nAckNum =1;   sT[0].sCP[0].sCPR[48].nSPOffsetCS = 861;  sT[0].sCP[0].sCPR[48].nSPOffsetLek = 862;
sT[0].sCP[0].sCPR[49].nDCStart = 162;   sT[0].sCP[0].sCPR[49].nDCNum = 1;    sT[0].sCP[0].sCPR[49].nSCStart = 163;   sT[0].sCP[0].sCPR[49].nAckStart =164;    sT[0].sCP[0].sCPR[49].nAckNum =1;   sT[0].sCP[0].sCPR[49].nSPOffsetCS = 877;  sT[0].sCP[0].sCPR[49].nSPOffsetLek = 878;
sT[0].sCP[0].sCPR[50].nDCStart = 165;   sT[0].sCP[0].sCPR[50].nDCNum = 1;    sT[0].sCP[0].sCPR[50].nSCStart = 166;   sT[0].sCP[0].sCPR[50].nAckStart =167;    sT[0].sCP[0].sCPR[50].nAckNum =1;   sT[0].sCP[0].sCPR[50].nSPOffsetCS = 893;  sT[0].sCP[0].sCPR[50].nSPOffsetLek = 894;

sT[0].sCP[0].sCPR[51].nDCStart = 168;   sT[0].sCP[0].sCPR[51].nDCNum = 4;    sT[0].sCP[0].sCPR[51].nSCStart = 172;   sT[0].sCP[0].sCPR[51].nAckStart =0;	  sT[0].sCP[0].sCPR[51].nAckNum =0;   sT[0].sCP[0].sCPR[51].nSPOffsetCS = 930;  sT[0].sCP[0].sCPR[51].nSPOffsetLek = 931;
sT[0].sCP[0].sCPR[52].nDCStart = 173;   sT[0].sCP[0].sCPR[52].nDCNum = 5;    sT[0].sCP[0].sCPR[52].nSCStart = 178;   sT[0].sCP[0].sCPR[52].nAckStart =0;	  sT[0].sCP[0].sCPR[52].nAckNum =0;   sT[0].sCP[0].sCPR[52].nSPOffsetCS = 967;  sT[0].sCP[0].sCPR[52].nSPOffsetLek = 968;


/* TMOK jelszámok inicializálása ciklusban */	
for (nI = 0;nI<	MAX_RTU;nI++)
{
	sT[0].sMOT[nI].nIEC_SP_NUM = 14;
	sT[0].sMOT[nI].nIEC_DP_NUM  = 1;
	sT[0].sMOT[nI].nNMNum      = 3;
	
	/* Biztonsagi ellenorzes*/
	if (sT[0].sCP[0].sCPR[nI].nAckNum>4)
	{
		sT[0].sCP[0].sCPR[nI].nAckNum = 1;
	}	
}


/* 42-00  -----------------------------------------------------------*/	
sT[0].sTI[0].nType = TYP_TMOK;

	sT[0].sMOT[0].nIEC_SP				= 10;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[0].nIEC_DP				= 10;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[0].nIEC_NM				= 10;		/* Mérések IEC kezdõcíme */

/* 42-66  -----------------------------------------------------------*/	
sT[0].sTI[1].nType = TYP_TMOK;

	sT[0].sMOT[1].nIEC_SP				= 26;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[1].nIEC_DP				= 11;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[1].nIEC_NM				= 13;		/* Mérések IEC kezdõcíme */
	
/* 42-69  -----------------------------------------------------------*/	
sT[0].sTI[2].nType = TYP_TMOK;

	sT[0].sMOT[2].nIEC_SP				= 42;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[2].nIEC_DP				= 12;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[2].nIEC_NM				= 16;		/* Mérések IEC kezdõcíme */
	
/* 42-70  -----------------------------------------------------------*/	
sT[0].sTI[3].nType = TYP_TMOK;

	sT[0].sMOT[3].nIEC_SP				= 58;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[3].nIEC_DP				= 13;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[3].nIEC_NM				= 19;		/* Mérések IEC kezdõcíme */
	
/* 42-71  -----------------------------------------------------------*/	
sT[0].sTI[4].nType = TYP_TMOK;

	sT[0].sMOT[4].nIEC_SP				= 74;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[4].nIEC_DP				= 14;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[4].nIEC_NM				= 22;		/* Mérések IEC kezdõcíme */


/* 42-74  -----------------------------------------------------------*/	
sT[0].sTI[5].nType = TYP_TMOK;

	sT[0].sMOT[5].nIEC_SP				= 90;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[5].nIEC_DP				= 15;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[5].nIEC_NM				= 25;		/* Mérések IEC kezdõcíme */
	
/* 42-76  -----------------------------------------------------------*/	
sT[0].sTI[6].nType = TYP_TMOK;

	sT[0].sMOT[6].nIEC_SP				= 106;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[6].nIEC_DP				= 16;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[6].nIEC_NM				= 28;		/* Mérések IEC kezdõcíme */	

/* 42-83  -----------------------------------------------------------*/	
sT[0].sTI[7].nType = TYP_TMOK2;

	sT[0].sMOT[7].nIEC_SP				= 122;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[7].nIEC_DP				= 17;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[7].nIEC_NM				= 191;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[7].nNMNum      			= 4;		/* Mérések száma */

	
/* 43-17  -----------------------------------------------------------*/	
sT[0].sTI[8].nType = TYP_TMOK;

	sT[0].sMOT[8].nIEC_SP				= 138;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[8].nIEC_DP				= 18;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[8].nIEC_NM				= 34;		/* Mérések IEC kezdõcíme */

/* 49438  -----------------------------------------------------------*/	
sT[0].sTI[9].nType = TYP_TMOK;

	sT[0].sMOT[9].nIEC_SP				= 154;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[9].nIEC_DP				= 19;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[9].nIEC_NM				= 37;		/* Mérések IEC kezdõcíme */

/* 42-61  -----------------------------------------------------------*/	
sT[0].sTI[10].nType = TYP_TMOK;

	sT[0].sMOT[10].nIEC_SP				= 170;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[10].nIEC_DP				= 20;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[10].nIEC_NM				= 40;		/* Mérések IEC kezdõcíme */

/* 42-26  -----------------------------------------------------------*/	
sT[0].sTI[11].nType = TYP_TMOK;

	sT[0].sMOT[11].nIEC_SP				= 186;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[11].nIEC_DP				= 21;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[11].nIEC_NM				= 43;		/* Mérések IEC kezdõcíme */

/* Kondorfa átjátszó -----------------------------------------------------------*/
sT[0].sTI[12].nType = TYP_MOT;

	sT[0].sMOT[12].nIEC_SP				= 202;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[12].nIEC_SP_NUM			= 5;		/* Egybites értékek száma*/
	sT[0].sMOT[12].nIEC_DP_NUM			= 0;
	sT[0].sMOT[12].nNMNum      			= 0;

/* 30-46  -----------------------------------------------------------*/	
sT[0].sTI[13].nType = TYP_TMOK;

	sT[0].sMOT[13].nIEC_SP				= 209;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[13].nIEC_DP				= 22;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[13].nIEC_NM				= 46;		/* Mérések IEC kezdõcíme */

/* 35-45  -----------------------------------------------------------*/	
sT[0].sTI[14].nType = TYP_TMOK;

	sT[0].sMOT[14].nIEC_SP				= 225;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[14].nIEC_DP				= 23;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[14].nIEC_NM				= 49;		/* Mérések IEC kezdõcíme */

/* 35-49  -----------------------------------------------------------*/	
sT[0].sTI[15].nType = TYP_TMOK;

	sT[0].sMOT[15].nIEC_SP				= 241;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[15].nIEC_DP				= 24;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[15].nIEC_NM				= 52;		/* Mérések IEC kezdõcíme */

/* 37-15  -----------------------------------------------------------*/	
sT[0].sTI[16].nType = TYP_TMOK;

	sT[0].sMOT[16].nIEC_SP				= 257;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[16].nIEC_DP				= 25;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[16].nIEC_NM				= 55;		/* Mérések IEC kezdõcíme */

/* 37-16  -----------------------------------------------------------*/	
sT[0].sTI[17].nType = TYP_TMOK;

	sT[0].sMOT[17].nIEC_SP				= 273;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[17].nIEC_DP				= 26;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[17].nIEC_NM				= 58;		/* Mérések IEC kezdõcíme */

/* 37-26  -----------------------------------------------------------*/	
sT[0].sTI[18].nType = TYP_TMOK;

	sT[0].sMOT[18].nIEC_SP				= 289;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[18].nIEC_DP				= 27;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[18].nIEC_NM				= 61;		/* Mérések IEC kezdõcíme */

/* 37-28 -----------------------------------------------------------*/	
sT[0].sTI[19].nType = TYP_TMOK;

	sT[0].sMOT[19].nIEC_SP				= 305;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[19].nIEC_DP				= 28;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[19].nIEC_NM				= 64;		/* Mérések IEC kezdõcíme */
	
	
/* 37-29 -----------------------------------------------------------*/	
sT[0].sTI[20].nType = TYP_TMOK;

	sT[0].sMOT[20].nIEC_SP				= 321;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[20].nIEC_DP				= 29;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[20].nIEC_NM				= 67;		/* Mérések IEC kezdõcíme */

/* 37-50 -----------------------------------------------------------*/	
sT[0].sTI[21].nType = TYP_TMOK;

	sT[0].sMOT[21].nIEC_SP				= 337;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[21].nIEC_DP				= 30;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[21].nIEC_NM				= 70;		/* Mérések IEC kezdõcíme */	

/* 51-96 -----------------------------------------------------------*/	
sT[0].sTI[22].nType = TYP_TMOK;

	sT[0].sMOT[22].nIEC_SP				= 353;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[22].nIEC_DP				= 31;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[22].nIEC_NM				= 73;		/* Mérések IEC kezdõcíme */		
	

/* 30-27 -----------------------------------------------------------*/	
sT[0].sTI[23].nType = TYP_TMOK;

	sT[0].sMOT[23].nIEC_SP				= 369;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[23].nIEC_DP				= 32;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[23].nIEC_NM				= 76;		/* Mérések IEC kezdõcíme */		
	
/* 37-23 -----------------------------------------------------------*/	
sT[0].sTI[24].nType = TYP_TMOK;

	sT[0].sMOT[24].nIEC_SP				= 385;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[24].nIEC_DP				= 33;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[24].nIEC_NM				= 79;		/* Mérések IEC kezdõcíme */		
	
/* 37-83 (54-33)-----------------------------------------------------------*/	
sT[0].sTI[25].nType = TYP_TMOK;

	sT[0].sMOT[25].nIEC_SP				= 401;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[25].nIEC_DP				= 34;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[25].nIEC_NM				= 82;		/* Mérések IEC kezdõcíme */	

/* 20-07 -----------------------------------------------------------*/	
sT[0].sTI[26].nType = TYP_TMOK;

	sT[0].sMOT[26].nIEC_SP				= 417;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[26].nIEC_DP				= 35;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[26].nIEC_NM				= 85;		/* Mérések IEC kezdõcíme */	

/* 20-31 -----------------------------------------------------------*/	
sT[0].sTI[27].nType = TYP_TMOK;

	sT[0].sMOT[27].nIEC_SP				= 433;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[27].nIEC_DP				= 36;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[27].nIEC_NM				= 88;		/* Mérések IEC kezdõcíme */	

/* 20-67 -----------------------------------------------------------*/	
sT[0].sTI[28].nType = TYP_TMOK;

	sT[0].sMOT[28].nIEC_SP				= 449;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[28].nIEC_DP				= 37;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[28].nIEC_NM				= 91;		/* Mérések IEC kezdõcíme */	

/* 20-05 -----------------------------------------------------------*/	
sT[0].sTI[29].nType = TYP_TMOK;

	sT[0].sMOT[29].nIEC_SP				= 465;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[29].nIEC_DP				= 38;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[29].nIEC_NM				= 94;		/* Mérések IEC kezdõcíme */	

/* 20-65 -----------------------------------------------------------*/	
sT[0].sTI[30].nType = TYP_TMOK;

	sT[0].sMOT[30].nIEC_SP				= 481;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[30].nIEC_DP				= 39;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[30].nIEC_NM				= 97;		/* Mérések IEC kezdõcíme */	
	
/* Fonyód átjátszó -----------------------------------------------------------*/
sT[0].sTI[31].nType = TYP_MOT;

	sT[0].sMOT[31].nIEC_SP				= 497;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[31].nIEC_SP_NUM			= 5;		/* Egybites értékek száma*/
	sT[0].sMOT[31].nIEC_DP_NUM			= 0;
	sT[0].sMOT[31].nNMNum      			= 0;

/* Kimle DAC -----------------------------------------------------------*/
sT[0].sTI[32].nType = TYP_MOT;

	sT[0].sMOT[32].nIEC_SP				= 504;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[32].nIEC_SP_NUM			= 5;		/* Egybites értékek száma*/
	sT[0].sMOT[32].nIEC_DP_NUM			= 0;
	sT[0].sMOT[32].nNMNum      			= 0;

/* Jánossomorja, depónia -----------------------------------------------------------*/
sT[0].sTI[33].nType = TYP_TAL;

		sT[0].sTAL[33].nIEC_SP       		= 511;
		sT[0].sTAL[33].nIEC_OsszevontHiba	= 543;
		sT[0].sTAL[33].nIEC_MT_KommHiba		= 544;
		sT[0].sTAL[33].nIEC_DP       		= 40;
		sT[0].sTAL[33].nIEC_DP_FSZ1  		= 44;
		sT[0].sTAL[33].nIEC_NM				= 100;
		sT[0].sTAL[33].nNMNum		  		= 9;
		sT[0].sTAL[33].nKommStatusNum		= 2;


/* 42-67 -----------------------------------------------------------*/	
sT[0].sTI[34].nType = TYP_TMOK;

	sT[0].sMOT[34].nIEC_SP				= 548;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[34].nIEC_DP				= 48;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[34].nIEC_NM				= 111;		/* Mérések IEC kezdõcíme */	

/* 91-37 -----------------------------------------------------------*/	
sT[0].sTI[35].nType = TYP_TMOK;

	sT[0].sMOT[35].nIEC_SP				= 564;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[35].nIEC_DP				= 49;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[35].nIEC_NM				= 114;		/* Mérések IEC kezdõcíme */	

/* 91-38 -----------------------------------------------------------*/	
sT[0].sTI[36].nType = TYP_TMOK;

	sT[0].sMOT[36].nIEC_SP				= 580;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[36].nIEC_DP				= 50;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[36].nIEC_NM				= 117;		/* Mérések IEC kezdõcíme */	

/* 91-40 -----------------------------------------------------------*/	
sT[0].sTI[37].nType = TYP_TMOK;

	sT[0].sMOT[37].nIEC_SP				= 596;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[37].nIEC_DP				= 51;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[37].nIEC_NM				= 120;		/* Mérések IEC kezdõcíme */	


/* Berhida, naperõmû -----------------------------------------------------------*/
sT[0].sTI[38].nType = TYP_TAL;

		sT[0].sTAL[38].nIEC_SP       		= 612;
		sT[0].sTAL[38].nIEC_OsszevontHiba	= 644;
		sT[0].sTAL[38].nIEC_MT_KommHiba		= 646;
		sT[0].sTAL[38].nIEC_DP       		= 52;
		sT[0].sTAL[38].nIEC_DP_FSZ1  		= 56;
		sT[0].sTAL[38].nIEC_NM				= 123;
		sT[0].sTAL[38].nNMNum		  		= 9;
		sT[0].sTAL[38].nKommStatusNum		= 2;

/* Peremarton I., naperõmû -----------------------------------------------------------*/
sT[0].sTI[39].nType = TYP_TAL;

		sT[0].sTAL[39].nIEC_SP       		= 649;
		sT[0].sTAL[39].nIEC_OsszevontHiba	= 681;
		sT[0].sTAL[39].nIEC_MT_KommHiba		= 682;
		sT[0].sTAL[39].nIEC_DP       		= 60;
		sT[0].sTAL[39].nIEC_DP_FSZ1  		= 64;
		sT[0].sTAL[39].nIEC_NM				= 134;
		sT[0].sTAL[39].nNMNum		  		= 9;
		sT[0].sTAL[39].nKommStatusNum		= 2;

/* Peremarton II., naperõmû -----------------------------------------------------------*/
sT[0].sTI[40].nType = TYP_TAL;

		sT[0].sTAL[40].nIEC_SP       		= 686;
		sT[0].sTAL[40].nIEC_OsszevontHiba	= 718;
		sT[0].sTAL[40].nIEC_MT_KommHiba		= 719;
		sT[0].sTAL[40].nIEC_DP       		= 68;
		sT[0].sTAL[40].nIEC_DP_FSZ1  		= 72;
		sT[0].sTAL[40].nIEC_NM				= 145;
		sT[0].sTAL[40].nNMNum		  		= 9;
		sT[0].sTAL[40].nKommStatusNum		= 2;

/* 40-55 -----------------------------------------------------------*/	
sT[0].sTI[41].nType = TYP_TMOK;

	sT[0].sMOT[41].nIEC_SP				= 723;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[41].nIEC_DP				= 76;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[41].nIEC_NM				= 156;		/* Mérések IEC kezdõcíme */	

/* Kisbér SEWS, MOSCAD-L -----------------------------------------------*/
sT[0].sTI[42].nType = TYP_MOT;

	sT[0].sMOT[42].nIEC_SP				= 739;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[42].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[42].nIEC_DP				= 77;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[42].nIEC_DP_NUM			= 10;   		/* Két bites értékek száma*/
	sT[0].sMOT[42].nIEC_NM				= 0;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[42].nNMNum				= 0;		/* Analóg mérések száma*/


/* Peremarton II., naperõmû -----------------------------------------------------------*/
sT[0].sTI[43].nType = TYP_TAL;

		sT[0].sTAL[43].nIEC_SP       		= 755;
		sT[0].sTAL[43].nIEC_OsszevontHiba	= 787;
		sT[0].sTAL[43].nIEC_MT_KommHiba		= 788;
		sT[0].sTAL[43].nIEC_DP       		= 87;
		sT[0].sTAL[43].nIEC_DP_FSZ1  		= 91;
		sT[0].sTAL[43].nIEC_NM				= 161;
		sT[0].sTAL[43].nNMNum		  		= 4;
		sT[0].sTAL[43].nKommStatusNum		= 2;


/* Vértesacsa átjátszó -----------------------------------------------------------*/
sT[0].sTI[44].nType = TYP_MOT;

	sT[0].sMOT[44].nIEC_SP				= 792;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[44].nIEC_SP_NUM			= 5;		/* Egybites értékek száma*/
	sT[0].sMOT[44].nIEC_DP_NUM			= 0;
	sT[0].sMOT[44].nNMNum      			= 0;

/* 32-77 -----------------------------------------------------------*/	
sT[0].sTI[45].nType = TYP_TMOK;

	sT[0].sMOT[45].nIEC_SP				= 799;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[45].nIEC_DP				= 95;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[45].nIEC_NM				= 165;		/* Mérések IEC kezdõcíme */	


/* 14-44 -----------------------------------------------------------*/	
sT[0].sTI[46].nType = TYP_TMOK;

	sT[0].sMOT[46].nIEC_SP				= 815;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[46].nIEC_DP				= 96;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[46].nIEC_NM				= 168;		/* Mérések IEC kezdõcíme */		

/* 12-85 -----------------------------------------------------------*/	
sT[0].sTI[47].nType = TYP_TMOK;

	sT[0].sMOT[47].nIEC_SP				= 831;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[47].nIEC_DP				= 97;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[47].nIEC_NM				= 171;		/* Mérések IEC kezdõcíme */		

/* 12-96 -----------------------------------------------------------*/	
sT[0].sTI[48].nType = TYP_TMOK;

	sT[0].sMOT[48].nIEC_SP				= 847;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[48].nIEC_DP				= 98;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[48].nIEC_NM				= 174;		/* Mérések IEC kezdõcíme */	

/* 14-10 -----------------------------------------------------------*/	
sT[0].sTI[49].nType = TYP_TMOK;

	sT[0].sMOT[49].nIEC_SP				= 863;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[49].nIEC_DP				= 99;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[49].nIEC_NM				= 177;		/* Mérések IEC kezdõcíme */	

/* 14-45 -----------------------------------------------------------*/	
sT[0].sTI[50].nType = TYP_TMOK;

	sT[0].sMOT[50].nIEC_SP				= 879;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[50].nIEC_DP				= 100;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[50].nIEC_NM				= 180;		/* Mérések IEC kezdõcíme */	

/* Gyõr, Bercsényi liget -----------------------------------------------------------*/
sT[0].sTI[51].nType = TYP_TAL;

		sT[0].sTAL[51].nIEC_SP       		= 895;
		sT[0].sTAL[51].nIEC_OsszevontHiba	= 927;
		sT[0].sTAL[51].nIEC_MT_KommHiba		= 928;
		sT[0].sTAL[51].nIEC_DP       		= 101;
		sT[0].sTAL[51].nIEC_DP_FSZ1  		= 105;
		sT[0].sTAL[51].nIEC_NM				= 183;
		sT[0].sTAL[51].nNMNum		  		= 4;
		sT[0].sTAL[51].nKommStatusNum		= 2;

/* Gyõr, Töltés utca -----------------------------------------------------------*/
sT[0].sTI[52].nType = TYP_TAL;

		sT[0].sTAL[52].nIEC_SP       		= 932;
		sT[0].sTAL[52].nIEC_OsszevontHiba	= 964;
		sT[0].sTAL[52].nIEC_MT_KommHiba		= 965;
		sT[0].sTAL[52].nIEC_DP       		= 109;
		sT[0].sTAL[52].nIEC_DP_FSZ1  		= 114;
		sT[0].sTAL[52].nIEC_NM				= 187;
		sT[0].sTAL[52].nNMNum		  		= 4;
		sT[0].sTAL[52].nKommStatusNum		= 2;
		
	sT[0].sTAL[52].nIEC_DP_12BIT1		= 119;
	sT[0].sTAL[52].nIEC_DP_12BIT2		= 120;
	sT[0].sTAL[52].nIEC_DP_12BIT3		= 121;
	sT[0].sTAL[52].nIEC_DP_2BIT_BK1		= 912;
	sT[0].sTAL[52].nIEC_DP_2BIT_BK2		= 920;
	sT[0].sTAL[52].nIEC_DP_2BIT_BK3		= 926;		

	sT[0].sTAL[52].nLeagNum		= 5;		

} /* end fnSetDataPar()*/

