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

/* Single command inicializ�l�sa ciklusban */	
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
sT[0].sCP[0].sCPR[34].nDCStart = 108;   sT[0].sCP[0].sCPR[34].nDCNum = 1;    sT[0].sCP[0].sCPR[34].nSCStart = 109;   sT[0].sCP[0].sCPR[34].nAckStart = 110;   sT[0].sCP[0].sCPR[34].nAckNum =1;   sT[0].sCP[0].sCPR[34].nSPOffsetCS = 562;  sT[0].sCP[0].sCPR[34].nSPOffsetLek = 563;
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
sT[0].sCP[0].sCPR[53].nDCStart = 179;   sT[0].sCP[0].sCPR[53].nDCNum = 8;    sT[0].sCP[0].sCPR[53].nSCStart = 187;   sT[0].sCP[0].sCPR[53].nAckStart =0;	  sT[0].sCP[0].sCPR[53].nAckNum =0;   sT[0].sCP[0].sCPR[53].nSPOffsetCS = 1078; sT[0].sCP[0].sCPR[53].nSPOffsetLek = 1079;
sT[0].sCP[0].sCPR[54].nDCStart = 188;   sT[0].sCP[0].sCPR[54].nDCNum = 1;    sT[0].sCP[0].sCPR[54].nSCStart = 189;   sT[0].sCP[0].sCPR[54].nAckStart =0;	  sT[0].sCP[0].sCPR[54].nAckNum =0;   sT[0].sCP[0].sCPR[54].nSPOffsetCS = 1094; sT[0].sCP[0].sCPR[54].nSPOffsetLek = 1095;
sT[0].sCP[0].sCPR[55].nDCStart = 191;   sT[0].sCP[0].sCPR[55].nDCNum = 6;    sT[0].sCP[0].sCPR[55].nSCStart = 197;   sT[0].sCP[0].sCPR[55].nAckStart =0;      sT[0].sCP[0].sCPR[55].nAckNum =0;   sT[0].sCP[0].sCPR[55].nSPOffsetCS = 1122; sT[0].sCP[0].sCPR[55].nSPOffsetLek = 1123;
sT[0].sCP[0].sCPR[56].nDCStart = 198;   sT[0].sCP[0].sCPR[56].nDCNum = 4;    sT[0].sCP[0].sCPR[56].nSCStart = 202;   sT[0].sCP[0].sCPR[56].nAckStart =0;      sT[0].sCP[0].sCPR[56].nAckNum =0;   sT[0].sCP[0].sCPR[56].nSPOffsetCS = 1140; sT[0].sCP[0].sCPR[56].nSPOffsetLek = 1141;
sT[0].sCP[0].sCPR[57].nDCStart = 203;   sT[0].sCP[0].sCPR[57].nDCNum = 4;    sT[0].sCP[0].sCPR[57].nSCStart = 207;   sT[0].sCP[0].sCPR[57].nAckStart =0;      sT[0].sCP[0].sCPR[57].nAckNum =0;   sT[0].sCP[0].sCPR[57].nSPOffsetCS = 1158; sT[0].sCP[0].sCPR[57].nSPOffsetLek = 1159;
sT[0].sCP[0].sCPR[58].nDCStart = 208;   sT[0].sCP[0].sCPR[58].nDCNum = 1;    sT[0].sCP[0].sCPR[58].nSCStart = 209;   sT[0].sCP[0].sCPR[58].nAckStart =0;	  sT[0].sCP[0].sCPR[58].nAckNum =0;   sT[0].sCP[0].sCPR[58].nSPOffsetCS = 1174; sT[0].sCP[0].sCPR[58].nSPOffsetLek = 1175;
sT[0].sCP[0].sCPR[59].nDCStart = 211;   sT[0].sCP[0].sCPR[59].nDCNum = 4;    sT[0].sCP[0].sCPR[59].nSCStart = 215;   sT[0].sCP[0].sCPR[59].nAckStart =0;      sT[0].sCP[0].sCPR[59].nAckNum =0;   sT[0].sCP[0].sCPR[59].nSPOffsetCS = 1211; sT[0].sCP[0].sCPR[59].nSPOffsetLek = 1212;
sT[0].sCP[0].sCPR[60].nDCStart = 216;   sT[0].sCP[0].sCPR[60].nDCNum = 4;    sT[0].sCP[0].sCPR[60].nSCStart = 220;   sT[0].sCP[0].sCPR[60].nAckStart =0;      sT[0].sCP[0].sCPR[60].nAckNum =0;   sT[0].sCP[0].sCPR[60].nSPOffsetCS = 1229; sT[0].sCP[0].sCPR[60].nSPOffsetLek = 1230;
sT[0].sCP[0].sCPR[61].nDCStart = 221;   sT[0].sCP[0].sCPR[61].nDCNum = 4;    sT[0].sCP[0].sCPR[61].nSCStart = 225;   sT[0].sCP[0].sCPR[61].nAckStart =0;      sT[0].sCP[0].sCPR[61].nAckNum =0;   sT[0].sCP[0].sCPR[61].nSPOffsetCS = 1247; sT[0].sCP[0].sCPR[61].nSPOffsetLek = 1248;
sT[0].sCP[0].sCPR[62].nDCStart = 0;     sT[0].sCP[0].sCPR[62].nDCNum = 0;    sT[0].sCP[0].sCPR[62].nSCStart = 0;     sT[0].sCP[0].sCPR[62].nAckStart =0;      sT[0].sCP[0].sCPR[62].nAckNum =0;   sT[0].sCP[0].sCPR[62].nSPOffsetCS = 0;    sT[0].sCP[0].sCPR[62].nSPOffsetLek = 0;
sT[0].sCP[0].sCPR[63].nDCStart = 0;     sT[0].sCP[0].sCPR[63].nDCNum = 0;    sT[0].sCP[0].sCPR[63].nSCStart = 0;     sT[0].sCP[0].sCPR[63].nAckStart =0;      sT[0].sCP[0].sCPR[63].nAckNum =0;   sT[0].sCP[0].sCPR[63].nSPOffsetCS = 0;    sT[0].sCP[0].sCPR[63].nSPOffsetLek = 0;
sT[0].sCP[0].sCPR[64].nDCStart = 0;     sT[0].sCP[0].sCPR[64].nDCNum = 0;    sT[0].sCP[0].sCPR[64].nSCStart = 0;     sT[0].sCP[0].sCPR[64].nAckStart =0;      sT[0].sCP[0].sCPR[64].nAckNum =0;   sT[0].sCP[0].sCPR[64].nSPOffsetCS = 0;    sT[0].sCP[0].sCPR[64].nSPOffsetLek = 0;
sT[0].sCP[0].sCPR[65].nDCStart = 0;     sT[0].sCP[0].sCPR[65].nDCNum = 0;    sT[0].sCP[0].sCPR[65].nSCStart = 0;     sT[0].sCP[0].sCPR[65].nAckStart =0;      sT[0].sCP[0].sCPR[65].nAckNum =0;   sT[0].sCP[0].sCPR[65].nSPOffsetCS = 0;    sT[0].sCP[0].sCPR[65].nSPOffsetLek = 0;
sT[0].sCP[0].sCPR[66].nDCStart = 280;   sT[0].sCP[0].sCPR[66].nDCNum = 1;    sT[0].sCP[0].sCPR[66].nSCStart = 281;   sT[0].sCP[0].sCPR[66].nAckStart =0;	  sT[0].sCP[0].sCPR[66].nAckNum =0;   sT[0].sCP[0].sCPR[66].nSPOffsetCS = 1263; sT[0].sCP[0].sCPR[66].nSPOffsetLek = 1264;
sT[0].sCP[0].sCPR[67].nDCStart = 283;   sT[0].sCP[0].sCPR[67].nDCNum = 1;    sT[0].sCP[0].sCPR[67].nSCStart = 284;   sT[0].sCP[0].sCPR[67].nAckStart =0;	  sT[0].sCP[0].sCPR[67].nAckNum =0;   sT[0].sCP[0].sCPR[67].nSPOffsetCS = 1279; sT[0].sCP[0].sCPR[67].nSPOffsetLek = 1280;
sT[0].sCP[0].sCPR[68].nDCStart = 286;   sT[0].sCP[0].sCPR[68].nDCNum = 4;    sT[0].sCP[0].sCPR[68].nSCStart = 290;   sT[0].sCP[0].sCPR[68].nAckStart =0;	  sT[0].sCP[0].sCPR[68].nAckNum =0;   sT[0].sCP[0].sCPR[68].nSPOffsetCS = 1297; sT[0].sCP[0].sCPR[68].nSPOffsetLek = 1298;
sT[0].sCP[0].sCPR[69].nDCStart = 291;   sT[0].sCP[0].sCPR[69].nDCNum = 4;    sT[0].sCP[0].sCPR[69].nSCStart = 295;   sT[0].sCP[0].sCPR[69].nAckStart =0;	  sT[0].sCP[0].sCPR[69].nAckNum =0;   sT[0].sCP[0].sCPR[69].nSPOffsetCS = 1315; sT[0].sCP[0].sCPR[69].nSPOffsetLek = 1316;
sT[0].sCP[0].sCPR[70].nDCStart = 296;   sT[0].sCP[0].sCPR[70].nDCNum = 4;    sT[0].sCP[0].sCPR[70].nSCStart = 300;   sT[0].sCP[0].sCPR[70].nAckStart =0;	  sT[0].sCP[0].sCPR[70].nAckNum =0;   sT[0].sCP[0].sCPR[70].nSPOffsetCS = 1337; sT[0].sCP[0].sCPR[70].nSPOffsetLek = 1338;
sT[0].sCP[0].sCPR[71].nDCStart = 301;   sT[0].sCP[0].sCPR[71].nDCNum = 8;    sT[0].sCP[0].sCPR[71].nSCStart = 309;   sT[0].sCP[0].sCPR[71].nAckStart =0;	  sT[0].sCP[0].sCPR[71].nAckNum =0;   sT[0].sCP[0].sCPR[71].nSPOffsetCS = 1371; sT[0].sCP[0].sCPR[71].nSPOffsetLek = 1372;
sT[0].sCP[0].sCPR[72].nDCStart = 310;   sT[0].sCP[0].sCPR[72].nDCNum = 4;    sT[0].sCP[0].sCPR[72].nSCStart = 314;   sT[0].sCP[0].sCPR[72].nAckStart =0;	  sT[0].sCP[0].sCPR[72].nAckNum =0;   sT[0].sCP[0].sCPR[72].nSPOffsetCS = 1408; sT[0].sCP[0].sCPR[72].nSPOffsetLek = 1409;
sT[0].sCP[0].sCPR[73].nDCStart = 315;   sT[0].sCP[0].sCPR[73].nDCNum = 4;    sT[0].sCP[0].sCPR[73].nSCStart = 319;   sT[0].sCP[0].sCPR[73].nAckStart =0;	  sT[0].sCP[0].sCPR[73].nAckNum =0;   sT[0].sCP[0].sCPR[73].nSPOffsetCS = 1445; sT[0].sCP[0].sCPR[73].nSPOffsetLek = 1446;
sT[0].sCP[0].sCPR[74].nDCStart = 0;     sT[0].sCP[0].sCPR[74].nDCNum = 0;    sT[0].sCP[0].sCPR[74].nSCStart = 335;   sT[0].sCP[0].sCPR[74].nAckStart =0;     sT[0].sCP[0].sCPR[74].nAckNum =0;   sT[0].sCP[0].sCPR[74].nSPOffsetCS =1506;  sT[0].sCP[0].sCPR[74].nSPOffsetLek =1507;
sT[0].sCP[0].sCPR[75].nDCStart = 320;   sT[0].sCP[0].sCPR[75].nDCNum = 4;    sT[0].sCP[0].sCPR[75].nSCStart = 324;   sT[0].sCP[0].sCPR[75].nAckStart =0;	  sT[0].sCP[0].sCPR[75].nAckNum =0;   sT[0].sCP[0].sCPR[75].nSPOffsetCS = 1463; sT[0].sCP[0].sCPR[75].nSPOffsetLek = 1464;
sT[0].sCP[0].sCPR[76].nDCStart = 325;   sT[0].sCP[0].sCPR[76].nDCNum = 4;    sT[0].sCP[0].sCPR[76].nSCStart = 329;   sT[0].sCP[0].sCPR[76].nAckStart =0;	  sT[0].sCP[0].sCPR[76].nAckNum =0;   sT[0].sCP[0].sCPR[76].nSPOffsetCS = 1481; sT[0].sCP[0].sCPR[76].nSPOffsetLek = 1482;
sT[0].sCP[0].sCPR[77].nDCStart = 330;   sT[0].sCP[0].sCPR[77].nDCNum = 4;    sT[0].sCP[0].sCPR[77].nSCStart = 334;   sT[0].sCP[0].sCPR[77].nAckStart =0;	  sT[0].sCP[0].sCPR[77].nAckNum =0;   sT[0].sCP[0].sCPR[77].nSPOffsetCS = 1499; sT[0].sCP[0].sCPR[77].nSPOffsetLek = 1500;
sT[0].sCP[0].sCPR[78].nDCStart = 336;   sT[0].sCP[0].sCPR[78].nDCNum = 4;    sT[0].sCP[0].sCPR[78].nSCStart = 340;   sT[0].sCP[0].sCPR[78].nAckStart =0;	  sT[0].sCP[0].sCPR[78].nAckNum =0;   sT[0].sCP[0].sCPR[78].nSPOffsetCS = 1524; sT[0].sCP[0].sCPR[78].nSPOffsetLek = 1525;
sT[0].sCP[0].sCPR[79].nDCStart = 341;   sT[0].sCP[0].sCPR[79].nDCNum = 1;    sT[0].sCP[0].sCPR[79].nSCStart = 342;   sT[0].sCP[0].sCPR[79].nAckStart =0;	  sT[0].sCP[0].sCPR[79].nAckNum =0;   sT[0].sCP[0].sCPR[79].nSPOffsetCS = 1540; sT[0].sCP[0].sCPR[79].nSPOffsetLek = 1541;
sT[0].sCP[0].sCPR[80].nDCStart = 344;   sT[0].sCP[0].sCPR[80].nDCNum = 4;    sT[0].sCP[0].sCPR[80].nSCStart = 348;   sT[0].sCP[0].sCPR[80].nAckStart =0;	  sT[0].sCP[0].sCPR[80].nAckNum =0;   sT[0].sCP[0].sCPR[80].nSPOffsetCS = 1558; sT[0].sCP[0].sCPR[80].nSPOffsetLek = 1559;
sT[0].sCP[0].sCPR[81].nDCStart = 349;   sT[0].sCP[0].sCPR[81].nDCNum = 4;    sT[0].sCP[0].sCPR[81].nSCStart = 353;   sT[0].sCP[0].sCPR[81].nAckStart =0;	  sT[0].sCP[0].sCPR[81].nAckNum =0;   sT[0].sCP[0].sCPR[81].nSPOffsetCS = 1595; sT[0].sCP[0].sCPR[81].nSPOffsetLek = 1596;
sT[0].sCP[0].sCPR[82].nDCStart = 354;   sT[0].sCP[0].sCPR[82].nDCNum = 8;    sT[0].sCP[0].sCPR[82].nSCStart = 362;   sT[0].sCP[0].sCPR[82].nAckStart =0;	  sT[0].sCP[0].sCPR[82].nAckNum =0;   sT[0].sCP[0].sCPR[82].nSPOffsetCS = 1648; sT[0].sCP[0].sCPR[82].nSPOffsetLek = 1649;
sT[0].sCP[0].sCPR[83].nDCStart = 363;   sT[0].sCP[0].sCPR[83].nDCNum = 4;    sT[0].sCP[0].sCPR[83].nSCStart = 367;   sT[0].sCP[0].sCPR[83].nAckStart =0;	  sT[0].sCP[0].sCPR[83].nAckNum =0;   sT[0].sCP[0].sCPR[83].nSPOffsetCS = 1666; sT[0].sCP[0].sCPR[83].nSPOffsetLek = 1667;
sT[0].sCP[0].sCPR[84].nDCStart = 368;   sT[0].sCP[0].sCPR[84].nDCNum = 4;    sT[0].sCP[0].sCPR[84].nSCStart = 372;   sT[0].sCP[0].sCPR[84].nAckStart =0;	  sT[0].sCP[0].sCPR[84].nAckNum =0;   sT[0].sCP[0].sCPR[84].nSPOffsetCS = 1688; sT[0].sCP[0].sCPR[84].nSPOffsetLek = 1689;
sT[0].sCP[0].sCPR[85].nDCStart = 373;   sT[0].sCP[0].sCPR[85].nDCNum = 8;    sT[0].sCP[0].sCPR[85].nSCStart = 381;   sT[0].sCP[0].sCPR[85].nAckStart =0;	  sT[0].sCP[0].sCPR[85].nAckNum =0;   sT[0].sCP[0].sCPR[85].nSPOffsetCS = 1741; sT[0].sCP[0].sCPR[85].nSPOffsetLek = 1742;
sT[0].sCP[0].sCPR[86].nDCStart = 382;   sT[0].sCP[0].sCPR[86].nDCNum = 4;    sT[0].sCP[0].sCPR[86].nSCStart = 386;   sT[0].sCP[0].sCPR[86].nAckStart =0;	  sT[0].sCP[0].sCPR[86].nAckNum =0;   sT[0].sCP[0].sCPR[86].nSPOffsetCS = 1759; sT[0].sCP[0].sCPR[86].nSPOffsetLek = 1760;
sT[0].sCP[0].sCPR[87].nDCStart = 387;   sT[0].sCP[0].sCPR[87].nDCNum = 4;    sT[0].sCP[0].sCPR[87].nSCStart = 391;   sT[0].sCP[0].sCPR[87].nAckStart =0;	  sT[0].sCP[0].sCPR[87].nAckNum =0;   sT[0].sCP[0].sCPR[87].nSPOffsetCS = 1798; sT[0].sCP[0].sCPR[87].nSPOffsetLek = 1799;
sT[0].sCP[0].sCPR[88].nDCStart = 392;   sT[0].sCP[0].sCPR[88].nDCNum = 4;    sT[0].sCP[0].sCPR[88].nSCStart = 396;   sT[0].sCP[0].sCPR[88].nAckStart =0;	  sT[0].sCP[0].sCPR[88].nAckNum =0;   sT[0].sCP[0].sCPR[88].nSPOffsetCS = 1837; sT[0].sCP[0].sCPR[88].nSPOffsetLek = 1838;
sT[0].sCP[0].sCPR[89].nDCStart = 397;   sT[0].sCP[0].sCPR[89].nDCNum = 4;    sT[0].sCP[0].sCPR[89].nSCStart = 401;   sT[0].sCP[0].sCPR[89].nAckStart =0;	  sT[0].sCP[0].sCPR[89].nAckNum =0;   sT[0].sCP[0].sCPR[89].nSPOffsetCS = 1855; sT[0].sCP[0].sCPR[89].nSPOffsetLek = 1856;
sT[0].sCP[0].sCPR[90].nDCStart = 402;   sT[0].sCP[0].sCPR[90].nDCNum = 4;    sT[0].sCP[0].sCPR[90].nSCStart = 406;   sT[0].sCP[0].sCPR[90].nAckStart =0;	  sT[0].sCP[0].sCPR[90].nAckNum =0;   sT[0].sCP[0].sCPR[90].nSPOffsetCS = 1873; sT[0].sCP[0].sCPR[90].nSPOffsetLek = 1874;
sT[0].sCP[0].sCPR[91].nDCStart = 407;   sT[0].sCP[0].sCPR[91].nDCNum = 4;    sT[0].sCP[0].sCPR[91].nSCStart = 411;   sT[0].sCP[0].sCPR[91].nAckStart =0;	  sT[0].sCP[0].sCPR[91].nAckNum =0;   sT[0].sCP[0].sCPR[91].nSPOffsetCS = 1891; sT[0].sCP[0].sCPR[91].nSPOffsetLek = 1892;
sT[0].sCP[0].sCPR[92].nDCStart = 412;   sT[0].sCP[0].sCPR[92].nDCNum = 4;    sT[0].sCP[0].sCPR[92].nSCStart = 416;   sT[0].sCP[0].sCPR[92].nAckStart =0;	  sT[0].sCP[0].sCPR[92].nAckNum =0;   sT[0].sCP[0].sCPR[92].nSPOffsetCS = 1909; sT[0].sCP[0].sCPR[92].nSPOffsetLek = 1910;
sT[0].sCP[0].sCPR[93].nDCStart = 417;   sT[0].sCP[0].sCPR[93].nDCNum = 4;    sT[0].sCP[0].sCPR[93].nSCStart = 421;   sT[0].sCP[0].sCPR[93].nAckStart =0;	  sT[0].sCP[0].sCPR[93].nAckNum =0;   sT[0].sCP[0].sCPR[93].nSPOffsetCS = 1927; sT[0].sCP[0].sCPR[93].nSPOffsetLek = 1928;
sT[0].sCP[0].sCPR[94].nDCStart = 422;   sT[0].sCP[0].sCPR[94].nDCNum = 1;    sT[0].sCP[0].sCPR[94].nSCStart = 423;   sT[0].sCP[0].sCPR[94].nAckStart =0;	  sT[0].sCP[0].sCPR[94].nAckNum =0;   sT[0].sCP[0].sCPR[94].nSPOffsetCS = 1943; sT[0].sCP[0].sCPR[94].nSPOffsetLek = 1944;
sT[0].sCP[0].sCPR[95].nDCStart = 425;   sT[0].sCP[0].sCPR[95].nDCNum = 4;    sT[0].sCP[0].sCPR[95].nSCStart = 429;   sT[0].sCP[0].sCPR[95].nAckStart =0;	  sT[0].sCP[0].sCPR[95].nAckNum =0;   sT[0].sCP[0].sCPR[95].nSPOffsetCS = 1982; sT[0].sCP[0].sCPR[95].nSPOffsetLek = 1983;
sT[0].sCP[0].sCPR[96].nDCStart = 430;   sT[0].sCP[0].sCPR[96].nDCNum = 4;    sT[0].sCP[0].sCPR[96].nSCStart = 434;   sT[0].sCP[0].sCPR[96].nAckStart =0;	  sT[0].sCP[0].sCPR[96].nAckNum =0;   sT[0].sCP[0].sCPR[96].nSPOffsetCS = 2021; sT[0].sCP[0].sCPR[96].nSPOffsetLek = 2022;
sT[0].sCP[0].sCPR[97].nDCStart = 435;   sT[0].sCP[0].sCPR[97].nDCNum = 4;    sT[0].sCP[0].sCPR[97].nSCStart = 439;   sT[0].sCP[0].sCPR[97].nAckStart =0;	  sT[0].sCP[0].sCPR[97].nAckNum =0;   sT[0].sCP[0].sCPR[97].nSPOffsetCS = 2060; sT[0].sCP[0].sCPR[97].nSPOffsetLek = 2061;
sT[0].sCP[0].sCPR[98].nDCStart = 440;   sT[0].sCP[0].sCPR[98].nDCNum = 6;    sT[0].sCP[0].sCPR[98].nSCStart = 446;   sT[0].sCP[0].sCPR[98].nAckStart =0;	  sT[0].sCP[0].sCPR[98].nAckNum =0;   sT[0].sCP[0].sCPR[98].nSPOffsetCS = 2088; sT[0].sCP[0].sCPR[98].nSPOffsetLek = 2089;
sT[0].sCP[0].sCPR[99].nDCStart = 447;   sT[0].sCP[0].sCPR[99].nDCNum = 4;    sT[0].sCP[0].sCPR[99].nSCStart = 451;   sT[0].sCP[0].sCPR[99].nAckStart =0;	  sT[0].sCP[0].sCPR[99].nAckNum =0;   sT[0].sCP[0].sCPR[99].nSPOffsetCS = 2112; sT[0].sCP[0].sCPR[99].nSPOffsetLek = 2113;
sT[0].sCP[0].sCPR[100].nDCStart= 452;   sT[0].sCP[0].sCPR[100].nDCNum= 4;    sT[0].sCP[0].sCPR[100].nSCStart= 456;   sT[0].sCP[0].sCPR[100].nAckStart=0;	  sT[0].sCP[0].sCPR[100].nAckNum=0;   sT[0].sCP[0].sCPR[100].nSPOffsetCS= 2136; sT[0].sCP[0].sCPR[100].nSPOffsetLek= 2137;
sT[0].sCP[0].sCPR[101].nDCStart= 457;   sT[0].sCP[0].sCPR[101].nDCNum= 4;    sT[0].sCP[0].sCPR[101].nSCStart= 461;   sT[0].sCP[0].sCPR[101].nAckStart=0;	  sT[0].sCP[0].sCPR[101].nAckNum=0;   sT[0].sCP[0].sCPR[101].nSPOffsetCS= 2160; sT[0].sCP[0].sCPR[101].nSPOffsetLek= 2161;
sT[0].sCP[0].sCPR[102].nDCStart= 462;   sT[0].sCP[0].sCPR[102].nDCNum= 4;    sT[0].sCP[0].sCPR[102].nSCStart= 466;   sT[0].sCP[0].sCPR[102].nAckStart=0;	  sT[0].sCP[0].sCPR[102].nAckNum=0;   sT[0].sCP[0].sCPR[102].nSPOffsetCS= 2184; sT[0].sCP[0].sCPR[102].nSPOffsetLek= 2185;
sT[0].sCP[0].sCPR[103].nDCStart= 467;   sT[0].sCP[0].sCPR[103].nDCNum= 4;    sT[0].sCP[0].sCPR[103].nSCStart= 471;   sT[0].sCP[0].sCPR[103].nAckStart=0;	  sT[0].sCP[0].sCPR[103].nAckNum=0;   sT[0].sCP[0].sCPR[103].nSPOffsetCS= 2208; sT[0].sCP[0].sCPR[103].nSPOffsetLek= 2209;
sT[0].sCP[0].sCPR[104].nDCStart= 472;   sT[0].sCP[0].sCPR[104].nDCNum= 4;    sT[0].sCP[0].sCPR[104].nSCStart= 476;   sT[0].sCP[0].sCPR[104].nAckStart=0;	  sT[0].sCP[0].sCPR[104].nAckNum=0;   sT[0].sCP[0].sCPR[104].nSPOffsetCS= 2226; sT[0].sCP[0].sCPR[104].nSPOffsetLek= 2227;
sT[0].sCP[0].sCPR[105].nDCStart= 477;   sT[0].sCP[0].sCPR[105].nDCNum= 4;    sT[0].sCP[0].sCPR[105].nSCStart= 481;   sT[0].sCP[0].sCPR[105].nAckStart=0;	  sT[0].sCP[0].sCPR[105].nAckNum=0;   sT[0].sCP[0].sCPR[105].nSPOffsetCS= 2244; sT[0].sCP[0].sCPR[105].nSPOffsetLek= 2245;
sT[0].sCP[0].sCPR[106].nDCStart= 482;   sT[0].sCP[0].sCPR[106].nDCNum= 4;    sT[0].sCP[0].sCPR[106].nSCStart= 486;   sT[0].sCP[0].sCPR[106].nAckStart=0;	  sT[0].sCP[0].sCPR[106].nAckNum=0;   sT[0].sCP[0].sCPR[106].nSPOffsetCS= 2266; sT[0].sCP[0].sCPR[106].nSPOffsetLek= 2267;
sT[0].sCP[0].sCPR[107].nDCStart= 487;   sT[0].sCP[0].sCPR[107].nDCNum= 4;    sT[0].sCP[0].sCPR[107].nSCStart= 491;   sT[0].sCP[0].sCPR[107].nAckStart=0;	  sT[0].sCP[0].sCPR[107].nAckNum=0;   sT[0].sCP[0].sCPR[107].nSPOffsetCS= 2305; sT[0].sCP[0].sCPR[107].nSPOffsetLek= 2306;
sT[0].sCP[0].sCPR[108].nDCStart= 492;   sT[0].sCP[0].sCPR[108].nDCNum= 1;    sT[0].sCP[0].sCPR[108].nSCStart= 493;   sT[0].sCP[0].sCPR[108].nAckStart =0;	  sT[0].sCP[0].sCPR[108].nAckNum =0;  sT[0].sCP[0].sCPR[108].nSPOffsetCS= 2321; sT[0].sCP[0].sCPR[108].nSPOffsetLek= 2322;
sT[0].sCP[0].sCPR[109].nDCStart= 495;   sT[0].sCP[0].sCPR[109].nDCNum= 1;    sT[0].sCP[0].sCPR[109].nSCStart= 496;   sT[0].sCP[0].sCPR[109].nAckStart =0;	  sT[0].sCP[0].sCPR[109].nAckNum =0;  sT[0].sCP[0].sCPR[109].nSPOffsetCS= 2337; sT[0].sCP[0].sCPR[109].nSPOffsetLek= 2338;
sT[0].sCP[0].sCPR[110].nDCStart= 498;   sT[0].sCP[0].sCPR[110].nDCNum= 4;    sT[0].sCP[0].sCPR[110].nSCStart= 502;   sT[0].sCP[0].sCPR[110].nAckStart=0;	  sT[0].sCP[0].sCPR[110].nAckNum=0;   sT[0].sCP[0].sCPR[110].nSPOffsetCS= 2361; sT[0].sCP[0].sCPR[110].nSPOffsetLek= 2362;
sT[0].sCP[0].sCPR[111].nDCStart= 503;   sT[0].sCP[0].sCPR[111].nDCNum= 4;    sT[0].sCP[0].sCPR[111].nSCStart= 507;   sT[0].sCP[0].sCPR[111].nAckStart=0;	  sT[0].sCP[0].sCPR[111].nAckNum=0;   sT[0].sCP[0].sCPR[111].nSPOffsetCS= 2385; sT[0].sCP[0].sCPR[111].nSPOffsetLek= 2386;
sT[0].sCP[0].sCPR[112].nDCStart= 508;   sT[0].sCP[0].sCPR[112].nDCNum= 1;    sT[0].sCP[0].sCPR[112].nSCStart= 509;   sT[0].sCP[0].sCPR[112].nAckStart =0;	  sT[0].sCP[0].sCPR[112].nAckNum =0;  sT[0].sCP[0].sCPR[112].nSPOffsetCS= 2401; sT[0].sCP[0].sCPR[112].nSPOffsetLek= 2402;
sT[0].sCP[0].sCPR[113].nDCStart= 511;   sT[0].sCP[0].sCPR[113].nDCNum= 1;    sT[0].sCP[0].sCPR[113].nSCStart= 512;   sT[0].sCP[0].sCPR[113].nAckStart =0;	  sT[0].sCP[0].sCPR[113].nAckNum =0;  sT[0].sCP[0].sCPR[113].nSPOffsetCS= 2417; sT[0].sCP[0].sCPR[113].nSPOffsetLek= 2418;
sT[0].sCP[0].sCPR[114].nDCStart= 514;   sT[0].sCP[0].sCPR[114].nDCNum= 1;    sT[0].sCP[0].sCPR[114].nSCStart= 515;   sT[0].sCP[0].sCPR[114].nAckStart =0;	  sT[0].sCP[0].sCPR[114].nAckNum =0;  sT[0].sCP[0].sCPR[114].nSPOffsetCS= 2433; sT[0].sCP[0].sCPR[114].nSPOffsetLek= 2434;
sT[0].sCP[0].sCPR[115].nDCStart= 517;   sT[0].sCP[0].sCPR[115].nDCNum= 1;    sT[0].sCP[0].sCPR[115].nSCStart= 518;   sT[0].sCP[0].sCPR[115].nAckStart =0;	  sT[0].sCP[0].sCPR[115].nAckNum =0;  sT[0].sCP[0].sCPR[115].nSPOffsetCS= 2449; sT[0].sCP[0].sCPR[115].nSPOffsetLek= 2450;
sT[0].sCP[0].sCPR[116].nDCStart= 520;   sT[0].sCP[0].sCPR[116].nDCNum= 4;    sT[0].sCP[0].sCPR[116].nSCStart= 524;   sT[0].sCP[0].sCPR[116].nAckStart=0;	  sT[0].sCP[0].sCPR[116].nAckNum=0;   sT[0].sCP[0].sCPR[116].nSPOffsetCS= 2471; sT[0].sCP[0].sCPR[116].nSPOffsetLek= 2472;
sT[0].sCP[0].sCPR[117].nDCStart= 525;   sT[0].sCP[0].sCPR[117].nDCNum= 4;    sT[0].sCP[0].sCPR[117].nSCStart= 529;   sT[0].sCP[0].sCPR[117].nAckStart=0;	  sT[0].sCP[0].sCPR[117].nAckNum=0;   sT[0].sCP[0].sCPR[117].nSPOffsetCS= 2493; sT[0].sCP[0].sCPR[117].nSPOffsetLek= 2494;
sT[0].sCP[0].sCPR[118].nDCStart= 530;   sT[0].sCP[0].sCPR[118].nDCNum= 4;    sT[0].sCP[0].sCPR[118].nSCStart= 534;   sT[0].sCP[0].sCPR[118].nAckStart=0;	  sT[0].sCP[0].sCPR[118].nAckNum=0;   sT[0].sCP[0].sCPR[118].nSPOffsetCS= 2511; sT[0].sCP[0].sCPR[118].nSPOffsetLek= 2512;
sT[0].sCP[0].sCPR[119].nDCStart= 535;   sT[0].sCP[0].sCPR[119].nDCNum= 4;    sT[0].sCP[0].sCPR[119].nSCStart= 539;   sT[0].sCP[0].sCPR[119].nAckStart=0;	  sT[0].sCP[0].sCPR[119].nAckNum=0;   sT[0].sCP[0].sCPR[119].nSPOffsetCS= 2529; sT[0].sCP[0].sCPR[119].nSPOffsetLek= 2530;
sT[0].sCP[0].sCPR[120].nDCStart= 540;   sT[0].sCP[0].sCPR[120].nDCNum= 4;    sT[0].sCP[0].sCPR[120].nSCStart= 544;   sT[0].sCP[0].sCPR[120].nAckStart=0;	  sT[0].sCP[0].sCPR[120].nAckNum=0;   sT[0].sCP[0].sCPR[120].nSPOffsetCS= 2566; sT[0].sCP[0].sCPR[120].nSPOffsetLek= 2567;
sT[0].sCP[0].sCPR[121].nDCStart= 545;   sT[0].sCP[0].sCPR[121].nDCNum= 4;    sT[0].sCP[0].sCPR[121].nSCStart= 549;   sT[0].sCP[0].sCPR[121].nAckStart=0;	  sT[0].sCP[0].sCPR[121].nAckNum=0;   sT[0].sCP[0].sCPR[121].nSPOffsetCS= 2584; sT[0].sCP[0].sCPR[121].nSPOffsetLek= 2585;
sT[0].sCP[0].sCPR[122].nDCStart= 550;   sT[0].sCP[0].sCPR[122].nDCNum= 4;    sT[0].sCP[0].sCPR[122].nSCStart= 554;   sT[0].sCP[0].sCPR[122].nAckStart=0;	  sT[0].sCP[0].sCPR[122].nAckNum=0;   sT[0].sCP[0].sCPR[122].nSPOffsetCS= 2602; sT[0].sCP[0].sCPR[122].nSPOffsetLek= 2603;
sT[0].sCP[0].sCPR[123].nDCStart= 555;   sT[0].sCP[0].sCPR[123].nDCNum= 4;    sT[0].sCP[0].sCPR[123].nSCStart= 559;   sT[0].sCP[0].sCPR[123].nAckStart=0;	  sT[0].sCP[0].sCPR[123].nAckNum=0;   sT[0].sCP[0].sCPR[123].nSPOffsetCS= 2639; sT[0].sCP[0].sCPR[123].nSPOffsetLek= 2640;
sT[0].sCP[0].sCPR[124].nDCStart= 560;   sT[0].sCP[0].sCPR[124].nDCNum= 5;    sT[0].sCP[0].sCPR[124].nSCStart= 565;   sT[0].sCP[0].sCPR[124].nAckStart =0;	  sT[0].sCP[0].sCPR[124].nAckNum=0;   sT[0].sCP[0].sCPR[124].nSPOffsetCS= 2684; sT[0].sCP[0].sCPR[124].nSPOffsetLek= 2685;
sT[0].sCP[0].sCPR[125].nDCStart= 566;   sT[0].sCP[0].sCPR[125].nDCNum= 4;    sT[0].sCP[0].sCPR[125].nSCStart= 570;   sT[0].sCP[0].sCPR[125].nAckStart =0;	  sT[0].sCP[0].sCPR[125].nAckNum=0;   sT[0].sCP[0].sCPR[125].nSPOffsetCS= 2723; sT[0].sCP[0].sCPR[125].nSPOffsetLek= 2724;
sT[0].sCP[0].sCPR[126].nDCStart= 571;   sT[0].sCP[0].sCPR[126].nDCNum= 8;    sT[0].sCP[0].sCPR[126].nSCStart= 579;   sT[0].sCP[0].sCPR[126].nAckStart =0;	  sT[0].sCP[0].sCPR[126].nAckNum=0;   sT[0].sCP[0].sCPR[126].nSPOffsetCS= 2751; sT[0].sCP[0].sCPR[126].nSPOffsetLek= 2752;
sT[0].sCP[0].sCPR[127].nDCStart= 589;   sT[0].sCP[0].sCPR[127].nDCNum= 4;    sT[0].sCP[0].sCPR[127].nSCStart= 593;   sT[0].sCP[0].sCPR[127].nAckStart =0;	  sT[0].sCP[0].sCPR[127].nAckNum=0;   sT[0].sCP[0].sCPR[127].nSPOffsetCS= 2797; sT[0].sCP[0].sCPR[127].nSPOffsetLek= 2798;
sT[0].sCP[0].sCPR[128].nDCStart= 594;   sT[0].sCP[0].sCPR[128].nDCNum= 4;    sT[0].sCP[0].sCPR[128].nSCStart= 598;   sT[0].sCP[0].sCPR[128].nAckStart =0;	  sT[0].sCP[0].sCPR[128].nAckNum=0;   sT[0].sCP[0].sCPR[128].nSPOffsetCS= 2815; sT[0].sCP[0].sCPR[128].nSPOffsetLek= 2816;
sT[0].sCP[0].sCPR[129].nDCStart= 599;   sT[0].sCP[0].sCPR[129].nDCNum= 4;    sT[0].sCP[0].sCPR[129].nSCStart= 603;   sT[0].sCP[0].sCPR[129].nAckStart =0;	  sT[0].sCP[0].sCPR[129].nAckNum=0;   sT[0].sCP[0].sCPR[129].nSPOffsetCS= 2833; sT[0].sCP[0].sCPR[129].nSPOffsetLek= 2834;
sT[0].sCP[0].sCPR[130].nDCStart= 604;   sT[0].sCP[0].sCPR[130].nDCNum= 4;    sT[0].sCP[0].sCPR[130].nSCStart= 608;   sT[0].sCP[0].sCPR[130].nAckStart =0;	  sT[0].sCP[0].sCPR[130].nAckNum=0;   sT[0].sCP[0].sCPR[130].nSPOffsetCS= 2851; sT[0].sCP[0].sCPR[130].nSPOffsetLek= 2852;
sT[0].sCP[0].sCPR[131].nDCStart= 609;   sT[0].sCP[0].sCPR[131].nDCNum= 1;    sT[0].sCP[0].sCPR[131].nSCStart= 610;   sT[0].sCP[0].sCPR[131].nAckStart =0;	  sT[0].sCP[0].sCPR[131].nAckNum=0;   sT[0].sCP[0].sCPR[131].nSPOffsetCS= 2867; sT[0].sCP[0].sCPR[131].nSPOffsetLek= 2868;
sT[0].sCP[0].sCPR[132].nDCStart= 612;   sT[0].sCP[0].sCPR[132].nDCNum= 1;    sT[0].sCP[0].sCPR[132].nSCStart= 613;   sT[0].sCP[0].sCPR[132].nAckStart =0;	  sT[0].sCP[0].sCPR[132].nAckNum=0;   sT[0].sCP[0].sCPR[132].nSPOffsetCS= 2883; sT[0].sCP[0].sCPR[132].nSPOffsetLek= 2884;
sT[0].sCP[0].sCPR[133].nDCStart= 615;   sT[0].sCP[0].sCPR[133].nDCNum=15;    sT[0].sCP[0].sCPR[133].nSCStart= 630;   sT[0].sCP[0].sCPR[133].nAckStart =0;	  sT[0].sCP[0].sCPR[133].nAckNum=0;   sT[0].sCP[0].sCPR[133].nSPOffsetCS= 2949; sT[0].sCP[0].sCPR[133].nSPOffsetLek= 2950;
sT[0].sCP[0].sCPR[134].nDCStart= 631;   sT[0].sCP[0].sCPR[134].nDCNum= 4;    sT[0].sCP[0].sCPR[134].nSCStart= 635;   sT[0].sCP[0].sCPR[134].nAckStart =0;	  sT[0].sCP[0].sCPR[134].nAckNum=0;   sT[0].sCP[0].sCPR[134].nSPOffsetCS= 2967; sT[0].sCP[0].sCPR[134].nSPOffsetLek= 2968;
sT[0].sCP[0].sCPR[135].nDCStart= 636;   sT[0].sCP[0].sCPR[135].nDCNum= 4;    sT[0].sCP[0].sCPR[135].nSCStart= 640;   sT[0].sCP[0].sCPR[135].nAckStart =0;	  sT[0].sCP[0].sCPR[135].nAckNum=0;   sT[0].sCP[0].sCPR[135].nSPOffsetCS= 3006; sT[0].sCP[0].sCPR[135].nSPOffsetLek= 3007;
sT[0].sCP[0].sCPR[136].nDCStart= 641;   sT[0].sCP[0].sCPR[136].nDCNum= 4;    sT[0].sCP[0].sCPR[136].nSCStart= 645;   sT[0].sCP[0].sCPR[136].nAckStart =0;	  sT[0].sCP[0].sCPR[136].nAckNum=0;   sT[0].sCP[0].sCPR[136].nSPOffsetCS= 3024; sT[0].sCP[0].sCPR[136].nSPOffsetLek= 3025;
sT[0].sCP[0].sCPR[137].nDCStart= 646;   sT[0].sCP[0].sCPR[137].nDCNum= 4;    sT[0].sCP[0].sCPR[137].nSCStart= 650;   sT[0].sCP[0].sCPR[137].nAckStart =0;	  sT[0].sCP[0].sCPR[137].nAckNum=0;   sT[0].sCP[0].sCPR[137].nSPOffsetCS= 3042; sT[0].sCP[0].sCPR[137].nSPOffsetLek= 3043;
sT[0].sCP[0].sCPR[138].nDCStart= 651;   sT[0].sCP[0].sCPR[138].nDCNum= 4;    sT[0].sCP[0].sCPR[138].nSCStart= 655;   sT[0].sCP[0].sCPR[138].nAckStart =0;	  sT[0].sCP[0].sCPR[138].nAckNum=0;   sT[0].sCP[0].sCPR[138].nSPOffsetCS= 3060; sT[0].sCP[0].sCPR[138].nSPOffsetLek= 3061;
sT[0].sCP[0].sCPR[139].nDCStart= 656;   sT[0].sCP[0].sCPR[139].nDCNum= 1;    sT[0].sCP[0].sCPR[139].nSCStart= 657;   sT[0].sCP[0].sCPR[139].nAckStart =0;	  sT[0].sCP[0].sCPR[139].nAckNum=0;   sT[0].sCP[0].sCPR[139].nSPOffsetCS= 3076; sT[0].sCP[0].sCPR[139].nSPOffsetLek= 3077;
sT[0].sCP[0].sCPR[140].nDCStart= 659;   sT[0].sCP[0].sCPR[140].nDCNum= 4;    sT[0].sCP[0].sCPR[140].nSCStart= 663;   sT[0].sCP[0].sCPR[140].nAckStart =0;	  sT[0].sCP[0].sCPR[140].nAckNum=0;   sT[0].sCP[0].sCPR[140].nSPOffsetCS= 3094; sT[0].sCP[0].sCPR[140].nSPOffsetLek= 3095;
sT[0].sCP[0].sCPR[141].nDCStart= 664;   sT[0].sCP[0].sCPR[141].nDCNum= 1;    sT[0].sCP[0].sCPR[141].nSCStart= 665;   sT[0].sCP[0].sCPR[141].nAckStart =0;	  sT[0].sCP[0].sCPR[141].nAckNum=0;   sT[0].sCP[0].sCPR[141].nSPOffsetCS= 3112; sT[0].sCP[0].sCPR[141].nSPOffsetLek= 3113;
sT[0].sCP[0].sCPR[142].nDCStart= 0;     sT[0].sCP[0].sCPR[142].nDCNum= 0;    sT[0].sCP[0].sCPR[142].nSCStart= 667;   sT[0].sCP[0].sCPR[142].nAckStart =0;	  sT[0].sCP[0].sCPR[142].nAckNum=0;   sT[0].sCP[0].sCPR[142].nSPOffsetCS= 3125; sT[0].sCP[0].sCPR[142].nSPOffsetLek= 3126;
sT[0].sCP[0].sCPR[143].nDCStart= 668;   sT[0].sCP[0].sCPR[143].nDCNum= 4;    sT[0].sCP[0].sCPR[143].nSCStart= 672;   sT[0].sCP[0].sCPR[143].nAckStart =0;	  sT[0].sCP[0].sCPR[143].nAckNum=0;   sT[0].sCP[0].sCPR[143].nSPOffsetCS= 3164; sT[0].sCP[0].sCPR[143].nSPOffsetLek= 3165;
sT[0].sCP[0].sCPR[144].nDCStart= 673;   sT[0].sCP[0].sCPR[144].nDCNum= 4;    sT[0].sCP[0].sCPR[144].nSCStart= 677;   sT[0].sCP[0].sCPR[144].nAckStart =0;	  sT[0].sCP[0].sCPR[144].nAckNum=0;   sT[0].sCP[0].sCPR[144].nSPOffsetCS= 3182; sT[0].sCP[0].sCPR[144].nSPOffsetLek= 3183;
sT[0].sCP[0].sCPR[145].nDCStart= 678;   sT[0].sCP[0].sCPR[145].nDCNum= 4;    sT[0].sCP[0].sCPR[145].nSCStart= 682;   sT[0].sCP[0].sCPR[145].nAckStart =0;	  sT[0].sCP[0].sCPR[145].nAckNum=0;   sT[0].sCP[0].sCPR[145].nSPOffsetCS= 3200; sT[0].sCP[0].sCPR[145].nSPOffsetLek= 3201;
sT[0].sCP[0].sCPR[146].nDCStart= 696;   sT[0].sCP[0].sCPR[146].nDCNum= 4;    sT[0].sCP[0].sCPR[146].nSCStart= 700;   sT[0].sCP[0].sCPR[146].nAckStart =0;	  sT[0].sCP[0].sCPR[146].nAckNum=0;   sT[0].sCP[0].sCPR[146].nSPOffsetCS= 3252; sT[0].sCP[0].sCPR[146].nSPOffsetLek= 3253;
sT[0].sCP[0].sCPR[147].nDCStart= 701;   sT[0].sCP[0].sCPR[147].nDCNum= 4;    sT[0].sCP[0].sCPR[147].nSCStart= 705;   sT[0].sCP[0].sCPR[147].nAckStart =0;	  sT[0].sCP[0].sCPR[147].nAckNum=0;   sT[0].sCP[0].sCPR[147].nSPOffsetCS= 3270; sT[0].sCP[0].sCPR[147].nSPOffsetLek= 3271;
sT[0].sCP[0].sCPR[148].nDCStart= 706;   sT[0].sCP[0].sCPR[148].nDCNum= 8;    sT[0].sCP[0].sCPR[148].nSCStart= 714;   sT[0].sCP[0].sCPR[148].nAckStart =0;	  sT[0].sCP[0].sCPR[148].nAckNum=0;   sT[0].sCP[0].sCPR[148].nSPOffsetCS= 3304; sT[0].sCP[0].sCPR[148].nSPOffsetLek= 3305;
sT[0].sCP[0].sCPR[149].nDCStart= 715;   sT[0].sCP[0].sCPR[149].nDCNum= 1;    sT[0].sCP[0].sCPR[149].nSCStart= 716;   sT[0].sCP[0].sCPR[149].nAckStart =0;	  sT[0].sCP[0].sCPR[149].nAckNum=0;   sT[0].sCP[0].sCPR[149].nSPOffsetCS= 3320; sT[0].sCP[0].sCPR[149].nSPOffsetLek= 3321;
sT[0].sCP[0].sCPR[150].nDCStart= 683;   sT[0].sCP[0].sCPR[150].nDCNum=12;    sT[0].sCP[0].sCPR[150].nSCStart= 695;   sT[0].sCP[0].sCPR[150].nAckStart =0;	  sT[0].sCP[0].sCPR[150].nAckNum=0;   sT[0].sCP[0].sCPR[150].nSPOffsetCS= 3234; sT[0].sCP[0].sCPR[150].nSPOffsetLek= 3235;
sT[0].sCP[0].sCPR[151].nDCStart= 718;   sT[0].sCP[0].sCPR[151].nDCNum= 1;    sT[0].sCP[0].sCPR[151].nSCStart= 719;   sT[0].sCP[0].sCPR[151].nAckStart =0;	  sT[0].sCP[0].sCPR[151].nAckNum=0;   sT[0].sCP[0].sCPR[151].nSPOffsetCS= 3336; sT[0].sCP[0].sCPR[151].nSPOffsetLek= 3337;
sT[0].sCP[0].sCPR[152].nDCStart= 721;   sT[0].sCP[0].sCPR[152].nDCNum=11;    sT[0].sCP[0].sCPR[152].nSCStart= 732;   sT[0].sCP[0].sCPR[152].nAckStart =0;	  sT[0].sCP[0].sCPR[152].nAckNum=0;   sT[0].sCP[0].sCPR[152].nSPOffsetCS= 3386; sT[0].sCP[0].sCPR[152].nSPOffsetLek= 3387;
sT[0].sCP[0].sCPR[153].nDCStart= 733;   sT[0].sCP[0].sCPR[153].nDCNum= 1;    sT[0].sCP[0].sCPR[153].nSCStart= 734;   sT[0].sCP[0].sCPR[153].nAckStart =0;	  sT[0].sCP[0].sCPR[153].nAckNum=0;   sT[0].sCP[0].sCPR[153].nSPOffsetCS= 3402; sT[0].sCP[0].sCPR[153].nSPOffsetLek= 3403;
sT[0].sCP[0].sCPR[154].nDCStart= 736;   sT[0].sCP[0].sCPR[154].nDCNum= 4;    sT[0].sCP[0].sCPR[154].nSCStart= 740;   sT[0].sCP[0].sCPR[154].nAckStart =0;	  sT[0].sCP[0].sCPR[154].nAckNum=0;   sT[0].sCP[0].sCPR[154].nSPOffsetCS= 3439; sT[0].sCP[0].sCPR[154].nSPOffsetLek= 3440;
sT[0].sCP[0].sCPR[155].nDCStart= 741;   sT[0].sCP[0].sCPR[155].nDCNum=15;    sT[0].sCP[0].sCPR[155].nSCStart= 757;   sT[0].sCP[0].sCPR[155].nAckStart =0;	  sT[0].sCP[0].sCPR[155].nAckNum=0;   sT[0].sCP[0].sCPR[155].nSPOffsetCS= 3529; sT[0].sCP[0].sCPR[155].nSPOffsetLek= 3530;
sT[0].sCP[0].sCPR[156].nDCStart= 758;   sT[0].sCP[0].sCPR[156].nDCNum= 4;    sT[0].sCP[0].sCPR[156].nSCStart= 762;   sT[0].sCP[0].sCPR[156].nAckStart =0;	  sT[0].sCP[0].sCPR[156].nAckNum=0;   sT[0].sCP[0].sCPR[156].nSPOffsetCS= 3547; sT[0].sCP[0].sCPR[156].nSPOffsetLek= 3548;
sT[0].sCP[0].sCPR[157].nDCStart= 763;   sT[0].sCP[0].sCPR[157].nDCNum= 1;    sT[0].sCP[0].sCPR[157].nSCStart= 764;   sT[0].sCP[0].sCPR[157].nAckStart =0;	  sT[0].sCP[0].sCPR[157].nAckNum=0;   sT[0].sCP[0].sCPR[157].nSPOffsetCS= 3563; sT[0].sCP[0].sCPR[157].nSPOffsetLek= 3564;
sT[0].sCP[0].sCPR[158].nDCStart= 766;   sT[0].sCP[0].sCPR[158].nDCNum= 4;    sT[0].sCP[0].sCPR[158].nSCStart= 770;   sT[0].sCP[0].sCPR[158].nAckStart =0;	  sT[0].sCP[0].sCPR[158].nAckNum=0;   sT[0].sCP[0].sCPR[158].nSPOffsetCS= 3602; sT[0].sCP[0].sCPR[158].nSPOffsetLek= 3603;
sT[0].sCP[0].sCPR[159].nDCStart= 771;   sT[0].sCP[0].sCPR[159].nDCNum= 4;    sT[0].sCP[0].sCPR[159].nSCStart= 775;   sT[0].sCP[0].sCPR[159].nAckStart =0;	  sT[0].sCP[0].sCPR[159].nAckNum=0;   sT[0].sCP[0].sCPR[159].nSPOffsetCS= 3641; sT[0].sCP[0].sCPR[159].nSPOffsetLek= 3642;
sT[0].sCP[0].sCPR[160].nDCStart= 776;   sT[0].sCP[0].sCPR[160].nDCNum= 4;    sT[0].sCP[0].sCPR[160].nSCStart= 780;   sT[0].sCP[0].sCPR[160].nAckStart =0;	  sT[0].sCP[0].sCPR[160].nAckNum=0;   sT[0].sCP[0].sCPR[160].nSPOffsetCS= 3680; sT[0].sCP[0].sCPR[160].nSPOffsetLek= 3681;
sT[0].sCP[0].sCPR[161].nDCStart= 781;   sT[0].sCP[0].sCPR[161].nDCNum=10;    sT[0].sCP[0].sCPR[161].nSCStart= 791;   sT[0].sCP[0].sCPR[161].nAckStart =0;	  sT[0].sCP[0].sCPR[161].nAckNum=0;   sT[0].sCP[0].sCPR[161].nSPOffsetCS= 3738; sT[0].sCP[0].sCPR[161].nSPOffsetLek= 3739;
sT[0].sCP[0].sCPR[162].nDCStart= 792;   sT[0].sCP[0].sCPR[162].nDCNum= 4;    sT[0].sCP[0].sCPR[162].nSCStart= 796;   sT[0].sCP[0].sCPR[162].nAckStart =0;	  sT[0].sCP[0].sCPR[162].nAckNum=0;   sT[0].sCP[0].sCPR[162].nSPOffsetCS= 3756; sT[0].sCP[0].sCPR[162].nSPOffsetLek= 3757;
sT[0].sCP[0].sCPR[163].nDCStart= 797;   sT[0].sCP[0].sCPR[163].nDCNum= 1;    sT[0].sCP[0].sCPR[163].nSCStart= 798;   sT[0].sCP[0].sCPR[163].nAckStart =0;	  sT[0].sCP[0].sCPR[163].nAckNum=0;   sT[0].sCP[0].sCPR[163].nSPOffsetCS= 3772; sT[0].sCP[0].sCPR[163].nSPOffsetLek= 3773;
sT[0].sCP[0].sCPR[164].nDCStart =  0;   sT[0].sCP[0].sCPR[164].nDCNum= 0;    sT[0].sCP[0].sCPR[164].nSCStart= 800;   sT[0].sCP[0].sCPR[164].nAckStart =0;   sT[0].sCP[0].sCPR[164].nAckNum =0;  sT[0].sCP[0].sCPR[164].nSPOffsetCS= 3779; sT[0].sCP[0].sCPR[164].nSPOffsetLek= 3780;
sT[0].sCP[0].sCPR[165].nDCStart= 801;   sT[0].sCP[0].sCPR[165].nDCNum= 4;    sT[0].sCP[0].sCPR[165].nSCStart= 805;   sT[0].sCP[0].sCPR[165].nAckStart =0;	  sT[0].sCP[0].sCPR[165].nAckNum=0;   sT[0].sCP[0].sCPR[165].nSPOffsetCS= 3797; sT[0].sCP[0].sCPR[165].nSPOffsetLek= 3798;
sT[0].sCP[0].sCPR[166].nDCStart= 806;   sT[0].sCP[0].sCPR[166].nDCNum= 4;    sT[0].sCP[0].sCPR[166].nSCStart= 810;   sT[0].sCP[0].sCPR[166].nAckStart =0;	  sT[0].sCP[0].sCPR[166].nAckNum=0;   sT[0].sCP[0].sCPR[166].nSPOffsetCS= 3834; sT[0].sCP[0].sCPR[166].nSPOffsetLek= 3835;
sT[0].sCP[0].sCPR[167].nDCStart= 811;   sT[0].sCP[0].sCPR[167].nDCNum= 4;    sT[0].sCP[0].sCPR[167].nSCStart= 815;   sT[0].sCP[0].sCPR[167].nAckStart =0;	  sT[0].sCP[0].sCPR[167].nAckNum=0;   sT[0].sCP[0].sCPR[167].nSPOffsetCS= 3873; sT[0].sCP[0].sCPR[167].nSPOffsetLek= 3874;
sT[0].sCP[0].sCPR[168].nDCStart= 816;   sT[0].sCP[0].sCPR[168].nDCNum= 1;    sT[0].sCP[0].sCPR[168].nSCStart= 817;   sT[0].sCP[0].sCPR[168].nAckStart =0;	  sT[0].sCP[0].sCPR[168].nAckNum=0;   sT[0].sCP[0].sCPR[168].nSPOffsetCS= 3889; sT[0].sCP[0].sCPR[168].nSPOffsetLek= 3890;
sT[0].sCP[0].sCPR[169].nDCStart= 819;   sT[0].sCP[0].sCPR[169].nDCNum= 1;    sT[0].sCP[0].sCPR[169].nSCStart= 820;   sT[0].sCP[0].sCPR[169].nAckStart =0;	  sT[0].sCP[0].sCPR[169].nAckNum=0;   sT[0].sCP[0].sCPR[169].nSPOffsetCS= 3905; sT[0].sCP[0].sCPR[169].nSPOffsetLek= 3906;
sT[0].sCP[0].sCPR[170].nDCStart= 822;   sT[0].sCP[0].sCPR[170].nDCNum= 4;    sT[0].sCP[0].sCPR[170].nSCStart= 826;   sT[0].sCP[0].sCPR[170].nAckStart =0;	  sT[0].sCP[0].sCPR[170].nAckNum=0;   sT[0].sCP[0].sCPR[170].nSPOffsetCS= 3927; sT[0].sCP[0].sCPR[170].nSPOffsetLek= 3928;
sT[0].sCP[0].sCPR[171].nDCStart= 827;   sT[0].sCP[0].sCPR[171].nDCNum= 4;    sT[0].sCP[0].sCPR[171].nSCStart= 831;   sT[0].sCP[0].sCPR[171].nAckStart =0;	  sT[0].sCP[0].sCPR[171].nAckNum=0;   sT[0].sCP[0].sCPR[171].nSPOffsetCS= 3966; sT[0].sCP[0].sCPR[171].nSPOffsetLek= 3967;
sT[0].sCP[0].sCPR[172].nDCStart= 832;   sT[0].sCP[0].sCPR[172].nDCNum= 4;    sT[0].sCP[0].sCPR[172].nSCStart= 836;   sT[0].sCP[0].sCPR[172].nAckStart =0;	  sT[0].sCP[0].sCPR[172].nAckNum=0;   sT[0].sCP[0].sCPR[172].nSPOffsetCS= 4005; sT[0].sCP[0].sCPR[172].nSPOffsetLek= 4006;
sT[0].sCP[0].sCPR[173].nDCStart= 837;   sT[0].sCP[0].sCPR[173].nDCNum= 4;    sT[0].sCP[0].sCPR[173].nSCStart= 841;   sT[0].sCP[0].sCPR[173].nAckStart =0;	  sT[0].sCP[0].sCPR[173].nAckNum=0;   sT[0].sCP[0].sCPR[173].nSPOffsetCS= 4044; sT[0].sCP[0].sCPR[173].nSPOffsetLek= 4045;
sT[0].sCP[0].sCPR[174].nDCStart= 842;   sT[0].sCP[0].sCPR[174].nDCNum= 4;    sT[0].sCP[0].sCPR[174].nSCStart= 846;   sT[0].sCP[0].sCPR[174].nAckStart =0;	  sT[0].sCP[0].sCPR[174].nAckNum=0;   sT[0].sCP[0].sCPR[174].nSPOffsetCS= 4062; sT[0].sCP[0].sCPR[174].nSPOffsetLek= 4063;
sT[0].sCP[0].sCPR[175].nDCStart= 847;   sT[0].sCP[0].sCPR[175].nDCNum= 8;    sT[0].sCP[0].sCPR[175].nSCStart= 855;   sT[0].sCP[0].sCPR[175].nAckStart =0;	  sT[0].sCP[0].sCPR[175].nAckNum=0;   sT[0].sCP[0].sCPR[175].nSPOffsetCS= 4092; sT[0].sCP[0].sCPR[175].nSPOffsetLek= 4093;
sT[0].sCP[0].sCPR[176].nDCStart= 856;   sT[0].sCP[0].sCPR[176].nDCNum= 4;    sT[0].sCP[0].sCPR[176].nSCStart= 860;   sT[0].sCP[0].sCPR[176].nAckStart =0;	  sT[0].sCP[0].sCPR[176].nAckNum=0;   sT[0].sCP[0].sCPR[176].nSPOffsetCS= 4110; sT[0].sCP[0].sCPR[176].nSPOffsetLek= 4111;
sT[0].sCP[0].sCPR[177].nDCStart= 861;   sT[0].sCP[0].sCPR[177].nDCNum= 4;    sT[0].sCP[0].sCPR[177].nSCStart= 865;   sT[0].sCP[0].sCPR[177].nAckStart =0;	  sT[0].sCP[0].sCPR[177].nAckNum=0;   sT[0].sCP[0].sCPR[177].nSPOffsetCS= 4128; sT[0].sCP[0].sCPR[177].nSPOffsetLek= 4129;
sT[0].sCP[0].sCPR[178].nDCStart= 866;   sT[0].sCP[0].sCPR[178].nDCNum=12;    sT[0].sCP[0].sCPR[178].nSCStart= 877;   sT[0].sCP[0].sCPR[178].nAckStart =0;	  sT[0].sCP[0].sCPR[178].nAckNum=0;   sT[0].sCP[0].sCPR[178].nSPOffsetCS= 4162; sT[0].sCP[0].sCPR[178].nSPOffsetLek= 4163;
sT[0].sCP[0].sCPR[179].nDCStart= 878;   sT[0].sCP[0].sCPR[179].nDCNum= 9;    sT[0].sCP[0].sCPR[179].nSCStart= 887;   sT[0].sCP[0].sCPR[179].nAckStart =0;	  sT[0].sCP[0].sCPR[179].nAckNum=0;   sT[0].sCP[0].sCPR[179].nSPOffsetCS= 4212; sT[0].sCP[0].sCPR[179].nSPOffsetLek= 4213;
sT[0].sCP[0].sCPR[180].nDCStart= 888;   sT[0].sCP[0].sCPR[180].nDCNum= 1;    sT[0].sCP[0].sCPR[180].nSCStart= 889;   sT[0].sCP[0].sCPR[180].nAckStart =0;	  sT[0].sCP[0].sCPR[180].nAckNum=0;   sT[0].sCP[0].sCPR[180].nSPOffsetCS= 4228; sT[0].sCP[0].sCPR[180].nSPOffsetLek= 4229;
sT[0].sCP[0].sCPR[181].nDCStart= 891;   sT[0].sCP[0].sCPR[181].nDCNum= 4;    sT[0].sCP[0].sCPR[181].nSCStart= 895;   sT[0].sCP[0].sCPR[181].nAckStart =0;	  sT[0].sCP[0].sCPR[181].nAckNum=0;   sT[0].sCP[0].sCPR[181].nSPOffsetCS= 4267; sT[0].sCP[0].sCPR[181].nSPOffsetLek= 4268;
sT[0].sCP[0].sCPR[182].nDCStart= 896;   sT[0].sCP[0].sCPR[182].nDCNum= 4;    sT[0].sCP[0].sCPR[182].nSCStart= 900;   sT[0].sCP[0].sCPR[182].nAckStart =0;	  sT[0].sCP[0].sCPR[182].nAckNum=0;   sT[0].sCP[0].sCPR[182].nSPOffsetCS= 4306; sT[0].sCP[0].sCPR[182].nSPOffsetLek= 4307;
sT[0].sCP[0].sCPR[183].nDCStart= 901;   sT[0].sCP[0].sCPR[183].nDCNum= 4;    sT[0].sCP[0].sCPR[183].nSCStart= 905;   sT[0].sCP[0].sCPR[183].nAckStart =0;	  sT[0].sCP[0].sCPR[183].nAckNum=0;   sT[0].sCP[0].sCPR[183].nSPOffsetCS= 4345; sT[0].sCP[0].sCPR[183].nSPOffsetLek= 4346;
sT[0].sCP[0].sCPR[184].nDCStart= 906;   sT[0].sCP[0].sCPR[184].nDCNum= 4;    sT[0].sCP[0].sCPR[184].nSCStart= 910;   sT[0].sCP[0].sCPR[184].nAckStart =0;	  sT[0].sCP[0].sCPR[184].nAckNum=0;   sT[0].sCP[0].sCPR[184].nSPOffsetCS= 4363; sT[0].sCP[0].sCPR[184].nSPOffsetLek= 4364;
sT[0].sCP[0].sCPR[185].nDCStart= 911;   sT[0].sCP[0].sCPR[185].nDCNum= 4;    sT[0].sCP[0].sCPR[185].nSCStart= 915;   sT[0].sCP[0].sCPR[185].nAckStart =0;	  sT[0].sCP[0].sCPR[185].nAckNum=0;   sT[0].sCP[0].sCPR[185].nSPOffsetCS= 4402; sT[0].sCP[0].sCPR[185].nSPOffsetLek= 4403;
sT[0].sCP[0].sCPR[186].nDCStart= 916;   sT[0].sCP[0].sCPR[186].nDCNum= 4;    sT[0].sCP[0].sCPR[186].nSCStart= 920;   sT[0].sCP[0].sCPR[186].nAckStart =0;	  sT[0].sCP[0].sCPR[186].nAckNum=0;   sT[0].sCP[0].sCPR[186].nSPOffsetCS= 4441; sT[0].sCP[0].sCPR[186].nSPOffsetLek= 4442;
sT[0].sCP[0].sCPR[187].nDCStart= 924;   sT[0].sCP[0].sCPR[187].nDCNum= 4;    sT[0].sCP[0].sCPR[187].nSCStart= 928;   sT[0].sCP[0].sCPR[187].nAckStart =0;	  sT[0].sCP[0].sCPR[187].nAckNum=0;   sT[0].sCP[0].sCPR[187].nSPOffsetCS= 4475; sT[0].sCP[0].sCPR[187].nSPOffsetLek= 4476;
sT[0].sCP[0].sCPR[188].nDCStart= 929;   sT[0].sCP[0].sCPR[188].nDCNum= 4;    sT[0].sCP[0].sCPR[188].nSCStart= 933;   sT[0].sCP[0].sCPR[188].nAckStart =0;	  sT[0].sCP[0].sCPR[188].nAckNum=0;   sT[0].sCP[0].sCPR[188].nSPOffsetCS= 4493; sT[0].sCP[0].sCPR[188].nSPOffsetLek= 4494;
sT[0].sCP[0].sCPR[189].nDCStart = 0;    sT[0].sCP[0].sCPR[189].nDCNum= 0;    sT[0].sCP[0].sCPR[189].nSCStart =934;   sT[0].sCP[0].sCPR[189].nAckStart =0;   sT[0].sCP[0].sCPR[189].nAckNum =0;  sT[0].sCP[0].sCPR[189].nSPOffsetCS =4500; sT[0].sCP[0].sCPR[189].nSPOffsetLek =4501;
sT[0].sCP[0].sCPR[190].nDCStart = 0;    sT[0].sCP[0].sCPR[190].nDCNum= 0;    sT[0].sCP[0].sCPR[190].nSCStart =935;   sT[0].sCP[0].sCPR[190].nAckStart =0;   sT[0].sCP[0].sCPR[190].nAckNum =0;  sT[0].sCP[0].sCPR[190].nSPOffsetCS =4507; sT[0].sCP[0].sCPR[190].nSPOffsetLek =4508;
sT[0].sCP[0].sCPR[191].nDCStart= 936;   sT[0].sCP[0].sCPR[191].nDCNum= 4;    sT[0].sCP[0].sCPR[191].nSCStart= 940;   sT[0].sCP[0].sCPR[191].nAckStart =0;	  sT[0].sCP[0].sCPR[191].nAckNum=0;   sT[0].sCP[0].sCPR[191].nSPOffsetCS= 4525; sT[0].sCP[0].sCPR[191].nSPOffsetLek= 4526;
sT[0].sCP[0].sCPR[192].nDCStart= 941;   sT[0].sCP[0].sCPR[192].nDCNum= 4;    sT[0].sCP[0].sCPR[192].nSCStart= 945;   sT[0].sCP[0].sCPR[192].nAckStart =0;	  sT[0].sCP[0].sCPR[192].nAckNum=0;   sT[0].sCP[0].sCPR[192].nSPOffsetCS= 4543; sT[0].sCP[0].sCPR[192].nSPOffsetLek= 4544;
sT[0].sCP[0].sCPR[193].nDCStart= 946;   sT[0].sCP[0].sCPR[193].nDCNum= 1;    sT[0].sCP[0].sCPR[193].nSCStart= 947;   sT[0].sCP[0].sCPR[193].nAckStart =0;	  sT[0].sCP[0].sCPR[193].nAckNum=0;   sT[0].sCP[0].sCPR[193].nSPOffsetCS= 4559; sT[0].sCP[0].sCPR[193].nSPOffsetLek= 4560;
sT[0].sCP[0].sCPR[194].nDCStart= 949;   sT[0].sCP[0].sCPR[194].nDCNum= 5;    sT[0].sCP[0].sCPR[194].nSCStart= 954;   sT[0].sCP[0].sCPR[194].nAckStart =0;	  sT[0].sCP[0].sCPR[194].nAckNum=0;   sT[0].sCP[0].sCPR[194].nSPOffsetCS= 4581; sT[0].sCP[0].sCPR[194].nSPOffsetLek= 4582;
sT[0].sCP[0].sCPR[195].nDCStart = 0;    sT[0].sCP[0].sCPR[195].nDCNum= 0;    sT[0].sCP[0].sCPR[195].nSCStart =955;   sT[0].sCP[0].sCPR[195].nAckStart =0;   sT[0].sCP[0].sCPR[195].nAckNum =0;  sT[0].sCP[0].sCPR[195].nSPOffsetCS =4583; sT[0].sCP[0].sCPR[195].nSPOffsetLek =4584;







