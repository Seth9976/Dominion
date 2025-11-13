// 函数: _Z20CountPlayerAreaItems9PlayerWho
// 地址: 0xaec134
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 != 0xffffffff)
    int32_t i = *(gDomClient + muls.dp.d(arg1, 0x4d48) + 0x40e4)
    
    if (i != 0)
        uint64_t result = 0
        
        do
            i = *(*(gDomClient + 0x205e0) + mulu.dp.d(i & 0xffff, 0x21d8) + 0x213c)
            result = zx.q(result.d + 1)
        while (i != 0)
        
        return result

return 0
