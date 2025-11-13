// 函数: _Z11SpineUpdatejRK4Vec2S1_ff
// 地址: 0xfab8cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(arg1) & 0xffff
int64_t x8 = *gSpine

if (zx.d(*(x8 + mulu.dp.d(x9.d, 0x28) + 0x1d)) != 0)
    void* x20 = x8 + x9 * 0x28
    spAnimationState_dispose(*(x20 + 0x10))
    int64_t result = spSkeleton_dispose(*(x20 + 8))
    int32_t x9_1 = *(gSpine + 0x10)
    *(gSpine + 0x10) = zx.d(*(x20 + 0x20))
    *(x20 + 0x20) = x9_1
    *(gSpine + 0x14) -= 1
    return result

void* x19 = x8 + x9 * 0x28
int128_t v8
v8.d = arg4 * arg5
*(*(x19 + 8) + 0x8c) = *arg2
*(*(x19 + 8) + 0x90) = *(arg2 + 4)
*(*(x19 + 8) + 0x84) = *arg3
*(*(x19 + 8) + 0x88) = *(arg3 + 4)
spSkeleton_update(*(x19 + 8), v8)
spAnimationState_update(*(x19 + 0x10), v8)
spAnimationState_apply(*(x19 + 0x10), *(x19 + 8))
return spSkeleton_updateWorldTransform(*(x19 + 8)) __tailcall
