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
char PVARP_p;
char VRP_p;
char AEI_p;
char as_accept;
char vs_accept;
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
char g32;
char g33;
char g34;
char g35;
char PRE_g35;
char g36;
char g37;
char g38;
char g39;
char g40;
char PRE_g40;
char g41;
char g41b;
char g42;
char g43;
char PRE_g43;
char g44;
char g45;
char g46;
char g47;
char g48;
char PRE_g48;
char g49;
char g50;
char g51;
char g52;
char g53;
char PRE_g53;
char g54;
char g54b;
char g55;
char g56;
char PRE_g56;
char g57;
char g58;
char g59;
char g60;
char g61;
char PRE_g61;
char g62;
char g63;
char g64;
char g65;
char g66;
char PRE_g66;
char g67;
char g67b;
char g68;
char g69;
char PRE_g69;
char g70;
char g70b;
char g71;
char g72;
char g73;
char g74;
char g75;
char PRE_g75;
char g76;
char g77;
char g78;
char g79;
char PRE_g79;
char g80;
char g80b;
char g81;
char g82;
char PRE_g82;
char g83;
char g83b;
char g84;
char g85;
char g86;
char g87;
char g88;
char g89;
char PRE_g89;
char g90;
char g91;
char g92;
char g93;
char g94;
char PRE_g94;
char g95;
char g95b;
char g96;
char g97;
char PRE_g97;
char g98;
char g99;
char g100;
char g101;
char g102;
char PRE_g102;
char g103;
char g104;
char g105;
char _GO;
char _cg7;
char _cg11;
char _cg8;
char _cg4;
char _cg19;
char _cg23;
char _cg20;
char _cg16;
char _cg36;
char _cg28;
char _cg33;
char _cg31;
char _cg49;
char _cg41;
char _cg46;
char _cg44;
char _cg62;
char _cg54;
char _cg59;
char _cg57;
char _cg70;
char _cg76;
char _cg67;
char _cg73;
char _cg71;
char _cg80;
char _cg90;
char _cg87;
char _cg83;
char _cg85;
char _cg103;
char _cg95;
char _cg100;
char _cg98;
char g12_e1;
char g24_e2;
char g37_e3;
char g50_e4;
char g63_e5;
char g77_e6;
char g91_e7;
char g104_e8;
char g105_fix0;
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
   PRE_g35 = 0;
   PRE_g40 = 0;
   PRE_g43 = 0;
   PRE_g48 = 0;
   PRE_g53 = 0;
   PRE_g56 = 0;
   PRE_g61 = 0;
   PRE_g66 = 0;
   PRE_g69 = 0;
   PRE_g75 = 0;
   PRE_g79 = 0;
   PRE_g82 = 0;
   PRE_g89 = 0;
   PRE_g94 = 0;
   PRE_g97 = 0;
   PRE_g102 = 0;
   return;
}
void tick(){
   if(_PRE_GO == 1){
      _GO = 0;
   }
   {
      g0 = _GO;
      if(g0){
         to_lri = 21;
         to_uri = 15;
         to_avi = 6;
         to_pvarp = 9;
         to_vrp = 6;
         to_aei = 12;
      }
      g1 = g0;
      g7 =(PRE_g6);
      _cg7 = 1;
      g11 =(PRE_g10);
      _cg11 = 1;
      g2 =(g1||(g7&&_cg7)||(g11&&_cg11));
      if(g2){
         ap = 0;
         as_accept = 0;
      }
      g76 =(PRE_g75);
      _cg76 = 1;
      g64 = g0;
      g49 =(PRE_g48);
      _cg49 = 1;
      g38 = g0;
      g39 =((g49&&_cg49)||g38);
      if(g39){
         PVARP = 0;
         PVARP_p = 0;
         t_pvarp = 0;
      }
      g44 =(PRE_g43);
      _cg44 =(t_pvarp < to_pvarp);
      g45 =(g44&&_cg44);
      if(g45){
         t_pvarp++;
      }
      g4 =(PRE_g3);
      g4b = g4;
      _cg4 =((t_pvarp == 0)&as);
      g5 =(g4b&&_cg4);
      if(g5){
         as_accept = 1;
      }
      g70 =(PRE_g69);
      g70b = g70;
      _cg70 = as_accept;
      g65 =((g76&&_cg76)||g64||(g70b&&_cg70));
      if(g65){
         AEI = 0;
         AEI_p = 0;
         t_aei = 0;
      }
      g71 =(g70b&&(!(_cg70)));
      _cg71 =(t_aei < to_aei);
      g73 =(g71&&(!(_cg71)));
      _cg73 =(t_aei >= to_aei);
      g74 =(g73&&_cg73);
      if(g74){
         AEI = 0;
         AEI_p = 1;
      }
      g8 =(g4b&&(!(_cg4)));
      _cg8 = AEI_p;
      g3 =(g2||(g8&&(!(_cg8))));
      g6 =(g5||(g7&&(!(_cg7))));
      g9 =(g8&&_cg8);
      if(g9){
         ap = 1;
      }
      g10 =((g11&&(!(_cg11)))||g9);
      g13 = g0;
      g19 =(PRE_g18);
      _cg19 = 1;
      g23 =(PRE_g22);
      _cg23 = 1;
      g14 =((g19&&_cg19)||g13||(g23&&_cg23));
      if(g14){
         vp = 0;
         vs_accept = 0;
      }
      g36 =(PRE_g35);
      _cg36 = 1;
      g25 = g0;
      g26 =((g36&&_cg36)||g25);
      if(g26){
         AVI = 0;
         AVI_p = 0;
         t_avi = 0;
      }
      g31 =(PRE_g30);
      _cg31 =(t_avi < to_avi);
      g33 =(g31&&(!(_cg31)));
      _cg33 =(t_avi >= to_avi);
      g34 =(g33&&_cg33);
      if(g34){
         AVI = 0;
         AVI_p = 1;
      }
      g62 =(PRE_g61);
      _cg62 = 1;
      g51 = g0;
      g52 =((g62&&_cg62)||g51);
      if(g52){
         VRP = 0;
         VRP_p = 0;
         t_vrp = 0;
      }
      g57 =(PRE_g56);
      _cg57 =(t_vrp < to_vrp);
      g58 =(g57&&_cg57);
      if(g58){
         t_vrp++;
      }
      g16 =(PRE_g15);
      g16b = g16;
      _cg16 =((t_vrp == 0)&vs);
      g20 =(g16b&&(!(_cg16)));
      _cg20 = AVI_p;
      g15 =(g14||(g20&&(!(_cg20))));
      g17 =(g16b&&_cg16);
      if(g17){
         vs_accept = 1;
      }
      g18 =(g17||(g19&&(!(_cg19))));
      g21 =(g20&&_cg20);
      if(g21){
         vp = 1;
      }
      g22 =((g23&&(!(_cg23)))||g21);
      g28 =(PRE_g27);
      g28b = g28;
      _cg28 =(ap|as_accept);
      g27 =(g26||(g28b&&(!(_cg28))));
      g32 =(g31&&_cg31);
      if(g32){
         t_avi++;
      }
      g29 =(g32||(g28b&&_cg28));
      if(g29){
         AVI = 1;
      }
      g30 =(g29||(g33&&(!(_cg33))));
      g35 =(g34||(g36&&(!(_cg36))));
      g41 =(PRE_g40);
      g41b = g41;
      _cg41 =(vp|vs_accept);
      g40 =((g41b&&(!(_cg41)))||g39);
      g42 =(g45||(g41b&&_cg41));
      if(g42){
         PVARP = 1;
      }
      g46 =(g44&&(!(_cg44)));
      _cg46 =(t_pvarp >= to_pvarp);
      g43 =(g42||(g46&&(!(_cg46))));
      g47 =(g46&&_cg46);
      if(g47){
         PVARP = 0;
         PVARP_p = 1;
      }
      g48 =((g49&&(!(_cg49)))||g47);
      g54 =(PRE_g53);
      g54b = g54;
      _cg54 =(vp|vs_accept);
      g53 =(g52||(g54b&&(!(_cg54))));
      g55 =((g54b&&_cg54)||g58);
      if(g55){
         VRP = 1;
      }
      g59 =(g57&&(!(_cg57)));
      _cg59 =(t_vrp >= to_vrp);
      g56 =((g59&&(!(_cg59)))||g55);
      g60 =(g59&&_cg59);
      if(g60){
         VRP = 0;
         VRP_p = 1;
      }
      g61 =(g60||(g62&&(!(_cg62))));
      g67 =(PRE_g66);
      g67b = g67;
      _cg67 =(vp|vs_accept);
      g66 =((g67b&&(!(_cg67)))||g65);
      g72 =(g71&&_cg71);
      if(g72){
         t_aei++;
      }
      g68 =(g72||(g67b&&_cg67));
      if(g68){
         AEI = 1;
      }
      g69 =(g68||(g73&&(!(_cg73))));
      g75 =(g74||(g76&&(!(_cg76))));
      g78 = g0;
      if(g78){
         LRI = 0;
         LRI_p = 0;
         t_lri = 0;
      }
      g80 =(PRE_g79);
      g80b = g80;
      _cg80 = vp;
      g79 =((g80b&&(!(_cg80)))||g78);
      g83 =(PRE_g82);
      g83b = g83;
      _cg83 =(vp|vs_accept);
      g84 =(g83b&&_cg83);
      if(g84){
         t_lri = 0;
      }
      g85 =(g83b&&(!(_cg83)));
      _cg85 =(t_lri < to_lri);
      g86 =(g85&&_cg85);
      if(g86){
         t_lri++;
      }
      g90 =(PRE_g89);
      _cg90 = 1;
      g81 =((g80b&&_cg80)||g84||g86||(g90&&_cg90));
      if(g81){
         LRI_p = 0;
         LRI = 1;
      }
      g87 =(g85&&(!(_cg85)));
      _cg87 =(t_lri >= to_lri);
      g82 =((g87&&(!(_cg87)))||g81);
      g88 =(g87&&_cg87);
      if(g88){
         LRI = 0;
         LRI_p = 1;
         t_lri = 0;
      }
      g89 =(g88||(g90&&(!(_cg90))));
      g92 = g0;
      g103 =(PRE_g102);
      _cg103 = 1;
      g93 =((g103&&_cg103)||g92);
      if(g93){
         URI = 0;
         URI_p = 0;
         t_uri = 0;
      }
      g95 =(PRE_g94);
      g95b = g95;
      _cg95 =(vp|vs_accept);
      g94 =(g93||(g95b&&(!(_cg95))));
      g98 =(PRE_g97);
      _cg98 =(t_uri < to_uri);
      g99 =(g98&&_cg98);
      if(g99){
         t_uri++;
      }
      g96 =((g95b&&_cg95)||g99);
      if(g96){
         URI = 1;
      }
      g100 =(g98&&(!(_cg98)));
      _cg100 =(t_uri >= to_uri);
      g97 =(g96||(g100&&(!(_cg100))));
      g101 =(g100&&_cg100);
      if(g101){
         URI = 0;
         URI_p = 1;
      }
      g102 =((g103&&(!(_cg103)))||g101);
      g12_e1 =(!((g4||g7||g11)));
      g24_e2 =(!((g16||g19||g23)));
      g37_e3 =(!((g28||g31||g36)));
      g50_e4 =(!((g41||g44||g49)));
      g63_e5 =(!((g54||g57||g62)));
      g77_e6 =(!((g67||g70||g76)));
      g91_e7 =(!((g80||g83||g90)));
      g104_e8 =(!((g95||g98||g103)));
      g105_fix0 =((g12_e1||g12)&&(g24_e2||g24)&&(g37_e3||g37)&&(g50_e4||g50));
   }
   PRE_g3 = g3;
   PRE_g6 = g6;
   PRE_g10 = g10;
   PRE_g15 = g15;
   PRE_g18 = g18;
   PRE_g22 = g22;
   PRE_g27 = g27;
   PRE_g30 = g30;
   PRE_g35 = g35;
   PRE_g40 = g40;
   PRE_g43 = g43;
   PRE_g48 = g48;
   PRE_g53 = g53;
   PRE_g56 = g56;
   PRE_g61 = g61;
   PRE_g66 = g66;
   PRE_g69 = g69;
   PRE_g75 = g75;
   PRE_g79 = g79;
   PRE_g82 = g82;
   PRE_g89 = g89;
   PRE_g94 = g94;
   PRE_g97 = g97;
   PRE_g102 = g102;
   _PRE_GO = _GO;
   return;
}
