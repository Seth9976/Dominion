// 函数: _Z9SpinePlayjPKc13SpineLoopType
// 地址: 0xfab73c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t entry_v8
int64_t var_40 = entry_v8.q
uint64_t x22 = zx.q(arg1) & 0xffff
int32_t x19 = arg3
int64_t x21 = *gSpine
int64_t result = spSkeletonData_findAnimation(***(x21 + mulu.dp.d(x22.d, 0x28) + 0x10))

if (result != 0)
    result = spAnimationState_setAnimation(*(x21 + mulu.dp.d(x22.d, 0x28) + 0x10), 0, result, 
        zx.q(x19 == 0 ? 1 : 0))
    
    if (x19 == 0)
        entry_v8.d = RandomUnit(gRNG) f* float.s(0x42c80000)
        void* x20_1 = x21 + x22 * 0x28
        entry_v8.d = entry_v8.d f+ RandomUnit(gRNG)
        spSkeleton_update(*(x20_1 + 8), entry_v8)
        spAnimationState_update(*(x21 + mulu.dp.d(x22.d, 0x28) + 0x10), entry_v8)
        spAnimationState_apply(*(x21 + mulu.dp.d(x22.d, 0x28) + 0x10), *(x20_1 + 8))
        result = spSkeleton_updateWorldTransform(*(x20_1 + 8))
    
    *(x21 + x22 * 0x28 + 0x18) = x19

entry_v8.q = var_40
return result
