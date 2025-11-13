// 函数: _Z12RollMapstyleR9RandomPCGP11FlavorThemei
// 地址: 0xa558cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_20
int32_t x1
int32_t x8_1
int32_t x8_2
int64_t v0

if (arg3 != 1)
    if (arg3 s< 1)
    label_a559b0:
        v0 = 0x200000001
        x8_2 = 3
        goto label_a559b8
    
    x8_1 = *arg2
    int64_t x9_1
    uint64_t x10_1
    
    if (x8_1 != 1)
        x10_1 = zx.q(arg3)
        x9_1 = 0
        int32_t i
        
        do
            if (x10_1 - 1 == x9_1)
                goto label_a5594c
            
            i = *(arg2 + 4 + (x9_1 << 2))
            x9_1 += 1
        while (i != 1)
    
    if (x8_1 != 1 && x9_1 u>= x10_1)
    label_a5594c:
        
        if (arg3 s< 1)
            goto label_a559b0
        
        goto label_a55954
    
    x1 = 2
    var_20 = 0x500000004
else
    x8_1 = *arg2
    
    if (x8_1 != 1)
    label_a55954:
        
        if (x8_1 == 3)
            return 0
        
        uint64_t x9_2 = zx.q(arg3)
        int64_t i_1 = 0
        
        while (x9_2 - 1 != i_1)
            int32_t x12_2 = *(arg2 + 4 + (i_1 << 2))
            i_1 += 1
            
            if (x12_2 == 3)
                if (i_1 u< x9_2)
                    return 0
                
                break
        
        goto label_a559b0
    
    v0 = 0x500000004
    x8_2 = 6
label_a559b8:
    x1 = 3
    var_20 = v0
    int32_t var_18_1 = x8_2
return zx.q(*(&var_20 + (sx.q(RandomInt(arg1, x1)) << 2)))
