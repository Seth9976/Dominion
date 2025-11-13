// 函数: spTransformConstraint_apply
// 地址: 0xfba614
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(*arg1 + 0x50))

if (*(x8 + 0x54) == 0)
    if (x8.d == 0)
        return _spTransformConstraint_applyAbsoluteWorld() __tailcall
    
    return _spTransformConstraint_applyRelativeWorld() __tailcall

if (x8.d == 0)
    return _spTransformConstraint_applyAbsoluteLocal() __tailcall

return _spTransformConstraint_applyRelativeLocal() __tailcall
