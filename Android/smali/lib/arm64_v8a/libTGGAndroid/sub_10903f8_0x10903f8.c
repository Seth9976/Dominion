// 函数: sub_10903f8
// 地址: 0x10903f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x23 = *(arg1 + 0x4c)
int64_t x0_1 = oggpack_look(arg2, zx.q(*(arg1 + 0x48)))
int32_t x1_1
uint64_t result
int64_t x24_1

if ((x0_1 & 0xffffffff80000000) != 0)
    x24_1 = *(arg1 + 0x10)
    result = 0
label_1090468:
    int64_t x0_3 = oggpack_look(arg2, zx.q(x23))
    int32_t x22_1
    
    if ((x0_3 & 0xffffffff80000000) == 0 || x23 s< 2)
        x22_1 = x23
        
        if (((x0_3 u>> 0x3f).d & 1) != 0)
            return -1
    else
        bool cond:0_1
        
        do
            x22_1 = x23 - 1
            x0_3 = oggpack_look(arg2, zx.q(x22_1))
            
            if ((x0_3 & 0xffffffff80000000) == 0)
                break
            
            cond:0_1 = x23 s> 2
            x23 = x22_1
        while (cond:0_1)
        
        if (((x0_3 u>> 0x3f).d & 1) != 0)
            return -1
    
    int64_t i = x24_1 - result
    
    if (i s>= 2)
        int32_t temp0_1 = _byteswap(x0_3.d)
        int32_t x10_4 = (temp0_1 u>> 4 & 0xf0f0f0f) | (temp0_1 << 4 & 0xf0f0f0f0)
        int32_t x10_7 = (x10_4 u>> 2 & 0x33333333) | (x10_4 << 2 & 0xcccccccc)
        int32_t x10_10 = (x10_7 u>> 1 & 0x55555555) | (x10_7 << 1 & 0xaaaaaaaa)
        
        do
            uint64_t x8_6 = i u>> 1
            int32_t x11_8 = *(*(arg1 + 0x28) + ((x8_6 + result) << 2))
            uint64_t x11_9
            
            x11_9 = x11_8 u> x10_10 ? 0 : x8_6
            
            uint64_t x8_7
            
            x8_7 = x11_8 u> x10_10 ? x8_6 : 0
            
            result += x11_9
            x24_1 -= x8_7
            i = x24_1 - result
        while (i s> 1)
    
    x1_1 = sx.d(*(*(arg1 + 0x38) + result))
    
    if (x22_1 s< x1_1)
        oggpack_adv(arg2, zx.q(x22_1))
        return -1
else
    uint64_t x8_2 = zx.q(*(*(arg1 + 0x40) + (x0_1 << 2)))
    
    if ((x8_2.d & 0x80000000) != 0)
        result = x8_2 u>> 0xf & 0x7fff
        x24_1 = *(arg1 + 0x10) - (x8_2 & 0x7fff)
        goto label_1090468
    
    result = x8_2 - 1
    x1_1 = sx.d(*(*(arg1 + 0x38) + result))
oggpack_adv(arg2, x1_1)
return result
