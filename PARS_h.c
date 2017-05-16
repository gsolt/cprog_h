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
/* K1 : GYOR, KAP, VAR*/
ST[0].sRAD_K1[0].nRtuNumRad = 18; /*63*/
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




/* K2 : VESZ, TAP, PAP, SUM, ESZT, CSOR, KIM */
ST[0].sRAD_K2[0].nRtuNumRad = 13; /*76*/
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


/* K3 : DOR, SOP, KOR, BI */
ST[0].sRAD_K3[0].nRtuNumRad = 22;  /**/
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



/*RST[0].sLINK RTUk indexei*/
ST[0].sLIN[0].nRtuNumLin = 1;
ST[0].sLIN[0].nIndx[0] =32;




} /* end fnSetComPar()*/