/* TMOK jelsz�mok inicializ�l�sa ciklusban */	
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

	sT[0].sMOT[0].nIEC_SP				= 10;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[0].nIEC_DP				= 10;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[0].nIEC_NM				= 10;		/* M�r�sek IEC kezd�c�me */

/* 42-66  -----------------------------------------------------------*/	
sT[0].sTI[1].nType = TYP_TMOK;

	sT[0].sMOT[1].nIEC_SP				= 26;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[1].nIEC_DP				= 11;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[1].nIEC_NM				= 13;		/* M�r�sek IEC kezd�c�me */
	
/* 42-69  -----------------------------------------------------------*/	
sT[0].sTI[2].nType = TYP_TMOK;

	sT[0].sMOT[2].nIEC_SP				= 42;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[2].nIEC_DP				= 12;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[2].nIEC_NM				= 16;		/* M�r�sek IEC kezd�c�me */
	
/* 42-70  -----------------------------------------------------------*/	
sT[0].sTI[3].nType = TYP_TMOK;

	sT[0].sMOT[3].nIEC_SP				= 58;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[3].nIEC_DP				= 13;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[3].nIEC_NM				= 19;		/* M�r�sek IEC kezd�c�me */
	
/* 42-71  -----------------------------------------------------------*/	
sT[0].sTI[4].nType = TYP_TMOK;

	sT[0].sMOT[4].nIEC_SP				= 74;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[4].nIEC_DP				= 14;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[4].nIEC_NM				= 511;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[4].nNMNum      			= 4;		/* M�r�sek sz�ma */


