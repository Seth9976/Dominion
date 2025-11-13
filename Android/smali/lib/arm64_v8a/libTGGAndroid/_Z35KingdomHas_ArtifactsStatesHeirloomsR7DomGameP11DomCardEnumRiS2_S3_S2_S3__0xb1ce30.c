// 函数: _Z35KingdomHas_ArtifactsStatesHeirloomsR7DomGameP11DomCardEnumRiS2_S3_S2_S3_
// 地址: 0xb1ce30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x26 = 1
*arg7 = 0
*arg5 = 0
*arg3 = 0

while (*(arg1 + x26 * 0x68 + 0x1a70) != 0)
    if ((CardIs(arg1, zx.q(x26.d), 0x200000) & 1) == 0)
        if ((CardIs(arg1, zx.q(x26.d), 0x4000000) & 1) == 0)
            if ((CardIs(arg1, zx.q(x26.d), 0x40000000) & 1) != 0)
                int32_t x0_10 = CardWhat(arg1, zx.q(x26.d))
                int64_t i_11 = sx.q(*arg5)
                int64_t i_8 = i_11
                
                if (i_11.d s> 0)
                    i_8 = i_11 & 0xffffffff
                    DomCardEnum* x10_3 = arg4
                    int64_t i_5 = i_8
                    int64_t i
                    
                    do
                        if (*x10_3 == x0_10)
                            goto label_b1ce84
                        
                        i = i_5
                        i_5 -= 1
                        x10_3 += 4
                    while (i != 1)
                
                *arg5 = i_11.d + 1
                *(arg4 + (i_8 << 2)) = x0_10
        else
            int32_t x0_6 = CardWhat(arg1, zx.q(x26.d))
            int64_t i_10 = sx.q(*arg3)
            int64_t i_7 = i_10
            
            if (i_10.d s> 0)
                i_7 = i_10 & 0xffffffff
                DomCardEnum* x10_2 = arg2
                int64_t i_4 = i_7
                int64_t i_1
                
                do
                    if (*x10_2 == x0_6)
                        goto label_b1ce84
                    
                    i_1 = i_4
                    i_4 -= 1
                    x10_2 += 4
                while (i_1 != 1)
            
            *arg3 = i_10.d + 1
            *(arg2 + (i_7 << 2)) = x0_6
    else
        int32_t i_2 = CardWhat(arg1, zx.q(x26.d))
        int64_t x8_4 = sx.q(*arg7)
        int64_t x9_1 = x8_4
        
        if (x8_4.d s<= 0)
        label_b1ce7c:
            *arg7 = x8_4.d + 1
            *(arg6 + (x9_1 << 2)) = i_2
        else
            x9_1 = x8_4 & 0xffffffff
            DomCardEnum* x10_1 = arg6
            int64_t x11_1 = x9_1
            
            while (*x10_1 != i_2)
                int64_t temp1_1 = x11_1
                x11_1 -= 1
                x10_1 += 4
                
                if (temp1_1 == 1)
                    goto label_b1ce7c
    
label_b1ce84:
    x26 += 1
    
    if (x26 == 0x320)
        break

int64_t result = KingdomHasExtraPile(arg1, 0xd3d)

if ((result.d & 1) != 0)
    uint64_t x8_7 = zx.q(*arg5)
    uint64_t x9_3
    
    if (x8_7.d s<= 0)
        x9_3 = sx.q(x8_7.d)
    label_b1d010:
        *arg5 = x8_7.d + 1
        *(arg4 + (x9_3 << 2)) = 0xd4b
        x8_7 = zx.q(*arg5)
    else
        DomCardEnum* x9_2 = arg4
        uint64_t x10_4 = x8_7
        
        while (*x9_2 != 0xd4b)
            uint64_t temp0_1 = x10_4
            x10_4 -= 1
            x9_2 += 4
            
            if (temp0_1 == 1)
                x9_3 = x8_7
                goto label_b1d010
    uint64_t x9_5
    
    if (x8_7.d s<= 0)
        x9_5 = sx.q(x8_7.d)
    label_b1d05c:
        *arg5 = x8_7.d + 1
        *(arg4 + (x9_5 << 2)) = 0xd4c
        x8_7 = zx.q(*arg5)
    else
        x9_5 = zx.q(x8_7.d)
        DomCardEnum* x10_5 = arg4
        uint64_t x11_3 = x9_5
        
        while (*x10_5 != 0xd4c)
            uint64_t temp4_1 = x11_3
            x11_3 -= 1
            x10_5 += 4
            
            if (temp4_1 == 1)
                goto label_b1d05c
    uint64_t x9_7
    
    if (x8_7.d s<= 0)
        x9_7 = sx.q(x8_7.d)
    label_b1d0a8:
        *arg5 = x8_7.d + 1
        *(arg4 + (x9_7 << 2)) = 0xd4d
        x8_7 = zx.q(*arg5)
    else
        x9_7 = zx.q(x8_7.d)
        DomCardEnum* x10_6 = arg4
        uint64_t x11_4 = x9_7
        
        while (*x10_6 != 0xd4d)
            uint64_t temp5_1 = x11_4
            x11_4 -= 1
            x10_6 += 4
            
            if (temp5_1 == 1)
                goto label_b1d0a8
    uint64_t i_9
    
    if (x8_7.d s<= 0)
        i_9 = sx.q(x8_7.d)
    else
        i_9 = zx.q(x8_7.d)
        DomCardEnum* x10_7 = arg4
        uint64_t i_6 = i_9
        uint64_t i_3
        
        do
            if (*x10_7 == 0xd4e)
                return result
            
            i_3 = i_6
            i_6 -= 1
            x10_7 += 4
        while (i_3 != 1)
    
    *arg5 = x8_7.d + 1
    *(arg4 + (i_9 << 2)) = 0xd4e

return result
