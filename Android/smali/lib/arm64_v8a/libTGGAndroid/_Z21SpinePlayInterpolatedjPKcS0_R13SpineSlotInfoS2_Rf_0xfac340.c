// 函数: _Z21SpinePlayInterpolatedjPKcS0_R13SpineSlotInfoS2_Rf
// 地址: 0xfac340
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x27 = zx.q(arg1) & 0xffff
int64_t x25 = *gSpine
void* result
int128_t v0
int128_t v2
result, v0, v2 = spSkeletonData_findAnimation(***(x25 + mulu.dp.d(x27.d, 0x28) + 0x10))

if (result != 0)
    v0.d = *(result + 8)
    void* x27_1 = x25 + x27 * 0x28
    v2.d = fconvert.s(1f)
    *arg6 = v0.d
    v0.d = *(result + 8)
    spAnimation_apply(result, *(x27_1 + 8), 0, 0, 0, 0, 0, v0, v0, v2)
    SpineUpdate(arg1, V20, V21, 0f, fconvert.s(1f))
    int128_t v0_2
    int128_t v1_3
    int128_t v2_1
    v0_2, v1_3, v2_1 = SpineGetSlotInfoByName(arg1, arg3, arg5)
    v0_2.d = 0f
    v1_3.d = 0f
    v2_1.d = fconvert.s(1f)
    spAnimation_apply(result, *(x27_1 + 8), 0, 0, 0, 0, 0, v0_2, v1_3, v2_1)
    SpineUpdate(arg1, V20, V21, 0f, fconvert.s(1f))
    SpineGetSlotInfoByName(arg1, arg3, arg4)
    result = spAnimationState_setAnimation(*(x25 + mulu.dp.d(x27.d, 0x28) + 0x10), 0, result, 0)
    *(x27_1 + 0x18) = 2

return result
