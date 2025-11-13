// 函数: _Z21AddExtraStandardPilesR7DomGameR10ExtraSetupb
// 地址: 0xbc01c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_80[0x6]
int32_t x8_1
int32_t i_1

if ((arg3.d & 1) == 0)
    int32_t var_68_1 = 0x100
    
    if (zx.d(*arg2) != 0)
        int32_t var_64_1 = 0x500
        x8_1 = 8
        i_1 = 6
        
        if (zx.d(*(arg2 + 1)) != 0)
            goto label_bc0280
        
        goto label_bc028c
    
    x8_1 = 7
    i_1 = 6
    
    if (zx.d(*(arg2 + 1)) == 0)
        goto label_bc028c
    
label_bc0280:
    var_80[zx.q(x8_1)] = 0x923
    
    if (6 s<= x8_1)
    label_bc0288:
        x8_1 += 1
    label_bc028c:
        uint64_t i = zx.q(i_1)
        
        do
            int32_t x21_1 = var_80[i]
            AddPileNoSetup(arg1, zx.q(i.d + 7), zx.q(x21_1), arg2, 0, 0)
            RunPileSetup(arg1, zx.q(x21_1), arg2, 0)
            i += 1
        while (zx.q(x8_1) != i)
else
    if (zx.d(*arg2) == 0)
        x8_1 = 8
        
        if (zx.d(*(arg2 + 1)) != 0)
            var_80[zx.q(x8_1)] = 0x923
            x8_1 += 1
    else
        int32_t var_60_1 = 0x500
        x8_1 = 9
        
        if (zx.d(*(arg2 + 1)) != 0)
            var_80[zx.q(x8_1)] = 0x923
            x8_1 += 1
    
    i_1 = 8
    var_80[zx.q(x8_1)] = 0x100
    
    if (8 s<= x8_1)
        goto label_bc0288
