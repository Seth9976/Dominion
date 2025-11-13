// 函数: spAnimationState_setEmptyAnimations
// 地址: 0xfbd3f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_40 = v8
void* x8 = *(arg1 + 0x48)
int32_t x20 = *(x8 + 0x18)
*(x8 + 0x18) = 1
uint64_t x8_1 = zx.q(*(arg1 + 8))

if (x8_1.d s>= 1)
    int64_t i = 0
    
    do
        void* x8_3 = *(*(arg1 + 0x10) + i)
        
        if (x8_3 != 0)
            void* x0_1 = spAnimationState_setAnimation(arg1, zx.q(*(x8_3 + 0x28)), data_2422590, 0)
            *(x0_1 + 0x70) = arg2.d
            *(x0_1 + 0x60) = arg2.d
        
        i += 8
    while (x8_1 << 3 != i)

*(*(arg1 + 0x48) + 0x18) = x20
return _spEventQueue_drain(*(arg1 + 0x48)) __tailcall
