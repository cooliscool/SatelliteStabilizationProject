  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtP)
    ;%
      section.nData     = 34;
      section.data(34)  = dumData; %prealloc
      
	  ;% rtP.C1_D
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.C2_D
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.C3_D
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.PIDController2DOF_D
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtP.C1_I
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtP.C2_I
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtP.C3_I
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtP.PIDController2DOF_I
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtP.C1_N
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtP.C2_N
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtP.C3_N
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtP.PIDController2DOF_N
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtP.C1_P
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtP.C2_P
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtP.C3_P
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtP.PIDController2DOF_c
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtP.speeds_Value
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtP.Integrator2_UpperSat
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 20;
	
	  ;% rtP.Integrator2_LowerSat
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 21;
	
	  ;% rtP.pitchrollyawInitial_Value
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 22;
	
	  ;% rtP.Integrator_IC
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 25;
	
	  ;% rtP.Filter_IC
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 26;
	
	  ;% rtP.Integrator_IC_bho2zujcez
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 27;
	
	  ;% rtP.Filter_IC_pu4motvsw4
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 28;
	
	  ;% rtP.Integrator_IC_ip1szac0vi
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 29;
	
	  ;% rtP.Filter_IC_kxhduaasun
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 30;
	
	  ;% rtP.eachwheelInertia_Value
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 31;
	
	  ;% rtP.initialOmega_Value
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 32;
	
	  ;% rtP.disturbTorques_Value
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 35;
	
	  ;% rtP.magTorq_Value
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 38;
	
	  ;% rtP.radToDeg_Value
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 39;
	
	  ;% rtP.uI_Gain
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 40;
	
	  ;% rtP.Filter_IC_fkv2yqdqrh
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 41;
	
	  ;% rtP.Integrator_IC_kv0s2wisqu
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 42;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtB)
    ;%
      section.nData     = 18;
      section.data(18)  = dumData; %prealloc
      
	  ;% rtB.gu33yk2b0b
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.f4cnibc0yp
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 4;
	
	  ;% rtB.i3yrvpnj1b
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 7;
	
	  ;% rtB.gcc2inn5w5
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 8;
	
	  ;% rtB.dz2lr3swp4
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 9;
	
	  ;% rtB.hvqlinfhmr
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 10;
	
	  ;% rtB.fgsqhcujs1
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 13;
	
	  ;% rtB.auxcmgkg3f
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 16;
	
	  ;% rtB.eseqxvyzd5
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 19;
	
	  ;% rtB.anxrores0z
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 23;
	
	  ;% rtB.kk5yzthjex
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 24;
	
	  ;% rtB.f4ykmpllaj
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 25;
	
	  ;% rtB.ifro01qjvs
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 26;
	
	  ;% rtB.kyhzfztygn
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 27;
	
	  ;% rtB.o5hf3jbkmr
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 28;
	
	  ;% rtB.p5tu0n4aab
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 29;
	
	  ;% rtB.l50wuyy3c2
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 32;
	
	  ;% rtB.d3fqmonb1x
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 35;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 2;
    sectIdxOffset = 1;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtDW)
    ;%
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.ewc0ii2kgd.LoggedData
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% rtDW.kpflfszbya
	  section.data(1).logicalSrcIdx = 1;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.bzfbd3uylg
	  section.data(2).logicalSrcIdx = 2;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.k3lkivxt00
	  section.data(3).logicalSrcIdx = 3;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.m03lillh30
	  section.data(4).logicalSrcIdx = 4;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 1291004597;
  targMap.checksum1 = 306697426;
  targMap.checksum2 = 1191152650;
  targMap.checksum3 = 1664465103;

