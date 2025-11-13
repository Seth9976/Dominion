// 函数: _Z15ActionsAreMinorR7DomGameR10AbilityIDs
// 地址: 0xbccfa8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg2 + 0x400) s>= 1)
    int64_t i = 0
    
    do
        int64_t x0_1 = AbilitySourceItem(arg1, zx.q(*(arg2 + (i << 2))))
        uint32_t fp_1 = (x0_1 u>> 0x20).d
        
        if (x0_1.d != 2)
            if (x0_1.d != 1)
                pthread_kill(pthread_self(), 6)
                DomGame* x0_7
                int64_t x1_2
                x0_7, x1_2 = XNoReturn()
                return AbilityGetIndex(x0_7, x1_2) __tailcall
            
            if ((fp_1 - 0xb03 u> 3 || fp_1 == 0xb04) && fp_1 != 0x400)
                return 0
        else if (fp_1 s<= 0xc41)
            if (fp_1 s> 0xa0a)
                if (fp_1 != 0xa0b && fp_1 != 0xb39)
                label_bcd0b4:
                    uint64_t x1_1 = zx.q(*(arg2 + (i << 2)))
                    int32_t x8_4
                    
                    if ((x1_1 & 0x30) != 0)
                        x8_4 = *(AbilityGetStatic(arg1, x1_1) + 0xb8)
                        
                        if (fp_1 == 0x1216)
                            goto label_bcd108
                        
                        goto label_bcd0d8
                    
                    x8_4 = *(AbilityGetRegistered(arg1, x1_1) + 0x94)
                    
                    if (fp_1 != 0x1216)
                    label_bcd0d8:
                        
                        if (fp_1 != 0x111a)
                            return 0
                        
                        if (x8_4 != 1 && x8_4 != 0x44)
                            return 0
                    else
                    label_bcd108:
                        
                        if (x8_4 != 0)
                            return 0
            else if (fp_1 != 0x204 && fp_1 != 0x909)
                goto label_bcd0b4
        else if (fp_1 s<= 0x110d)
            if (fp_1 != 0xc42 && fp_1 != 0x1011)
                goto label_bcd0b4
        else if (fp_1 != 0x110e && fp_1 != 0x121f && fp_1 != 0x1224)
            goto label_bcd0b4
        
        i += 1
    while (i s< sx.q(*(arg2 + 0x400)))

return 1
