// 函数: _Z20AttribTreeFindParentR10AttribTreem
// 地址: 0x102d310
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_830[0x100]
memset(&var_830, 0, 0x800)
int32_t var_c30[0x100]
memset(&var_c30, 0, 0x400)
int64_t x10 = sx.q(*(arg1 + 8))

if (x10.d != 0)
    int64_t x9_1 = *arg1
    int32_t i = 0
    int64_t x8_1 = 0
    int64_t x13_1 = 0
    int64_t x10_1
    
    x10_1 = x10 u> 1 ? x10 : 1
    
    do
        var_c30[x13_1] = i - 1
        
        if (x8_1 == arg2)
            return var_830[x13_1]
        
        void* x15_1 = x9_1 + x8_1 * 0x18
        i = *(x15_1 + 0x10)
        int64_t x14_1 = x13_1 + 1
        var_830[x14_1] = x15_1
        var_c30[x14_1] = i
        
        if (x13_1 != -1 && i == 0)
            do
                i = var_c30[x13_1]
                int64_t temp0_1 = x13_1
                x13_1 -= 1
                
                if (temp0_1 u< 1)
                    break
            while (i == 0)
            
            x14_1 = x13_1 + 1
        
        x8_1 += 1
        x13_1 = x14_1
    while (x8_1 != x10_1)

return 0
