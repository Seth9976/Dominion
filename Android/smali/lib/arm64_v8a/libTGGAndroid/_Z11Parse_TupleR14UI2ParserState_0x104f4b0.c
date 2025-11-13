// 函数: _Z11Parse_TupleR14UI2ParserState
// 地址: 0x104f4b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v1 = *arg1
int128_t v0 = *(arg1 + 0x10)
UI2ParserState& result_1 = arg1
UI2ParserState& result
int128_t v0_1
int128_t v1_1
result, v0_1, v1_1 = parse_numeric_literal(arg1)
int32_t var_58
int128_t* entry_x8

if (var_58 - 2 u>= 3)
label_104f668:
    v0_1 = var_58.o
label_104f66c:
    result = &entry_x8[1]
label_104f674:
    *entry_x8 = v0_1
label_104f678:
    XString::XString(result)
else
    char* x8_2 = *(result_1 + 8)
    uint8_t* const x9_1 = &jump_table_86937c
    uint64_t x10_2 = zx.q(zx.d(*x8_2) - 9)
    bool cond:0_1 = x10_2.d u> 0x17
    bool cond:1_1 = x10_2.d == 0x17
    bool cond:2_1 = x10_2.d u<= 0x17
    bool cond:3_1 = x10_2.d u>= 0x17
    bool cond:4_1 = x10_2.d u<= 0x17
    bool cond:5_1 = x10_2.d != 0x17
    bool cond:6_1 = x10_2.d == 0x17
    bool cond:7_1 = x10_2.d u> 0x17
    bool cond:8_1 = x10_2.d u<= 0x17
    bool cond:9_1 = x10_2.d u>= 0x17
    bool cond:10_1 = x10_2.d u<= 0x17
    bool cond:11_1 = x10_2.d != 0x17
    bool cond:12_1 = x10_2.d == 0x17
    bool cond:13_1 = x10_2.d u> 0x17
    bool cond:14_1 = x10_2.d u<= 0x17
    bool cond:15_1 = x10_2.d u>= 0x17
    bool cond:16_1 = x10_2.d u<= 0x17
    bool cond:17_1 = x10_2.d u> 0x17
    bool cond:18_1 = x10_2.d == 0x17
    bool cond:19_1 = x10_2.d u<= 0x17
    bool cond:20_1 = x10_2.d != 0x17
    uint64_t x11_1
    uint64_t x12_1
    
    if (x10_2.d u<= 0x17)
    label_104f520:
        x11_1 = &data_104f508
    label_104f524:
        x12_1 = zx.q(jump_table_86937c[x10_2])
    label_104f528:
        x11_1 += x12_1 << 2
        
        while (true)
            switch (x11_1)
                case &data_104f508
                    x8_2 = &x8_2[1]
                label_104f50c:
                    *(result_1 + 8) = x8_2
                label_104f510:
                    x10_2 = zx.q(*x8_2)
                label_104f514:
                    x10_2 = zx.q(x10_2.d - 9)
                label_104f518:
                    cond:0_1 = x10_2.d u> 0x17
                    cond:1_1 = x10_2.d == 0x17
                    cond:2_1 = x10_2.d u<= 0x17
                    cond:3_1 = x10_2.d u>= 0x17
                    cond:4_1 = x10_2.d u<= 0x17
                    cond:5_1 = x10_2.d != 0x17
                    cond:6_1 = x10_2.d == 0x17
                    cond:7_1 = x10_2.d u> 0x17
                    cond:8_1 = x10_2.d u<= 0x17
                    cond:9_1 = x10_2.d u>= 0x17
                    cond:10_1 = x10_2.d u<= 0x17
                    cond:11_1 = x10_2.d != 0x17
                    cond:12_1 = x10_2.d == 0x17
                    cond:13_1 = x10_2.d u> 0x17
                    cond:14_1 = x10_2.d u<= 0x17
                    cond:15_1 = x10_2.d u>= 0x17
                    cond:16_1 = x10_2.d u<= 0x17
                    cond:17_1 = x10_2.d u> 0x17
                    cond:18_1 = x10_2.d == 0x17
                    cond:19_1 = x10_2.d u<= 0x17
                    cond:20_1 = x10_2.d != 0x17
                label_104f51c:
                    
                    if (cond:0_1)
                        goto label_104f57c
                    
                    goto label_104f520
                case 0x104f50c
                    goto label_104f50c
                case 0x104f510
                    goto label_104f510
                case 0x104f514
                    goto label_104f514
                case 0x104f518
                    goto label_104f518
                case 0x104f51c
                    goto label_104f51c
                case 0x104f520
                    goto label_104f520
                case 0x104f524
                    goto label_104f524
                case 0x104f528
                    goto label_104f528
                case 0x104f52c
                    continue
                case 0x104f530
                    x10_2 = x8_2
                label_104f534:
                    x10_2 += 1
                    x11_1 = zx.q(*x10_2)
                label_104f538:
                    x12_1 = zx.q(*(result_1 + 0x18))
                label_104f53c:
                    cond:1_1 = x11_1.d == 0xd
                label_104f554:
                    
                    if (not(cond:1_1))
                        goto label_104f558
                    
                    x8_2 = x10_2
                label_104f558:
                    x11_1 = zx.q(x12_1.d + 1)
                label_104f55c:
                    x8_2 = &x8_2[1]
                label_104f560:
                    *(result_1 + 8) = x8_2
                    *(result_1 + 0x10) = x8_2
                label_104f564:
                    *(result_1 + 0x18) = x11_1.d
                label_104f568:
                    x10_2 = zx.q(*x8_2)
                label_104f56c:
                    x10_2 = zx.q(x10_2.d - 9)
                label_104f570:
                    cond:0_1 = x10_2.d u> 0x17
                    cond:1_1 = x10_2.d == 0x17
                    cond:2_1 = x10_2.d u<= 0x17
                    cond:3_1 = x10_2.d u>= 0x17
                    cond:4_1 = x10_2.d u<= 0x17
                    cond:5_1 = x10_2.d != 0x17
                    cond:6_1 = x10_2.d == 0x17
                    cond:7_1 = x10_2.d u> 0x17
                    cond:8_1 = x10_2.d u<= 0x17
                    cond:9_1 = x10_2.d u>= 0x17
                    cond:10_1 = x10_2.d u<= 0x17
                    cond:11_1 = x10_2.d != 0x17
                    cond:12_1 = x10_2.d == 0x17
                    cond:13_1 = x10_2.d u> 0x17
                    cond:14_1 = x10_2.d u<= 0x17
                    cond:15_1 = x10_2.d u>= 0x17
                    cond:16_1 = x10_2.d u<= 0x17
                    cond:17_1 = x10_2.d u> 0x17
                    cond:18_1 = x10_2.d == 0x17
                    cond:19_1 = x10_2.d u<= 0x17
                    cond:20_1 = x10_2.d != 0x17
                label_104f574:
                    
                    if (cond:2_1)
                        goto label_104f520
                    
                    goto label_104f57c
                case 0x104f534
                    goto label_104f534
                case 0x104f538
                    goto label_104f538
                case 0x104f53c
                    goto label_104f53c
                case 0x104f540
                    goto label_104f554
                case 0x104f544
                    x10_2 = x8_2
                label_104f548:
                    x10_2 += 1
                    x11_1 = zx.q(*x10_2)
                label_104f54c:
                    x12_1 = zx.q(*(result_1 + 0x18))
                label_104f550:
                    cond:1_1 = x11_1.d == 0xa
                    goto label_104f554
                case 0x104f548
                    goto label_104f548
                case 0x104f54c
                    goto label_104f54c
                case 0x104f550
                    goto label_104f550
                case 0x104f558
                    goto label_104f558
                case 0x104f55c
                    goto label_104f55c
                case 0x104f560
                    goto label_104f560
                case 0x104f564
                    goto label_104f564
                case 0x104f568
                    goto label_104f568
                case 0x104f56c
                    goto label_104f56c
                case 0x104f570
                    goto label_104f570
                case 0x104f574
                    goto label_104f574
                case 0x104f578
                    goto label_104f57c
                case 0x104f580
                    goto label_104f580
                case 0x104f584
                    goto label_104f584
                case 0x104f588
                    goto label_104f588
                case 0x104f58c
                    goto label_104f58c
                case 0x104f590
                    goto label_104f590
                case 0x104f594
                    goto label_104f594
                case 0x104f598
                    goto label_104f598
                case 0x104f59c
                    goto label_104f59c
                case 0x104f5a0
                    goto label_104f5a0
                case 0x104f5a4
                    goto label_104f5a4
                case 0x104f5a8
                    goto label_104f5a8
                case 0x104f5b0
                    goto label_104f5b0
                case &data_104f5b4
                    goto label_104f5b4
                case 0x104f5b8
                    goto label_104f5b8
                case 0x104f5bc
                    goto label_104f5bc
                case 0x104f5c0
                    goto label_104f5c4
                case 0x104f5c8
                    goto label_104f5c8
                case 0x104f5cc
                    goto label_104f5cc
                case 0x104f5d0
                    goto label_104f5d0
                case 0x104f5d4
                    goto label_104f5d4
                case 0x104f5d8
                    goto label_104f5d8
                case 0x104f5dc
                    goto label_104f5dc
                case 0x104f5e0
                    goto label_104f5e0
                case 0x104f5e4
                    goto label_104f5e4
                case 0x104f5e8
                    goto label_104f5e8
                case 0x104f5ec
                    goto label_104f5ec
                case 0x104f5f0
                    goto label_104f5f0
                case 0x104f5f4
                    goto label_104f5f4
                case 0x104f5fc
                    goto label_104f5fc
                case 0x104f600
                    goto label_104f600
                case 0x104f604
                    goto label_104f604
                case 0x104f608
                    goto label_104f608
                case 0x104f610
                    goto label_104f610
                case 0x104f614
                    goto label_104f614
                case 0x104f618
                    goto label_104f618
                case 0x104f61c
                    goto label_104f61c
                case 0x104f620
                    goto label_104f620
                case 0x104f624
                    goto label_104f624
                case 0x104f628
                    goto label_104f628
                case 0x104f62c
                    goto label_104f62c
                case 0x104f630
                    goto label_104f630
                case 0x104f634
                    goto label_104f634
                case 0x104f638
                    goto label_104f638
                case 0x104f63c
                    goto label_104f63c
                case 0x104f640
                    goto label_104f640
                case 0x104f644
                    goto label_104f644
                case 0x104f648
                    goto label_104f648
                case 0x104f64c
                    goto label_104f64c
                case 0x104f650
                    goto label_104f5ac
                case 0x104f654
                    goto label_104f654
                case 0x104f658
                    goto label_104f658
                case 0x104f65c
                    goto label_104f65c
                case 0x104f660
                    goto label_104f660
                case 0x104f664
                    goto label_104f60c
                case 0x104f668
                    goto label_104f668
                case 0x104f66c
                    goto label_104f66c
                case 0x104f670
                    goto label_104f674
                case 0x104f678
                    goto label_104f678
                case 0x104f67c
                    return XString::~XString()
                case 0x104f680
                    goto label_104f680
                case 0x104f684
                    goto label_104f688
                case 0x104f68c
                    goto label_104f690
                case 0x104f694
                    goto label_104f694
                case 0x104f698
                    goto label_104f698
                case 0x104f69c
                    goto label_104f69c
                case 0x104f6b8
                    return result
                case 0x104f6c8
                    goto label_104f6cc
                case 0x104f6d0
                    goto label_104f6d0
                case 0x104f6d4
                    goto label_104f6d4
                case 0x104f6d8
                    goto label_104f6d8
                case 0x104f6dc
                    goto label_104f6dc
                case 0x104f6e0
                    goto label_104f6e0
                case 0x104f6e4
                    goto label_104f6e4
                case 0x104f6e8
                    goto label_104f6e8
                case 0x104f6ec
                    goto label_104f6ec
                case 0x104f6f0
                    goto label_104f6f0
                case 0x104f6f4
                    goto label_104f6f4
                case 0x104f6f8
                    goto label_104f6f8
                case 0x104f700
                    goto label_104f700
                case &data_104f704
                    goto label_104f704
                case 0x104f708
                    goto label_104f708
                case 0x104f70c
                    goto label_104f70c
                case 0x104f710
                    goto label_104f714
                case 0x104f718
                    goto label_104f718
                case 0x104f71c
                    goto label_104f71c
                case 0x104f720
                    goto label_104f720
                case 0x104f724
                    goto label_104f724
                case 0x104f728
                    goto label_104f728
                case 0x104f72c
                    goto label_104f72c
                case 0x104f730
                    goto label_104f730
                case 0x104f734
                    goto label_104f734
                case 0x104f738
                    goto label_104f738
                case 0x104f73c
                    goto label_104f73c
                case 0x104f740
                    goto label_104f740
                case 0x104f744
                    goto label_104f744
                case 0x104f748
                    goto label_104f748
                case 0x104f74c
                    goto label_104f74c
                case 0x104f750
                    goto label_104f7e8_2
                case 0x104f754
                    goto label_104f754
                case 0x104f758
                    goto label_104f758
                case 0x104f75c
                    goto label_104f75c
                case 0x104f760
                    goto label_104f760
                case 0x104f768
                    goto label_104f768
                case 0x104f76c
                    goto label_104f76c
                case 0x104f770
                    goto label_104f770
                case 0x104f774
                    goto label_104f774
                case 0x104f778
                    goto label_104f778
                case 0x104f77c
                    goto label_104f77c
                case 0x104f780
                    goto label_104f780
                case 0x104f784
                    goto label_104f784
                case 0x104f788
                    goto label_104f788
                case 0x104f78c
                    goto label_104f78c
                case 0x104f790
                    goto label_104f790
                case 0x104f794
                    goto label_104f794
                case 0x104f798
                    goto label_104f798
                case 0x104f79c
                    goto label_104f79c
                case 0x104f7a0
                    goto label_104f7a0
                case 0x104f7a4
                    goto label_104f7a4
                case 0x104f7a8
                    goto label_104f6fc
                case 0x104f7ac
                    goto label_104f7ac
                case 0x104f7b0
                    goto label_104f7b0
                case 0x104f7b4
                    goto label_104f7b4
                case 0x104f7b8
                    goto label_104f7b8
                case 0x104f7bc
                    goto label_104f764
                case 0x104f7c0
                    goto label_104f7c0
                case 0x104f7c4
                    goto label_104f7c8
                case 0x104f7cc
                    goto label_104f7d0
                case 0x104f7d4
                    goto label_104f7d4
                case 0x104f7d8
                    goto label_104f7d8
                case 0x104f7dc
                    goto label_104f7dc
                case 0x104f7ec
                    goto label_104f6a8
                case 0x104f7f0
                    goto label_104f7f4
                case 0x104f7f8
                    goto label_104f7f8
                case 0x104f7fc
                    goto label_104f7fc
                case 0x104f800
                    goto label_104f800
                case 0x104f804
                    goto label_104f804
                case 0x104f808
                    goto label_104f808
                case 0x104f80c
                    goto label_104f80c
                case 0x104f810
                    goto label_104f810
                case 0x104f814
                    goto label_104f814
                case 0x104f818
                    goto label_104f818
                case 0x104f81c
                    goto label_104f81c
                case 0x104f820
                    goto label_104f820
                case 0x104f824
                    goto label_104f890
                case &data_104f828
                    goto label_104f828
                case 0x104f82c
                    goto label_104f82c
                case 0x104f830
                    goto label_104f830
                case 0x104f834
                    goto label_104f834
                case 0x104f838
                    goto label_104f838
                case 0x104f83c
                    goto label_104f83c
                case 0x104f840
                    goto label_104f840
                case 0x104f844
                    goto label_104f844
                case 0x104f848
                    goto label_104f848
                case 0x104f84c
                    goto label_104f84c
                case 0x104f850
                    goto label_104f850
                case 0x104f854
                    goto label_104f854
                case 0x104f858
                    goto label_104f858
                case 0x104f85c
                    goto label_104f870
                case 0x104f860
                    goto label_104f860
                case 0x104f864
                    goto label_104f864
                case 0x104f868
                    goto label_104f868
                case 0x104f86c
                    goto label_104f86c
                case 0x104f874
                    goto label_104f874
                case 0x104f878
                    goto label_104f878
                case 0x104f87c
                    goto label_104f87c
                case 0x104f880
                    goto label_104f880
                case 0x104f884
                    goto label_104f884
                case 0x104f888
                    goto label_104f888
                case 0x104f88c
                    goto label_104f88c
                case 0x104f894
                    break
                case 0x104f898
                    goto label_104f898
                case 0x104f89c
                    goto label_104f89c
                case 0x104f8a0
                    goto label_104f8a4
                case 0x104f8a8
                    goto label_104f8ac
                case 0x104f8b0
                    goto label_104f8b0
                case 0x104f8b4
                    goto label_104f8b4
                case 0x104f8b8
                    goto label_104f8b8
                case 0x104f8bc
                    goto label_104f8bc
                case 0x104f8c0
                    goto label_104f8c0
                case 0x104f8c4
                    goto label_104f8c4
                case 0x104f8c8
                    goto label_104f8c8
                case 0x104f8cc
                    goto label_104f8cc
                case 0x104f8d0
                    goto label_104f8d0
                case 0x104f8d4
                    goto label_104f8d4
                case 0x104f8d8
                    goto label_104f8d8
                case 0x104f8dc
                    goto label_104f8dc
                case 0x104f8e0
                    goto label_104f8e0
                case 0x104f8e4
                    goto label_104f8e4
                case 0x104f8e8
                    goto label_104f8e8
                case 0x104f8ec
                    goto label_104f8ec
                case 0x104f8f0
                    goto label_104f91c
                case 0x104f8f4
                    goto label_104f8f4
                case 0x104f8f8
                    goto label_104f8fc
                case 0x104f900
                    goto label_104f904
        
        goto label_104f894
    
