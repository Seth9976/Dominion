// 函数: _Z17GetDailyGameIndexRK4Date
// 地址: 0xb3cefc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*arg1 != 0)
    void* x0 = GetClient()
    
    for (Date* i = *(*(x0 + 0x75d8) + ((((0xffff00ff & zx.q(*arg1 << 0x10))
            | zx.q(zx.d((*(arg1 + 4)).b) << 8) | zx.q(*(arg1 + 8))) & zx.q(*(x0 + 0x75e0))) << 3)); 
            i != 0; i = *(i + 0x28))
        if ((operator!=(arg1, i) & 1) == 0)
            return GetDailyGameIndex(zx.q(*(i + 0x10))) __tailcall

return 0
