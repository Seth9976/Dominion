// 函数: _Z20GetLinkedElementsRecRK3UI2RiPPS0_iPKc
// 地址: 0x103361c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* s1
int64_t result = LayerDivergence(arg1, &s1)

if (result.d != 0)
    result = strcasecmp(s1, arg5)
    
    if (result.d == 0)
        int64_t x8_1 = sx.q(*arg2)
        *arg2 = x8_1.d + 1
        arg3[x8_1] = arg1
        int32_t x24_1 = *(arg1 + 0x1970)
        
        if (x24_1 != 0)
            uint64_t x27_1 = 0
            bool cond:0_1
            
            do
                result = GetLinkedElementsRec(
                    *gUI2 + zx.q(*(arg1 + (x27_1 << 0x20 s>> 0x1e) + 0x1870)) * 0x19a8, arg2, arg3, 
                    arg4, arg5)
                cond:0_1 = x24_1 != x27_1.d + 1
                x27_1 = zx.q(x27_1.d + 1)
            while (cond:0_1)

return result
