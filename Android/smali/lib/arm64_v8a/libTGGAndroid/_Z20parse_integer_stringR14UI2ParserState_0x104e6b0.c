// 函数: _Z20parse_integer_stringR14UI2ParserState
// 地址: 0x104e6b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

UI2ParserState& nptr_1 = arg1
int32_t* entry_nptr_4
int32_t* nptr_2 = entry_nptr_4
int32_t* nptr
char* x1
int64_t lr
int128_t v0
nptr, x1, lr, v0 = parse_one_or_more_pred(arg1, sub_104e778)

if (*nptr_2 - 2 u<= 2)
    char* nptr_9 = *(nptr_1 + 8)
    uint8_t* const x9_1 = &jump_table_869364
    uint64_t nptr_15 = zx.q(zx.d(*nptr_9) - 9)
    bool cond:0_1 = nptr_15.d u> 0x17
    bool cond:1_1 = nptr_15.d == 0x17
    bool cond:2_1 = nptr_15.d u<= 0x17
    bool cond:3_1 = nptr_15.d u< 0x17
    bool cond:4_1 = nptr_15.d u>= 0x17
    bool cond:5_1 = nptr_15.d u> 0x17
    bool cond:6_1 = nptr_15.d u> 0x17
    bool cond:7_1 = nptr_15.d u> 0x17
    bool cond:8_1 = nptr_15.d u>= 0x17
    bool cond:9_1 = nptr_15.d u>= 0x17
    bool cond:10_1 = nptr_15.d u>= 0x17
    bool cond:11_1 = nptr_15.d u> 0x17
    bool cond:12_1 = nptr_15.d u> 0x17
    bool cond:13_1 = nptr_15.d u> 0x17
    
    if (nptr_15.d u<= 0x17)
    label_104e714:
        void* const x11_1 = &data_104e6fc
    label_104e718:
        uint64_t x12_2 = zx.q(jump_table_869364[nptr_15])
        
        while (true)
            x11_1 += x12_2 << 2
            
            while (true)
                int32_t nptr_10
                int64_t arg_0
                int32_t* entry_nptr_1
                int32_t* nptr_3
                int32_t* nptr_5
                int32_t nptr_13
                int32_t* entry_nptr
                int32_t* entry_x22
                
                switch (x11_1)
                    case &data_104e6fc
                        nptr_9 = &nptr_9[1]
                    label_104e700:
                        *(nptr_1 + 8) = nptr_9
                    label_104e704:
                        nptr_15 = zx.q(*nptr_9)
                    label_104e708:
                        nptr_15 = zx.q(nptr_15.d - 9)
                    label_104e70c:
                        cond:0_1 = nptr_15.d u> 0x17
                        cond:1_1 = nptr_15.d == 0x17
                        cond:2_1 = nptr_15.d u<= 0x17
                        cond:3_1 = nptr_15.d u< 0x17
                        cond:4_1 = nptr_15.d u>= 0x17
                        cond:5_1 = nptr_15.d u> 0x17
                        cond:6_1 = nptr_15.d u> 0x17
                        cond:7_1 = nptr_15.d u> 0x17
                        cond:8_1 = nptr_15.d u>= 0x17
                        cond:9_1 = nptr_15.d u>= 0x17
                        cond:10_1 = nptr_15.d u>= 0x17
                        cond:11_1 = nptr_15.d u> 0x17
                        cond:12_1 = nptr_15.d u> 0x17
                        cond:13_1 = nptr_15.d u> 0x17
                    label_104e710:
                        
                        if (cond:0_1)
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
                        goto label_104e714
                    case 0x104e718
                        goto label_104e718
                    case 0x104e71c
                        break
                    case 0x104e720
                        continue
                    case 0x104e724
                        nptr_15 = nptr_9
                    label_104e728:
                        nptr_15 += 1
                        x11_1 = zx.q(*nptr_15)
                    label_104e72c:
                        x12_2 = zx.q(*(nptr_1 + 0x18))
                    label_104e730:
                        cond:1_1 = x11_1.d == 0xd
                    label_104e748:
                        
                        if (not(cond:1_1))
                            goto label_104e74c
                        
                        nptr_9 = nptr_15
                    label_104e74c:
                        x11_1 = zx.q(x12_2.d + 1)
                    label_104e750:
                        nptr_9 = &nptr_9[1]
                    label_104e754:
                        *(nptr_1 + 8) = nptr_9
                        *(nptr_1 + 0x10) = nptr_9
                    label_104e758:
                        *(nptr_1 + 0x18) = x11_1.d
                    label_104e75c:
                        nptr_15 = zx.q(*nptr_9)
                    label_104e760:
                        nptr_15 = zx.q(nptr_15.d - 9)
                    label_104e764:
                        cond:0_1 = nptr_15.d u> 0x17
                        cond:1_1 = nptr_15.d == 0x17
                        cond:2_1 = nptr_15.d u<= 0x17
                        cond:3_1 = nptr_15.d u< 0x17
                        cond:4_1 = nptr_15.d u>= 0x17
                        cond:5_1 = nptr_15.d u> 0x17
                        cond:6_1 = nptr_15.d u> 0x17
                        cond:7_1 = nptr_15.d u> 0x17
                        cond:8_1 = nptr_15.d u>= 0x17
                        cond:9_1 = nptr_15.d u>= 0x17
                        cond:10_1 = nptr_15.d u>= 0x17
                        cond:11_1 = nptr_15.d u> 0x17
                        cond:12_1 = nptr_15.d u> 0x17
                        cond:13_1 = nptr_15.d u> 0x17
                    label_104e768:
                        
                        if (cond:2_1)
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
                        nptr_15 = nptr_9
                    label_104e73c:
                        nptr_15 += 1
                        x11_1 = zx.q(*nptr_15)
                    label_104e740:
                        x12_2 = zx.q(*(nptr_1 + 0x18))
                    label_104e744:
                        cond:1_1 = x11_1.d == 0xa
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
                    case 0x104e76c
                        return nptr
                    case sub_104e778
                        return sub_104e778(nptr.b) __tailcall
                    case 0x104e77c
                        return zx.q(nptr_9.d - 0x30 u< 0xa ? 1 : 0)
                    case 0x104e780
                        return zx.q(nptr_9.d u< 0xa ? 1 : 0)
                    case 0x104e784
                        return zx.q(cond:3_1 ? 1 : 0)
                    case 0x104e788
                        return nptr
                    case parse_integer_literal
                        return parse_integer_literal(nptr) __tailcall
                    case 0x104e790
                        arg_0 = lr
                        entry_nptr_1 = entry_nptr
                    label_104e794:
                        nptr_3 = nptr_2
                        UI2ParserState& nptr_4 = nptr_1
                    label_104e798:
                        nptr_1 = nptr_9
                    label_104e7a0:
                        nptr_2 = nptr
                    label_104e7a8:
                        parse_integer_string(nptr)
                    label_104e7ac:
                        nptr_9 = zx.q(nptr_10)
                    label_104e7b0:
                        nptr_9 = zx.q(nptr_9.d - 2)
                    label_104e7b4:
                        cond:4_1 = nptr_9.d u>= 3
                    label_104e7b8:
                        
                        if (cond:4_1)
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
                        nptr_9 = sx.q(nptr_2[0x10a])
                    label_104e7d0:
                        x9_1 = 0x38
                    label_104e7d4:
                        nptr_15 = 2
                    label_104e7d8:
                        x11_1 = zx.q(nptr_9.d + 1)
                    label_104e7dc:
                        entry_nptr = nptr_2 + nptr_9 * x9_1
                    label_104e7e0:
                        nptr_2[0x10a] = x11_1.d
                    label_104e7e4:
                        entry_nptr = &entry_nptr[0x2a]
                        *entry_nptr = nptr_15.d
                    label_104e7e8:
                        entry_nptr[2] = nptr.d
                    label_104e7f0:
                        XString::XString()
                    label_104e7f4:
                        nptr_9 = 3
                    label_104e7f8:
                        *nptr_1 = nptr_9.d
                    label_104e7fc:
                        *(nptr_1 + 8) = entry_nptr
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
                        v0 = nptr_10.o
                    label_104e808:
                        nptr = nptr_1 + 0x10
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
                    label_104e844:
                        sub_1101e04(nptr_1)
                        noreturn
                    case 0x104e83c
                        goto label_104e840
                    case 0x104e844
                        goto label_104e844
                    case 0x104e848
                        sub_1101e04(nptr)
                        noreturn
                    case parse_hex_prefix
                        return parse_hex_prefix(nptr) __tailcall
                    case 0x104e850
                        int64_t arg_20 = lr
                    label_104e854:
                        int32_t* arg_30 = entry_x22
                        int32_t* entry_nptr_2 = entry_nptr
                    label_104e858:
                        nptr_5 = nptr_2
                        UI2ParserState& nptr_6 = nptr_1
                    label_104e85c:
                        x1 = "FEB7C61BF83B57E7C6A8A6150F04FB83F6D3C51EC3023554135A169132F675F3AE2B61D72AEFF22203199DD14801C7"
                    label_104e860:
                        nptr_1 = nptr_9
                    label_104e864:
                        x1 = &x1[0xc55]
                    label_104e86c:
                        nptr_2 = nptr
                    label_104e874:
                        UI2Parse_Exact(nptr, x1)
                    label_104e878:
                        nptr_9 = zx.q(arg_0.d)
                    label_104e87c:
                        nptr_9 = zx.q(nptr_9.d - 2)
                    label_104e880:
                        cond:5_1 = nptr_9.d u> 2
                    label_104e884:
                        
                        if (cond:5_1)
                            goto label_104e8a0
                        
                        goto label_104e888
                    case 0x104e854
                        goto label_104e854
                    case 0x104e858
                        goto label_104e858
                    case 0x104e85c
                        goto label_104e85c
                    case 0x104e860
                        goto label_104e860
                    case 0x104e864
                        goto label_104e864
                    case 0x104e868
                        goto label_104e86c
                    case 0x104e870
                        goto label_104e874
                    case 0x104e878
                        goto label_104e878
                    case 0x104e87c
                        goto label_104e87c
                    case 0x104e880
                        goto label_104e880
                    case 0x104e884
                        goto label_104e884
                    case 0x104e888
                    label_104e888:
                        v0 = arg_0.o
                    label_104e88c:
                        nptr = nptr_1 + 0x10
                    label_104e894:
                        *nptr_1 = v0
                    label_104e898:
                        XString::XString(nptr)
                        return XString::~XString()
                    case 0x104e88c
                        goto label_104e88c
                    case 0x104e890
                        goto label_104e894
                    case 0x104e898
                        goto label_104e898
                    case 0x104e8a0
                    label_104e8a0:
                        x1 = "h"
                    label_104e8a4:
                        x1 = &x1[0xa2f]
                    label_104e8ac:
                        nptr = nptr_2
                    label_104e8b4:
                        UI2Parse_Exact(nptr, x1)
                    label_104e8b8:
                        v0 = nptr_10.o
                    label_104e8bc:
                        nptr_9 = &arg_0
                    label_104e8c0:
                        entry_nptr = &nptr_9[0x10]
                    label_104e8c8:
                        arg_0.o = v0
                    label_104e8cc:
                        nptr = entry_nptr
                    label_104e8d4:
                        XString::operator=(nptr)
                    label_104e8dc:
                        XString::~XString()
                    label_104e8e0:
                        nptr_9 = zx.q(arg_0.d)
                    label_104e8e4:
                        nptr_9 = zx.q(nptr_9.d - 2)
                    label_104e8e8:
                        cond:6_1 = nptr_9.d u> 2
                    label_104e8ec:
                        
                        if (cond:6_1)
                            goto label_104e908
                        
                        goto label_104e8f0
                    case 0x104e8a4
                        goto label_104e8a4
                    case 0x104e8a8
                        goto label_104e8ac
                    case 0x104e8b0
                        goto label_104e8b4
                    case 0x104e8b8
                        goto label_104e8b8
                    case 0x104e8bc
                        goto label_104e8bc
                    case 0x104e8c0
                        goto label_104e8c0
                    case 0x104e8c4
                        goto label_104e8c8
                    case 0x104e8cc
                        goto label_104e8cc
                    case 0x104e8d0
                        goto label_104e8d4
                    case 0x104e8d8
                        goto label_104e8dc
                    case 0x104e8e0
                        goto label_104e8e0
                    case 0x104e8e4
                        goto label_104e8e4
                    case 0x104e8e8
                        goto label_104e8e8
                    case 0x104e8ec
                        goto label_104e8ec
                    case 0x104e8f0
                    label_104e8f0:
                        v0 = arg_0.o
                    label_104e8f4:
                        nptr = nptr_1 + 0x10
                    label_104e8f8:
                        *nptr_1 = v0
                    label_104e900:
                        XString::XString(nptr)
                        return XString::~XString()
                    case 0x104e8f4
                        goto label_104e8f4
                    case 0x104e8f8
                        goto label_104e8f8
                    case 0x104e8fc
                        goto label_104e900
                    case 0x104e904
                        return XString::~XString()
                    case 0x104e908
                    label_104e908:
                        x1 = "\t\t\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\t\t"
                        "skinnedPos.xyz = MultiplyMatrixVec(position, matSkinned).xyz;\t\t\t\t\t\t\t"
                        "\t\t\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\t\t"
                        "//skinnedPos = MultiplyMatrixVec(position, bones[BlendIndicesIn[0]]) * "
                        "blendweights[0];\t\t\t\t\n\t\t//skinnedPos += MultiplyMatrixVec(position, "
                        "bones[BlendIndicesIn[1]]) * blendweights[1];\t\t\t\n\t\t//skinnedPos += "
                        "MultiplyMatrixVec(position, bones[BlendIndicesIn[2]]) * blendweights[2];\t"
                        "\t\n\t\t//…"
                    label_104e90c:
                        x1 = &x1[0xdb1]
                    label_104e914:
                        nptr = nptr_2
                    label_104e918:
                        UI2Parse_Exact(nptr, x1)
                        return XString::~XString()
                    case 0x104e90c
                        goto label_104e90c
                    case 0x104e910
                        goto label_104e914
                    case 0x104e918
                        goto label_104e918
                    case 0x104e928
                        return nptr
                    case 0x104e93c
                        nptr_1 = nptr
                    label_104e944:
                        XString::~XString()
                    label_104e95c:
                        XString::~XString()
                    label_104e960:
                        sub_1101e04(nptr_1)
                        noreturn
                    case 0x104e940
                        goto label_104e944
                    case 0x104e948
                        goto label_104e95c
                    case 0x104e94c
                        nptr_1 = nptr
                        goto label_104e95c
                    case 0x104e960
                        goto label_104e960
                    case 0x104e964
                        sub_1101e04(nptr)
                        noreturn
                    case parse_numeric_literal
                        return parse_numeric_literal(nptr) __tailcall
                    case 0x104e96c
                        int64_t arg_a0 = lr
                    label_104e970:
                        int32_t* arg_b0 = entry_x22
                        int32_t* entry_nptr_3 = entry_nptr
                    label_104e974:
                        int32_t* nptr_7 = nptr_2
                        UI2ParserState& nptr_8 = nptr_1
                    label_104e978:
                        nptr_1 = nptr_9
                    label_104e980:
                        nptr_2 = nptr
                    label_104e984:
                        parse_hex_prefix(nptr)
                    label_104e988:
                        int32_t nptr_14
                        nptr_9 = zx.q(nptr_14)
                    label_104e98c:
                        nptr_9 = zx.q(nptr_9.d - 2)
                    label_104e990:
                        cond:7_1 = nptr_9.d u> 2
                    label_104e994:
                        
                        if (cond:7_1)
                            goto label_104e9d4
                        
                        goto label_104e99c
                    case 0x104e970
                        goto label_104e970
                    case 0x104e974
                        goto label_104e974
                    case 0x104e978
                        goto label_104e978
                    case 0x104e97c
                        goto label_104e980
                    case 0x104e984
                        goto label_104e984
                    case 0x104e988
                        goto label_104e988
                    case 0x104e98c
                        goto label_104e98c
                    case 0x104e990
                        goto label_104e990
                    case 0x104e994
                        goto label_104e994
                    case 0x104e998
                    label_104e99c:
                        nptr = nptr_2
                    label_104e9a0:
                        parse_hex_literal(nptr)
                    label_104e9a4:
                        nptr_9 = zx.q(nptr_13)
                    label_104e9a8:
                        nptr_9 = zx.q(nptr_9.d - 2)
                    label_104e9ac:
                        cond:8_1 = nptr_9.d u>= 3
                    label_104e9b0:
                        
                        if (not(cond:8_1))
                            goto label_104e9b4
                        
                        XString::XString()
                        *nptr_1 = 1
                        XString::~XString()
                        return XString::~XString()
                    case 0x104e9a0
                        goto label_104e9a0
                    case 0x104e9a4
                        goto label_104e9a4
                    case 0x104e9a8
                        goto label_104e9a8
                    case 0x104e9ac
                        goto label_104e9ac
                    case 0x104e9b0
                        goto label_104e9b0
                    case 0x104e9b4
                    label_104e9b4:
                        v0 = nptr_13.o
                    label_104e9bc:
                        nptr = nptr_1 + 0x10
                    label_104e9c4:
                        *nptr_1 = v0
                    label_104e9c8:
                        XString::XString(nptr)
                        XString::~XString()
                        return XString::~XString()
                    case 0x104e9b8
                        goto label_104e9bc
                    case 0x104e9c0
                        goto label_104e9c4
                    case 0x104e9c8
                        goto label_104e9c8
                    case 0x104e9cc
                        XString::~XString()
                        return XString::~XString()
                    case 0x104e9d0
                    label_104e9d4:
                        nptr = nptr_2
                    label_104e9d8:
                        parse_integer_string(nptr)
                    label_104e9dc:
                        nptr_9 = zx.q(nptr_13)
                    label_104e9e0:
                        nptr_9 = zx.q(nptr_9.d - 2)
                    label_104e9e4:
                        cond:9_1 = nptr_9.d u>= 3
                    label_104e9e8:
                        
                        if (not(cond:9_1))
                            goto label_104e9ec
                        
                        *nptr_1 = data_24b6268
                        XString::XString(nptr_1 + 0x10)
                        XString::~XString()
                        return XString::~XString()
                    case 0x104e9d8
                        goto label_104e9d8
                    case 0x104e9dc
                        goto label_104e9dc
                    case 0x104e9e0
                        goto label_104e9e0
                    case 0x104e9e4
                        goto label_104e9e4
                    case 0x104e9e8
                        goto label_104e9e8
                    case 0x104e9ec
                    label_104e9ec:
                        x1 = "h"
                    label_104e9f0:
                        x1 = &x1[0xcf2]
                    label_104e9f8:
                        nptr = nptr_2
                    label_104e9fc:
                        UI2Parse_Exact(nptr, x1)
                    label_104ea00:
                        int32_t nptr_12
                        nptr_9 = zx.q(nptr_12)
                    label_104ea04:
                        nptr_9 = zx.q(nptr_9.d - 2)
                    label_104ea08:
                        cond:10_1 = nptr_9.d u>= 3
                    label_104ea0c:
                        
                        if (not(cond:10_1))
                            goto label_104ea14
                        
                        void* x20_3 = *nptr_2
                        int32_t x0_14 = atoi(XString::operator char const*())
                        int64_t x8_5 = sx.q(*(x20_3 + 0x428))
                        *(x20_3 + 0x428) = x8_5.d + 1
                        *(x20_3 + x8_5 * 0x38 + 0xa8) = 2
                        *(x20_3 + x8_5 * 0x38 + 0xb0) = x0_14
                        XString::XString()
                        *nptr_1 = 3
                        *(nptr_1 + 8) = x20_3 + x8_5 * 0x38 + 0xa8
                    label_104ecec:
                        XString::~XString()
                        XString::~XString()
                        return XString::~XString()
                    case 0x104e9f0
                        goto label_104e9f0
                    case 0x104e9f4
                        goto label_104e9f8
                    case 0x104e9fc
                        goto label_104e9fc
                    case 0x104ea00
                        goto label_104ea00
                    case 0x104ea04
                        goto label_104ea04
                    case 0x104ea08
                        goto label_104ea08
                    case 0x104ea0c
                        goto label_104ea0c
                    case 0x104ea10
                    label_104ea14:
                        nptr = nptr_2
                    label_104ea18:
                        parse_integer_string(nptr)
                    label_104ea1c:
                        nptr_9 = zx.q(nptr_5.d)
                    label_104ea20:
                        nptr_9 = zx.q(nptr_9.d - 2)
                    label_104ea24:
                        cond:11_1 = nptr_9.d u> 2
                    label_104ea28:
                        
                        if (not(cond:11_1))
                            goto label_104ea2c
                        
                        void* x20_4 = *nptr_2
                        double v0_3 = atof(XString::operator char const*())
                        int64_t x8_6 = sx.q(*(x20_4 + 0x428))
                        v0_3.d = fconvert.s(v0_3)
                        *(x20_4 + 0x428) = x8_6.d + 1
                        *(x20_4 + x8_6 * 0x38 + 0xa8) = 3
                        *(x20_4 + x8_6 * 0x38 + 0xb0) = v0_3.d
                        XString::XString()
                        *nptr_1 = 3
                        *(nptr_1 + 8) = x20_4 + x8_6 * 0x38 + 0xa8
                    label_104ece0:
                        XString::~XString()
                        goto label_104ecec
                    case 0x104ea18
                        goto label_104ea18
                    case 0x104ea1c
                        goto label_104ea1c
                    case 0x104ea20
                        goto label_104ea20
                    case 0x104ea24
                        goto label_104ea24
                    case 0x104ea28
                        goto label_104ea28
                    case 0x104ea2c
                    label_104ea2c:
                        x1 = &data_766000
                    label_104ea30:
                        x1 = &x1[0xee7]
                    label_104ea38:
                        nptr = nptr_2
                    label_104ea3c:
                        UI2Parse_Exact(nptr, x1)
                    label_104ea40:
                        int32_t nptr_11
                        nptr_9 = zx.q(nptr_11)
                    label_104ea44:
                        nptr_9 = zx.q(nptr_9.d - 2)
                    label_104ea48:
                        cond:12_1 = nptr_9.d u> 2
                    label_104ea4c:
                        
                        if (not(cond:12_1))
                            goto label_104ea54
                        
                        XString::XString(&entry_nptr_1)
                        void arg_80
                        XString::operator+(&arg_80)
                        void arg_a8
                        XString::operator+(&arg_a8)
                        XString::~XString()
                        XString::~XString()
                        void* x20_5 = *nptr_2
                        double v0_4 = atof(XString::operator char const*())
                        int64_t x8_7 = sx.q(*(x20_5 + 0x428))
                        v0_4.d = fconvert.s(v0_4)
                        *(x20_5 + 0x428) = x8_7.d + 1
                        *(x20_5 + x8_7 * 0x38 + 0xa8) = 3
                        *(x20_5 + x8_7 * 0x38 + 0xb0) = v0_4.d
                        XString::XString()
                        *nptr_1 = 3
                        *(nptr_1 + 8) = x20_5 + x8_7 * 0x38 + 0xa8
                        goto label_104ecc8
                    case 0x104ea30
                        goto label_104ea30
                    case 0x104ea34
                        goto label_104ea38
                    case 0x104ea3c
                        goto label_104ea3c
                    case 0x104ea40
                        goto label_104ea40
                    case 0x104ea44
                        goto label_104ea44
                    case 0x104ea48
                        goto label_104ea48
                    case 0x104ea4c
                        goto label_104ea4c
                    case 0x104ea50
                    label_104ea54:
                        nptr = nptr_2
                    label_104ea58:
                        parse_integer_string(nptr)
                    label_104ea5c:
                        nptr_9 = zx.q(nptr_3.d)
                    label_104ea60:
                        nptr_9 = zx.q(nptr_9.d - 2)
                    label_104ea64:
                        cond:13_1 = nptr_9.d u> 2
                    label_104ea68:
                        
                        if (not(cond:13_1))
                            goto label_104ea74
                        
                        XString::XString()
                        *nptr_1 = 1
                        goto label_104ecc8
                    case 0x104ea58
                        goto label_104ea58
                    case 0x104ea5c
                        goto label_104ea5c
                    case 0x104ea60
                        goto label_104ea60
                    case 0x104ea64
                        goto label_104ea64
                    case 0x104ea68
                        goto label_104ea68
                    case 0x104ea6c
                    label_104ea74:
                        int64_t __saved_x20
                        nptr = &__saved_x20
                    label_104ea78:
                        XString::XString(nptr)
                    label_104ea7c:
                        nptr_9 = &nptr_13
                    label_104ea80:
                        nptr = &nptr_9[0x10]
                    label_104ea8c:
                        XString::operator+(nptr)
                    label_104ea9c:
                        int64_t __saved_x19
                        nptr = &__saved_x19
                    label_104eaa0:
                        XString::operator+(nptr)
                    label_104eaac:
                        nptr = &nptr_10
                    label_104eab0:
                        XString::XString(nptr)
                    label_104eab8:
                        nptr = &arg_0
                    label_104eac0:
                        XString::operator+(nptr)
                    label_104ead0:
                        nptr = &entry_nptr_1
                    label_104ead4:
                        XString::operator+(nptr)
                    label_104eadc:
                        XString::~XString()
                    label_104eae4:
                        XString::~XString()
                    label_104eaec:
                        XString::~XString()
                    label_104eaf4:
                        XString::~XString()
                    label_104eafc:
                        XString::~XString()
                        void* x20_2 = *nptr_2
                        double v0_2 = atof(XString::operator char const*())
                        int64_t x8_4 = sx.q(*(x20_2 + 0x428))
                        v0_2.d = fconvert.s(v0_2)
                        *(x20_2 + 0x428) = x8_4.d + 1
                        *(x20_2 + x8_4 * 0x38 + 0xa8) = 3
                        *(x20_2 + x8_4 * 0x38 + 0xb0) = v0_2.d
                        XString::XString()
                        *nptr_1 = 3
                        *(nptr_1 + 8) = x20_2 + x8_4 * 0x38 + 0xa8
                        XString::~XString()
                    label_104ecc8:
                        XString::~XString()
                        XString::~XString()
                        goto label_104ece0
                    case 0x104ea78
                        goto label_104ea78
                    case 0x104ea7c
                        goto label_104ea7c
                    case 0x104ea80
                        goto label_104ea80
                    case 0x104ea84
                        goto label_104ea8c
                    case 0x104ea90
                        goto label_104ea9c
                    case 0x104eaa0
                        goto label_104eaa0
                    case 0x104eaa4
                        goto label_104eaac
                    case 0x104eab0
                        goto label_104eab0
                    case 0x104eab4
                        goto label_104eab8
                    case 0x104eabc
                        goto label_104eac0
                    case 0x104eac4
                        goto label_104ead0
                    case 0x104ead4
                        goto label_104ead4
                    case 0x104ead8
                        goto label_104eadc
                    case 0x104eae0
                        goto label_104eae4
                    case 0x104eae8
                        goto label_104eaec
                    case 0x104eaf0
                        goto label_104eaf4
                    case 0x104eaf8
                        goto label_104eafc

return nptr
