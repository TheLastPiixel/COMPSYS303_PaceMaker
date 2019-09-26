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
int to_lri;
int to_uri;
int to_avi;
int to_pvarp;
int to_vrp;
int to_aei;
char LRI;
char URI;
char AVI;
char PVARP;
char VRP;
char AEI;
char LRI_p;
char URI_p;
char AVI_p;
char AEI_p;
char as_accept;
char vs_accept;
char ap_accept;
char vp_accept;
int t_lri;
int t_uri;
int t_avi;
int t_pvarp;
int t_vrp;
int t_aei;
char g0;
char g1;
char g2;
char g3;
char PRE_g3;
char g4;
char g4b;
char g5;
char g6;
char PRE_g6;
char g7;
char g8;
char g9;
char g10;
char PRE_g10;
char g11;
char g12;
char g13;
char g14;
char g15;
char PRE_g15;
char g16;
char g16b;
char g17;
char g18;
char PRE_g18;
char g19;
char g20;
char g21;
char g22;
char PRE_g22;
char g23;
char g24;
char g25;
char g26;
char g27;
char PRE_g27;
char g28;
char g28b;
char g29;
char g30;
char PRE_g30;
char g31;
char g31b;
char g32;
char g33;
char g34;
char g35;
char g36;
char PRE_g36;
char g37;
char g38;
char g39;
char g40;
char g41;
char PRE_g41;
char g42;
char g42b;
char g43;
char g44;
char PRE_g44;
char g45;
char g46;
char g47;
char g48;
char g49;
char g50;
char g51;
char PRE_g51;
char g52;
char g52b;
char g53;
char g54;
char PRE_g54;
char g55;
char g56;
char g57;
char g58;
char g59;
char g60;
char g61;
char PRE_g61;
char g62;
char g62b;
char g63;
char g64;
char PRE_g64;
char g65;
char g66;
char g67;
char g68;
char g69;
char g70;
char PRE_g70;
char g71;
char g72;
char g73;
char g74;
char PRE_g74;
char g75;
char g75b;
char g76;
char g77;
char PRE_g77;
char g78;
char g78b;
char g79;
char g80;
char g81;
char g82;
char g83;
char g84;
char PRE_g84;
char g85;
char g86;
char g87;
char g88;
char g89;
char PRE_g89;
char g90;
char g90b;
char g91;
char g92;
char PRE_g92;
char g93;
char g94;
char g95;
char g96;
char g97;
char _GO;
char _cg7;
char _cg11;
char _cg8;
char _cg4;
char _cg19;
char _cg23;
char _cg20;
char _cg16;
char _cg31;
char _cg37;
char _cg28;
char _cg34;
char _cg32;
char _cg47;
char _cg42;
char _cg45;
char _cg57;
char _cg52;
char _cg55;
char _cg67;
char _cg71;
char _cg62;
char _cg68;
char _cg65;
char _cg75;
char _cg85;
char _cg82;
char _cg78;
char _cg80;
char _cg95;
char _cg90;
char _cg93;
char g12_e1;
char g24_e2;
char g38_e3;
char g48_e4;
char g58_e5;
char g72_e6;
char g86_e7;
char g96_e8;
char g97_fix0;
int _PRE_GO;
void reset(){
   _GO = 1;
   _PRE_GO = 0;
   PRE_g3 = 0;
   PRE_g6 = 0;
   PRE_g10 = 0;
   PRE_g15 = 0;
   PRE_g18 = 0;
   PRE_g22 = 0;
   PRE_g27 = 0;
   PRE_g30 = 0;
   PRE_g36 = 0;
   PRE_g41 = 0;
   PRE_g44 = 0;
   PRE_g51 = 0;
   PRE_g54 = 0;
   PRE_g61 = 0;
   PRE_g64 = 0;
   PRE_g70 = 0;
   PRE_g74 = 0;
   PRE_g77 = 0;
   PRE_g84 = 0;
   PRE_g89 = 0;
   PRE_g92 = 0;
   return;
}
void tick(){
   if(_PRE_GO == 1){
      _GO = 0;
   }
   {
      g0 = _GO;
      g1 = g0;
      g7 =(PRE_g6);
      _cg7 = 1;
      g11 =(PRE_g10);
      _cg11 = 1;
      g2 =((g7&&_cg7)||g1||(g11&&_cg11));
      if(g2){
         ap = 0;
         as_accept = 0;
         ap_accept = 0;
      }
      g59 = g0;
      g71 =(PRE_g70);
      _cg71 = 1;
      g25 = g0;
      g37 =(PRE_g36);
      _cg37 = 1;
      g13 = g0;
      g19 =(PRE_g18);
      _cg19 = 1;
      g23 =(PRE_g22);
      _cg23 = 1;
      g14 =(g13||(g19&&_cg19)||(g23&&_cg23));
      if(g14){
         vp = 0;
         vp_accept = 0;
         vs_accept = 0;
      }
      g49 = g0;
      g55 =(PRE_g54);
      _cg55 =(t_vrp < to_vrp);
      g57 =(g55&&(!(_cg55)));
      _cg57 =(t_vrp >= to_vrp);
      g50 =(g49||(g57&&_cg57));
      if(g50){
         VRP = 0;
         t_vrp = 0;
      }
      g56 =(g55&&_cg55);
      if(g56){
         t_vrp++;
      }
      g87 = g0;
      g93 =(PRE_g92);
      _cg93 =(t_uri < to_uri);
      g95 =(g93&&(!(_cg93)));
      _cg95 =(t_uri >= to_uri);
      g88 =(g87||(g95&&_cg95));
      if(g88){
         URI = 0;
         URI_p = 0;
         t_uri = 0;
      }
      g94 =(g93&&_cg93);
      if(g94){
         t_uri++;
      }
      g16 =(PRE_g15);
      g16b = g16;
      _cg16 =((t_vrp == 0)&vs&(t_uri == 0));
      g17 =(g16b&&_cg16);
      if(g17){
         vs_accept = 1;
         vp = 1;
      }
      g31 =(PRE_g30);
      g31b = g31;
      _cg31 = vs_accept;
      g26 =(g25||(g37&&_cg37)||(g31b&&_cg31));
      if(g26){
         AVI = 0;
         AVI_p = 0;
         t_avi = 0;
      }
      g32 =(g31b&&(!(_cg31)));
      _cg32 =(t_avi < to_avi);
      g34 =(g32&&(!(_cg32)));
      _cg34 =((t_avi >= to_avi)&(t_uri == 0));
      g35 =(g34&&_cg34);
      if(g35){
         AVI = 0;
         AVI_p = 1;
         t_avi = 0;
      }
      g33 =(g32&&_cg32);
      if(g33){
         t_avi++;
      }
      g45 =(PRE_g44);
      _cg45 =(t_pvarp < to_pvarp);
      g47 =(g45&&(!(_cg45)));
      _cg47 =(t_pvarp >= to_pvarp);
      g39 = g0;
      g40 =((g47&&_cg47)||g39);
      if(g40){
         PVARP = 0;
         t_pvarp = 0;
      }
      g46 =(g45&&_cg45);
      if(g46){
         t_pvarp++;
      }
      g4 =(PRE_g3);
      g4b = g4;
      _cg4 =((t_pvarp == 0)&(t_avi == 0)&as);
      g5 =(g4b&&_cg4);
      if(g5){
         as_accept = 1;
         ap = 1;
      }
      g65 =(PRE_g64);
      _cg65 =(t_aei < to_aei);
      g67 =(g65&&(!(_cg65)));
      _cg67 = as_accept;
      g60 =(g59||(g71&&_cg71)||(g67&&_cg67));
      if(g60){
         AEI = 0;
         AEI_p = 0;
         t_aei = 0;
      }
      g68 =(g67&&(!(_cg67)));
      _cg68 =((t_aei >= to_aei)|as_accept);
      g69 =(g68&&_cg68);
      if(g69){
         AEI = 0;
         AEI_p = 1;
         t_aei = 0;
      }
      g8 =(g4b&&(!(_cg4)));
      _cg8 = AEI_p;
      g3 =(g2||(g8&&(!(_cg8))));
      g6 =(g5||(g7&&(!(_cg7))));
      g9 =(g8&&_cg8);
      if(g9){
         ap_accept = 1;
         ap = 1;
      }
      g10 =((g11&&(!(_cg11)))||g9);
      g20 =(g16b&&(!(_cg16)));
      _cg20 = AVI_p;
      g15 =(g14||(g20&&(!(_cg20))));
      g18 =(g17||(g19&&(!(_cg19))));
      g21 =(g20&&_cg20);
      if(g21){
         vp_accept = 1;
         vp = 1;
      }
      g22 =((g23&&(!(_cg23)))||g21);
      g28 =(PRE_g27);
      g28b = g28;
      _cg28 =(ap_accept|as_accept);
      g27 =((g28b&&(!(_cg28)))||g26);
      g29 =(g33||(g28b&&_cg28));
      if(g29){
         AVI = 1;
      }
      g30 =((g34&&(!(_cg34)))||g29);
      g36 =(g35||(g37&&(!(_cg37))));
      g42 =(PRE_g41);
      g42b = g42;
      _cg42 =(vp_accept|vs_accept);
      g41 =(g40||(g42b&&(!(_cg42))));
      g43 =((g42b&&_cg42)||g46);
      if(g43){
         PVARP = 1;
      }
      g44 =(g43||(g47&&(!(_cg47))));
      g52 =(PRE_g51);
      g52b = g52;
      _cg52 =(vp_accept|vs_accept);
      g51 =(g50||(g52b&&(!(_cg52))));
      g53 =(g56||(g52b&&_cg52));
      if(g53){
         VRP = 1;
      }
      g54 =(g53||(g57&&(!(_cg57))));
      g62 =(PRE_g61);
      g62b = g62;
      _cg62 =(vp_accept|vs_accept);
      g61 =((g62b&&(!(_cg62)))||g60);
      g66 =(g65&&_cg65);
      if(g66){
         t_aei++;
      }
      g63 =((g62b&&_cg62)||g66);
      if(g63){
         AEI = 1;
      }
      g64 =((g68&&(!(_cg68)))||g63);
      g70 =((g71&&(!(_cg71)))||g69);
      g73 = g0;
      if(g73){
         LRI = 0;
         LRI_p = 0;
         t_lri = 0;
      }
      g75 =(PRE_g74);
      g75b = g75;
      _cg75 =(vp_accept|vs_accept);
      g74 =((g75b&&(!(_cg75)))||g73);
      g78 =(PRE_g77);
      g78b = g78;
      _cg78 =(vp_accept|vs_accept);
      g80 =(g78b&&(!(_cg78)));
      _cg80 =(t_lri < to_lri);
      g81 =(g80&&_cg80);
      if(g81){
         t_lri++;
      }
      g79 =(g78b&&_cg78);
      if(g79){
         t_lri = 0;
      }
      g85 =(PRE_g84);
      _cg85 = 1;
      g76 =((g75b&&_cg75)||g81||g79||(g85&&_cg85));
      if(g76){
         LRI_p = 0;
         LRI = 1;
      }
      g82 =(g80&&(!(_cg80)));
      _cg82 =(t_lri >= to_lri);
      g77 =(g76||(g82&&(!(_cg82))));
      g83 =(g82&&_cg82);
      if(g83){
         LRI = 0;
         LRI_p = 1;
         t_lri = 0;
      }
      g84 =(g83||(g85&&(!(_cg85))));
      g90 =(PRE_g89);
      g90b = g90;
      _cg90 =(vp_accept|vs_accept);
      g89 =((g90b&&(!(_cg90)))||g88);
      g91 =(g94||(g90b&&_cg90));
      if(g91){
         URI = 1;
         URI_p = 0;
      }
      g92 =(g91||(g95&&(!(_cg95))));
      g12_e1 =(!((g4||g7||g11)));
      g24_e2 =(!((g16||g19||g23)));
      g38_e3 =(!((g28||g31||g37)));
      g48_e4 =(!((g42||g45)));
      g58_e5 =(!((g52||g55)));
      g72_e6 =(!((g62||g65||g71)));
      g86_e7 =(!((g75||g78||g85)));
      g96_e8 =(!((g90||g93)));
      g97_fix0 =((g12_e1||g12)&&(g24_e2||g24)&&(g38_e3||g38)&&(g48_e4||g48));
   }
   PRE_g3 = g3;
   PRE_g6 = g6;
   PRE_g10 = g10;
   PRE_g15 = g15;
   PRE_g18 = g18;
   PRE_g22 = g22;
   PRE_g27 = g27;
   PRE_g30 = g30;
   PRE_g36 = g36;
   PRE_g41 = g41;
   PRE_g44 = g44;
   PRE_g51 = g51;
   PRE_g54 = g54;
   PRE_g61 = g61;
   PRE_g64 = g64;
   PRE_g70 = g70;
   PRE_g74 = g74;
   PRE_g77 = g77;
   PRE_g84 = g84;
   PRE_g89 = g89;
   PRE_g92 = g92;
   _PRE_GO = _GO;
   return;
}
