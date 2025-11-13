// 函数: sub_a0a2b4
// 地址: 0xa0a2b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

for (; *(arg3 + 0x74) != arg4; arg4 += 1)
    sub_a0a2b4(arg1, arg2, arg3, zx.q(arg4 + 1), zx.q(1 << arg4) | zx.q(arg5))

int32_t var_d60[0x1d]
int64_t result = YldCopy(&var_d60, arg3)
uint64_t x9 = zx.q(*(arg3 + 0x74))
int32_t x8_2

if (x9.d s< 1)
    x8_2 = 0
else
    int64_t x10_1 = 0
    x8_2 = 0
    
    do
        if ((arg5 u>> x10_1.d & 1) != 0)
            void* x13_1 = &var_d60[sx.q(x8_2)]
            x8_2 += 1
            *(x13_1 + 0x78) = *(arg3 + 0x78 + (x10_1 << 2))
        
        x10_1 += 1
    while (x9 != x10_1)

int32_t var_cec = x8_2

if (x8_2 s>= *(arg3 + 0x68) && x8_2 s<= *(arg3 + 0x64))
    return sub_a07b04(arg1, arg2, &var_d60)

return result
