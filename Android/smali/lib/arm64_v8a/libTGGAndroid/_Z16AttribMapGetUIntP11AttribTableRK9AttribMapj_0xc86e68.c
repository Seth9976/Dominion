// 函数: _Z16AttribMapGetUIntP11AttribTableRK9AttribMapj
// 地址: 0xc86e68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_1 = zx.q(*arg2)

if (i_1.d s>= 1)
    void* x8_2 = *(arg2 + 8) + 8
    uint64_t i
    
    do
        if (*(x8_2 - 8) == arg3)
            return zx.q(*x8_2)
        
        i = i_1
        i_1 -= 1
        x8_2 += 0x10
    while (i != 1)

return zx.q(*(*(*(arg1 + 0x18) + (zx.q(arg3) << 3)) + 0x48))
