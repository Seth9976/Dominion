// 函数: _Z20WrapperGetNextEscapeR11WrapperDataPi
// 地址: 0xf6de10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*(arg1 + 0xc4)) == 0)
    void* x8_1 = *arg1
    int64_t x10_1 = sx.q(*(arg1 + 0xc))
    
    if (zx.d(*(x8_1 + x10_1)) == 0x7b)
        int64_t i = x10_1 + 1
        int32_t x20_1 = -1
        
        while (i s< sx.q(*(arg1 + 8)))
            uint32_t x11_1 = zx.d(*(x8_1 + i))
            int64_t result = 0
            
            if (x11_1 != 0xd && x11_1 != 0x7b)
                x20_1 += 1
                i += 1
                
                if (x11_1 != 0x7d)
                    continue
                else
                    *arg2 = x20_1 + 2
                    XString::XString()
                    char var_28
                    XString::AppendLength(&var_28, (*arg1).d + *(arg1 + 0xc) + 1)
                    
                    if ((operator==(&var_28, "normal_rules") & 1) == 0)
                        operator==(&var_28, "header_rules")
                    
                    result = WrapperLookupEscapeTag(arg1, &var_28)
                    XString::~XString()
            
            return result

return 0
