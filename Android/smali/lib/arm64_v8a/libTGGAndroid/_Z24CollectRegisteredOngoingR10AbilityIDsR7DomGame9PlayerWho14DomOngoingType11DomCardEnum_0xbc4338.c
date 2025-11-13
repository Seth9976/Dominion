// 函数: _Z24CollectRegisteredOngoingR10AbilityIDsR7DomGame9PlayerWho14DomOngoingType11DomCardEnum
// 地址: 0xbc4338
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *(arg2 + 0x19c0)

if (x9 s< 1)
    return 

int64_t i = 0

if (arg5 == 0)
    void* __offset(DomGame, 0x3c254) x11_2 = arg2 + 0x3c254
    
    do
        if (*x11_2 == 3 && *(x11_2 + 4) == arg4)
            int32_t x12_11 = *(x11_2 + 0xc)
            
            if ((x12_11 & 1) != 0 || *(x11_2 - 0x34) == arg3)
                if ((x12_11 & 2) == 0)
                label_bc4484:
                    
                    if ((x12_11 & 4) == 0)
                    label_bc4414:
                        int64_t x12_8 = sx.q(*(arg1 + 0x400))
                        int32_t x9_4 = *(x11_2 - 0x20) << 0x12
                        *(arg1 + 0x400) = x12_8.d + 1
                        *(arg1 + (x12_8 << 2)) = x9_4
                        x9 = *(arg2 + 0x19c0)
                    else if (zx.d(*(arg2 + 0x19e0)) != 0 && *(arg2 + 0x19d4) == arg3)
                        goto label_bc4414
                else if (zx.d(*(arg2 + 0x19e0)) != 0 && *(arg2 + 0x19d4) == *(x11_2 - 0x38))
                    goto label_bc4484
        
        i += 1
        x11_2 += 0xb8
    while (i s< sx.q(x9))
else
    void* __offset(DomGame, 0x3c260) x11_1 = arg2 + 0x3c260
    
    do
        if (*(x11_1 - 0xc) == 3 && *(x11_1 - 8) == arg4)
            int32_t x12_3 = *x11_1
            
            if ((x12_3 & 1) != 0 || *(x11_1 - 0x40) == arg3)
                if ((x12_3 & 2) == 0)
                label_bc43bc:
                    
                    if ((x12_3 & 4) == 0)
                    label_bc43d8:
                        
                        if (*(x11_1 + 0x38) == arg5)
                            int64_t x12_7 = sx.q(*(arg1 + 0x400))
                            int32_t x9_2 = *(x11_1 - 0x2c) << 0x12
                            *(arg1 + 0x400) = x12_7.d + 1
                            *(arg1 + (x12_7 << 2)) = x9_2
                            x9 = *(arg2 + 0x19c0)
                    else if (zx.d(*(arg2 + 0x19e0)) != 0 && *(arg2 + 0x19d4) == arg3)
                        goto label_bc43d8
                else if (zx.d(*(arg2 + 0x19e0)) != 0 && *(arg2 + 0x19d4) == *(x11_1 - 0x44))
                    goto label_bc43bc
        
        i += 1
        x11_1 += 0xb8
    while (i s< sx.q(x9))
