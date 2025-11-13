// 函数: _Z11GetLocalWhoR8GameSave9PlayerWho
// 地址: 0xb182b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19_1

if (*(arg1 + 0x11b4) s< 1)
    x19_1 = 0
else
    int32_t x21_1 = arg2
    int64_t i = 0
    void* __offset(GameSave, 0x70) x23_1 = arg1 + 0x70
    x19_1 = -1
    
    do
        int32_t x8_3 = *(x23_1 - 8)
        
        if (x8_3 != 1)
            goto label_b18334
        
        if (*(x23_1 - 4) == *(GetActiveProfile() + 0x42ac))
        label_b182ec:
            x19_1 = *x23_1
            
            if (x19_1 == x21_1)
                x19_1 = x21_1
                goto label_b18368
        else
            x8_3 = *(x23_1 - 8)
        label_b18334:
            
            if ((x8_3 & 0xfffffffe) == 0x3e8)
                goto label_b182ec
        
        i += 1
        x23_1 += 0x22c
    while (i s< sx.q(*(arg1 + 0x11b4)))
    
    if (x19_1 == 0xffffffff)
        x19_1 = 0

label_b18368:
return zx.q(x19_1)