label_104f57c:
    result = result_1
label_104f580:
    v0_1, v1_1 = parse_numeric_literal(result)
label_104f584:
    int32_t var_70
    x8_2 = zx.q(var_70)
label_104f588:
    x8_2 = zx.q(x8_2.d - 2)
label_104f58c:
    cond:3_1 = x8_2.d u>= 3
label_104f590:
    
    if (cond:3_1)
    label_104f680:
        v1_1 = v1
        v0_1 = v0
    label_104f688:
        result = &entry_x8[1]
    label_104f690:
        *result_1 = v1_1
        *(result_1 + 0x10) = v0_1
    label_104f694:
        v0_1 = var_70.o
    label_104f698:
        *entry_x8 = v0_1
    label_104f69c:
        XString::XString(result)
    else
    label_104f594:
        x8_2 = *(result_1 + 8)
    label_104f598:
        x9_1 = "HHHH0"
    label_104f59c:
        x9_1 = &x9_1[0x394]
    label_104f5a0:
        x10_2 = zx.q(*x8_2)
    label_104f5a4:
        cond:4_1 = x10_2.d u<= 0x2c
    label_104f5a8:
        
        if (cond:4_1)
        label_104f62c:
            
            while (true)
                x11_1 = &data_104f5b4
            label_104f630:
                x12_1 = zx.q(x9_1[x10_2])
            label_104f634:
                x11_1 += x12_1 << 2
            label_104f638:
                
                switch (x11_1)
                    case &data_104f5b4
                        goto label_104f5b4
                    case 0x104f5fc
                    label_104f5fc:
                        x10_2 = x8_2
                    label_104f600:
                        x10_2 += 1
                        x11_1 = zx.q(*x10_2)
                    label_104f604:
                        x12_1 = zx.q(*(result_1 + 0x18))
                    label_104f608:
                        cond:6_1 = x11_1.d == 0xd
                    label_104f60c:
                        
                        if (cond:6_1)
                            x8_2 = x10_2
                        
                    label_104f610:
                        x11_1 = zx.q(x12_1.d + 1)
                    label_104f614:
                        x8_2 = &x8_2[1]
                    label_104f618:
                        *(result_1 + 8) = x8_2
                        *(result_1 + 0x10) = x8_2
                    label_104f61c:
                        *(result_1 + 0x18) = x11_1.d
                    label_104f620:
                        x10_2 = zx.q(*x8_2)
                    label_104f624:
                        cond:7_1 = x10_2.d u> 0x2c
                    label_104f628:
                        
                        if (cond:7_1)
                            goto label_104f5ac
                        
                        continue
                    case 0x104f63c
                    label_104f63c:
                        x8_2 = &x8_2[1]
                    label_104f640:
                        *(result_1 + 8) = x8_2
                    label_104f644:
                        x10_2 = zx.q(*x8_2)
                    label_104f648:
                        cond:8_1 = x10_2.d u<= 0x2c
                    label_104f64c:
                        
                        if (not(cond:8_1))
                            goto label_104f5ac
                        
                        continue
                    case 0x104f654
                    label_104f654:
                        x10_2 = x8_2
                    label_104f658:
                        x10_2 += 1
                        x11_1 = zx.q(*x10_2)
                    label_104f65c:
                        x12_1 = zx.q(*(result_1 + 0x18))
                    label_104f660:
                        cond:6_1 = x11_1.d == 0xa
                        goto label_104f60c
                    case 0x104f6c8
                        break
            
            goto label_104f6cc
        
    label_104f5ac:
        cond:5_1 = x10_2.d != 0x5d
    label_104f5b0:
        char* var_68
        char* var_50
        
        if (cond:5_1)
        label_104f6cc:
            result = result_1
        label_104f6d0:
            v0_1, v1_1 = parse_numeric_literal(result)
        label_104f6d4:
            int32_t var_88
            x8_2 = zx.q(var_88)
        label_104f6d8:
            x8_2 = zx.q(x8_2.d - 2)
        label_104f6dc:
            cond:9_1 = x8_2.d u>= 3
        label_104f6e0:
            
            if (cond:9_1)
            label_104f7c0:
                v1_1 = v1
                v0_1 = v0
            label_104f7c8:
                result = &entry_x8[1]
            label_104f7d0:
                *result_1 = v1_1
                *(result_1 + 0x10) = v0_1
            label_104f7d4:
                v0_1 = var_88.o
            label_104f7d8:
                *entry_x8 = v0_1
            label_104f7dc:
                XString::XString(result)
            label_104f7e8:
                XString::~XString()
            else
            label_104f6e4:
                x8_2 = *(result_1 + 8)
            label_104f6e8:
                x9_1 = "HHHH0"
            label_104f6ec:
                x9_1 = &x9_1[0x3c1]
            label_104f6f0:
                x10_2 = zx.q(*x8_2)
            label_104f6f4:
                cond:10_1 = x10_2.d u<= 0x2c
            label_104f6f8:
                
                if (cond:10_1)
                label_104f784:
                    
                    while (true)
                        x11_1 = &data_104f704
                    label_104f788:
                        x12_1 = zx.q(x9_1[x10_2])
                    label_104f78c:
                        x11_1 += x12_1 << 2
                    label_104f790:
                        
                        switch (x11_1)
                            case &data_104f704
                                goto label_104f704
                            case 0x104f754
                            label_104f754:
                                x10_2 = x8_2
                            label_104f758:
                                x10_2 += 1
                                x11_1 = zx.q(*x10_2)
                            label_104f75c:
                                x12_1 = zx.q(*(result_1 + 0x18))
                            label_104f760:
                                cond:12_1 = x11_1.d == 0xa
                            label_104f764:
                                
                                if (cond:12_1)
                                    x8_2 = x10_2
                                
                            label_104f768:
                                x11_1 = zx.q(x12_1.d + 1)
                            label_104f76c:
                                x8_2 = &x8_2[1]
                            label_104f770:
                                *(result_1 + 8) = x8_2
                                *(result_1 + 0x10) = x8_2
                            label_104f774:
                                *(result_1 + 0x18) = x11_1.d
                            label_104f778:
                                x10_2 = zx.q(*x8_2)
                            label_104f77c:
                                cond:13_1 = x10_2.d u> 0x2c
                            label_104f780:
                                
                                if (cond:13_1)
                                    goto label_104f6fc
                                
                                continue
                            case 0x104f794
                            label_104f794:
                                x8_2 = &x8_2[1]
                            label_104f798:
                                *(result_1 + 8) = x8_2
                            label_104f79c:
                                x10_2 = zx.q(*x8_2)
                            label_104f7a0:
                                cond:14_1 = x10_2.d u<= 0x2c
                            label_104f7a4:
                                
                                if (not(cond:14_1))
                                    goto label_104f6fc
                                
                                continue
                            case 0x104f7ac
                            label_104f7ac:
                                x10_2 = x8_2
                            label_104f7b0:
                                x10_2 += 1
                                x11_1 = zx.q(*x10_2)
                            label_104f7b4:
                                x12_1 = zx.q(*(result_1 + 0x18))
                            label_104f7b8:
                                cond:12_1 = x11_1.d == 0xd
                                goto label_104f764
                            case 0x104f7f0
                                break
                    
                    goto label_104f7f4
                
            label_104f6fc:
                cond:11_1 = x10_2.d != 0x5d
            label_104f700:
                char* var_80
                
                if (cond:11_1)
                label_104f7f4:
                    result = result_1
                label_104f7f8:
                    v0_1, v1_1 = parse_numeric_literal(result)
                label_104f7fc:
                    int32_t var_a0
                    x8_2 = zx.q(var_a0)
                label_104f800:
                    x8_2 = zx.q(x8_2.d - 2)
                label_104f804:
                    cond:15_1 = x8_2.d u>= 3
                label_104f808:
                    
                    if (cond:15_1)
                    label_104f8f4:
                        v1_1 = v1
                        v0_1 = v0
                    label_104f8fc:
                        result = &entry_x8[1]
                    label_104f904:
                        *result_1 = v1_1
                        *(result_1 + 0x10) = v0_1
                        *entry_x8 = var_a0.o
                        XString::XString(result)
                    else
                    label_104f80c:
                        x8_2 = *(result_1 + 8)
                    label_104f810:
                        x9_1 = "HHHH0"
                    label_104f814:
                        x9_1 = &x9_1[0x3ee]
                    label_104f818:
                        x10_2 = zx.q(*x8_2)
                    label_104f81c:
                        cond:16_1 = x10_2.d u<= 0x2c
                    label_104f820:
                        
                        if (cond:16_1)
                        label_104f83c:
                            
                            while (true)
                                x11_1 = &data_104f828
                            label_104f840:
                                x12_1 = zx.q(x9_1[x10_2])
                            label_104f844:
                                x11_1 += x12_1 << 2
                            label_104f848:
                                
                                switch (x11_1)
                                    case &data_104f828
                                    label_104f828:
                                        x8_2 = &x8_2[1]
                                    label_104f82c:
                                        *(result_1 + 8) = x8_2
                                    label_104f830:
                                        x10_2 = zx.q(*x8_2)
                                    label_104f834:
                                        cond:17_1 = x10_2.d u> 0x2c
                                    label_104f838:
                                        
                                        if (cond:17_1)
                                            goto label_104f890
                                        
                                        continue
                                    case 0x104f84c
                                    label_104f84c:
                                        x10_2 = x8_2
                                    label_104f850:
                                        x10_2 += 1
                                        x11_1 = zx.q(*x10_2)
                                    label_104f854:
                                        x12_1 = zx.q(*(result_1 + 0x18))
                                    label_104f858:
                                        cond:18_1 = x11_1.d == 0xd
                                    label_104f870:
                                        
                                        if (cond:18_1)
                                            x8_2 = x10_2
                                        
                                    label_104f874:
                                        x11_1 = zx.q(x12_1.d + 1)
                                    label_104f878:
                                        x8_2 = &x8_2[1]
                                    label_104f87c:
                                        *(result_1 + 8) = x8_2
                                        *(result_1 + 0x10) = x8_2
                                    label_104f880:
                                        *(result_1 + 0x18) = x11_1.d
                                    label_104f884:
                                        x10_2 = zx.q(*x8_2)
                                    label_104f888:
                                        cond:19_1 = x10_2.d u<= 0x2c
                                    label_104f88c:
                                        
                                        if (not(cond:19_1))
                                            goto label_104f890
                                        
                                        continue
                                    case 0x104f860
                                    label_104f860:
                                        x10_2 = x8_2
                                    label_104f864:
                                        x10_2 += 1
                                        x11_1 = zx.q(*x10_2)
                                    label_104f868:
                                        x12_1 = zx.q(*(result_1 + 0x18))
                                    label_104f86c:
                                        cond:18_1 = x11_1.d == 0xa
                                        goto label_104f870
                                    case 0x104f898
                                        goto label_104f898
                                    case 0x104f924
                                        break
                            
                            goto label_104f934
                        
                    label_104f890:
                        cond:20_1 = x10_2.d != 0x5d
                    label_104f894:
                        
                        if (cond:20_1)
                        label_104f934:
                            *result_1 = v1
                            *(result_1 + 0x10) = v0
                            *entry_x8 = data_24b6268
                            XString::XString(&entry_x8[1])
                        else
                        label_104f898:
                            x8_2 = *result_1
                        label_104f89c:
                            x10_2 = 0x38
                        label_104f8a4:
                            x9_1 = sx.q(*(x8_2 + 0x428))
                        label_104f8ac:
                            result_1 = x8_2 + x9_1 * x10_2
                        label_104f8b0:
                            x9_1 = zx.q(x9_1.d + 1)
                        label_104f8b4:
                            *(x8_2 + 0x428) = x9_1.d
                        label_104f8b8:
                            x8_2 = 9
                        label_104f8bc:
                            result_1 += 0xa8
                            *result_1 = x8_2.d
                        label_104f8c0:
                            x8_2 = var_50
                        label_104f8c4:
                            *(result_1 + 0x18) = x8_2
                        label_104f8c8:
                            x8_2 = var_68
                        label_104f8cc:
                            *(result_1 + 0x20) = x8_2
                        label_104f8d0:
                            x8_2 = var_80
                        label_104f8d4:
                            *(result_1 + 0x28) = x8_2
                        label_104f8d8:
                            char* var_98
                            x8_2 = var_98
                        label_104f8dc:
                            *(result_1 + 0x30) = x8_2
                        label_104f8e0:
                            XString::XString()
                        label_104f8e4:
                            x8_2 = 3
                        label_104f8e8:
                            *entry_x8 = x8_2.d
                        label_104f8ec:
                            *(entry_x8 + 8) = result_1
                    
                label_104f91c:
                    XString::~XString()
                label_104f7e8_1:
                    XString::~XString()
                else
                label_104f704:
                    x8_2 = *result_1
                label_104f708:
                    x10_2 = 0x38
                label_104f70c:
                    x11_1 = 8
                label_104f714:
                    x9_1 = sx.q(*(x8_2 + 0x428))
                label_104f718:
                    x12_1 = zx.q(x9_1.d + 1)
                label_104f71c:
                    result_1 = x8_2 + x9_1 * x10_2
                label_104f720:
                    *(x8_2 + 0x428) = x12_1.d
                label_104f724:
                    result_1 += 0xa8
                    *result_1 = x11_1.d
                label_104f728:
                    x8_2 = var_50
                label_104f72c:
                    *(result_1 + 0x18) = x8_2
                label_104f730:
                    x8_2 = var_68
                label_104f734:
                    *(result_1 + 0x20) = x8_2
                label_104f738:
                    x8_2 = var_80
                label_104f73c:
                    *(result_1 + 0x28) = x8_2
                label_104f740:
                    XString::XString()
                label_104f744:
                    x8_2 = 3
                label_104f748:
                    *entry_x8 = x8_2.d
                label_104f74c:
                    *(entry_x8 + 8) = result_1
                label_104f7e8_2:
                    XString::~XString()
        else
        label_104f5b4:
            x8_2 = *result_1
        label_104f5b8:
            x10_2 = 0x38
        label_104f5bc:
            x11_1 = 7
        label_104f5c4:
            x9_1 = sx.q(*(x8_2 + 0x428))
        label_104f5c8:
            x12_1 = zx.q(x9_1.d + 1)
        label_104f5cc:
            result_1 = x8_2 + x9_1 * x10_2
        label_104f5d0:
            *(x8_2 + 0x428) = x12_1.d
        label_104f5d4:
            result_1 += 0xa8
            *result_1 = x11_1.d
        label_104f5d8:
            x8_2 = var_50
        label_104f5dc:
            *(result_1 + 0x18) = x8_2
        label_104f5e0:
            x8_2 = var_68
        label_104f5e4:
            *(result_1 + 0x20) = x8_2
        label_104f5e8:
            XString::XString()
        label_104f5ec:
            x8_2 = 3
        label_104f5f0:
            *entry_x8 = x8_2.d
        label_104f5f4:
            *(entry_x8 + 8) = result_1
    
label_104f6a8:
    XString::~XString()
return XString::~XString()
