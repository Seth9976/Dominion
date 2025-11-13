// 函数: _spAnimationState_setCurrent
// 地址: 0xfbbc7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 8) s<= arg2)
    int64_t x0_2 =
        _spCalloc(sx.q(arg2 + 1), 8, "..\..\ExternalCode\spine-c\src\spine\AnimationState.c", 0x325)
    memcpy(x0_2, *(arg1 + 0x10), sx.q(*(arg1 + 8)) << 3)
    _spFree(*(arg1 + 0x10))
    *(arg1 + 0x10) = x0_2
    *(arg1 + 8) = arg2 + 1
    *(x0_2 + (sx.q(arg2) << 3)) = arg3
else
    int64_t* x8_1 = *(arg1 + 0x10)
    int64_t x9_1 = zx.q(arg2) << 0x20 s>> 0x1d
    void* x21_1 = *(x8_1 + x9_1)
    *(x8_1 + x9_1) = arg3
    
    if (x21_1 != 0)
        if (arg4 != 0)
            _spEventQueue_interrupt(*(arg1 + 0x48), x21_1)
        
        *(arg3 + 0x10) = x21_1
        *(x21_1 + 0x18) = arg3
        *(arg3 + 0x6c) = 0
        
        if (*(x21_1 + 0x10) != 0)
            float v0 = *(x21_1 + 0x70)
            
            if (not(v0 <= 0f))
                *(arg3 + 0x74) = *(arg3 + 0x74) * vmin_f32(*(x21_1 + 0x6c) / v0, fconvert.s(1f))
        
        *(x21_1 + 0x98) = 0

return _spEventQueue_start(*(arg1 + 0x48), arg3) __tailcall
