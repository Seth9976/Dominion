// 函数: _Z12SpineDestroyj
// 地址: 0xfab838
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = *gSpine + mulu.dp.d(arg1 & 0xffff, 0x28)
spAnimationState_dispose(*(x20 + 0x10))
int64_t result = spSkeleton_dispose(*(x20 + 8))
int32_t x9_1 = *(gSpine + 0x10)
*(gSpine + 0x10) = zx.d(*(x20 + 0x20))
*(x20 + 0x20) = x9_1
*(gSpine + 0x14) -= 1
return result
