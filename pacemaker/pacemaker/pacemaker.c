/*****************************************************************************/
/*                 G E N E R A T E D       C    C O D E                      */
/*****************************************************************************/
/* KIELER - Kiel Integrated Environment for Layout Eclipse RichClient        */
/*                                                                           */
/* http://www.informatik.uni-kiel.de/rtsys/kieler/                           */
/* Copyright 2014 by                                                         */
/* + Kiel University                                                         */
/*   + Department of Computer Science                                        */
/*     + Real-Time and Embedded Systems Group                                */
/*                                                                           */
/* This code is provided under the terms of the Eclipse Public License (EPL).*/
/*****************************************************************************/
char as;
char vs;
char ap;
char vp;
int t_lri;
int t_uri;
int t_avi;
int t_pvarp;
int t_vrp;
int t_aei;
char LRI;
char URI;
char AVI;
char PVARP;
char VRP;
char AEI;
char LRI_p;
char URI_p;
char AVI_p;
char PVARP_p;
char VRP_p;
char AEI_p;
char g0;
char g1;
char g2;
char g3;
char PRE_g3;
char g4;
char g5;
char PRE_g5;
char g6;
char g7;
char g8;
char g9;
char g10;
char PRE_g10;
char g11;
char g12;
char PRE_g12;
char g13;
char g14;
char g15;
char _GO;
char _cg4;
char _cg11;
char g7_e1;
char g14_e2;
int _PRE_GO;
void reset(){
   _GO = 1;
   _PRE_GO = 0;
   PRE_g3 = 0;
   PRE_g5 = 0;
   PRE_g10 = 0;
   PRE_g12 = 0;
   return;
}
void tick(){
   if(_PRE_GO == 1){
      _GO = 0;
   }
   {
      g0 = _GO;
      g1 = g0;
      g6 =(PRE_g5);
      g2 =(g1||g6);
      if(g2){
         ap = 0;
      }
      g4 =(PRE_g3);
      _cg4 = as;
      g3 =(g2||(g4&&(!(_cg4))));
      g5 =(g4&&_cg4);
      if(g5){
         ap = 1;
      }
      g8 = g0;
      g13 =(PRE_g12);
      g9 =(g8||g13);
      if(g9){
         vp = 0;
      }
      g11 =(PRE_g10);
      _cg11 = vs;
      g10 =(g9||(g11&&(!(_cg11))));
      g12 =(g11&&_cg11);
      if(g12){
         vp = 1;
      }
      g7_e1 =(!((g4||g6)));
      g14_e2 =(!((g11||g13)));
   }
   PRE_g3 = g3;
   PRE_g5 = g5;
   PRE_g10 = g10;
   PRE_g12 = g12;
   _PRE_GO = _GO;
   return;
}
