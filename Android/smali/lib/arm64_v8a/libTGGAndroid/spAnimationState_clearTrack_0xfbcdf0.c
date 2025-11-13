// 函数: spAnimationState_clearTrack
// 地址: 0xfbcdf0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 8) s<= arg2)
    return 

void* i_4 = *(*(arg1 + 0x10) + (sx.q(arg2) << 3))

if (i_4 == 0)
    return 

_spEventQueue_end(*(arg1 + 0x48), i_4)

for (void* i = *(i_4 + 8); i != 0; i = *(i + 8))
    _spEventQueue_dispose(*(arg1 + 0x48), i)

void* i_1 = *(i_4 + 0x10)
*(i_4 + 8) = 0

if (i_1 != 0)
    void* i_3 = i_4
    
    do
        void* i_2 = i_1
        _spEventQueue_end(*(arg1 + 0x48), i_1)
        *(i_3 + 0x10) = 0
        *(i_3 + 0x18) = 0
        i_1 = *(i_2 + 0x10)
        i_3 = i_2
    while (i_1 != 0)

*(*(arg1 + 0x10) + (sx.q(*(i_4 + 0x28)) << 3)) = 0
return _spEventQueue_drain(*(arg1 + 0x48)) __tailcall