/* 42-74  -----------------------------------------------------------*/	
sT[0].sTI[5].nType = TYP_TMOK;

	sT[0].sMOT[5].nIEC_SP				= 90;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[5].nIEC_DP				= 15;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[5].nIEC_NM				= 25;		/* M�r�sek IEC kezd�c�me */
	
/* 42-76  -----------------------------------------------------------*/	
sT[0].sTI[6].nType = TYP_TMOK;

	sT[0].sMOT[6].nIEC_SP				= 106;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[6].nIEC_DP				= 16;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[6].nIEC_NM				= 28;		/* M�r�sek IEC kezd�c�me */	

/* 42-83  -----------------------------------------------------------*/	
sT[0].sTI[7].nType = TYP_TMOK;

	sT[0].sMOT[7].nIEC_SP				= 122;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[7].nIEC_DP				= 17;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[7].nIEC_NM				= 191;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[7].nNMNum      			= 4;		/* M�r�sek sz�ma */

	
/* 43-17  -----------------------------------------------------------*/	
sT[0].sTI[8].nType = TYP_TMOK;

	sT[0].sMOT[8].nIEC_SP				= 138;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[8].nIEC_DP				= 18;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[8].nIEC_NM				= 34;		/* M�r�sek IEC kezd�c�me */

/* 49438  -----------------------------------------------------------*/	
sT[0].sTI[9].nType = TYP_TMOK;

	sT[0].sMOT[9].nIEC_SP				= 154;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[9].nIEC_DP				= 19;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[9].nIEC_NM				= 37;		/* M�r�sek IEC kezd�c�me */

