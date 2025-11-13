// 函数: sub_1101750
// 地址: 0x1101750
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
int64_t x9 = arg1.q
int64_t x8 = arg1:8.q
int64_t x12 = x8 & 0x7fffffffffffffff
int32_t x10_1

if (x12 == 0x7fff000000000000)
    x10_1 = x9 != 0 ? 1 : 0
else
    x10_1 = x12 u> 0x7fff000000000000 ? 1 : 0

if ((x10_1 & 1) == 0)
    int64_t x11_1 = arg2.q
    int64_t x10_2 = arg2:8.q
    int64_t x14_1 = x10_2 & 0x7fffffffffffffff
    int32_t x13_2
    
    if (x14_1 == 0x7fff000000000000)
        x13_2 = x11_1 != 0 ? 1 : 0
    else
        x13_2 = x14_1 u> 0x7fff000000000000 ? 1 : 0
    
    if ((x13_2 & 1) == 0)
        if ((x11_1 | x9 | x14_1 | x12) == 0)
            return 0
        
        if ((x10_2 & x8) s< 0)
            int32_t x12_6
            
            if (x8 == x10_2)
                x12_6 = x9 u> x11_1 ? 1 : 0
            else
                x12_6 = x8 s> x10_2 ? 1 : 0
            
            if ((x12_6 & 1) != 0)
                return 0xffffffff
        else
            int32_t x12_4
            
            if (x8 == x10_2)
                x12_4 = x9 u< x11_1 ? 1 : 0
            else
                x12_4 = x8 s< x10_2 ? 1 : 0
            
            if ((x12_4 & 1) != 0)
                return 0xffffffff
        
        return zx.q(((x9 ^ x11_1) | (x8 ^ x10_2)) != 0 ? 1 : 0)

return 1
