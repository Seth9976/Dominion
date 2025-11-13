// 函数: _Z11WrapperLineR11WrapperDataPK15FancyStringDataRbRfPf
// 地址: 0xf6e378
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8

if (arg5 != 0)
    *arg5 = 0f

if (*(arg1 + 0xc) != *(arg1 + 8))
    while (true)
        int32_t var_78 = 0
        FancyStringData* x0_3 = WrapperGetNextEscape(arg1, &var_78)
        
        if (x0_3 == 0)
            int32_t var_80
            
            if (*(arg1 + 0xc0) == 4)
                int32_t x28_1 = *(arg1 + 0xc)
                int32_t fp_1 = 0
                v9.d = 0f
                
                while (true)
                    FancyStringData* x0_6 = WrapperGetNextEscape(arg1, &var_80)
                    
                    if (x0_6 == 0)
                        int32_t x0_9 = WrapperNextBreakChar(arg1)
                        XString::XString()
                        XString::AppendLength(&var_78, (*arg1).d + *(arg1 + 0xc))
                        XAsset* x26_3 = *(arg1 + 0x40)
                        int32_t v0_5
                        
                        if (x26_3 == 0)
                            v0_5 = FontStringWidth(*(arg1 + 0x38), XString::operator char const*(), 
                                *(arg1 + 0x30), *(arg1 + 0x34))
                        else
                            v0_5 = TTFontStringWidth(x26_3, XString::operator char const*(), 
                                *(arg1 + 0x48), *(arg1 + 0x30), *(arg1 + 0x34))
                        
                        int32_t v1_4 = *(arg1 + 0x2c)
                        *(arg1 + 0xc) = x0_9
                        v8.d = v0_5 f* v1_4
                        XString::~XString()
                        
                        if ((fp_1 & 1) != 0)
                            break
                        
                        fp_1 = 0
                    else
                        int32_t x26_2 = *(x0_6 + 0x70) == 3 ? 1 : 0
                        v8 = WrapperEscapeGetWidth(arg1, x0_6)
                        int64_t x8_7 = sx.q(*(arg1 + 0xc)) + sx.q(var_80)
                        *(arg1 + 0xc) = x8_7.d
                        int32_t x9_3 = *(x0_6 + 0x70)
                        
                        if (x9_3 != 0)
                            *(arg1 + 0xc0) = x9_3
                        
                        fp_1 |= x26_2
                        uint32_t x8_8 = zx.d(*(*arg1 + x8_7))
                        
                        if (x8_8 == 0x7b)
                            if ((fp_1 & 1) != 0)
                                break
                            
                            fp_1 = 0
                        else if (x8_8 == 0x20)
                            break
                    
                    v9.d = v9.d f+ v8.d
                
                float v1_2 = *(arg1 + 0x10)
                int64_t v0_3
                v0_3.d = *(arg1 + 0x1c)
                int32_t x8_10 = *(arg1 + 0xc0)
                *(arg1 + 0xc) = x28_1
                *(arg1 + 0xc0) = 4
                
                if (not(v1_2 == 0f) && not(v9.d f+ v8.d + v1_2 f<= v0_3.d) && x8_10 != 2)
                    break
            
            int32_t x25_4 = WrapperNextBreakChar(arg1)
            XString::XString()
            XString::AppendLength(&var_78, (*arg1).d + *(arg1 + 0xc))
            XAsset* x26_5 = *(arg1 + 0x40)
            float v0_8
            
            if (x26_5 == 0)
                v0_8 = FontStringWidth(*(arg1 + 0x38), XString::operator char const*(), 
                    *(arg1 + 0x30), *(arg1 + 0x34))
            else
                v0_8 = TTFontStringWidth(x26_5, XString::operator char const*(), *(arg1 + 0x48), 
                    *(arg1 + 0x30), *(arg1 + 0x34))
            
            float v1_7 = *(arg1 + 0x10)
            v8.d = v0_8 f* *(arg1 + 0x2c)
            
            if (v8.d f+ v1_7 f<= *(arg1 + 0x1c))
            label_f6e670:
                WrapperDrawWord(arg1, &var_78)
                float v0_10 = *(arg1 + 0x10)
                *(arg1 + 0xc) = x25_4
                v0_10 = v8.d f+ v0_10
                *(arg1 + 0x10) = v0_10
                
                if (arg5 != 0)
                    *arg5 = v0_10
                    x25_4 = *(arg1 + 0xc)
                
                if (zx.d(*(*arg1 + sx.q(x25_4))) != 0xd)
                label_f6e6a4:
                    XString::~XString()
                label_f6e798:
                    
                    if (*(arg1 + 0xc) == *(arg1 + 8))
                        break
                    
                    continue
            else
                int32_t x8_12 = *(arg1 + 0xc0)
                int32_t x26_7
                
                if (x8_12 == 5)
                    XString::XString()
                    XString::XString()
                    int32_t x0_23 = XString::IsEmpty()
                    
                    if ((x0_23 & 1) == 0)
                        x26_7 = 0
                    else
                        char var_90
                        XString::XString(&var_90)
                        WrapperDrawWord(arg1, &var_90)
                        XString::~XString()
                        *(arg1 + 0xc) = *(arg1 + 8)
                        
                        if (arg5 != 0)
                            *arg5 = *(arg1 + 0x10)
                        
                        x26_7 = 2
                    
                    XString::~XString()
                    XString::~XString()
                    
                    if ((x0_23 & 1) == 0)
                        goto label_f6e6a4
                    
                label_f6e78c:
                    XString::~XString()
                    
                    if (x26_7 == 0)
                        goto label_f6e798
                    
                    if (x26_7 == 1)
                        return 1
                    
                    break
                
                if (x8_12 == 2)
                    goto label_f6e670
                
                if (not(v1_7 != 0f))
                    WrapperBreakWord(arg1)
                    
                    if ((operator==(&var_80, &data_793a18) & 1) == 0)
                        WrapperDrawWord(arg1, &var_80)
                        int32_t x0_30 = XString::Length()
                        x26_7 = 2
                        float v0_12 = v8.d f+ *(arg1 + 0x10)
                        *(arg1 + 0xc) += x0_30
                        *(arg1 + 0x10) = v0_12
                    else
                        x26_7 = 1
                    
                    XString::~XString()
                    goto label_f6e78c
                
                if (arg5 != 0)
                    *arg5 = v1_7
            
            XString::~XString()
            break
        
        int32_t x26_1 = var_78
        
        if (zx.d(*(x0_3 + 0x40)) != 0)
            *(arg1 + 0xc) += x26_1
            *arg4 = *(x0_3 + 0x30)
            *arg3 = true
            break
        
        FancyStringData* x2
        float v0_2
        x2, v0_2 = WrapperEscapeGetWidth(arg1, x0_3)
        float v1_1 = *(arg1 + 0x10)
        v8.d = *(arg1 + 0x1c)
        v9.d = v0_2 + v1_1
        
        if (not(v1_1 == 0f) && not(v9.d f<= v8.d))
            break
        
        WrapperDoEscape(arg1, x0_3, x2, v0_2)
        int32_t x8_2 = *(arg1 + 0xc) + x26_1
        *(arg1 + 0xc) = x8_2
        
        if (v9.d f> v8.d)
            break
        
        if (x8_2 == *(arg1 + 8))
            break

return 0