/* 42-61  -----------------------------------------------------------*/	
sT[0].sTI[10].nType = TYP_TMOK;

	sT[0].sMOT[10].nIEC_SP				= 170;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[10].nIEC_DP				= 20;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[10].nIEC_NM				= 40;		/* M�r�sek IEC kezd�c�me */

/* 42-26  -----------------------------------------------------------*/	
sT[0].sTI[11].nType = TYP_TMOK;

	sT[0].sMOT[11].nIEC_SP				= 186;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[11].nIEC_DP				= 21;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[11].nIEC_NM				= 43;		/* M�r�sek IEC kezd�c�me */

/* Kondorfa �tj�tsz� -----------------------------------------------------------*/
sT[0].sTI[12].nType = TYP_MOT;

	sT[0].sMOT[12].nIEC_SP				= 202;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[12].nIEC_SP_NUM			= 5;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[12].nIEC_DP_NUM			= 0;
	sT[0].sMOT[12].nNMNum      			= 0;

/* 30-46  -----------------------------------------------------------*/	
sT[0].sTI[13].nType = TYP_TMOK;

	sT[0].sMOT[13].nIEC_SP				= 209;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[13].nIEC_DP				= 22;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[13].nIEC_NM				= 46;		/* M�r�sek IEC kezd�c�me */

/* 35-45  -----------------------------------------------------------*/	
sT[0].sTI[14].nType = TYP_TMOK;

	sT[0].sMOT[14].nIEC_SP				= 225;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[14].nIEC_DP				= 23;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[14].nIEC_NM				= 1458;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[14].nNMNum      		= 4;

/* 35-49  -----------------------------------------------------------*/	
sT[0].sTI[15].nType = TYP_TMOK;

	sT[0].sMOT[15].nIEC_SP				= 241;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[15].nIEC_DP				= 24;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[15].nIEC_NM				= 52;		/* M�r�sek IEC kezd�c�me */

/* 37-15  -----------------------------------------------------------*/	
sT[0].sTI[16].nType = TYP_TMOK;

	sT[0].sMOT[16].nIEC_SP				= 257;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[16].nIEC_DP				= 25;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[16].nIEC_NM				= 55;		/* M�r�sek IEC kezd�c�me */

/* 37-16  -----------------------------------------------------------*/	
sT[0].sTI[17].nType = TYP_TMOK;

	sT[0].sMOT[17].nIEC_SP				= 273;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[17].nIEC_DP				= 26;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[17].nIEC_NM				= 58;		/* M�r�sek IEC kezd�c�me */

/* 37-26  -----------------------------------------------------------*/	
sT[0].sTI[18].nType = TYP_TMOK;

	sT[0].sMOT[18].nIEC_SP				= 289;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[18].nIEC_DP				= 27;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[18].nIEC_NM				= 61;		/* M�r�sek IEC kezd�c�me */

/* 37-28 -----------------------------------------------------------*/	
sT[0].sTI[19].nType = TYP_TMOK;

	sT[0].sMOT[19].nIEC_SP				= 305;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[19].nIEC_DP				= 28;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[19].nIEC_NM				= 64;		/* M�r�sek IEC kezd�c�me */
	
	
/* 37-29 -----------------------------------------------------------*/	
sT[0].sTI[20].nType = TYP_TMOK;

	sT[0].sMOT[20].nIEC_SP				= 321;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[20].nIEC_DP				= 29;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[20].nIEC_NM				= 67;		/* M�r�sek IEC kezd�c�me */

/* 37-50 -----------------------------------------------------------*/	
sT[0].sTI[21].nType = TYP_TMOK;

	sT[0].sMOT[21].nIEC_SP				= 337;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[21].nIEC_DP				= 30;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[21].nIEC_NM				= 70;		/* M�r�sek IEC kezd�c�me */	

/* 51-96 -----------------------------------------------------------*/	
sT[0].sTI[22].nType = TYP_TMOK;

	sT[0].sMOT[22].nIEC_SP				= 353;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[22].nIEC_DP				= 31;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[22].nIEC_NM				= 73;		/* M�r�sek IEC kezd�c�me */		
	

/* 30-27 -----------------------------------------------------------*/	
sT[0].sTI[23].nType = TYP_TMOK;

	sT[0].sMOT[23].nIEC_SP				= 369;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[23].nIEC_DP				= 32;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[23].nIEC_NM				= 76;		/* M�r�sek IEC kezd�c�me */		
	
/* 37-23 -----------------------------------------------------------*/	
sT[0].sTI[24].nType = TYP_TMOK;

	sT[0].sMOT[24].nIEC_SP				= 385;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[24].nIEC_DP				= 33;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[24].nIEC_NM				= 79;		/* M�r�sek IEC kezd�c�me */		
	
/* 37-83 (54-33)-----------------------------------------------------------*/	
sT[0].sTI[25].nType = TYP_TMOK;

	sT[0].sMOT[25].nIEC_SP				= 401;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[25].nIEC_DP				= 34;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[25].nIEC_NM				= 1454;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[25].nNMNum      		= 4;

