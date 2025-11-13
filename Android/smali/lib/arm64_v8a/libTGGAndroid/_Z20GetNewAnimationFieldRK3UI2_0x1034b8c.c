// 函数: _Z20GetNewAnimationFieldRK3UI2
// 地址: 0x1034b8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

AttribMap* x0 = GetEdittedMap(arg1, 0x71)
void* x0_2 = AttribMapGetDef(*gUI2AttribTable, x0, *macro_ptr_UI2Transition, 0x71)
int128_t var_30
__builtin_memcpy(&var_30, 
    "\x76\x00\x00\x00\x7e\x00\x00\x00\x80\x00\x00\x00\x85\x00\x00\x00\x8e\x00\x00\x00\xde\x00\x00\x00\x"
"6d\x00\x00\x00", 
    0x1c)
uint64_t x8_1 = zx.q(*(x0_2 + 0x10))

if (x8_1.d s< 1)
    return 0x76

int32_t* x10 = *(x0_2 + 8)
int64_t x9 = 0
int64_t x12 = 7

do
    if (x12.d s>= 1)
        int32_t x14_2 = x10[x9 * 4]
        int32_t x13_1 = 0
        int32_t x15_1 = x12.d
        
        do
            if (*(&var_30 + (sx.q(x13_1) << 2)) == x14_2)
                x12 = sx.q(x15_1) - 1
                int64_t x16_2 = sx.q(x13_1)
                x13_1 -= 1
                *(&var_30 + (x16_2 << 2)) = *(&var_30 + (x12 << 2))
                x15_1 = x12.d
            
            x13_1 += 1
        while (x13_1 s< x15_1)
    
    x9 += 1
while (x9 != x8_1)

return zx.q(var_30.d)
