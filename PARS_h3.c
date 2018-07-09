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
	sT[0].sMOT[4].nIEC_NM				= 22;		/* M�r�sek IEC kezd�c�me */


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
	sT[0].sMOT[14].nIEC_NM				= 49;		/* M�r�sek IEC kezd�c�me */

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
	sT[0].sMOT[25].nIEC_NM				= 82;		/* M�r�sek IEC kezd�c�me */	

/* 20-07 -----------------------------------------------------------*/	
sT[0].sTI[26].nType = TYP_TMOK;

	sT[0].sMOT[26].nIEC_SP				= 417;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[26].nIEC_DP				= 35;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[26].nIEC_NM				= 85;		/* M�r�sek IEC kezd�c�me */	

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

} /* end fnSetDataPar()*/