/* 20-07 -----------------------------------------------------------*/	
sT[0].sTI[26].nType = TYP_TMOK;

	sT[0].sMOT[26].nIEC_SP				= 417;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[26].nIEC_DP				= 35;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[26].nIEC_NM				= 714;		/* M�r�sek IEC kezd�c�me */	
 	sT[0].sMOT[26].nNMNum      			= 4;		/* M�r�sek sz�ma */

/* 20-31 -----------------------------------------------------------*/	
sT[0].sTI[27].nType = TYP_TMOK;

	sT[0].sMOT[27].nIEC_SP				= 433;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[27].nIEC_DP				= 36;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[27].nIEC_NM				= 88;		/* M�r�sek IEC kezd�c�me */	

/* 20-67 -----------------------------------------------------------*/	
sT[0].sTI[28].nType = TYP_TMOK;

	sT[0].sMOT[28].nIEC_SP				= 449;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[28].nIEC_DP				= 37;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[28].nIEC_NM				= 91;		/* M�r�sek IEC kezd�c�me */	

/* 20-05 -----------------------------------------------------------*/	
sT[0].sTI[29].nType = TYP_TMOK;

	sT[0].sMOT[29].nIEC_SP				= 465;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[29].nIEC_DP				= 38;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[29].nIEC_NM				= 94;		/* M�r�sek IEC kezd�c�me */	

/* 20-65 -----------------------------------------------------------*/	
sT[0].sTI[30].nType = TYP_TMOK;

	sT[0].sMOT[30].nIEC_SP				= 481;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[30].nIEC_DP				= 39;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[30].nIEC_NM				= 97;		/* M�r�sek IEC kezd�c�me */	
	
/* Fony�d �tj�tsz� -----------------------------------------------------------*/
sT[0].sTI[31].nType = TYP_MOT;

	sT[0].sMOT[31].nIEC_SP				= 497;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[31].nIEC_SP_NUM			= 5;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[31].nIEC_DP_NUM			= 0;
	sT[0].sMOT[31].nNMNum      			= 0;

/* Kimle DAC -----------------------------------------------------------*/
sT[0].sTI[32].nType = TYP_MOT;

	sT[0].sMOT[32].nIEC_SP				= 504;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[32].nIEC_SP_NUM			= 5;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[32].nIEC_DP_NUM			= 0;
	sT[0].sMOT[32].nNMNum      			= 0;

/* J�nossomorja, dep�nia -----------------------------------------------------------*/
sT[0].sTI[33].nType = TYP_TAL;

		sT[0].sTAL[33].nIEC_SP       		= 511;
		sT[0].sTAL[33].nIEC_OsszevontHiba	= 543;
		sT[0].sTAL[33].nIEC_MT_KommHiba		= 544;
		sT[0].sTAL[33].nIEC_DP       		= 40;
		sT[0].sTAL[33].nIEC_DP_FSZ1  		= 44;
		sT[0].sTAL[33].nIEC_NM				= 100;
		sT[0].sTAL[33].nNMNum		  		= 9;
		sT[0].sTAL[33].nKommStatusNum		= 2;

 	sT[0].sTAL[33].nSP_EXTRA_OFFSET		= 3096;
  sT[0].sTAL[33].nSP_EXTRA_NUM		= 2;


/* 42-67 -----------------------------------------------------------*/	
sT[0].sTI[34].nType = TYP_TMOK;

	sT[0].sMOT[34].nIEC_SP				= 548;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[34].nIEC_DP				= 48;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[34].nIEC_NM				= 111;		/* M�r�sek IEC kezd�c�me */	

/* 91-37 -----------------------------------------------------------*/	
sT[0].sTI[35].nType = TYP_TMOK;

	sT[0].sMOT[35].nIEC_SP				= 564;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[35].nIEC_DP				= 49;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[35].nIEC_NM				= 114;		/* M�r�sek IEC kezd�c�me */	

/* 91-38 -----------------------------------------------------------*/	
sT[0].sTI[36].nType = TYP_TMOK;

	sT[0].sMOT[36].nIEC_SP				= 580;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[36].nIEC_DP				= 50;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[36].nIEC_NM				= 117;		/* M�r�sek IEC kezd�c�me */	

/* 91-40 -----------------------------------------------------------*/	
sT[0].sTI[37].nType = TYP_TMOK;

	sT[0].sMOT[37].nIEC_SP				= 596;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[37].nIEC_DP				= 51;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[37].nIEC_NM				= 120;		/* M�r�sek IEC kezd�c�me */	


/* Berhida, naper�m� -----------------------------------------------------------*/
sT[0].sTI[38].nType = TYP_TAL;

		sT[0].sTAL[38].nIEC_SP       		= 612;
		sT[0].sTAL[38].nIEC_OsszevontHiba	= 644;
		sT[0].sTAL[38].nIEC_MT_KommHiba		= 646;
		sT[0].sTAL[38].nIEC_DP       		= 52;
		sT[0].sTAL[38].nIEC_DP_FSZ1  		= 56;
		sT[0].sTAL[38].nIEC_NM				= 123;
		sT[0].sTAL[38].nNMNum		  		= 9;
		sT[0].sTAL[38].nKommStatusNum		= 2;
   	sT[0].sTAL[38].nSP_EXTRA_OFFSET		= 3114;
    sT[0].sTAL[38].nSP_EXTRA_NUM		= 2;

/* Peremarton I., naper�m� -----------------------------------------------------------*/
sT[0].sTI[39].nType = TYP_TAL;

		sT[0].sTAL[39].nIEC_SP       		= 649;
		sT[0].sTAL[39].nIEC_OsszevontHiba	= 681;
		sT[0].sTAL[39].nIEC_MT_KommHiba		= 682;
		sT[0].sTAL[39].nIEC_DP       		= 60;
		sT[0].sTAL[39].nIEC_DP_FSZ1  		= 64;
		sT[0].sTAL[39].nIEC_NM				= 134;
		sT[0].sTAL[39].nNMNum		  		= 9;
		sT[0].sTAL[39].nKommStatusNum		= 2;
   	sT[0].sTAL[39].nSP_EXTRA_OFFSET		= 3116;
    sT[0].sTAL[39].nSP_EXTRA_NUM		= 2;

/* Peremarton II., naper�m� -----------------------------------------------------------*/
sT[0].sTI[40].nType = TYP_TAL;

		sT[0].sTAL[40].nIEC_SP       		= 686;
		sT[0].sTAL[40].nIEC_OsszevontHiba	= 718;
		sT[0].sTAL[40].nIEC_MT_KommHiba		= 719;
		sT[0].sTAL[40].nIEC_DP       		= 68;
		sT[0].sTAL[40].nIEC_DP_FSZ1  		= 72;
		sT[0].sTAL[40].nIEC_NM				= 145;
		sT[0].sTAL[40].nNMNum		  		= 9;
		sT[0].sTAL[40].nKommStatusNum		= 2;
   	sT[0].sTAL[40].nSP_EXTRA_OFFSET		= 3118;
    sT[0].sTAL[40].nSP_EXTRA_NUM		= 2;

/* 40-55 -----------------------------------------------------------*/	
sT[0].sTI[41].nType = TYP_TMOK;

	sT[0].sMOT[41].nIEC_SP				= 723;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[41].nIEC_DP				= 76;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[41].nIEC_NM				= 156;		/* M�r�sek IEC kezd�c�me */	

/* Kisb�r SEWS, MOSCAD-L -----------------------------------------------*/
sT[0].sTI[42].nType = TYP_MOT;

	sT[0].sMOT[42].nIEC_SP				= 739;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[42].nIEC_SP_NUM			= 14;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[42].nIEC_DP				= 77;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[42].nIEC_DP_NUM			= 10;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[42].nIEC_NM				= 0;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[42].nNMNum				= 0;		/* Anal�g m�r�sek sz�ma*/


/* Peremarton II., naper�m� -----------------------------------------------------------*/
sT[0].sTI[43].nType = TYP_TAL;

		sT[0].sTAL[43].nIEC_SP       		= 755;
		sT[0].sTAL[43].nIEC_OsszevontHiba	= 787;
		sT[0].sTAL[43].nIEC_MT_KommHiba		= 788;
		sT[0].sTAL[43].nIEC_DP       		= 87;
		sT[0].sTAL[43].nIEC_DP_FSZ1  		= 91;
		sT[0].sTAL[43].nIEC_NM				= 161;
		sT[0].sTAL[43].nNMNum		  		= 4;
		sT[0].sTAL[43].nKommStatusNum		= 2;


/* V�rtesacsa �tj�tsz� -----------------------------------------------------------*/
sT[0].sTI[44].nType = TYP_MOT;

	sT[0].sMOT[44].nIEC_SP				= 792;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[44].nIEC_SP_NUM			= 5;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[44].nIEC_DP_NUM			= 0;
	sT[0].sMOT[44].nNMNum      			= 0;

/* 32-77 -----------------------------------------------------------*/	
sT[0].sTI[45].nType = TYP_TMOK;

	sT[0].sMOT[45].nIEC_SP				= 799;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[45].nIEC_DP				= 95;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[45].nIEC_NM				= 165;		/* M�r�sek IEC kezd�c�me */	


/* 14-44 -----------------------------------------------------------*/	
sT[0].sTI[46].nType = TYP_TMOK;

	sT[0].sMOT[46].nIEC_SP				= 815;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[46].nIEC_DP				= 96;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[46].nIEC_NM				= 168;		/* M�r�sek IEC kezd�c�me */		

/* 12-85 -----------------------------------------------------------*/	
sT[0].sTI[47].nType = TYP_TMOK;

	sT[0].sMOT[47].nIEC_SP				= 831;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[47].nIEC_DP				= 97;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[47].nIEC_NM				= 171;		/* M�r�sek IEC kezd�c�me */		

/* 12-96 -----------------------------------------------------------*/	
sT[0].sTI[48].nType = TYP_TMOK;

	sT[0].sMOT[48].nIEC_SP				= 847;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[48].nIEC_DP				= 98;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[48].nIEC_NM				= 174;		/* M�r�sek IEC kezd�c�me */	

/* 14-10 -----------------------------------------------------------*/	
sT[0].sTI[49].nType = TYP_TMOK;

	sT[0].sMOT[49].nIEC_SP				= 863;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[49].nIEC_DP				= 99;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[49].nIEC_NM				= 177;		/* M�r�sek IEC kezd�c�me */	

/* 14-45 -----------------------------------------------------------*/	
sT[0].sTI[50].nType = TYP_TMOK;

	sT[0].sMOT[50].nIEC_SP				= 879;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[50].nIEC_DP				= 100;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[50].nIEC_NM				= 180;		/* M�r�sek IEC kezd�c�me */	

/* Gy�r, Bercs�nyi liget -----------------------------------------------------------*/
sT[0].sTI[51].nType = TYP_TAL;

		sT[0].sTAL[51].nIEC_SP       		= 895;
		sT[0].sTAL[51].nIEC_OsszevontHiba	= 927;
		sT[0].sTAL[51].nIEC_MT_KommHiba		= 928;
		sT[0].sTAL[51].nIEC_DP       		= 101;
		sT[0].sTAL[51].nIEC_DP_FSZ1  		= 105;
		sT[0].sTAL[51].nIEC_NM				= 183;
		sT[0].sTAL[51].nNMNum		  		= 4;
		sT[0].sTAL[51].nKommStatusNum		= 2;

/* Gy�r, T�lt�s utca -----------------------------------------------------------*/
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

/* Gy�r, Rudolph napelempark, AD  -----------------------------------------------------------*/
sT[0].sTI[53].nType = TYP_TAL;

		sT[0].sTAL[53].nIEC_SP       		= 969;
		sT[0].sTAL[53].nIEC_OsszevontHiba	= 1001;
		sT[0].sTAL[53].nIEC_MT_KommHiba		= 1002;
		sT[0].sTAL[53].nIEC_DP       		= 122;
		sT[0].sTAL[53].nIEC_DP_FSZ1  		= 126;
		sT[0].sTAL[53].nIEC_NM				= 195;
		sT[0].sTAL[53].nNMNum		  		= 11;
		sT[0].sTAL[53].nKommStatusNum		= 2;
		
	sT[0].sTAL[53].nIEC_DP_12BIT1		= 130;

	sT[0].sTAL[53].nIEC_DP_2BIT_BK1		= 912;


/* 42-83  -----------------------------------------------------------*/	
sT[0].sTI[54].nType = TYP_TMOK;

	sT[0].sMOT[54].nIEC_SP				= 1080;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[54].nIEC_DP				= 152;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[54].nIEC_NM				= 221;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[54].nNMNum      			= 4;		/* M�r�sek sz�ma */

/* Gy�r, H�d utca -----------------------------------------------*/
sT[0].sTI[55].nType = TYP_MOT;

	sT[0].sMOT[55].nIEC_SP				= 1096;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[55].nIEC_SP_NUM			= 26;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[55].nIEC_DP				= 153;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[55].nIEC_DP_NUM			= 12;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[55].nIEC_NM				= 225;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[55].nNMNum				= 6;		/* Anal�g m�r�sek sz�ma*/

/* Balatonf�red, Castricum -----------------------------------------------*/
sT[0].sTI[56].nType = TYP_MOT;

	sT[0].sMOT[56].nIEC_SP				= 1124;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[56].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[56].nIEC_DP				= 165;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[56].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[56].nIEC_NM				= 231;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[56].nNMNum				= 4;		/* Anal�g m�r�sek sz�ma*/

/* Balatonf�red, VW szerviz -----------------------------------------------*/
sT[0].sTI[57].nType = TYP_MOT;

	sT[0].sMOT[57].nIEC_SP				= 1142;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[57].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[57].nIEC_DP				= 173;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[57].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[57].nIEC_NM				= 235;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[57].nNMNum				= 4;		/* Anal�g m�r�sek sz�ma*/

/* 51-31  -----------------------------------------------------------*/	
sT[0].sTI[58].nType = TYP_TMOK;

	sT[0].sMOT[58].nIEC_SP				= 1160;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[58].nIEC_DP				= 181;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[58].nIEC_NM				= 239;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[58].nNMNum      			= 4;		/* M�r�sek sz�ma */

/* V�rpalota, napelempark  -----------------------------------------------------------*/
sT[0].sTI[59].nType = TYP_TAL;

		sT[0].sTAL[59].nIEC_SP       		= 1176;
		sT[0].sTAL[59].nIEC_OsszevontHiba	= 1208;
		sT[0].sTAL[59].nIEC_MT_KommHiba		= 1209;
		sT[0].sTAL[59].nIEC_DP       		= 182;
		sT[0].sTAL[59].nIEC_DP_FSZ1  		= 186;
		sT[0].sTAL[59].nIEC_NM				= 243;
		sT[0].sTAL[59].nNMNum		  		= 11;
		sT[0].sTAL[59].nKommStatusNum		= 2;
		
/* Balatonudvari,  napelempark -----------------------------------------------*/
sT[0].sTI[60].nType = TYP_MOT;

	sT[0].sMOT[60].nIEC_SP				= 1213;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[60].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[60].nIEC_DP				= 190;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[60].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[60].nIEC_NM				= 254;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[60].nNMNum				= 11;		/* Anal�g m�r�sek sz�ma*/

/* Szil,  napelempark -----------------------------------------------*/
sT[0].sTI[61].nType = TYP_MOT;

	sT[0].sMOT[61].nIEC_SP				= 1231;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[61].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[61].nIEC_DP				= 198;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[61].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[61].nIEC_NM				= 265;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[61].nNMNum				= 11;		/* Anal�g m�r�sek sz�ma*/

/* Front end B -----------------------------------------------------------*/
sT[0].sTI[62].nType = TYP_FRONTEND;

/* Front end D -----------------------------------------------------------*/
sT[0].sTI[63].nType = TYP_FRONTEND;

/* Front end F -----------------------------------------------------------*/
sT[0].sTI[64].nType = TYP_FRONTEND;

/* B redundancia -----------------------------------------------------------*/
sT[0].sTI[65].nType = TYP_FRONTEND;
    
/* 42-68  -----------------------------------------------------------*/	
sT[0].sTI[66].nType = TYP_TMOK;

	sT[0].sMOT[66].nIEC_SP				= 1249;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[66].nIEC_DP				= 260;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[66].nIEC_NM				= 276;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[66].nNMNum      			= 4;		/* M�r�sek sz�ma */
    
/* 64-26  -----------------------------------------------------------*/	
sT[0].sTI[67].nType = TYP_TMOK;

	sT[0].sMOT[67].nIEC_SP				= 1265;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[67].nIEC_DP				= 261;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[67].nIEC_NM				= 280;		/* M�r�sek IEC kezd�c�me */	
    
/* Fert�d,  napelempark -----------------------------------------------*/
sT[0].sTI[68].nType = TYP_MOT;

	sT[0].sMOT[68].nIEC_SP				= 1281;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[68].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[68].nIEC_DP				= 262;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[68].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[68].nIEC_NM				= 283;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[68].nNMNum				= 11;		/* Anal�g m�r�sek sz�ma*/

/* Gy�r,  P�sztor u.  -----------------------------------------------*/
sT[0].sTI[69].nType = TYP_MOT;

	sT[0].sMOT[69].nIEC_SP				= 1299;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[69].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[69].nIEC_DP				= 270;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[69].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[69].nIEC_NM				= 294;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[69].nNMNum				= 6;		/* Anal�g m�r�sek sz�ma*/

/* Sopron,  B�toripar  -----------------------------------------------*/
sT[0].sTI[70].nType = TYP_MOT;

	sT[0].sMOT[70].nIEC_SP				= 1317;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[70].nIEC_SP_NUM			= 20;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[70].nIEC_DP				= 278;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[70].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[70].nIEC_NM				= 300;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[70].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/


/* Sopron,  Pet�fi t�r  -----------------------------------------------*/
sT[0].sTI[71].nType = TYP_MOT;

	sT[0].sMOT[71].nIEC_SP				= 1339;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[71].nIEC_SP_NUM			= 32;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[71].nIEC_DP				= 286;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[71].nIEC_DP_NUM			= 16;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[71].nIEC_NM				= 309;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[71].nNMNum				= 24;		/* Anal�g m�r�sek sz�ma*/

/* Keszt�lc , napelempark 032-18 -----------------------------------------------------------*/
sT[0].sTI[72].nType = TYP_TAL;

		sT[0].sTAL[72].nIEC_SP       		= 1373;
		sT[0].sTAL[72].nIEC_OsszevontHiba	= 1405;
		sT[0].sTAL[72].nIEC_MT_KommHiba		= 1406;
		sT[0].sTAL[72].nIEC_DP       		= 302;
		sT[0].sTAL[72].nIEC_DP_FSZ1  		= 306;
		sT[0].sTAL[72].nIEC_NM				= 333;
		sT[0].sTAL[72].nNMNum		  		= 11;
		sT[0].sTAL[72].nKommStatusNum		= 2;

/* Keszt�lc , napelempark 032-21 -----------------------------------------------------------*/
sT[0].sTI[73].nType = TYP_TAL;

		sT[0].sTAL[73].nIEC_SP       		= 1410;
		sT[0].sTAL[73].nIEC_OsszevontHiba	= 1442;
		sT[0].sTAL[73].nIEC_MT_KommHiba		= 1443;
		sT[0].sTAL[73].nIEC_DP       		= 310;
		sT[0].sTAL[73].nIEC_DP_FSZ1  		= 314;
		sT[0].sTAL[73].nIEC_NM				= 344;
		sT[0].sTAL[73].nNMNum		  		= 11;
		sT[0].sTAL[73].nKommStatusNum		= 2;

/* R�pcelak DAC -----------------------------------------------------------*/
sT[0].sTI[74].nType = TYP_MOT;

	sT[0].sMOT[74].nIEC_SP				= 1501;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[74].nIEC_SP_NUM			= 5;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[74].nIEC_DP_NUM			= 0;
	sT[0].sMOT[74].nNMNum      			= 0;

