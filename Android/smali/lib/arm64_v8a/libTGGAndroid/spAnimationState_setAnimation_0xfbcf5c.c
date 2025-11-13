// 函数: spAnimationState_setAnimation
// 地址: 0xfbcf5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* const x23
int32_t x24_1

if (*(arg1 + 8) s<= arg2)
    int64_t x0_4 =
        _spCalloc(sx.q(arg2 + 1), 8, "..\..\ExternalCode\spine-c\src\spine\AnimationState.c", 0x325)
    memcpy(x0_4, *(arg1 + 0x10), sx.q(*(arg1 + 8)) << 3)
    _spFree(*(arg1 + 0x10))
    x23 = nullptr
    *(arg1 + 0x10) = x0_4
    *(arg1 + 8) = arg2 + 1
    x24_1 = 1
else
    int64_t x8_1 = *(arg1 + 0x10)
    x23 = *(x8_1 + (sx.q(arg2) << 3))
    
    if (x23 == 0)
        x24_1 = 1
    else
        int32_t v0 = *(x23 + 0x5c)
        float v1 = fconvert.s(-1f)
        
        if (v0 f!= v1)
            for (void* i = *(x23 + 8); i != 0; i = *(i + 8))
                _spEventQueue_dispose(*(arg1 + 0x48), i)
            
            *(x23 + 8) = 0
            x24_1 = 1
        else
            *(x8_1 + (sx.q(arg2) << 3)) = *(x23 + 0x10)
            _spEventQueue_interrupt(*(arg1 + 0x48), x23, v0, v1)
            _spEventQueue_end(*(arg1 + 0x48), x23)
            
            for (void* i_1 = *(x23 + 8); i_1 != 0; i_1 = *(i_1 + 8))
                _spEventQueue_dispose(*(arg1 + 0x48), i_1)
            
            *(x23 + 8) = 0
            x23 = *(x23 + 0x10)
            x24_1 = 0

int64_t result = _spAnimationState_trackEntry(arg1, zx.q(arg2), arg3, zx.q(arg4), x23)
_spAnimationState_setCurrent(arg1, zx.q(arg2), result, zx.q(x24_1))
_spEventQueue_drain(*(arg1 + 0x48))
return result
