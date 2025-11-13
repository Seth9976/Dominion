// 函数: _Z21LookupCardByName_slowPKcii11LookupStyle
// 地址: 0x9e66ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19_2

if (arg1 == 0 || zx.d(*arg1) == 0)
label_9e6910:
    x19_2 = 0
else
    int32_t x19_1 = arg4
    int64_t x24_1 = 0
    int64_t n = sx.q(arg2)
    
    while (true)
        int64_t* var_68
        int32_t x0
        
        if (x24_1 == 0x12)
            x0 = DomExpGet(1, &var_68)
            
            if (x0 s>= 1)
                goto label_9e673c
            
            goto label_9e66ec
        
        x0 = DomExpGet(zx.q(*(&data_1124868 + x24_1 * 0x28)), &var_68)
        
        if (x0 s>= 1)
        label_9e673c:
            uint64_t x27_1 = zx.q(x0)
            int64_t fp_1 = 0
            int64_t x28_1 = 0xc8
            int64_t* x26_1
            
            if (x19_1 != 0)
                while (true)
                    if (x19_1 == 1)
                        x26_1 = var_68
                        
                        if ((*(x26_1 + x28_1) & 0x301c07f20cc00) == 0)
                            goto label_9e67e4
                    else if (x19_1 == 2)
                        x26_1 = var_68
                        
                        if ((*(x26_1 + x28_1) & 0x300804720c800) == 0)
                            goto label_9e67e4
                    else if (x19_1 != 4)
                        x26_1 = var_68
                    label_9e67e4:
                        void* x25_1 = x26_1 + x28_1
                        char* s2 = *(x25_1 - 0x70)
                        
                        if (strncasecmp(arg1, s2, n) == 0 && strlen(s2) == arg2)
                        label_9e6924:
                            return zx.q(*(x26_1 + (fp_1 & 0xffffffff) * 0x780 + 0xc0))
                        
                        DomDefName(x25_1 - 0xc8, 1, nullptr, false)
                        
                        if (strncasecmp(arg1, XString::operator char const*(), n) == 0
                                && XString::Length() == arg2)
                            break
                        
                        XString::~XString()
                    else
                        x26_1 = var_68
                        
                        if (*(x26_1 + x28_1 - 8) == 0x106
                                || (*(x26_1 + x28_1) & 0x301c07f20cc00) == 0)
                            goto label_9e67e4
                    
                    fp_1 += 1
                    x28_1 += 0x780
                    
                    if (x27_1 == fp_1)
                        goto label_9e66ec
            else
                while (true)
                    x26_1 = var_68
                    void* x8_7 = x26_1 + x28_1
                    
                    if ((zx.d(*(x8_7 + 3)) & 1) != 0)
                        char* s2_1 = *(x8_7 - 0x70)
                        
                        if (strncasecmp(arg1, s2_1, n) == 0 && strlen(s2_1) == arg2)
                            goto label_9e6924
                        
                        DomDefName(x26_1 + x28_1 - 0xc8, 1, nullptr, false)
                        
                        if (strncasecmp(arg1, XString::operator char const*(), n) == 0
                                && XString::Length() == arg2)
                            break
                        
                        XString::~XString()
                    
                    fp_1 += 1
                    x28_1 += 0x780
                    
                    if (x27_1 == fp_1)
                        goto label_9e66ec
            x19_2 = *(var_68 + (fp_1 & 0xffffffff) * 0x780 + 0xc0)
            XString::~XString()
            break
        
    label_9e66ec:
        x24_1 += 1
        
        if (x24_1 == 0x13)
            goto label_9e6910

return zx.q(x19_2)
