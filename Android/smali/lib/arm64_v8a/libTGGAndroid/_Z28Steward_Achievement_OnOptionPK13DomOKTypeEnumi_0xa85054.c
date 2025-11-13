// 函数: _Z28Steward_Achievement_OnOptionPK13DomOKTypeEnumi
// 地址: 0xa85054
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = DomAchievementDataGet()

if (arg2 s>= 1)
    int32_t x11_1 = *arg1
    uint64_t x8_1 = zx.q(arg2)
    int32_t x8_2
    int32_t x9_1
    int32_t x10_3
    
    if (x11_1 != 0x1f)
        int64_t x10_1 = 1
        int64_t x9_2
        
        do
            x9_2 = x10_1
            
            if (x8_1 == x10_1)
                break
            
            x10_1 = x9_2 + 1
        while (*(arg1 + (x9_2 << 2)) != 0x1f)
        
        x9_1 = x9_2 u< x8_1 ? 1 : 0
        
        if (x11_1 != 0x1d)
            goto label_a850c0
        
        x10_3 = 1
    label_a85110:
        int64_t x12_3 = 1
        int64_t x11_2
        
        do
            x11_2 = x12_3
            
            if (x8_1 == x12_3)
                break
            
            x12_3 = x11_2 + 1
        while (*(arg1 + (x11_2 << 2)) != 0x1e)
        
        x8_2 = x11_2 u< x8_1 ? 1 : 0
        
        if (x9_1 == 0)
            goto label_a850f8
        
        goto label_a85144
    
    x9_1 = 1
label_a850c0:
    int64_t x12_1 = 1
    int64_t x10_4
    
    do
        x10_4 = x12_1
        
        if (x8_1 == x12_1)
            break
        
        x12_1 = x10_4 + 1
    while (*(arg1 + (x10_4 << 2)) != 0x1d)
    
    x10_3 = x10_4 u< x8_1 ? 1 : 0
    
    if (x11_1 != 0x1e)
        goto label_a85110
    
    x8_2 = 1
    
    if (x9_1 == 0)
    label_a850f8:
        
        if (x10_3 == 0)
            goto label_a8514c
        
        goto label_a85104
    
label_a85144:
    *x0 += 1
    
    if ((x10_3 & 1) != 0)
    label_a85104:
        x0[1] += 1
        
        if ((x8_2 & 1) != 0)
            x0[2] += 1
    else
    label_a8514c:
        
        if (x8_2 != 0)
            x0[2] += 1

if (*x0 s> 1 && x0[1] s>= 2 && x0[2] s> 1)
    return 1

return 0
