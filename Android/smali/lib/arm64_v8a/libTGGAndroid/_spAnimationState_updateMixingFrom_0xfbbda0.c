// 函数: _spAnimationState_updateMixingFrom
// 地址: 0xfbbda0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_30 = v8
void* x21 = *(arg2 + 0x10)
int32_t x19

if (x21 == 0)
    x19 = -1
else
    int32_t x0 = _spAnimationState_updateMixingFrom(arg1, x21)
    float v1_1 = *(x21 + 0x5c)
    *(x21 + 0x48) = *(x21 + 0x4c)
    *(x21 + 0x58) = v1_1
    float v0 = *(arg2 + 0x6c)
    
    if (not(v0 <= 0f))
        v1_1 = *(arg2 + 0x70)
    
    if (not(v0 <= 0f) && v0 >= v1_1)
        x19 = x0
        
        if (v1_1 == 0f || not(*(x21 + 0x78) != 0f))
            *(arg2 + 0x10) = *(x21 + 0x10)
            void* x8_2 = *(x21 + 0x10)
            
            if (x8_2 != 0)
                *(x8_2 + 0x18) = arg2
            
            *(arg2 + 0x74) = *(x21 + 0x74)
            _spEventQueue_end(*(arg1 + 0x48), x21)
    else
        x19 = 0
        *(x21 + 0x54) = *(x21 + 0x54) + *(x21 + 0x64) f* arg3.d
        *(arg2 + 0x6c) = *(arg2 + 0x6c) f+ arg3.d

return zx.q(x19)
