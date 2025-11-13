// 函数: _Z20FilterParentsOnlyRecR3UI2P9UI2HandleRib
// 地址: 0x102da44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*arg3)
int32_t i_1 = *(arg1 + 0x19a0)
bool x22_1
int32_t x23

if ((arg4.d & 1) == 0)
    if (x9.d s< 1)
        x22_1 = false
        x23 = *(arg1 + 0x1970)
        
        if (x23 != 0)
        label_102daec:
            uint64_t x26_1 = 0
            bool cond:3_1
            
            do
                FilterParentsOnlyRec(
                    *gUI2 + zx.q(*(arg1 + (x26_1 << 0x20 s>> 0x1e) + 0x1870)) * 0x19a8, arg2, arg3, 
                    x22_1)
                cond:3_1 = x23 != x26_1.d + 1
                x26_1 = zx.q(x26_1.d + 1)
            while (cond:3_1)
    else
        int64_t i_2 = x9 - 1
        UI2Handle* x9_1 = arg2
        int64_t i
        
        do
            int32_t x12_2 = *x9_1
            x9_1 += 4
            x22_1 = (x12_2 == i_1 ? 1 : 0).b
            
            if (x12_2 == i_1)
                break
            
            i = i_2
            i_2 -= 1
        while (i != 0)
        x23 = *(arg1 + 0x1970)
        
        if (x23 != 0)
            goto label_102daec
else if (x9.d s< 1)
label_102daa4:
    x22_1 = true
    x23 = *(arg1 + 0x1970)
    
    if (x23 != 0)
        goto label_102daec
else
    int64_t x10_1 = 0
    UI2Handle* x12_1 = arg2
    uint64_t x13_1 = x9
    
    while (*x12_1 != i_1)
        x10_1 += 0x100000000
        uint64_t temp0_1 = x13_1
        x13_1 -= 1
        x12_1 += 4
        
        if (temp0_1 == 1)
            goto label_102daa4
    
    *arg3 = x9.d - 1
    x22_1 = true
    *(arg2 + (x10_1 s>> 0x1e)) = *(arg2 + (sx.q(x9.d - 1) << 2))
    x23 = *(arg1 + 0x1970)
    
    if (x23 != 0)
        goto label_102daec
