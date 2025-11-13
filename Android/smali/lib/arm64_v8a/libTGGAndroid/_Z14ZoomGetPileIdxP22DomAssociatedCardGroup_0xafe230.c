// 函数: _Z14ZoomGetPileIdxP22DomAssociatedCardGroup
// 地址: 0xafe230
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x11 = sx.q(*(gDomClient + 0x1f0a0))

if (x11.d != 0)
    int64_t (* i)() = gDomClient + 0x1d020
    int32_t x8_1 = 0
    void* x10_1 = i + x11
    
    do
        if (i == arg1)
            return zx.q(x8_1)
        
        x8_1 += 1
        void* i_1 = i + sx.q(8 + *i * 0xc)
        
        i = i_1 == x10_1 ? nullptr : i_1
    while (i != 0)

pthread_kill(pthread_self(), 6)
return zx.q(XNoReturn())
