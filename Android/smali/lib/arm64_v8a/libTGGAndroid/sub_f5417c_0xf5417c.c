// 函数: sub_f5417c
// 地址: 0xf5417c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg2)
int32_t temp0 = x8.d & 1
void* x19

if (temp0 != 0)
    x19 = *(arg2 + 0x10)
else
    x19 = &arg2[1]

uint64_t i

if (temp0 == 0)
    i = x8 u>> 1
else
    i = *(arg2 + 8)

void* x20 = x19 + i
int32_t* x0_1

if (i s>= 5)
    void* x0 = x19
    
    do
        x0_1 = memchr(x0, 0x58, i - 4)
        
        if (x0_1 == 0)
            break
        
        if (((*x0_1 ^ 0x30323558) | (zx.d(x0_1[1].b) ^ 0x2e)) == 0)
            return zx.q(x0_1 != x20 ? 1 : 0) & zx.q(x0_1 - x19 != -1 ? 1 : 0)
        
        x0 = x0_1 + 1
        i = x20 - x0
    while (i s> 4)

x0_1 = x20
return zx.q(x0_1 != x20 ? 1 : 0) & zx.q(x0_1 - x19 != -1 ? 1 : 0)
