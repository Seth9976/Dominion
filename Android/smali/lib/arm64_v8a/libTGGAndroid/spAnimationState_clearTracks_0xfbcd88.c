// 函数: spAnimationState_clearTracks
// 地址: 0xfbcd88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg1 + 0x48)
int32_t x21 = *(x8 + 0x18)
*(x8 + 0x18) = 1
int32_t x22 = *(arg1 + 8)

if (x22 s>= 1)
    int32_t x20_1 = 0
    
    do
        spAnimationState_clearTrack(arg1, zx.q(x20_1))
        x20_1 += 1
    while (x22 != x20_1)

void* x8_1 = *(arg1 + 0x48)
*(arg1 + 8) = 0
*(x8_1 + 0x18) = x21
return _spEventQueue_drain(*(arg1 + 0x48)) __tailcall
