// 函数: _Z9FindOrAddP16CostDistributionRii
// 地址: 0xa35408
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_2 = zx.q(*arg2)
CostDistribution* result

if (i_2.d s>= 1)
    uint64_t i_1 = i_2
    result = arg1
    uint64_t i
    
    do
        if (*result == arg3)
            return result
        
        i = i_1
        i_1 -= 1
        result += 0xc
    while (i != 1)

result = arg1 + sx.q(i_2.d) * 0xc
*arg2 = i_2.d + 1
*(result + 4) = 0
*(result + 8) = 0
*result = arg3
return result
