// 函数: _Z17parse_hex_literalR14UI2ParserState
// 地址: 0x104e3f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

UI2ParserState* nptr_15
UI2ParserState& nptr_4 = nptr_15
int64_t* nptr_13
int64_t* nptr_5 = nptr_13
UI2ParserState* nptr_12
UI2ParserState& nptr_6 = nptr_12
int64_t* nptr_11
int64_t* nptr_7 = nptr_11
int64_t* entry_nptr_2
int64_t* nptr_1 = entry_nptr_2
UI2ParserState& nptr_2 = arg1
int32_t nptr_9
int32_t* nptr_14 = &nptr_9
void* nptr
XString* entry_nptr_1
uint64_t x2
int128_t v0
nptr, entry_nptr_1, x2, v0 = parse_one_or_more_pred(arg1, sub_104e550)

if (nptr_9 - 2 u>= 3)
label_104e508:
    v0 = nptr_9.o
label_104e50c:
    nptr = &nptr_1[2]
label_104e514:
    *nptr_1 = v0
label_104e518:
    XString::XString(nptr)
else
    char* nptr_8 = *(nptr_2 + 8)
    uint8_t* const x9_1 = &jump_table_86934c
    uint64_t nptr_10 = zx.q(zx.d(*nptr_8) - 9)
    bool cond:0_1 = nptr_10.d == 0x17
    bool cond:1_1 = nptr_10.d u> 0x17
    bool cond:2_1 = nptr_10.d u<= 0x17
    bool cond:3_1 = nptr_10.d u< 0x17
    bool cond:4_1 = nptr_10.d u< 0x17
    bool cond:5_1 = nptr_10.d u< 0x17
    bool cond:6_1 = nptr_10.d u> 0x17
    bool cond:7_1 = nptr_10.d u<= 0x17
    bool cond:8_1 = nptr_10.d u> 0x17
    bool cond:9_1 = nptr_10.d == 0x17
    bool cond:10_1 = nptr_10.d u<= 0x17
    bool cond:11_1 = nptr_10.d u< 0x17
    bool cond:12_1 = nptr_10.d u>= 0x17
    uint64_t x11_1
    
    if (nptr_10.d u<= 0x17)
    label_104e4c8:
        x11_1 = &data_104e448
    label_104e4cc:
        uint64_t x12_1 = zx.q(jump_table_86934c[nptr_10])
    label_104e4d0:
        x11_1 += x12_1 << 2
        
        while (true)
            XString* var_30
            int64_t* nptr_3
            XString* entry_nptr
            
            switch (x11_1)
                case 0x104e44c
                    goto label_104e454
                case 0x104e458
                    goto label_104e458
                case 0x104e45c
                    goto label_104e45c
                case 0x104e460
                    goto label_104e460
                case 0x104e464
                    goto label_104e464
                case 0x104e468
                    goto label_104e468
                case 0x104e46c
                    goto label_104e46c
                case 0x104e470
                    goto label_104e470
                case 0x104e474
                    goto label_104e474
                case 0x104e478
                    goto label_104e478
                case 0x104e47c
                    goto label_104e480
                case 0x104e484
                    goto label_104e484
                case 0x104e488
                    goto label_104e488
                case 0x104e48c
                    goto label_104e48c
                case 0x104e490
                    break
                case 0x104e494
                    nptr_10 = nptr_8
                label_104e498:
                    nptr_10 += 1
                    x11_1 = zx.q(*nptr_10)
                label_104e49c:
                    x12_1 = zx.q(*(nptr_2 + 0x18))
                label_104e4a0:
                    cond:0_1 = x11_1.d == 0xa
                label_104e4a4:
                    
                    if (not(cond:0_1))
                        goto label_104e4a8
                    
                    nptr_8 = nptr_10
                label_104e4a8:
                    x11_1 = zx.q(x12_1.d + 1)
                label_104e4ac:
                    nptr_8 = &nptr_8[1]
                label_104e4b0:
                    *(nptr_2 + 8) = nptr_8
                    *(nptr_2 + 0x10) = nptr_8
                label_104e4b4:
                    *(nptr_2 + 0x18) = x11_1.d
                label_104e4b8:
                    nptr_10 = zx.q(*nptr_8)
                label_104e4bc:
                    nptr_10 = zx.q(nptr_10.d - 9)
                label_104e4c0:
                    cond:0_1 = nptr_10.d == 0x17
                    cond:1_1 = nptr_10.d u> 0x17
                    cond:2_1 = nptr_10.d u<= 0x17
                    cond:3_1 = nptr_10.d u< 0x17
                    cond:4_1 = nptr_10.d u< 0x17
                    cond:5_1 = nptr_10.d u< 0x17
                    cond:6_1 = nptr_10.d u> 0x17
                    cond:7_1 = nptr_10.d u<= 0x17
                    cond:8_1 = nptr_10.d u> 0x17
                    cond:9_1 = nptr_10.d == 0x17
                    cond:10_1 = nptr_10.d u<= 0x17
                    cond:11_1 = nptr_10.d u< 0x17
                    cond:12_1 = nptr_10.d u>= 0x17
                label_104e4c4:
                    
                    if (cond:1_1)
                        goto label_104e448
                    
                    goto label_104e4c8
                case 0x104e498
                    goto label_104e498
                case 0x104e49c
                    goto label_104e49c
                case 0x104e4a0
                    goto label_104e4a0
                case 0x104e4a8
                    goto label_104e4a8
                case 0x104e4ac
                    goto label_104e4ac
                case 0x104e4b0
                    goto label_104e4b0
                case 0x104e4b4
                    goto label_104e4b4
                case 0x104e4b8
                    goto label_104e4b8
                case 0x104e4bc
                    goto label_104e4bc
                case 0x104e4c0
                    goto label_104e4c0
                case 0x104e4c4
                    goto label_104e4c4
                case 0x104e4c8
                    goto label_104e4c8
                case 0x104e4cc
                    goto label_104e4cc
                case 0x104e4d0
                    goto label_104e4d0
                case 0x104e4d4
                    continue
                case 0x104e4d8
                    nptr_8 = &nptr_8[1]
                label_104e4dc:
                    *(nptr_2 + 8) = nptr_8
                label_104e4e0:
                    nptr_10 = zx.q(*nptr_8)
                label_104e4e4:
                    nptr_10 = zx.q(nptr_10.d - 9)
                label_104e4e8:
                    cond:0_1 = nptr_10.d == 0x17
                    cond:1_1 = nptr_10.d u> 0x17
                    cond:2_1 = nptr_10.d u<= 0x17
                    cond:3_1 = nptr_10.d u< 0x17
                    cond:4_1 = nptr_10.d u< 0x17
                    cond:5_1 = nptr_10.d u< 0x17
                    cond:6_1 = nptr_10.d u> 0x17
                    cond:7_1 = nptr_10.d u<= 0x17
                    cond:8_1 = nptr_10.d u> 0x17
                    cond:9_1 = nptr_10.d == 0x17
                    cond:10_1 = nptr_10.d u<= 0x17
                    cond:11_1 = nptr_10.d u< 0x17
                    cond:12_1 = nptr_10.d u>= 0x17
                label_104e4ec:
                    
                    if (cond:2_1)
                        goto label_104e4c8
                    
                    goto label_104e448
                case 0x104e4dc
                    goto label_104e4dc
                case 0x104e4e0
                    goto label_104e4e0
                case 0x104e4e4
                    goto label_104e4e4
                case 0x104e4e8
                    goto label_104e4e8
                case 0x104e4ec
                    goto label_104e4ec
                case 0x104e4f0
                    goto label_104e448
                case 0x104e4f4
                    nptr_10 = nptr_8
                label_104e4f8:
                    nptr_10 += 1
                    x11_1 = zx.q(*nptr_10)
                label_104e4fc:
                    x12_1 = zx.q(*(nptr_2 + 0x18))
                label_104e500:
                    cond:0_1 = x11_1.d == 0xd
                    goto label_104e4a4
                case 0x104e4f8
                    goto label_104e4f8
                case 0x104e4fc
                    goto label_104e4fc
                case 0x104e500
                    goto label_104e500
                case 0x104e504
                    goto label_104e4a4
                case 0x104e508
                    goto label_104e508
                case 0x104e50c
                    goto label_104e50c
                case 0x104e510
                    goto label_104e514
                case 0x104e518
                    goto label_104e518
                case 0x104e528
                    return nptr
                case 0x104e538
                    nptr_1 = nptr
                label_104e544:
                    XString::~XString()
                label_104e548:
                    sub_1101e04(nptr_1)
                    noreturn
                case 0x104e540
                    goto label_104e544
                case 0x104e548
                    goto label_104e548
                case 0x104e54c
                    sub_1101e04(nptr)
                    noreturn
                case sub_104e550
                    return sub_104e550(nptr.b) __tailcall
                case 0x104e554
                    nptr_8 = zx.q(nptr_8.d) & 0xff
                label_104e558:
                    cond:3_1 = nptr_8.d u< 6
                label_104e55c:
                    
                    if (cond:3_1)
                        return 1
                    
                    goto label_104e560
                case 0x104e558
                    goto label_104e558
                case 0x104e55c
                    goto label_104e55c
                case 0x104e560
                label_104e560:
                    nptr_8 = zx.q(nptr.d) & 0xff
                label_104e564:
                    nptr_8 = zx.q(nptr_8.d - 0x30)
                label_104e568:
                    cond:4_1 = nptr_8.d u< 0xa
                label_104e56c:
                    
                    if (cond:4_1)
                        return 1
                    
                    goto label_104e570
                case 0x104e564
                    goto label_104e564
                case 0x104e568
                    goto label_104e568
                case 0x104e56c
                    goto label_104e56c
                case 0x104e570
                label_104e570:
                    nptr_8 = zx.q(nptr.d - 0x41)
                label_104e574:
                    return zx.q((zx.q(nptr_8.d) & 0xff).d u< 6 ? 1 : 0)
                case 0x104e574
                    goto label_104e574
                case 0x104e578
                    return zx.q(nptr_8.d u< 6 ? 1 : 0)
                case 0x104e57c
                    return zx.q(cond:5_1 ? 1 : 0)
                case 0x104e580
                    return nptr
                case 0x104e584
                    return 1
                case 0x104e588
                    return nptr
                case UI2ParseResultMakeInt
                    return UI2ParseResultMakeInt(nptr, entry_nptr_1) __tailcall
                case 0x104e590
                    var_30 = nptr_2
                    nptr_3 = nptr_1
                label_104e594:
                    nptr_1 = nptr
                label_104e59c:
                    nptr_2 = nptr_8
                label_104e5a0:
                    nptr = XString::operator char const*()
                label_104e5a4:
                    nptr = atoi(nptr)
                label_104e5a8:
                    nptr_8 = sx.q(nptr_1[0x85].d)
                label_104e5ac:
                    x9_1 = 0x38
                label_104e5b0:
                    nptr_10 = 2
                label_104e5b4:
                    x11_1 = zx.q(nptr_8.d + 1)
                label_104e5b8:
                    nptr_14 = nptr_1 + nptr_8 * x9_1
                label_104e5bc:
                    nptr_1[0x85].d = x11_1.d
                label_104e5c0:
                    nptr_14 = &nptr_14[0x2a]
                    *nptr_14 = nptr_10.d
                label_104e5c4:
                    nptr_14[2] = nptr.d
                label_104e5cc:
                    nptr = XString::XString()
                label_104e5d0:
                    nptr_8 = 3
                label_104e5d4:
                    *nptr_2 = nptr_8.d
                    *(nptr_2 + 8) = nptr_14
                    return nptr
                case 0x104e594
                    goto label_104e594
                case 0x104e598
                    goto label_104e59c
                case 0x104e5a0
                    goto label_104e5a0
                case 0x104e5a4
                    goto label_104e5a4
                case 0x104e5a8
                    goto label_104e5a8
                case 0x104e5ac
                    goto label_104e5ac
                case 0x104e5b0
                    goto label_104e5b0
                case 0x104e5b4
                    goto label_104e5b4
                case 0x104e5b8
                    goto label_104e5b8
                case 0x104e5bc
                    goto label_104e5bc
                case 0x104e5c0
                    goto label_104e5c0
                case 0x104e5c4
                    goto label_104e5c4
                case 0x104e5c8
                    goto label_104e5cc
                case 0x104e5d0
                    goto label_104e5d0
                case 0x104e5d4
                    goto label_104e5d4
                case 0x104e5d8
                    *(nptr_2 + 8) = nptr_14
                    return nptr
                case 0x104e5dc
                    return nptr
                case UI2ParseResultMakeFloat
                    return UI2ParseResultMakeFloat(nptr, entry_nptr_1) __tailcall
                case 0x104e5ec
                    var_30 = entry_nptr
                    nptr_3 = &nptr_9
                label_104e5f0:
                    nptr_4 = nptr_2
                    nptr_5 = nptr_1
                label_104e5f4:
                    nptr_1 = nptr
                label_104e5fc:
                    nptr_2 = nptr_8
                label_104e600:
                    nptr = XString::operator char const*()
                label_104e604:
                    v0 = atof(nptr)
                label_104e608:
                    nptr_8 = sx.q(nptr_1[0x85].d)
                label_104e60c:
                    x9_1 = 0x38
                label_104e610:
                    nptr_14 = 3
                label_104e614:
                    v0.d = fconvert.s(v0.q)
                label_104e618:
                    nptr_10 = zx.q(nptr_8.d + 1)
                label_104e61c:
                    entry_nptr = nptr_1 + nptr_8 * x9_1
                label_104e620:
                    nptr_1[0x85].d = nptr_10.d
                label_104e624:
                    entry_nptr += 0xa8
                    *entry_nptr = nptr_14.d
                label_104e62c:
                    *(entry_nptr + 8) = v0.d
                label_104e630:
                    nptr = XString::XString()
                label_104e634:
                    *nptr_2 = nptr_14.d
                    *(nptr_2 + 8) = entry_nptr
                    return nptr
                case 0x104e5f0
                    goto label_104e5f0
                case 0x104e5f4
                    goto label_104e5f4
                case 0x104e5f8
                    goto label_104e5fc
                case 0x104e600
                    goto label_104e600
                case 0x104e604
                    goto label_104e604
                case 0x104e608
                    goto label_104e608
                case 0x104e60c
                    goto label_104e60c
                case 0x104e610
                    goto label_104e610
                case 0x104e614
                    goto label_104e614
                case 0x104e618
                    goto label_104e618
                case 0x104e61c
                    goto label_104e61c
                case 0x104e620
                    goto label_104e620
                case 0x104e624
                    goto label_104e624
                case 0x104e628
                    goto label_104e62c
                case 0x104e630
                    goto label_104e630
                case 0x104e634
                    goto label_104e634
                case 0x104e638
                    *(nptr_2 + 8) = entry_nptr
                    return nptr
                case 0x104e63c
                    return nptr
                case UI2ParseResultMakeAsset
                    return UI2ParseResultMakeAsset(nptr, entry_nptr_1) __tailcall
                case 0x104e650
                    var_30 = entry_nptr
                    nptr_3 = &nptr_9
                label_104e654:
                    nptr_4 = nptr_2
                    nptr_5 = nptr_1
                label_104e658:
                    nptr_2 = nptr
                label_104e664:
                    nptr_14 = nptr_8
                label_104e668:
                    nptr = XString::operator char const*()
                label_104e66c:
                    entry_nptr = nptr
                label_104e674:
                    nptr = XString::Length()
                label_104e678:
                    x2 = sx.q(nptr.d)
                label_104e67c:
                    nptr = nptr_2
                label_104e680:
                    entry_nptr_1 = entry_nptr
                label_104e684:
                    nptr = UI2ExprMakeAsset(nptr, entry_nptr_1, x2)
                label_104e688:
                    nptr_1 = nptr
                label_104e690:
                    nptr = XString::XString()
                label_104e694:
                    nptr_8 = 3
                label_104e698:
                    *nptr_14 = nptr_8.d
                    *(nptr_14 + 8) = nptr_1
                    return nptr
                case 0x104e654
                    goto label_104e654
                case 0x104e658
                    goto label_104e658
                case 0x104e65c
                    goto label_104e664
                case 0x104e668
                    goto label_104e668
                case 0x104e66c
                    goto label_104e66c
                case 0x104e670
                    goto label_104e674
                case 0x104e678
                    goto label_104e678
                case 0x104e67c
                    goto label_104e67c
                case 0x104e680
                    goto label_104e680
                case 0x104e684
                    goto label_104e684
                case 0x104e688
                    goto label_104e688
                case 0x104e68c
                    goto label_104e690
                case 0x104e694
                    goto label_104e694
                case 0x104e698
                    goto label_104e698
                case 0x104e69c
                    *(nptr_14 + 8) = nptr_1
                    return nptr
                case 0x104e6a0
                    return nptr
                case parse_integer_string
                    return parse_integer_string(nptr) __tailcall
                case 0x104e6b4
                    var_30 = nptr_2
                    nptr_3 = nptr_1
                label_104e6b8:
                    entry_nptr_1 = &data_104e000
                label_104e6bc:
                    entry_nptr_1 += 0x778
                label_104e6c0:
                    nptr_1 = nptr
                label_104e6c4:
                    nptr_2 = nptr_8
                label_104e6c8:
                    nptr = parse_one_or_more_pred(nptr, entry_nptr_1)
                label_104e6cc:
                    nptr_8 = zx.q(*nptr_2)
                label_104e6d0:
                    nptr_8 = zx.q(nptr_8.d - 2)
                label_104e6d4:
                    cond:6_1 = nptr_8.d u> 2
                label_104e6d8:
                    
                    if (cond:6_1)
                        return nptr
                    
                    goto label_104e6dc
                case 0x104e6b8
                    goto label_104e6b8
                case 0x104e6bc
                    goto label_104e6bc
                case 0x104e6c0
                    goto label_104e6c0
                case 0x104e6c4
                    goto label_104e6c4
                case 0x104e6c8
                    goto label_104e6c8
                case 0x104e6cc
                    goto label_104e6cc
                case 0x104e6d0
                    goto label_104e6d0
                case 0x104e6d4
                    goto label_104e6d4
                case 0x104e6d8
                    goto label_104e6d8
                case 0x104e6dc
                label_104e6dc:
                    nptr_8 = nptr_1[1]
                label_104e6e0:
                    x9_1 = "HHHH0"
                label_104e6e4:
                    x9_1 = &x9_1[0x364]
                label_104e6e8:
                    nptr_10 = zx.q(*nptr_8)
                label_104e6ec:
                    nptr_10 = zx.q(nptr_10.d - 9)
                label_104e6f0:
                    cond:7_1 = nptr_10.d u<= 0x17
                label_104e6f4:
                    
                    if (cond:7_1)
                        goto label_104e714
                    
                    return nptr
                case 0x104e6e0
                    goto label_104e6e0
                case 0x104e6e4
                    goto label_104e6e4
                case 0x104e6e8
                    goto label_104e6e8
                case 0x104e6ec
                    goto label_104e6ec
                case 0x104e6f0
                    goto label_104e6f0
                case 0x104e6f4
                    goto label_104e6f4
                case 0x104e6f8
                    return nptr
                case &data_104e6fc
                    nptr_8 = &nptr_8[1]
                label_104e700:
                    nptr_1[1] = nptr_8
                label_104e704:
                    nptr_10 = zx.q(*nptr_8)
                label_104e708:
                    nptr_10 = zx.q(nptr_10.d - 9)
                label_104e70c:
                    cond:8_1 = nptr_10.d u> 0x17
                label_104e710:
                    
                    if (cond:8_1)
                        return nptr
                    
                    goto label_104e714
                case 0x104e700
                    goto label_104e700
                case 0x104e704
                    goto label_104e704
                case 0x104e708
                    goto label_104e708
                case 0x104e70c
                    goto label_104e70c
                case 0x104e710
                    goto label_104e710
                case 0x104e714
                label_104e714:
                    x11_1 = &data_104e6fc
                label_104e718:
                    jump(x11_1 + (zx.q(x9_1[nptr_10]) << 2))
                case 0x104e718
                    goto label_104e718
                case 0x104e71c
                    jump(x11_1 + (x12_1 << 2))
                case 0x104e720
                    jump(x11_1)
                case 0x104e724
                    nptr_10 = nptr_8
                label_104e728:
                    nptr_10 += 1
                    x11_1 = zx.q(*nptr_10)
                label_104e72c:
                    x12_1 = zx.q(nptr_1[3].d)
                label_104e730:
                    cond:9_1 = x11_1.d == 0xd
                label_104e748:
                    
                    if (not(cond:9_1))
                        goto label_104e74c
                    
                    nptr_8 = nptr_10
                label_104e74c:
                    x11_1 = zx.q(x12_1.d + 1)
                label_104e750:
                    nptr_8 = &nptr_8[1]
                label_104e754:
                    nptr_1[1] = nptr_8
                    nptr_1[2] = nptr_8
                label_104e758:
                    nptr_1[3].d = x11_1.d
                label_104e75c:
                    nptr_10 = zx.q(*nptr_8)
                label_104e760:
                    nptr_10 = zx.q(nptr_10.d - 9)
                label_104e764:
                    cond:10_1 = nptr_10.d u<= 0x17
                label_104e768:
                    
                    if (cond:10_1)
                        goto label_104e714
                    
                    return nptr
                case 0x104e728
                    goto label_104e728
                case 0x104e72c
                    goto label_104e72c
                case 0x104e730
                    goto label_104e730
                case 0x104e734
                    goto label_104e748
                case 0x104e738
                    nptr_10 = nptr_8
                label_104e73c:
                    nptr_10 += 1
                    x11_1 = zx.q(*nptr_10)
                label_104e740:
                    x12_1 = zx.q(nptr_1[3].d)
                label_104e744:
                    cond:9_1 = x11_1.d == 0xa
                    goto label_104e748
                case 0x104e73c
                    goto label_104e73c
                case 0x104e740
                    goto label_104e740
                case 0x104e744
                    goto label_104e744
                case 0x104e74c
                    goto label_104e74c
                case 0x104e750
                    goto label_104e750
                case 0x104e754
                    goto label_104e754
                case 0x104e758
                    goto label_104e758
                case 0x104e75c
                    goto label_104e75c
                case 0x104e760
                    goto label_104e760
                case 0x104e764
                    goto label_104e764
                case 0x104e768
                    goto label_104e768
                case sub_104e778
                    return sub_104e778(nptr.b) __tailcall
                case 0x104e77c
                    return zx.q(nptr_8.d - 0x30 u< 0xa ? 1 : 0)
                case 0x104e780
                    return zx.q(nptr_8.d u< 0xa ? 1 : 0)
                case 0x104e784
                    return zx.q(cond:11_1 ? 1 : 0)
                case 0x104e788
                    return nptr
                case parse_integer_literal
                    return parse_integer_literal(nptr) __tailcall
                case 0x104e790
                    nptr_5 = &nptr_9
                label_104e794:
                    nptr_6 = nptr_2
                    nptr_7 = nptr_1
                label_104e798:
                    nptr_1 = nptr_8
                label_104e7a0:
                    nptr_2 = nptr
                label_104e7a8:
                    parse_integer_string(nptr)
                label_104e7ac:
                    nptr_8 = zx.q(nptr_9)
                label_104e7b0:
                    nptr_8 = zx.q(nptr_8.d - 2)
                label_104e7b4:
                    cond:12_1 = nptr_8.d u>= 3
                label_104e7b8:
                    
                    if (cond:12_1)
                        goto label_104e804
                    
                    goto label_104e7bc
                case 0x104e794
                    goto label_104e794
                case 0x104e798
                    goto label_104e798
                case 0x104e79c
                    goto label_104e7a0
                case 0x104e7a4
                    goto label_104e7a8
                case 0x104e7ac
                    goto label_104e7ac
                case 0x104e7b0
                    goto label_104e7b0
                case 0x104e7b4
                    goto label_104e7b4
                case 0x104e7b8
                    goto label_104e7b8
                case 0x104e7bc
                label_104e7bc:
                    nptr_2 = *nptr_2
                label_104e7c4:
                    nptr = XString::operator char const*()
                label_104e7c8:
                    nptr = atoi(nptr)
                label_104e7cc:
                    nptr_8 = sx.q(*(nptr_2 + 0x428))
                label_104e7d0:
                    x9_1 = 0x38
                label_104e7d4:
                    nptr_10 = 2
                label_104e7d8:
                    x11_1 = zx.q(nptr_8.d + 1)
                label_104e7dc:
                    nptr_14 = nptr_2 + nptr_8 * x9_1
                label_104e7e0:
                    *(nptr_2 + 0x428) = x11_1.d
                label_104e7e4:
                    nptr_14 = &nptr_14[0x2a]
                    *nptr_14 = nptr_10.d
                label_104e7e8:
                    nptr_14[2] = nptr.d
                label_104e7f0:
                    XString::XString()
                label_104e7f4:
                    nptr_8 = 3
                label_104e7f8:
                    *nptr_1 = nptr_8.d
                label_104e7fc:
                    nptr_1[1] = nptr_14
                    return XString::~XString()
                case 0x104e7c0
                    goto label_104e7c4
                case 0x104e7c8
                    goto label_104e7c8
                case 0x104e7cc
                    goto label_104e7cc
                case 0x104e7d0
                    goto label_104e7d0
                case 0x104e7d4
                    goto label_104e7d4
                case 0x104e7d8
                    goto label_104e7d8
                case 0x104e7dc
                    goto label_104e7dc
                case 0x104e7e0
                    goto label_104e7e0
                case 0x104e7e4
                    goto label_104e7e4
                case 0x104e7e8
                    goto label_104e7e8
                case 0x104e7ec
                    goto label_104e7f0
                case 0x104e7f4
                    goto label_104e7f4
                case 0x104e7f8
                    goto label_104e7f8
                case 0x104e7fc
                    goto label_104e7fc
                case 0x104e800
                    return XString::~XString()
                case 0x104e804
                label_104e804:
                    v0 = nptr_9.o
                label_104e808:
                    nptr = &nptr_1[2]
                label_104e810:
                    *nptr_1 = v0
                label_104e814:
                    XString::XString(nptr)
                    return XString::~XString()
                case 0x104e808
                    goto label_104e808
                case 0x104e80c
                    goto label_104e810
                case 0x104e814
                    goto label_104e814
                case 0x104e824
                    return nptr
                case 0x104e834
                    nptr_1 = nptr
                label_104e840:
                    XString::~XString()
                    sub_1101e04(nptr_1)
                    noreturn
                case 0x104e83c
                    goto label_104e840
                case 0x104e844
                    sub_1101e04(nptr_1)
                    noreturn
    else
    label_104e448:
        nptr_2 = *nptr_2
    label_104e454:
        nptr = XString::operator char const*()
    label_104e458:
        nptr = atoi(nptr)
    label_104e45c:
        nptr_8 = sx.q(*(nptr_2 + 0x428))
    label_104e460:
        x9_1 = 0x38
    label_104e464:
        nptr_10 = 2
    label_104e468:
        x11_1 = zx.q(nptr_8.d + 1)
    label_104e46c:
        nptr_14 = nptr_2 + nptr_8 * x9_1
    label_104e470:
        *(nptr_2 + 0x428) = x11_1.d
    label_104e474:
        nptr_14 = &nptr_14[0x2a]
        *nptr_14 = nptr_10.d
    label_104e478:
        nptr_14[2] = nptr.d
    label_104e480:
        XString::XString()
    label_104e484:
        nptr_8 = 3
    label_104e488:
        *nptr_1 = nptr_8.d
    label_104e48c:
        nptr_1[1] = nptr_14

return XString::~XString()
