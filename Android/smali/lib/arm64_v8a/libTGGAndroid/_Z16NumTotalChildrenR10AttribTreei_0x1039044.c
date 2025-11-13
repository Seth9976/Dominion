// 函数: _Z16NumTotalChildrenR10AttribTreei
// 地址: 0x1039044
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1 = *arg1
int128_t var_10c
__builtin_memset(&var_10c, 0, 0xfc)
int32_t x9 = 0
uint64_t result = 0
int32_t var_110 = *(x8_1 + muls.dp.d(arg2, 0x18) + 0x10)
int64_t x12_2 = sx.q(arg2)

while (true)
    x12_2 += 1
    int64_t x13_1 = sx.q(x9)
    x9 += 1
    
    while (true)
        int32_t x14_1 = (&var_110)[x13_1]
        
        if (x14_1 != 0)
            (&var_110)[x13_1] = x14_1 - 1
            result = zx.q(result.d + 1)
            (&var_110)[sx.q(x9)] = *(x8_1 + x12_2 * 0x18 + 0x10)
            break
        
        bool cond:0_1 = x13_1 s> 0
        x13_1 -= 1
        x9 -= 1
        
        if (not(cond:0_1))
            return result