/* Veszpr�m,  V�r�smarty t�r  -----------------------------------------------*/
sT[0].sTI[75].nType = TYP_MOT;

	sT[0].sMOT[75].nIEC_SP				= 1447;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[75].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[75].nIEC_DP				= 318;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[75].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[75].nIEC_NM				= 355;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[75].nNMNum				= 6;		/* Anal�g m�r�sek sz�ma*/

/* Tapolca,  Y 7-8  -----------------------------------------------*/
sT[0].sTI[76].nType = TYP_MOT;

	sT[0].sMOT[76].nIEC_SP				= 1465;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[76].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[76].nIEC_DP				= 326;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[76].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[76].nIEC_NM				= 361;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[76].nNMNum				= 6;		/* Anal�g m�r�sek sz�ma*/

/* P�pa,  j�gp�lya  -----------------------------------------------*/
sT[0].sTI[77].nType = TYP_MOT;

	sT[0].sMOT[77].nIEC_SP				= 1483;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[77].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[77].nIEC_DP				= 334;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[77].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[77].nIEC_NM				= 367;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[77].nNMNum				= 6;		/* Anal�g m�r�sek sz�ma*/

/* T�t,  055-39  -----------------------------------------------*/
sT[0].sTI[78].nType = TYP_MOT;

	sT[0].sMOT[78].nIEC_SP				= 1508;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[78].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[78].nIEC_DP				= 342;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[78].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[78].nIEC_NM				= 373;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[78].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* 12-18  -----------------------------------------------------------*/	
sT[0].sTI[79].nType = TYP_TMOK;

	sT[0].sMOT[79].nIEC_SP				= 1526;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[79].nIEC_DP				= 350;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[79].nIEC_NM				= 384;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[79].nNMNum				  = 4;		/* Anal�g m�r�sek sz�ma*/

/* Gy�r,  Feh�rv�ri �t  -----------------------------------------------*/
sT[0].sTI[80].nType = TYP_MOT;

	sT[0].sMOT[80].nIEC_SP				= 1542;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[80].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[80].nIEC_DP				= 351;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[80].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[80].nIEC_NM				= 388;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[80].nNMNum				= 6;		/* Anal�g m�r�sek sz�ma*/

/* Gy�m�re , 011-4 PV er�m� -----------------------------------------------------------*/
sT[0].sTI[81].nType = TYP_TAL;

		sT[0].sTAL[81].nIEC_SP       		= 1560;
		sT[0].sTAL[81].nIEC_OsszevontHiba	= 1592;
		sT[0].sTAL[81].nIEC_MT_KommHiba		= 1593;
		sT[0].sTAL[81].nIEC_DP       		= 359;
		sT[0].sTAL[81].nIEC_DP_FSZ1  		= 363;
		sT[0].sTAL[81].nIEC_NM				= 394;
		sT[0].sTAL[81].nNMNum		  		= 11;
		sT[0].sTAL[81].nKommStatusNum		= 2;

 	sT[0].sTAL[81].nIEC_DP_2BIT1 		= 415;
	sT[0].sTAL[81].nIEC_DP_2BIT_KINT1	= 913;
	sT[0].sTAL[81].nIEC_DP_2BIT_BENT1	= 912;

  
  sT[0].sTAL[81].nIEC_DP_12BIT2		= 416;
	sT[0].sTAL[81].nIEC_DP_2BIT_BK2	= 920;


/* Kimle , 1058,1059,1060 PV er�m� -----------------------------------------------------------*/
sT[0].sTI[82].nType = TYP_TAL2;

		sT[0].sTAL[82].nIEC_SP       		= 1597;
		sT[0].sTAL[82].nIEC_OsszevontHiba	= 1629;
		sT[0].sTAL[82].nIEC_MT_KommHiba		= 1630;
		sT[0].sTAL[82].nIEC_DP       		= 367;
		sT[0].sTAL[82].nIEC_DP_FSZ1  		= 371;
		sT[0].sTAL[82].nIEC_NM				= 405;
		sT[0].sTAL[82].nNMNum		  		= 19;
		sT[0].sTAL[82].nKommStatusNum		= 2;
  	sT[0].sTAL[82].nSP_EXTRA_OFFSET		= 1632;
	  sT[0].sTAL[82].nSP_EXTRA_NUM		= 16;
  	sT[0].sTAL[82].nDP_EXTRA_OFFSET		= 375;
	  sT[0].sTAL[82].nDP_EXTRA_NUM		= 8;

/* Veszpr�m,  Kis Tesco  -----------------------------------------------*/
sT[0].sTI[83].nType = TYP_MOT;

	sT[0].sMOT[83].nIEC_SP				= 1650;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[83].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[83].nIEC_DP				= 383;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[83].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[83].nIEC_NM				= 424;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[83].nNMNum				= 6;		/* Anal�g m�r�sek sz�ma*/

/* Veszpr�m,  Kis Tesco  -----------------------------------------------*/
sT[0].sTI[84].nType = TYP_MOT;

	sT[0].sMOT[84].nIEC_SP				= 1668;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[84].nIEC_SP_NUM			= 20;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[84].nIEC_DP				= 391;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[84].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[84].nIEC_NM				= 430;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[84].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Ganna , 044-2 PV er�m� -----------------------------------------------------------*/
sT[0].sTI[85].nType = TYP_TAL2;

		sT[0].sTAL[85].nIEC_SP       		= 1690;
		sT[0].sTAL[85].nIEC_OsszevontHiba	= 1722;
		sT[0].sTAL[85].nIEC_MT_KommHiba		= 1723;
		sT[0].sTAL[85].nIEC_DP       		= 399;
		sT[0].sTAL[85].nIEC_DP_FSZ1  		= 403;
		sT[0].sTAL[85].nIEC_NM				= 439;
		sT[0].sTAL[85].nNMNum		  		= 19;
		sT[0].sTAL[85].nKommStatusNum		= 2;
  	sT[0].sTAL[85].nSP_EXTRA_OFFSET		= 1725;
	  sT[0].sTAL[85].nSP_EXTRA_NUM		= 16;
  	sT[0].sTAL[85].nDP_EXTRA_OFFSET		= 407;
	  sT[0].sTAL[85].nDP_EXTRA_NUM		= 8;

/* Alcs�tdoboz,  071-11  -----------------------------------------------*/
sT[0].sTI[86].nType = TYP_MOT;

	sT[0].sMOT[86].nIEC_SP				= 1743;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[86].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[86].nIEC_DP				= 417;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[86].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[86].nIEC_NM				= 458;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[86].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Pusztamiske , 0133-6 PV er�m� -----------------------------------------------------------*/
sT[0].sTI[87].nType = TYP_TAL;

		sT[0].sTAL[87].nIEC_SP       		= 1761;
		sT[0].sTAL[87].nIEC_OsszevontHiba	= 1793;
		sT[0].sTAL[87].nIEC_MT_KommHiba		= 1794;
		sT[0].sTAL[87].nIEC_DP       		= 425;
		sT[0].sTAL[87].nIEC_DP_FSZ1  		= 429;
		sT[0].sTAL[87].nIEC_NM				= 469;
		sT[0].sTAL[87].nNMNum		  		= 9;
		sT[0].sTAL[87].nKommStatusNum		= 2;

  	sT[0].sTAL[87].nSP_EXTRA_OFFSET		= 1796;
	  sT[0].sTAL[87].nSP_EXTRA_NUM		= 2;


 	sT[0].sTAL[87].nIEC_DP_2BIT1 		= 433;
	sT[0].sTAL[87].nIEC_DP_2BIT_KINT1	= 913;
	sT[0].sTAL[87].nIEC_DP_2BIT_BENT1	= 912;

  
  sT[0].sTAL[87].nIEC_DP_12BIT2		= 434;
	sT[0].sTAL[87].nIEC_DP_2BIT_BK2	= 920;

/* M�ny , 001706-200-B PV er�m� -----------------------------------------------------------*/
sT[0].sTI[88].nType = TYP_TAL;

		sT[0].sTAL[88].nIEC_SP       		= 1800;
		sT[0].sTAL[88].nIEC_OsszevontHiba	= 1832;
		sT[0].sTAL[88].nIEC_MT_KommHiba		= 1833;
		sT[0].sTAL[88].nIEC_DP       		= 435;
		sT[0].sTAL[88].nIEC_DP_FSZ1  		= 439;
		sT[0].sTAL[88].nIEC_NM				= 478;
		sT[0].sTAL[88].nNMNum		  		= 9;
		sT[0].sTAL[88].nKommStatusNum		= 2;

  	sT[0].sTAL[88].nSP_EXTRA_OFFSET		= 1835;
	  sT[0].sTAL[88].nSP_EXTRA_NUM		= 2;

/* Gy�r, DNV24  -----------------------------------------------*/
sT[0].sTI[89].nType = TYP_MOT;

	sT[0].sMOT[89].nIEC_SP				= 1839;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[89].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[89].nIEC_DP				= 443;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[89].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[89].nIEC_NM				= 487;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[89].nNMNum				= 6;		/* Anal�g m�r�sek sz�ma*/

/* Cs�r, 65/1 -----------------------------------------------*/
sT[0].sTI[90].nType = TYP_MOT;

	sT[0].sMOT[90].nIEC_SP				= 1857;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[90].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[90].nIEC_DP				= 451;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[90].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[90].nIEC_NM				= 493;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[90].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Cs�r, 65/2 -----------------------------------------------*/
sT[0].sTI[91].nType = TYP_MOT;

	sT[0].sMOT[91].nIEC_SP				= 1875;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[91].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[91].nIEC_DP				= 459;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[91].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[91].nIEC_NM				= 502;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[91].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Gy�r, Marcal10 -----------------------------------------------*/
sT[0].sTI[92].nType = TYP_MOT;

	sT[0].sMOT[92].nIEC_SP				= 1893;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[92].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[92].nIEC_DP				= 467;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[92].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[92].nIEC_NM				= 515;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[92].nNMNum				= 6;		/* Anal�g m�r�sek sz�ma*/

/* Mayargencs, 184hrsz. PV er�m� -----------------------------------------------*/
sT[0].sTI[93].nType = TYP_MOT;

	sT[0].sMOT[93].nIEC_SP				= 1911;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[93].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[93].nIEC_DP				= 475;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[93].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[93].nIEC_NM				= 521;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[93].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* 50-63  -----------------------------------------------------------*/	
sT[0].sTI[94].nType = TYP_TMOK;

	sT[0].sMOT[94].nIEC_SP				= 1929;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[94].nIEC_DP				= 483;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[94].nIEC_NM				= 530;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[94].nNMNum				  = 4;		/* Anal�g m�r�sek sz�ma*/

/* T�t I. 02/2 PV er�m� -----------------------------------------------*/
sT[0].sTI[95].nType = TYP_TAL;

		sT[0].sTAL[95].nIEC_SP       		= 1945;
		sT[0].sTAL[95].nIEC_OsszevontHiba	= 1977;
		sT[0].sTAL[95].nIEC_MT_KommHiba		= 1978;
		sT[0].sTAL[95].nIEC_DP       		= 484;
		sT[0].sTAL[95].nIEC_DP_FSZ1  		= 488;
		sT[0].sTAL[95].nIEC_NM				= 534;
		sT[0].sTAL[95].nNMNum		  		= 9;
		sT[0].sTAL[95].nKommStatusNum		= 2;

  	sT[0].sTAL[95].nSP_EXTRA_OFFSET		= 1980;
	  sT[0].sTAL[95].nSP_EXTRA_NUM		= 2;

/* Devecser 09/2 PV er�m� -----------------------------------------------*/
sT[0].sTI[96].nType = TYP_TAL;

		sT[0].sTAL[96].nIEC_SP       		= 1984;
		sT[0].sTAL[96].nIEC_OsszevontHiba	= 2016;
		sT[0].sTAL[96].nIEC_MT_KommHiba		= 2017;
		sT[0].sTAL[96].nIEC_DP       		= 492;
		sT[0].sTAL[96].nIEC_DP_FSZ1  		= 496;
		sT[0].sTAL[96].nIEC_NM				= 543;
		sT[0].sTAL[96].nNMNum		  		= 9;
		sT[0].sTAL[96].nKommStatusNum		= 2;

  	sT[0].sTAL[96].nSP_EXTRA_OFFSET		= 2019;
	  sT[0].sTAL[96].nSP_EXTRA_NUM		= 2;

/* Kir�lyszentistv�n 036/4 er�m� -----------------------------------------------*/
sT[0].sTI[97].nType = TYP_TAL;

		sT[0].sTAL[97].nIEC_SP       		= 2023;
		sT[0].sTAL[97].nIEC_OsszevontHiba	= 2055;
		sT[0].sTAL[97].nIEC_MT_KommHiba		= 2056;
		sT[0].sTAL[97].nIEC_DP       		= 500;
		sT[0].sTAL[97].nIEC_DP_FSZ1  		= 504;
		sT[0].sTAL[97].nIEC_NM				= 552;
		sT[0].sTAL[97].nNMNum		  		= 9;
		sT[0].sTAL[97].nKommStatusNum		= 2;

  	sT[0].sTAL[97].nSP_EXTRA_OFFSET		= 2058;
	  sT[0].sTAL[97].nSP_EXTRA_NUM		= 2;

/* Sopron, Kossuth u. -----------------------------------------------*/
sT[0].sTI[98].nType = TYP_MOT;

	sT[0].sMOT[98].nIEC_SP				= 2062;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[98].nIEC_SP_NUM			= 26;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[98].nIEC_DP				= 508;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[98].nIEC_DP_NUM			= 12;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[98].nIEC_NM				= 561;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[98].nNMNum				= 12;		/* Anal�g m�r�sek sz�ma*/

/* Kaj�rp�c 0251/11 PV er�m� -----------------------------------------------*/
sT[0].sTI[99].nType = TYP_MOT;

	sT[0].sMOT[99].nIEC_SP				= 2090;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[99].nIEC_SP_NUM			= 22;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[99].nIEC_DP				= 520;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[99].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[99].nIEC_NM				= 573;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[99].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Kaj�rp�c 0241/74 PV er�m� -----------------------------------------------*/
sT[0].sTI[100].nType = TYP_MOT;

	sT[0].sMOT[100].nIEC_SP				= 2114;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[100].nIEC_SP_NUM			= 22;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[100].nIEC_DP				= 528;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[100].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[100].nIEC_NM				= 582;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[100].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Nagyv�zsony 099/2 PV er�m� -----------------------------------------------*/
sT[0].sTI[101].nType = TYP_MOT;

	sT[0].sMOT[101].nIEC_SP				= 2138;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[101].nIEC_SP_NUM			= 22;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[101].nIEC_DP				= 536;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[101].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[101].nIEC_NM				= 591;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[101].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Veszpr�m 071/8 PV er�m� -----------------------------------------------*/
sT[0].sTI[102].nType = TYP_MOT;

	sT[0].sMOT[102].nIEC_SP				= 2162;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[102].nIEC_SP_NUM			= 22;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[102].nIEC_DP				= 544;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[102].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[102].nIEC_NM				= 600;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[102].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Fert�sz�plak 424/2 PV er�m� -----------------------------------------------*/
sT[0].sTI[103].nType = TYP_MOT;

	sT[0].sMOT[103].nIEC_SP				= 2186;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[103].nIEC_SP_NUM			= 22;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[103].nIEC_DP				= 552;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[103].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[103].nIEC_NM				= 609;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[103].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Sopron, Sport u. -----------------------------------------------*/
sT[0].sTI[104].nType = TYP_MOT;

	sT[0].sMOT[104].nIEC_SP				= 2210;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[104].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[104].nIEC_DP				= 560;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[104].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[104].nIEC_NM				= 618;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[104].nNMNum				= 6;		/* Anal�g m�r�sek sz�ma*/

/* Zalameggyes 62 PV er�m� -----------------------------------------------*/
sT[0].sTI[105].nType = TYP_MOT;

	sT[0].sMOT[105].nIEC_SP				= 2228;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[105].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[105].nIEC_DP				= 568;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[105].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[105].nIEC_NM				= 624;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[105].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Sopron Z�rgy�r -----------------------------------------------*/
sT[0].sTI[106].nType = TYP_MOT;

	sT[0].sMOT[106].nIEC_SP				= 2246;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[106].nIEC_SP_NUM			= 20;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[106].nIEC_DP				= 576;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[106].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[106].nIEC_NM				= 633;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[106].nNMNum				= 12;		/* Anal�g m�r�sek sz�ma*/

/* K�v�g��rs 0193/2 PV er�m�  -----------------------------------------------*/
sT[0].sTI[107].nType = TYP_TAL;

		sT[0].sTAL[107].nIEC_SP       		= 2268;
		sT[0].sTAL[107].nIEC_OsszevontHiba	= 2300;
		sT[0].sTAL[107].nIEC_MT_KommHiba		= 2301;
		sT[0].sTAL[107].nIEC_DP       		= 584;
		sT[0].sTAL[107].nIEC_DP_FSZ1  		= 588;
		sT[0].sTAL[107].nIEC_NM				= 645;
		sT[0].sTAL[107].nNMNum		  		= 9;
		sT[0].sTAL[107].nKommStatusNum		= 2;

  	sT[0].sTAL[107].nSP_EXTRA_OFFSET		= 2303;
	  sT[0].sTAL[107].nSP_EXTRA_NUM		= 2;

/* 72-29  -----------------------------------------------------------*/	
sT[0].sTI[108].nType = TYP_TMOK;

	sT[0].sMOT[108].nIEC_SP				= 2307;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[108].nIEC_DP				= 592;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[108].nIEC_NM				= 654;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[108].nNMNum				  = 4;		/* Anal�g m�r�sek sz�ma*/

/* 54-90  -----------------------------------------------------------*/	
sT[0].sTI[109].nType = TYP_TMOK;

	sT[0].sMOT[109].nIEC_SP				= 2323;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[109].nIEC_DP				= 593;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[109].nIEC_NM				= 658;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[109].nNMNum				  = 4;		/* Anal�g m�r�sek sz�ma*/

/* V�rpalota 4137/17 PV er�m� -----------------------------------------------*/
sT[0].sTI[110].nType = TYP_MOT;

	sT[0].sMOT[110].nIEC_SP				= 2339;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[110].nIEC_SP_NUM			= 22;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[110].nIEC_DP				= 594;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[110].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[110].nIEC_NM				= 662;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[110].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* V�rpalota 4137/3 PV er�m� -----------------------------------------------*/
sT[0].sTI[111].nType = TYP_MOT;

	sT[0].sMOT[111].nIEC_SP				= 2363;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[111].nIEC_SP_NUM			= 22;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[111].nIEC_DP				= 602;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[111].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[111].nIEC_NM				= 671;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[111].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* 37-63  -----------------------------------------------------------*/	
sT[0].sTI[112].nType = TYP_TMOK;

	sT[0].sMOT[112].nIEC_SP				= 2387;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[112].nIEC_DP				= 610;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[112].nIEC_NM				= 680;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[112].nNMNum				  = 4;		/* Anal�g m�r�sek sz�ma*/

/* 37-65  -----------------------------------------------------------*/	
sT[0].sTI[113].nType = TYP_TMOK;

	sT[0].sMOT[113].nIEC_SP				= 2403;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[113].nIEC_DP				= 611;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[113].nIEC_NM				= 684;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[113].nNMNum				  = 4;		/* Anal�g m�r�sek sz�ma*/

/* 37-66  -----------------------------------------------------------*/	
sT[0].sTI[114].nType = TYP_TMOK;

	sT[0].sMOT[114].nIEC_SP				= 2419;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[114].nIEC_DP				= 612;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[114].nIEC_NM				= 688;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[114].nNMNum				  = 4;		/* Anal�g m�r�sek sz�ma*/

/* 52-51  -----------------------------------------------------------*/	
sT[0].sTI[115].nType = TYP_TMOK;

	sT[0].sMOT[115].nIEC_SP				= 2435;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[115].nIEC_DP				= 613;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[115].nIEC_NM				= 692;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[115].nNMNum				  = 4;		/* Anal�g m�r�sek sz�ma*/

