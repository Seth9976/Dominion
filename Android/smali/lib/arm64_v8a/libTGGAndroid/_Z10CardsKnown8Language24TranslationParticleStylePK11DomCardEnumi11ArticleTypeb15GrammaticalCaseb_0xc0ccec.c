// 函数: _Z10CardsKnown8Language24TranslationParticleStylePK11DomCardEnumi11ArticleTypeb15GrammaticalCaseb
// 地址: 0xc0ccec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg1
int64_t result
XString* entry_x8

if (arg4 s<= 0)
    result = XString::XString()
else
    int32_t x22_1 = arg5
    int64_t x8 = 0
    int32_t x26_1 = 0
    uint64_t x9_1 = zx.q(arg4)
    int32_t var_1960
    int32_t var_ce0
    
    while (true)
        int32_t i = *(arg3 + (x8 << 2))
        uint64_t x14_3 = zx.q(x26_1)
        
        if (x26_1 s>= 1)
            int64_t x16_1 = 0
            int64_t x17_1 = 0
            
            while ((&var_ce0)[x17_1] != i)
                x17_1 += 1
                x16_1 += 0x100000000
                
                if (x14_3 == x17_1)
                    goto label_c0cd50
            
            if (x17_1.d != 0xffffffff)
                int64_t x15_1 = x16_1 s>> 0x1e
                x26_1 = x14_3.d
                *(&var_1960 + x15_1) += 1
                x8 += 1
                
                if (x8 == x9_1)
                    break
                
                continue
        
    label_c0cd50:
        x26_1 = x14_3.d + 1
        (&var_ce0)[sx.q(x14_3.d)] = i
        (&var_1960)[sx.q(x14_3.d)] = 1
        x8 += 1
        
        if (x8 == x9_1)
            break
    
    int64_t x5
    result, x5 = XString::XString()
    
    if (x26_1 == 1)
        CardnameKnown(zx.q(x21), zx.q(var_ce0), var_1960, zx.q(x22_1), arg6 & 1, x5)
        XString::operator=(entry_x8)
        result = XString::~XString()
    else
        XString var_1968
        int32_t var_195c
        int32_t var_cdc
        
        if (x26_1 == 2)
            bool x23_2 = arg6 & 1
            int64_t x5_1 = CardnameKnown(zx.q(x21), zx.q(var_ce0), var_1960, zx.q(x22_1), x23_2, x5)
            CardnameKnown(zx.q(x21), zx.q(var_cdc), var_195c, zx.q(x22_1), x23_2, x5_1)
            XString var_1970
            LocStringReplace(zx.q(x21), 3, "[one]", &var_1968, "[another]", &var_1970)
            XString::operator=(entry_x8)
            XString::~XString()
            XString::~XString()
            result = XString::~XString()
        else if (x26_1 s>= 1)
            if ((arg8.d & 1) == 0)
                CardnameKnown(zx.q(x21), zx.q(var_ce0), var_1960, zx.q(x22_1), arg6 & 1, x5)
                XString::operator=(entry_x8)
                int64_t x5_5
                result, x5_5 = XString::~XString()
                
                if (x26_1 != 1)
                    int64_t x28_1 = zx.q(arg4 - 1) - 1
                    int32_t* fp_1 = &var_195c
                    int32_t* x24_2 = &var_cdc
                    int64_t i_3 = zx.q(x26_1) - 1
                    int64_t i_1
                    
                    do
                        CardnameKnown(zx.q(x21), zx.q(*x24_2), *fp_1, zx.q(x22_1), arg6 & 1, x5_5)
                        uint64_t x0_16
                        int64_t x1_7
                        char* x2_7
                        XString* x3_8
                        char* x4_6
                        
                        if (x28_1 != 0)
                            x1_7 = 4
                            x0_16 = zx.q(x21)
                            x2_7 = "[first]"
                            x3_8 = entry_x8
                            x4_6 = "[rest]"
                        else
                            x1_7 = 5
                            x0_16 = zx.q(x21)
                            x2_7 = "[list]"
                            x3_8 = entry_x8
                            x4_6 = "[last]"
                        
                        LocStringReplace(x0_16, x1_7, x2_7, x3_8, x4_6, &var_1968)
                        XString::operator=(entry_x8)
                        XString::~XString()
                        result, x5_5 = XString::~XString()
                        x28_1 -= 1
                        fp_1 = &fp_1[1]
                        i_1 = i_3
                        i_3 -= 1
                        x24_2 = &x24_2[1]
                    while (i_1 != 1)
            else
                CardnameKnown(zx.q(x21), zx.q(var_ce0), var_1960, zx.q(x22_1), arg6 & 1, x5)
                XString::operator=(entry_x8)
                int64_t x5_3
                result, x5_3 = XString::~XString()
                
                if (x26_1 != 1)
                    int32_t* x26_2 = &var_cdc
                    int32_t* x27_1 = &var_195c
                    int64_t i_4 = zx.q(x26_1) - 1
                    int64_t i_2
                    
                    do
                        uint64_t x1_5 = zx.q(*x26_2)
                        x26_2 = &x26_2[1]
                        int32_t x2_5 = *x27_1
                        x27_1 = &x27_1[1]
                        CardnameKnown(zx.q(x21), x1_5, x2_5, zx.q(x22_1), arg6 & 1, x5_3)
                        LocStringReplace(zx.q(x21), 4, "[first]", entry_x8, "[rest]", &var_1968)
                        XString::operator=(entry_x8)
                        XString::~XString()
                        result, x5_3 = XString::~XString()
                        i_2 = i_4
                        i_4 -= 1
                    while (i_2 != 1)

if (x21 != 0x11)
    return result

return TranslationAddParticle(0x11, entry_x8, zx.q(arg2))
