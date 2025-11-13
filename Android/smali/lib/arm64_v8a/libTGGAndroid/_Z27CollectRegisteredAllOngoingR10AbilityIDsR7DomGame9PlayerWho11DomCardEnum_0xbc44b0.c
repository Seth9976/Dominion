// 函数: _Z27CollectRegisteredAllOngoingR10AbilityIDsR7DomGame9PlayerWho11DomCardEnum
// 地址: 0xbc44b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *(arg2 + 0x19c0)

if (x9 s< 1)
    return 

int64_t i = 0

if (arg4 == 0)
    void* __offset(DomGame, 0x3c254) x11_2 = arg2 + 0x3c254
    
    do
        if (*x11_2 == 3)
            int32_t x12_9 = *(x11_2 + 0xc)
            
            if ((x12_9 & 1) != 0 || *(x11_2 - 0x34) == arg3)
                if ((x12_9 & 2) == 0)
                label_bc45e4:
                    
                    if ((x12_9 & 4) == 0)
                    label_bc4580:
                        int64_t x12_7 = sx.q(*(arg1 + 0x400))
                        int32_t x9_4 = *(x11_2 - 0x20) << 0x12
                        *(arg1 + 0x400) = x12_7.d + 1
                        *(arg1 + (x12_7 << 2)) = x9_4
                        x9 = *(arg2 + 0x19c0)
                    else if (zx.d(*(arg2 + 0x19e0)) != 0 && *(arg2 + 0x19d4) == arg3)
                        goto label_bc4580
                else if (zx.d(*(arg2 + 0x19e0)) != 0 && *(arg2 + 0x19d4) == *(x11_2 - 0x38))
                    goto label_bc45e4
        
        i += 1
        x11_2 += 0xb8
    while (i s< sx.q(x9))
else
    void* __offset(DomGame, 0x3c21c) x11_1 = arg2 + 0x3c21c
    
    do
        if (*(x11_1 + 0x38) == 3)
            int32_t x12_2 = *(x11_1 + 0x44)
            
            if ((x12_2 & 1) != 0 || *(x11_1 + 4) == arg3)
                if ((x12_2 & 2) == 0)
                label_bc4528:
                    
                    if ((x12_2 & 4) == 0)
                    label_bc4544:
                        
                        if (*(x11_1 + 0x7c) == arg4)
                            int64_t x12_6 = sx.q(*(arg1 + 0x400))
                            int32_t x9_2 = *(x11_1 + 0x18) << 0x12
                            *(arg1 + 0x400) = x12_6.d + 1
                            *(arg1 + (x12_6 << 2)) = x9_2
                            x9 = *(arg2 + 0x19c0)
                    else if (zx.d(*(arg2 + 0x19e0)) != 0 && *(arg2 + 0x19d4) == arg3)
                        goto label_bc4544
                else if (zx.d(*(arg2 + 0x19e0)) != 0 && *(arg2 + 0x19d4) == *x11_1)
                    goto label_bc4528
        
        i += 1
        x11_1 += 0xb8
    while (i s< sx.q(x9))