/* Vig�ndpetend 012/1_1 PV er�m� -----------------------------------------------*/
sT[0].sTI[116].nType = TYP_MOT;

	sT[0].sMOT[116].nIEC_SP				= 2451;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[116].nIEC_SP_NUM			= 22;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[116].nIEC_DP				= 614;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[116].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[116].nIEC_NM				= 696;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[116].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Vig�ndpetend 012/1_2 PV er�m� -----------------------------------------------*/
sT[0].sTI[117].nType = TYP_MOT;

	sT[0].sMOT[117].nIEC_SP				= 2473;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[117].nIEC_SP_NUM			= 22;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[117].nIEC_DP				= 622;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[117].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[117].nIEC_NM				= 705;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[117].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Bicske 041/8 OVIT PV er�m� -----------------------------------------------*/
sT[0].sTI[118].nType = TYP_MOT;

	sT[0].sMOT[118].nIEC_SP				= 2495;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[118].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[118].nIEC_DP				= 630;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[118].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[118].nIEC_NM				= 718;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[118].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Veszpr�m 071/39 OVIT PV er�m� -----------------------------------------------*/
sT[0].sTI[119].nType = TYP_MOT;

	sT[0].sMOT[119].nIEC_SP				= 2513;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[119].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[119].nIEC_DP				= 638;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[119].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[119].nIEC_NM				= 727;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[119].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/
  
/* Gy�r, Selyem utca -----------------------------------------------------------*/
sT[0].sTI[120].nType = TYP_TAL;

		sT[0].sTAL[120].nIEC_SP       		= 2531;
		sT[0].sTAL[120].nIEC_OsszevontHiba	= 2563;
		sT[0].sTAL[120].nIEC_MT_KommHiba		= 2564;
		sT[0].sTAL[120].nIEC_DP       		= 646;
		sT[0].sTAL[120].nIEC_DP_FSZ1  		= 650;
		sT[0].sTAL[120].nIEC_NM				= 736;
		sT[0].sTAL[120].nNMNum		  		= 4;
		sT[0].sTAL[120].nKommStatusNum		= 2;
		
	sT[0].sTAL[120].nIEC_DP_12BIT1		= 655;
	sT[0].sTAL[120].nIEC_DP_2BIT_BK1		= 925;

 	sT[0].sTAL[120].nIEC_DP_2BIT1 		= 654;
	sT[0].sTAL[120].nIEC_DP_2BIT_KINT1	= 912;
	sT[0].sTAL[120].nIEC_DP_2BIT_BENT1	= 913;
  
/* Gy�r, 0747/9 PV er�m� -----------------------------------------------*/
sT[0].sTI[121].nType = TYP_MOT;

	sT[0].sMOT[121].nIEC_SP				= 2568;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[121].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[121].nIEC_DP				= 656;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[121].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[121].nIEC_NM				= 740;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[121].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* T�t, 055/39 PV er�m� -----------------------------------------------*/
sT[0].sTI[122].nType = TYP_MOT;

	sT[0].sMOT[122].nIEC_SP				= 2586;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[122].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[122].nIEC_DP				= 664;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[122].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[122].nIEC_NM				= 749;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[122].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Gy�r, R�ba g�zmotor -----------------------------------------------------------*/
sT[0].sTI[123].nType = TYP_TAL;

		sT[0].sTAL[123].nIEC_SP       		= 2604;
		sT[0].sTAL[123].nIEC_OsszevontHiba	= 2636;
		sT[0].sTAL[123].nIEC_MT_KommHiba		= 2637;
		sT[0].sTAL[123].nIEC_DP       		= 672;
		sT[0].sTAL[123].nIEC_DP_FSZ1  		= 676;
		sT[0].sTAL[123].nIEC_NM				= 758;
		sT[0].sTAL[123].nNMNum		  		= 9;
		sT[0].sTAL[123].nKommStatusNum		= 2;
		
/* G�ny�, 1182 PV er�m� -----------------------------------------------------------*/
sT[0].sTI[124].nType = TYP_TAL2;

		sT[0].sTAL[124].nIEC_SP       		= 2641;
		sT[0].sTAL[124].nIEC_OsszevontHiba	= 2673;
		sT[0].sTAL[124].nIEC_MT_KommHiba		= 2674;
		sT[0].sTAL[124].nIEC_DP       		= 680;
		sT[0].sTAL[124].nIEC_DP_FSZ1  		= 684;
		sT[0].sTAL[124].nIEC_NM				= 767;
		sT[0].sTAL[124].nNMNum		  		= 9;
		sT[0].sTAL[124].nKommStatusNum		= 2;
  	sT[0].sTAL[124].nSP_EXTRA_OFFSET		= 2676;
	  sT[0].sTAL[124].nSP_EXTRA_NUM		= 8;
  	sT[0].sTAL[124].nDP_EXTRA_OFFSET		= 688;
	  sT[0].sTAL[124].nDP_EXTRA_NUM		= 2;

/* Fert�r�kos 030/5 PV er�m� ----------------------------------------------*/
  sT[0].sTI[125].nType = TYP_TAL;
  
	sT[0].sTAL[125].nIEC_SP       		= 2686;
	sT[0].sTAL[125].nIEC_OsszevontHiba	= 2718;
	sT[0].sTAL[125].nIEC_MT_KommHiba	= 2719;
	sT[0].sTAL[125].nKommStatusNum		= 2;	
	sT[0].sTAL[125].nIEC_DP       		= 690;
	sT[0].sTAL[125].nIEC_DP_FSZ1  		= 694;
	sT[0].sTAL[125].nIEC_NM				= 776;
	sT[0].sTAL[125].nNMNum		  		= 9;
    
 	sT[0].sTAL[125].nIEC_DP_2BIT1 		= 698;
	sT[0].sTAL[125].nIEC_DP_2BIT_KINT1	= 913;
	sT[0].sTAL[125].nIEC_DP_2BIT_BENT1	= 912;

  
  sT[0].sTAL[125].nIEC_DP_12BIT2		= 699;
	sT[0].sTAL[125].nIEC_DP_2BIT_BK2	= 920;
  
	sT[0].sTAL[125].nSP_EXTRA_OFFSET		= 2721;
  sT[0].sTAL[125].nSP_EXTRA_NUM		= 2;

                                                
/* Zalav�g 044/3, PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[126].nType = TYP_MOT;

	sT[0].sMOT[126].nIEC_SP				= 2725;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[126].nIEC_SP_NUM			= 26;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[126].nIEC_DP				= 700;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[126].nIEC_DP_NUM			= 16;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[126].nIEC_NM				= 785;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[126].nNMNum				= 18;		/* Anal�g m�r�sek sz�ma*/

/* Csorna, 0123/3 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[127].nType = TYP_MOT;

	sT[0].sMOT[127].nIEC_SP				= 2781;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[127].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[127].nIEC_DP				= 732;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[127].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[127].nIEC_NM				= 821;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[127].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Fert�sz�plak 424/5 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[128].nType = TYP_MOT;

	sT[0].sMOT[128].nIEC_SP				= 2799;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[128].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[128].nIEC_DP				= 740;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[128].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[128].nIEC_NM				= 830;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[128].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* �sk� 077/15 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[129].nType = TYP_MOT;

	sT[0].sMOT[129].nIEC_SP				= 2817;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[129].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[129].nIEC_DP				= 748;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[129].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[129].nIEC_NM				= 839;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[129].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* �sk� 077/17 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[130].nType = TYP_MOT;

	sT[0].sMOT[130].nIEC_SP				= 2835;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[130].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[130].nIEC_DP				= 756;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[130].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[130].nIEC_NM				= 848;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[130].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* 37-81  ----------------------------------------------------------------*/
sT[0].sTI[131].nType = TYP_TMOK;

	sT[0].sMOT[131].nIEC_SP				= 2853;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[131].nIEC_DP				= 764;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[131].nIEC_NM				= 857;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[131].nNMNum				  = 4;		/* Anal�g m�r�sek sz�ma*/

/* 61-67  ----------------------------------------------------------------*/
sT[0].sTI[132].nType = TYP_TMOK;

	sT[0].sMOT[132].nIEC_SP				= 2869;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[132].nIEC_DP				= 765;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[132].nIEC_NM				= 861;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[132].nNMNum				  = 4;		/* Anal�g m�r�sek sz�ma*/

/* Csabrendek 0469 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[133].nType = TYP_MOT;

	sT[0].sMOT[133].nIEC_SP				= 2885;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[133].nIEC_SP_NUM			= 64;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[133].nIEC_DP				= 766;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[133].nIEC_DP_NUM			= 32;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[133].nIEC_NM				= 865;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[133].nNMNum				= 38;		/* Anal�g m�r�sek sz�ma*/

/* Kisb�r Iskola u.  ----------------------------------------------------------------*/
sT[0].sTI[134].nType = TYP_MOT;

	sT[0].sMOT[134].nIEC_SP				= 2951;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[134].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[134].nIEC_DP				= 798;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[134].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[134].nIEC_NM				= 903;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[134].nNMNum				= 6;		/* Anal�g m�r�sek sz�ma*/

/* Gy�r 0452/6 �rki PV er�m� ----------------------------------------------*/
  sT[0].sTI[135].nType = TYP_TAL;
  
	sT[0].sTAL[135].nIEC_SP       		= 2969;
	sT[0].sTAL[135].nIEC_OsszevontHiba	= 3001;
	sT[0].sTAL[135].nIEC_MT_KommHiba	= 3002;
	sT[0].sTAL[135].nKommStatusNum		= 2;	
	sT[0].sTAL[135].nIEC_DP       		= 806;
	sT[0].sTAL[135].nIEC_DP_FSZ1  		= 810;
	sT[0].sTAL[135].nIEC_NM				= 909;
	sT[0].sTAL[135].nNMNum		  		= 9;
 
 	sT[0].sTAL[135].nSP_EXTRA_OFFSET		= 3004;
  sT[0].sTAL[135].nSP_EXTRA_NUM		= 2;

    
/* Szentkir�lyszabadja 067/6  ----------------------------------------------------------------*/
sT[0].sTI[136].nType = TYP_MOT;

	sT[0].sMOT[136].nIEC_SP				= 3008;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[136].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[136].nIEC_DP				= 814;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[136].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[136].nIEC_NM				= 918;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[136].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Fels��rs 03/41  ----------------------------------------------------------------*/
sT[0].sTI[137].nType = TYP_MOT;

	sT[0].sMOT[137].nIEC_SP				= 3026;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[137].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[137].nIEC_DP				= 822;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[137].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[137].nIEC_NM				= 927;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[137].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* V�rpalota 4156/29  ----------------------------------------------------------------*/
sT[0].sTI[138].nType = TYP_MOT;

	sT[0].sMOT[138].nIEC_SP				= 3044;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[138].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[138].nIEC_DP				= 830;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[138].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[138].nIEC_NM				= 936;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[138].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* 54-91  ----------------------------------------------------------------*/
sT[0].sTI[139].nType = TYP_TMOK;

	sT[0].sMOT[139].nIEC_SP				= 3062;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[139].nIEC_DP				= 838;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[139].nIEC_NM				= 945;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[139].nNMNum				  = 4;		/* Anal�g m�r�sek sz�ma*/

/* Kolont�r 324  ----------------------------------------------------------------*/
sT[0].sTI[140].nType = TYP_MOT;

	sT[0].sMOT[140].nIEC_SP				= 3078;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[140].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[140].nIEC_DP				= 839;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[140].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[140].nIEC_NM				= 949;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[140].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* 10-13  ----------------------------------------------------------------*/
sT[0].sTI[141].nType = TYP_TMOK;

	sT[0].sMOT[141].nIEC_SP				= 3098;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[141].nIEC_DP				= 847;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[141].nIEC_NM				= 958;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[141].nNMNum				  = 4;		/* Anal�g m�r�sek sz�ma*/

/* Fert�szentmikl�s DAC -----------------------------------------------------------*/
sT[0].sTI[142].nType = TYP_MOT;

	sT[0].sMOT[142].nIEC_SP				= 3120;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[142].nIEC_SP_NUM			= 5;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[142].nIEC_DP_NUM			= 0;
	sT[0].sMOT[142].nNMNum      			= 0;

/* V�rpalota 0192/4 PV er�m� ----------------------------------------------*/
  sT[0].sTI[143].nType = TYP_TAL;
  
	sT[0].sTAL[143].nIEC_SP       		= 3127;
	sT[0].sTAL[143].nIEC_OsszevontHiba	= 3159;
	sT[0].sTAL[143].nIEC_MT_KommHiba	= 3160;
	sT[0].sTAL[143].nKommStatusNum		= 2;	
	sT[0].sTAL[143].nIEC_DP       		= 848;
	sT[0].sTAL[143].nIEC_DP_FSZ1  		= 852;
	sT[0].sTAL[143].nIEC_NM				= 962;
	sT[0].sTAL[143].nNMNum		  		= 9;
 
 	sT[0].sTAL[143].nSP_EXTRA_OFFSET		= 3162;
  sT[0].sTAL[143].nSP_EXTRA_NUM		= 2;

/* R�vf�l�p Cs�rda u.  ----------------------------------------------------------------*/
sT[0].sTI[144].nType = TYP_MOT;

	sT[0].sMOT[144].nIEC_SP				= 3166;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[144].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[144].nIEC_DP				= 856;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[144].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[144].nIEC_NM				= 971;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[144].nNMNum				= 6;		/* Anal�g m�r�sek sz�ma*/

/* P�csely Bag�hegy  ----------------------------------------------------------------*/
sT[0].sTI[145].nType = TYP_MOT;

	sT[0].sMOT[145].nIEC_SP				= 3184;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[145].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[145].nIEC_DP				= 864;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[145].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[145].nIEC_NM				= 977;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[145].nNMNum				= 6;		/* Anal�g m�r�sek sz�ma*/

/* Alcs�tdoboz 071/11/2 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[146].nType = TYP_MOT;

	sT[0].sMOT[146].nIEC_SP				= 3236;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[146].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[146].nIEC_DP				= 904;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[146].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[146].nIEC_NM				= 992;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[146].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Gy�r, Ipari park tr. �llom�s  ----------------------------------------------------------------*/
sT[0].sTI[147].nType = TYP_MOT;

	sT[0].sMOT[147].nIEC_SP				= 3254;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[147].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[147].nIEC_DP				= 912;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[147].nIEC_DP_NUM			= 2;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[147].nIEC_NM				= 0;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[147].nNMNum				= 0;		/* Anal�g m�r�sek sz�ma*/

/* Fert�d 072/14,15,16,19,20 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[148].nType = TYP_MOT;

	sT[0].sMOT[148].nIEC_SP				= 3272;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[148].nIEC_SP_NUM			= 32;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[148].nIEC_DP				= 914;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[148].nIEC_DP_NUM			= 32;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[148].nIEC_NM				= 1001;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[148].nNMNum				= 28;		/* Anal�g m�r�sek sz�ma*/

/* 64-29  ----------------------------------------------------------------*/
sT[0].sTI[149].nType = TYP_TMOK;

	sT[0].sMOT[149].nIEC_SP				= 3306;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[149].nIEC_DP				= 946;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[149].nIEC_NM				= 1029;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[149].nNMNum				  = 4;		/* Anal�g m�r�sek sz�ma*/
  
/* Gy�r AUDI 0113/642 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[150].nType = TYP_MOT;

	sT[0].sMOT[150].nIEC_SP				= 3202;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[150].nIEC_SP_NUM			= 32;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[150].nIEC_DP				= 872;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[150].nIEC_DP_NUM			= 32;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[150].nIEC_NM				= 983;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[150].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/
  
/* 52-32  ----------------------------------------------------------------*/
sT[0].sTI[151].nType = TYP_TMOK;

	sT[0].sMOT[151].nIEC_SP				= 3322;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[151].nIEC_DP				= 947;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[151].nIEC_NM				= 1033;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[151].nNMNum				  = 4;		/* Anal�g m�r�sek sz�ma*/

  /* Tapolca 0350/11-16 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[152].nType = TYP_MOT;

	sT[0].sMOT[152].nIEC_SP				= 3338;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[152].nIEC_SP_NUM			= 48;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[152].nIEC_DP				= 948;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[152].nIEC_DP_NUM			= 24;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[152].nIEC_NM				= 1037;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[152].nNMNum				= 19;		/* Anal�g m�r�sek sz�ma*/

/* 12-80  ----------------------------------------------------------------*/
sT[0].sTI[153].nType = TYP_TMOK;

	sT[0].sMOT[153].nIEC_SP				= 3388;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[153].nIEC_DP				= 972;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[153].nIEC_NM				= 1056;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[153].nNMNum				  = 4;		/* Anal�g m�r�sek sz�ma*/

/* Gy�r, Marcal7  -----------------------------------------------------------*/
sT[0].sTI[154].nType = TYP_TAL;

		sT[0].sTAL[154].nIEC_SP       		= 3404;
		sT[0].sTAL[154].nIEC_OsszevontHiba	= 3436;
		sT[0].sTAL[154].nIEC_MT_KommHiba		= 3437;
		sT[0].sTAL[154].nIEC_DP       		= 973;
		sT[0].sTAL[154].nIEC_DP_FSZ1  		= 977;
		sT[0].sTAL[154].nIEC_NM				= 1060;
		sT[0].sTAL[154].nNMNum		  		= 4;
		sT[0].sTAL[154].nKommStatusNum		= 2;
		
	sT[0].sTAL[154].nIEC_DP_12BIT1		= 982;
	sT[0].sTAL[154].nIEC_DP_2BIT_BK1		= 925;

 	sT[0].sTAL[154].nIEC_DP_2BIT1 		= 981;
	sT[0].sTAL[154].nIEC_DP_2BIT_KINT1	= 912;
	sT[0].sTAL[154].nIEC_DP_2BIT_BENT1	= 913;
  
/* Tapolca 0350/42-48 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[155].nType = TYP_MOT;

	sT[0].sMOT[155].nIEC_SP				= 3441;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[155].nIEC_SP_NUM			= 88;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[155].nIEC_DP				= 983;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[155].nIEC_DP_NUM			= 32;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[155].nIEC_NM				= 1064;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[155].nNMNum				= 35;		/* Anal�g m�r�sek sz�ma*/

/* V�rpalota Als�v�ros  ----------------------------------------------------------------*/
sT[0].sTI[156].nType = TYP_MOT;

	sT[0].sMOT[156].nIEC_SP				= 3531;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[156].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[156].nIEC_DP				= 1015;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[156].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[156].nIEC_NM				= 1099;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[156].nNMNum				= 6;		/* Anal�g m�r�sek sz�ma*/

/* 64-57  ----------------------------------------------------------------*/
sT[0].sTI[157].nType = TYP_TMOK;

	sT[0].sMOT[157].nIEC_SP				= 3549;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[157].nIEC_DP				= 1023;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[157].nIEC_NM				= 1105;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[157].nNMNum				  = 4;		/* Anal�g m�r�sek sz�ma*/

	
/* Sobor 077/6 PV er�m� ----------------------------------------------*/
  sT[0].sTI[158].nType = TYP_TAL;
  
	sT[0].sTAL[158].nIEC_SP       		= 3565;
	sT[0].sTAL[158].nIEC_OsszevontHiba	= 3597;
	sT[0].sTAL[158].nIEC_MT_KommHiba	= 3598;
	sT[0].sTAL[158].nKommStatusNum		= 2;	
	sT[0].sTAL[158].nIEC_DP       		= 1024;
	sT[0].sTAL[158].nIEC_DP_FSZ1  		= 1028;
	sT[0].sTAL[158].nIEC_NM				= 1109;
	sT[0].sTAL[158].nNMNum		  		= 9;
 
 	sT[0].sTAL[158].nSP_EXTRA_OFFSET		= 3600;
  sT[0].sTAL[158].nSP_EXTRA_NUM		= 2;
  
