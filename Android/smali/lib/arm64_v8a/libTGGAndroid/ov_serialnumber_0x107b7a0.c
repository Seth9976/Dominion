// 函数: ov_serialnumber
// 地址: 0x107b7a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_3 = *(arg1 + 0x40)
int32_t x10_1

while (true)
    x10_1 = arg2
    bool cond:0_1 = x8_3 s<= arg2
    arg2 = x8_3 - 1
    
    if (not(cond:0_1))
        if ((x10_1 & 0x80000000) != 0)
            break
        
        arg2 = -1
        
        if (*(arg1 + 8) != 0)
            break

if ((x10_1 & 0x80000000) != 0)
    return *(arg1 + 0x88)

return *(*(arg1 + 0x58) + (sx.q(x10_1) << 3))
