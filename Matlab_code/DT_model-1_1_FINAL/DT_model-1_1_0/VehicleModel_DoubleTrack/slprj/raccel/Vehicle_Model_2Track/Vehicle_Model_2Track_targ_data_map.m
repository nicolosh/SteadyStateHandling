    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 2;
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
            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.vehicle_data
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 50;
            section.data(50)  = dumData; %prealloc

                    ;% rtP.Const_DeltaH
                    section.data(1).logicalSrcIdx = 1;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.Test_
                    section.data(2).logicalSrcIdx = 2;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.V0
                    section.data(3).logicalSrcIdx = 3;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.VF
                    section.data(4).logicalSrcIdx = 4;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.V_const
                    section.data(5).logicalSrcIdx = 5;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.V_slope
                    section.data(6).logicalSrcIdx = 6;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.X0
                    section.data(7).logicalSrcIdx = 7;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.PIDController_D
                    section.data(8).logicalSrcIdx = 8;
                    section.data(8).dtTransOffset = 29;

                    ;% rtP.PIDController_I
                    section.data(9).logicalSrcIdx = 9;
                    section.data(9).dtTransOffset = 30;

                    ;% rtP.DiscreteDerivative_ICPrevScaledInput
                    section.data(10).logicalSrcIdx = 10;
                    section.data(10).dtTransOffset = 31;

                    ;% rtP.DiscreteDerivative1_ICPrevScaledInput
                    section.data(11).logicalSrcIdx = 11;
                    section.data(11).dtTransOffset = 32;

                    ;% rtP.PIDController_InitialConditionForFilter
                    section.data(12).logicalSrcIdx = 12;
                    section.data(12).dtTransOffset = 33;

                    ;% rtP.PIDController_InitialConditionForIntegrator
                    section.data(13).logicalSrcIdx = 13;
                    section.data(13).dtTransOffset = 34;

                    ;% rtP.Conststeering_InitialOutput
                    section.data(14).logicalSrcIdx = 14;
                    section.data(14).dtTransOffset = 35;

                    ;% rtP.Steeringramp_InitialOutput
                    section.data(15).logicalSrcIdx = 15;
                    section.data(15).dtTransOffset = 36;

                    ;% rtP.PIDController_LowerSaturationLimit
                    section.data(16).logicalSrcIdx = 16;
                    section.data(16).dtTransOffset = 37;

                    ;% rtP.PIDController_N
                    section.data(17).logicalSrcIdx = 17;
                    section.data(17).dtTransOffset = 38;

                    ;% rtP.PIDController_P
                    section.data(18).logicalSrcIdx = 18;
                    section.data(18).dtTransOffset = 39;

                    ;% rtP.PIDController_UpperSaturationLimit
                    section.data(19).logicalSrcIdx = 19;
                    section.data(19).dtTransOffset = 40;

                    ;% rtP.Steeringramp_slope
                    section.data(20).logicalSrcIdx = 20;
                    section.data(20).dtTransOffset = 41;

                    ;% rtP.Conststeering_slope
                    section.data(21).logicalSrcIdx = 21;
                    section.data(21).dtTransOffset = 42;

                    ;% rtP.Speedramp_start
                    section.data(22).logicalSrcIdx = 22;
                    section.data(22).dtTransOffset = 43;

                    ;% rtP.Steeringramp_start
                    section.data(23).logicalSrcIdx = 23;
                    section.data(23).dtTransOffset = 44;

                    ;% rtP.Conststeering_start
                    section.data(24).logicalSrcIdx = 24;
                    section.data(24).dtTransOffset = 45;

                    ;% rtP.Saturation2_LowerSat
                    section.data(25).logicalSrcIdx = 25;
                    section.data(25).dtTransOffset = 46;

                    ;% rtP.Saturation1_UpperSat
                    section.data(26).logicalSrcIdx = 26;
                    section.data(26).dtTransOffset = 47;

                    ;% rtP.Saturation1_LowerSat
                    section.data(27).logicalSrcIdx = 27;
                    section.data(27).dtTransOffset = 48;

                    ;% rtP.Saturation3_LowerSat
                    section.data(28).logicalSrcIdx = 28;
                    section.data(28).dtTransOffset = 49;

                    ;% rtP.DiscreteTimeIntegrator_gainval
                    section.data(29).logicalSrcIdx = 29;
                    section.data(29).dtTransOffset = 50;

                    ;% rtP.Step_Y0
                    section.data(30).logicalSrcIdx = 30;
                    section.data(30).dtTransOffset = 51;

                    ;% rtP.Pedal_Threshold
                    section.data(31).logicalSrcIdx = 31;
                    section.data(31).dtTransOffset = 52;

                    ;% rtP.Saturation_LowerSat
                    section.data(32).logicalSrcIdx = 32;
                    section.data(32).dtTransOffset = 53;

                    ;% rtP.Step_Y0_esoe35nzod
                    section.data(33).logicalSrcIdx = 33;
                    section.data(33).dtTransOffset = 54;

                    ;% rtP.Step_Y0_elgkip05b4
                    section.data(34).logicalSrcIdx = 34;
                    section.data(34).dtTransOffset = 55;

                    ;% rtP.Steering_Threshold
                    section.data(35).logicalSrcIdx = 35;
                    section.data(35).dtTransOffset = 56;

                    ;% rtP.Gain1_Gain
                    section.data(36).logicalSrcIdx = 36;
                    section.data(36).dtTransOffset = 57;

                    ;% rtP.Gain_Gain
                    section.data(37).logicalSrcIdx = 37;
                    section.data(37).dtTransOffset = 58;

                    ;% rtP.Gain_Gain_i5lx5ddvss
                    section.data(38).logicalSrcIdx = 38;
                    section.data(38).dtTransOffset = 59;

                    ;% rtP.Gain_Gain_hjp5rjecra
                    section.data(39).logicalSrcIdx = 39;
                    section.data(39).dtTransOffset = 60;

                    ;% rtP.Gain_Gain_jqswpxfqa4
                    section.data(40).logicalSrcIdx = 40;
                    section.data(40).dtTransOffset = 61;

                    ;% rtP.UnitDelay_InitialCondition
                    section.data(41).logicalSrcIdx = 41;
                    section.data(41).dtTransOffset = 62;

                    ;% rtP.Gain_Gain_jcywftknhq
                    section.data(42).logicalSrcIdx = 42;
                    section.data(42).dtTransOffset = 85;

                    ;% rtP.Gain_Gain_g0dvnhmpu3
                    section.data(43).logicalSrcIdx = 43;
                    section.data(43).dtTransOffset = 86;

                    ;% rtP.Gain_Gain_m4rgufjtp0
                    section.data(44).logicalSrcIdx = 44;
                    section.data(44).dtTransOffset = 87;

                    ;% rtP.Gain_Gain_mnhwbspcdd
                    section.data(45).logicalSrcIdx = 45;
                    section.data(45).dtTransOffset = 88;

                    ;% rtP.Gain_Gain_fvorafzpg4
                    section.data(46).logicalSrcIdx = 46;
                    section.data(46).dtTransOffset = 89;

                    ;% rtP.Gain_Gain_ffibbzmb4h
                    section.data(47).logicalSrcIdx = 47;
                    section.data(47).dtTransOffset = 90;

                    ;% rtP.Gain_Gain_gisefcr1sl
                    section.data(48).logicalSrcIdx = 48;
                    section.data(48).dtTransOffset = 91;

                    ;% rtP.TSamp_WtEt
                    section.data(49).logicalSrcIdx = 49;
                    section.data(49).dtTransOffset = 92;

                    ;% rtP.TSamp_WtEt_icq4vcnz4z
                    section.data(50).logicalSrcIdx = 50;
                    section.data(50).dtTransOffset = 93;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
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
            section.nData     = 17;
            section.data(17)  = dumData; %prealloc

                    ;% rtB.d3xonmy1hw
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.czfib24vsx
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 23;

                    ;% rtB.dfl3kewuef
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 24;

                    ;% rtB.bf5octyrk4
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 25;

                    ;% rtB.hgfsmvz4k1
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 26;

                    ;% rtB.k2jl0n1mcd
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 27;

                    ;% rtB.ermlayis1n
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 50;

                    ;% rtB.is4elcsyhb
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 51;

                    ;% rtB.ckx1d40g1x
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 52;

                    ;% rtB.hxvw03zyvr
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 53;

                    ;% rtB.lanjwes5zx
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 54;

                    ;% rtB.c5fwu3532g
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 55;

                    ;% rtB.nnhdp4qv0s
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 56;

                    ;% rtB.l42j3en20w
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 57;

                    ;% rtB.gwxysfakeo
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 58;

                    ;% rtB.nbbgeyemhm
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 59;

                    ;% rtB.dyiczxwq2y
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 82;

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
        nTotSects     = 5;
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
            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtDW.d3fbkn3bca
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.b2axcahws4
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 23;

                    ;% rtDW.dqq0avvguz
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 46;

                    ;% rtDW.djnugtodz0
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 47;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 11;
            section.data(11)  = dumData; %prealloc

                    ;% rtDW.d5dbtip34d.LoggedData
                    section.data(1).logicalSrcIdx = 4;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.j321etzcwb.AQHandles
                    section.data(2).logicalSrcIdx = 5;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.eqsmgxfrzv.AQHandles
                    section.data(3).logicalSrcIdx = 6;
                    section.data(3).dtTransOffset = 3;

                    ;% rtDW.b5xx0e2w04.AQHandles
                    section.data(4).logicalSrcIdx = 7;
                    section.data(4).dtTransOffset = 4;

                    ;% rtDW.bk33az04mk.AQHandles
                    section.data(5).logicalSrcIdx = 8;
                    section.data(5).dtTransOffset = 5;

                    ;% rtDW.kvnkak3jpy.AQHandles
                    section.data(6).logicalSrcIdx = 9;
                    section.data(6).dtTransOffset = 6;

                    ;% rtDW.n1rq3xz5qe.AQHandles
                    section.data(7).logicalSrcIdx = 10;
                    section.data(7).dtTransOffset = 7;

                    ;% rtDW.aufl3dtfm4.AQHandles
                    section.data(8).logicalSrcIdx = 11;
                    section.data(8).dtTransOffset = 8;

                    ;% rtDW.ln4wd0tmne.AQHandles
                    section.data(9).logicalSrcIdx = 12;
                    section.data(9).dtTransOffset = 31;

                    ;% rtDW.mnyaugpzdj.AQHandles
                    section.data(10).logicalSrcIdx = 13;
                    section.data(10).dtTransOffset = 54;

                    ;% rtDW.kme550xfzk.AQHandles
                    section.data(11).logicalSrcIdx = 14;
                    section.data(11).dtTransOffset = 57;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.jowpdqkr40
                    section.data(1).logicalSrcIdx = 15;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.dsjvzjmnow
                    section.data(2).logicalSrcIdx = 16;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.milaeogcvv
                    section.data(1).logicalSrcIdx = 17;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.lqejqoyonp
                    section.data(2).logicalSrcIdx = 18;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.h2sjcswtty
                    section.data(1).logicalSrcIdx = 19;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.pousxiyznf
                    section.data(2).logicalSrcIdx = 20;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
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


    targMap.checksum0 = 1253880540;
    targMap.checksum1 = 3128183577;
    targMap.checksum2 = 784115524;
    targMap.checksum3 = 2032923447;