/* Sobor 077/7 PV er�m� ----------------------------------------------*/
  sT[0].sTI[159].nType = TYP_TAL;
  
	sT[0].sTAL[159].nIEC_SP       		= 3604;
	sT[0].sTAL[159].nIEC_OsszevontHiba	= 3636;
	sT[0].sTAL[159].nIEC_MT_KommHiba	= 3637;
	sT[0].sTAL[159].nKommStatusNum		= 2;	
	sT[0].sTAL[159].nIEC_DP       		= 1032;
	sT[0].sTAL[159].nIEC_DP_FSZ1  		= 1036;
	sT[0].sTAL[159].nIEC_NM				= 1118;
	sT[0].sTAL[159].nNMNum		  		= 9;
 
 	sT[0].sTAL[159].nSP_EXTRA_OFFSET		= 3639;
  sT[0].sTAL[159].nSP_EXTRA_NUM		= 2;

/* Vasalja 055/16 PV er�m� ----------------------------------------------*/
  sT[0].sTI[160].nType = TYP_TAL;
  
	sT[0].sTAL[160].nIEC_SP       		= 3643;
	sT[0].sTAL[160].nIEC_OsszevontHiba	= 3675;
	sT[0].sTAL[160].nIEC_MT_KommHiba	= 3676;
	sT[0].sTAL[160].nKommStatusNum		= 2;	
	sT[0].sTAL[160].nIEC_DP       		= 1040;
	sT[0].sTAL[160].nIEC_DP_FSZ1  		= 1044;
	sT[0].sTAL[160].nIEC_NM				= 1127;
	sT[0].sTAL[160].nNMNum		  		= 9;
 
 	sT[0].sTAL[160].nSP_EXTRA_OFFSET		= 3678;
  sT[0].sTAL[160].nSP_EXTRA_NUM		= 2;

/* Tapolca 0350/34-37 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[161].nType = TYP_MOT;

	sT[0].sMOT[161].nIEC_SP				= 3682;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[161].nIEC_SP_NUM			= 56;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[161].nIEC_DP				= 1048;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[161].nIEC_DP_NUM			= 18;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[161].nIEC_NM				= 1136;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[161].nNMNum				= 24;		/* Anal�g m�r�sek sz�ma*/

/* Keszt�lc 3733 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[162].nType = TYP_MOT;

	sT[0].sMOT[162].nIEC_SP				= 3740;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[162].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[162].nIEC_DP				= 1066;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[162].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[162].nIEC_NM				= 1160;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[162].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* 54-27  ----------------------------------------------------------------*/
sT[0].sTI[163].nType = TYP_TMOK;

	sT[0].sMOT[163].nIEC_SP				= 3758;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[163].nIEC_DP				= 1074;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[163].nIEC_NM				= 1169;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[163].nNMNum				  = 4;		/* Anal�g m�r�sek sz�ma*/

/* Nagyhideghegy ISM -----------------------------------------------------------*/
sT[0].sTI[164].nType = TYP_MOT;

	sT[0].sMOT[164].nIEC_SP				  = 3774;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[164].nIEC_SP_NUM			= 5;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[164].nIEC_DP_NUM			= 0;
	sT[0].sMOT[164].nNMNum      		= 0;

/* Hidegk�t 07/22_23 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[165].nType = TYP_MOT;

	sT[0].sMOT[165].nIEC_SP				= 3781;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[165].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[165].nIEC_DP				= 1075;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[165].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[165].nIEC_NM				= 1173;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[165].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Gy�r, �d�sz belter�let  -----------------------------------------------------------*/
sT[0].sTI[166].nType = TYP_TAL;

		sT[0].sTAL[166].nIEC_SP       		= 3799;
		sT[0].sTAL[166].nIEC_OsszevontHiba	= 3831;
		sT[0].sTAL[166].nIEC_MT_KommHiba		= 3832;
		sT[0].sTAL[166].nIEC_DP       		= 1083;
		sT[0].sTAL[166].nIEC_DP_FSZ1  		= 1087;
		sT[0].sTAL[166].nIEC_NM				= 1182;
		sT[0].sTAL[166].nNMNum		  		= 4;
		sT[0].sTAL[166].nKommStatusNum		= 2;
		
	sT[0].sTAL[166].nIEC_DP_12BIT1		= 1092;
	sT[0].sTAL[166].nIEC_DP_2BIT_BK1		= 925;

 	sT[0].sTAL[166].nIEC_DP_2BIT1 		= 1091;
	sT[0].sTAL[166].nIEC_DP_2BIT_KINT1	= 912;
	sT[0].sTAL[166].nIEC_DP_2BIT_BENT1	= 913;

/* L�v� 053/12 PV er�m� ----------------------------------------------*/
  sT[0].sTI[167].nType = TYP_TAL;
  
	sT[0].sTAL[167].nIEC_SP       		= 3836;
	sT[0].sTAL[167].nIEC_OsszevontHiba	= 3868;
	sT[0].sTAL[167].nIEC_MT_KommHiba	= 3869;
	sT[0].sTAL[167].nKommStatusNum		= 2;	
	sT[0].sTAL[167].nIEC_DP       		= 1093;
	sT[0].sTAL[167].nIEC_DP_FSZ1  		= 1097;
	sT[0].sTAL[167].nIEC_NM				= 1186;
	sT[0].sTAL[167].nNMNum		  		= 9;
 
 	sT[0].sTAL[167].nSP_EXTRA_OFFSET		= 3871;
  sT[0].sTAL[167].nSP_EXTRA_NUM		= 2;

	sT[0].sTAL[167].nIEC_DP_12BIT1		= 1102;
	sT[0].sTAL[167].nIEC_DP_2BIT_BK1		= 920;

 	sT[0].sTAL[167].nIEC_DP_2BIT1 		= 1101;
	sT[0].sTAL[167].nIEC_DP_2BIT_KINT1	= 913;
	sT[0].sTAL[167].nIEC_DP_2BIT_BENT1	= 912;

/* 11-65  ----------------------------------------------------------------*/
sT[0].sTI[168].nType = TYP_TMOK;

	sT[0].sMOT[168].nIEC_SP				= 3875;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[168].nIEC_DP				= 1103;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[168].nIEC_NM				= 1195;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[168].nNMNum				  = 4;		/* Anal�g m�r�sek sz�ma*/

/* 12-81  ----------------------------------------------------------------*/
sT[0].sTI[169].nType = TYP_TMOK;

	sT[0].sMOT[169].nIEC_SP				= 3891;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[169].nIEC_DP				= 1104;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[169].nIEC_NM				= 1199;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[169].nNMNum				  = 4;		/* Anal�g m�r�sek sz�ma*/

/* Nemesgul�cs TMKK ----------------------------------------------------------------*/
sT[0].sTI[170].nType = TYP_MOT;

	sT[0].sMOT[170].nIEC_SP				= 3907;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[170].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[170].nIEC_DP				= 1105;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[170].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[170].nIEC_NM				= 1203;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[170].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Kir�lyszentistv�n 017/24_1 PV er�m� ----------------------------------------------*/
  sT[0].sTI[171].nType = TYP_TAL;
  
	sT[0].sTAL[171].nIEC_SP       		= 3929;
	sT[0].sTAL[171].nIEC_OsszevontHiba	= 3961;
	sT[0].sTAL[171].nIEC_MT_KommHiba	= 3962;
	sT[0].sTAL[171].nKommStatusNum		= 2;	
	sT[0].sTAL[171].nIEC_DP       		= 1113;
	sT[0].sTAL[171].nIEC_DP_FSZ1  		= 1117;
	sT[0].sTAL[171].nIEC_NM				= 1212;
	sT[0].sTAL[171].nNMNum		  		= 9;
 
 	sT[0].sTAL[171].nSP_EXTRA_OFFSET		= 3964;
  sT[0].sTAL[171].nSP_EXTRA_NUM		= 2;

/* Kir�lyszentistv�n 017/24_2 PV er�m� ----------------------------------------------*/
  sT[0].sTI[172].nType = TYP_TAL;
  
	sT[0].sTAL[172].nIEC_SP       		= 3968;
	sT[0].sTAL[172].nIEC_OsszevontHiba	= 4000;
	sT[0].sTAL[172].nIEC_MT_KommHiba	= 4001;
	sT[0].sTAL[172].nKommStatusNum		= 2;	
	sT[0].sTAL[172].nIEC_DP       		= 1121;
	sT[0].sTAL[172].nIEC_DP_FSZ1  		= 1125;
	sT[0].sTAL[172].nIEC_NM				= 1221;
	sT[0].sTAL[172].nNMNum		  		= 9;
 
 	sT[0].sTAL[172].nSP_EXTRA_OFFSET		= 4003;
  sT[0].sTAL[172].nSP_EXTRA_NUM		= 2;

/* Kir�lyszentistv�n 017/24_3 PV er�m� ----------------------------------------------*/
  sT[0].sTI[173].nType = TYP_TAL;
  
	sT[0].sTAL[173].nIEC_SP       		= 4007;
	sT[0].sTAL[173].nIEC_OsszevontHiba	= 4039;
	sT[0].sTAL[173].nIEC_MT_KommHiba	= 4040;
	sT[0].sTAL[173].nKommStatusNum		= 2;	
	sT[0].sTAL[173].nIEC_DP       		= 1129;
	sT[0].sTAL[173].nIEC_DP_FSZ1  		= 1133;
	sT[0].sTAL[173].nIEC_NM				= 1230;
	sT[0].sTAL[173].nNMNum		  		= 9;
 
 	sT[0].sTAL[173].nSP_EXTRA_OFFSET		= 4042;
  sT[0].sTAL[173].nSP_EXTRA_NUM		= 2;

/* Veszpr�mvars�ny 67/1_2_3 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[174].nType = TYP_MOT;

	sT[0].sMOT[174].nIEC_SP				= 4046;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[174].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[174].nIEC_DP				= 1137;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[174].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[174].nIEC_NM				= 1239;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[174].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* T�rje 0135/15 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[175].nType = TYP_MOT;

	sT[0].sMOT[175].nIEC_SP				= 4064;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[175].nIEC_SP_NUM			= 28;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[175].nIEC_DP				= 1145;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[175].nIEC_DP_NUM			= 16;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[175].nIEC_NM				= 1248;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[175].nNMNum				= 18;		/* Anal�g m�r�sek sz�ma*/

/* R�d�ck�lked 258 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[176].nType = TYP_MOT;

	sT[0].sMOT[176].nIEC_SP				= 4094;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[176].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[176].nIEC_DP				= 1161;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[176].nIEC_DP_NUM			= 4;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[176].nIEC_NM				= 1266;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[176].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Szentkir�lyszabadja 056/1 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[177].nType = TYP_MOT;

	sT[0].sMOT[177].nIEC_SP				= 4112;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[177].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[177].nIEC_DP				= 1165;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[177].nIEC_DP_NUM			= 4;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[177].nIEC_NM				= 1275;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[177].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Lesenceistv�nd 0206/12 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[178].nType = TYP_MOT;

	sT[0].sMOT[178].nIEC_SP				= 4130;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[178].nIEC_SP_NUM			= 50;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[178].nIEC_DP				= 1169;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[178].nIEC_DP_NUM			= 22;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[178].nIEC_NM				= 1284;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[178].nNMNum				= 28;		/* Anal�g m�r�sek sz�ma*/

/* Bicske 071/2 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[179].nType = TYP_MOT;

	sT[0].sMOT[179].nIEC_SP				= 4164;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[179].nIEC_SP_NUM			= 48;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[179].nIEC_DP				= 1191;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[179].nIEC_DP_NUM			= 34;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[179].nIEC_NM				= 1312;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[179].nNMNum				= 43;		/* Anal�g m�r�sek sz�ma*/

/* Nemesgul�cs TMOK  ----------------------------------------------------------------*/
sT[0].sTI[180].nType = TYP_TMOK;

	sT[0].sMOT[180].nIEC_SP				= 4214;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[180].nIEC_DP				= 1225;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[180].nIEC_NM				= 1355;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[180].nNMNum				  = 4;		/* Anal�g m�r�sek sz�ma*/

/* Osli 0100/22 PV er�m� ----------------------------------------------*/
  sT[0].sTI[181].nType = TYP_TAL;
  
	sT[0].sTAL[181].nIEC_SP       		= 4230;
	sT[0].sTAL[181].nIEC_OsszevontHiba	= 4262;
	sT[0].sTAL[181].nIEC_MT_KommHiba	= 4263;
	sT[0].sTAL[181].nKommStatusNum		= 2;	
	sT[0].sTAL[181].nIEC_DP       		= 1226;
	sT[0].sTAL[181].nIEC_DP_FSZ1  		= 1230;
	sT[0].sTAL[181].nIEC_NM				= 1359;
	sT[0].sTAL[181].nNMNum		  		= 9;
 
 	sT[0].sTAL[181].nSP_EXTRA_OFFSET		= 4265;
  sT[0].sTAL[181].nSP_EXTRA_NUM		= 2;

/* Osli 0100/24 PV er�m� ----------------------------------------------*/
  sT[0].sTI[182].nType = TYP_TAL;
  
	sT[0].sTAL[182].nIEC_SP       		= 4269;
	sT[0].sTAL[182].nIEC_OsszevontHiba	= 4301;
	sT[0].sTAL[182].nIEC_MT_KommHiba	= 4302;
	sT[0].sTAL[182].nKommStatusNum		= 2;	
	sT[0].sTAL[182].nIEC_DP       		= 1234;
	sT[0].sTAL[182].nIEC_DP_FSZ1  		= 1238;
	sT[0].sTAL[182].nIEC_NM				= 1368;
	sT[0].sTAL[182].nNMNum		  		= 9;
 
 	sT[0].sTAL[182].nSP_EXTRA_OFFSET		= 4304;
  sT[0].sTAL[182].nSP_EXTRA_NUM		= 2;

/* L�b�ny 0586/49 PV er�m� ----------------------------------------------*/
  sT[0].sTI[183].nType = TYP_TAL;
  
	sT[0].sTAL[183].nIEC_SP       		= 4308;
	sT[0].sTAL[183].nIEC_OsszevontHiba	= 4340;
	sT[0].sTAL[183].nIEC_MT_KommHiba	= 4341;
	sT[0].sTAL[183].nKommStatusNum		= 2;	
	sT[0].sTAL[183].nIEC_DP       		= 1242;
	sT[0].sTAL[183].nIEC_DP_FSZ1  		= 1246;
	sT[0].sTAL[183].nIEC_NM				= 1377;
	sT[0].sTAL[183].nNMNum		  		= 9;
 
 	sT[0].sTAL[183].nSP_EXTRA_OFFSET		= 4343;
  sT[0].sTAL[183].nSP_EXTRA_NUM		= 2;

/* �h�d 213/8 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[184].nType = TYP_MOT;

	sT[0].sMOT[184].nIEC_SP				= 4347;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[184].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[184].nIEC_DP				= 1500;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[184].nIEC_DP_NUM			= 4;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[184].nIEC_NM				= 1386;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[184].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Szany 0155/6 PV er�m� ----------------------------------------------*/
  sT[0].sTI[185].nType = TYP_TAL;
  
	sT[0].sTAL[185].nIEC_SP       		= 4365;
	sT[0].sTAL[185].nIEC_OsszevontHiba	= 4397;
	sT[0].sTAL[185].nIEC_MT_KommHiba	= 4398;
	sT[0].sTAL[185].nKommStatusNum		= 2;	
	sT[0].sTAL[185].nIEC_DP       		= 1504;
	sT[0].sTAL[185].nIEC_DP_FSZ1  		= 1508;
	sT[0].sTAL[185].nIEC_NM				= 1395;
	sT[0].sTAL[185].nNMNum		  		= 9;
 
 	sT[0].sTAL[185].nSP_EXTRA_OFFSET		= 4400;
  sT[0].sTAL[185].nSP_EXTRA_NUM		= 2;

/* Szany 0155/7 PV er�m� ----------------------------------------------*/
  sT[0].sTI[186].nType = TYP_TAL;
  
	sT[0].sTAL[186].nIEC_SP       		= 4404;
	sT[0].sTAL[186].nIEC_OsszevontHiba	= 4436;
	sT[0].sTAL[186].nIEC_MT_KommHiba	= 4437;
	sT[0].sTAL[186].nKommStatusNum		= 2;	
	sT[0].sTAL[186].nIEC_DP       		= 1512;
	sT[0].sTAL[186].nIEC_DP_FSZ1  		= 1516;
	sT[0].sTAL[186].nIEC_NM				= 1404;
	sT[0].sTAL[186].nNMNum		  		= 9;
 
 	sT[0].sTAL[186].nSP_EXTRA_OFFSET		= 4439;
  sT[0].sTAL[186].nSP_EXTRA_NUM		= 2;

/* Pereszteg 0160/2 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[187].nType = TYP_MOT;

	sT[0].sMOT[187].nIEC_SP				= 4459;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[187].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[187].nIEC_DP				= 1520;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[187].nIEC_DP_NUM			= 4;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[187].nIEC_NM				= 1417;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[187].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Magyargencs 185 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[188].nType = TYP_MOT;

	sT[0].sMOT[188].nIEC_SP				= 4477;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[188].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[188].nIEC_DP				= 1524;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[188].nIEC_DP_NUM			= 4;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[188].nIEC_NM				= 1426;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[188].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* L�batlan DAC -----------------------------------------------------------*/
sT[0].sTI[189].nType = TYP_MOT;

	sT[0].sMOT[189].nIEC_SP				= 4495;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[189].nIEC_SP_NUM			= 5;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[189].nIEC_DP_NUM			= 0;
	sT[0].sMOT[189].nNMNum      		= 0;

/* Zalaszentgr�t DAC -----------------------------------------------------------*/
sT[0].sTI[190].nType = TYP_MOT;

	sT[0].sMOT[190].nIEC_SP				= 4502;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[190].nIEC_SP_NUM			= 5;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[190].nIEC_DP				= 1528;		/* K�tbites �rt�kek IEC kezd�c�me*/  
	sT[0].sMOT[190].nIEC_DP_NUM			= 1;
	sT[0].sMOT[190].nNMNum      		= 0;

/* Gy�r, S�t�ipar  ----------------------------------------------------------------*/
sT[0].sTI[191].nType = TYP_MOT;

	sT[0].sMOT[191].nIEC_SP				= 4509;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[191].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[191].nIEC_DP				= 1529;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[191].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[191].nIEC_NM				= 1435;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[191].nNMNum				= 6;		/* Anal�g m�r�sek sz�ma*/

/* Nagyk�lked, 041/3  ----------------------------------------------------------------*/
sT[0].sTI[192].nType = TYP_MOT;

	sT[0].sMOT[192].nIEC_SP				= 4527;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[192].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[192].nIEC_DP				= 1537;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[192].nIEC_DP_NUM			= 4;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[192].nIEC_NM				= 1441;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[192].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* 59160 TMOK  ----------------------------------------------------------------*/
sT[0].sTI[193].nType = TYP_TMOK;

	sT[0].sMOT[193].nIEC_SP				= 4545;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[193].nIEC_DP				= 1541;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[193].nIEC_NM				= 1450;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[193].nNMNum				  = 4;		/* Anal�g m�r�sek sz�ma*/

/* Tappolca Strand utca  ----------------------------------------------------------------*/
sT[0].sTI[194].nType = TYP_MOT;

	sT[0].sMOT[194].nIEC_SP				= 4561;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[194].nIEC_SP_NUM			= 20;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[194].nIEC_DP				= 1542;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[194].nIEC_DP_NUM			= 10;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[194].nIEC_NM				= 1462;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[194].nNMNum				= 6;		/* Anal�g m�r�sek sz�ma*/

/* K�rmend2  DAC -----------------------------------------------------------*/
sT[0].sTI[195].nType = TYP_MOT;

	sT[0].sMOT[195].nIEC_SP				= 0;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[195].nIEC_SP_NUM			= 0;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[195].nNMNum      		= 0;
	sT[0].sMOT[195].nIEC_DP_NUM			= 0;   		/* K�t bites �rt�kek sz�ma*/
   
} /* end fnSetDataPar()*/

