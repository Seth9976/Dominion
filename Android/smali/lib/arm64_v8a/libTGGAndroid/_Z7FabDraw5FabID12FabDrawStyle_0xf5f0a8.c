// 函数: _Z7FabDraw5FabID12FabDrawStyle
// 地址: 0xf5f0a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = zx.q(arg1)
int32_t var_48 = 0
int64_t x24 = *gFabs
int64_t* result = x24 + mulu.dp.d(x25.d, 0x4e8)

if (*result != 0)
    result = FabDraw(result, arg2, &var_48)
    void* x8_1 = x24 + x25 * 0x4e8
    
    if (*(x8_1 + 0x488) s>= 1)
        int64_t i = 0
        
        do
            result = FabDraw(*gFabs + zx.q(*(x24 + x25 * 0x4e8 + 0x288 + (i << 2))) * 0x4e8, 
                zx.q(arg2.d), &var_48)
            i += 1
        while (i s< sx.q(*(x8_1 + 0x488)))

return result
