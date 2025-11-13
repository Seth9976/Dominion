// 函数: _Z21FifoRectAllocatorInitR20AtlasRegionAllocatorP6XAssetRK5RectIRK5Vec2IS8_
// 地址: 0xb4ddd4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

RectIWidth(arg3)
RectIHeight(arg3)
*arg1 = arg2
*(arg1 + 8) = *arg3
int64_t x0_3 = RectISize(arg3)
*(arg1 + 0x18) = zx.q(x0_3.d s/ *arg4) | zx.q((x0_3 u>> 0x20).d s/ *(arg4 + 4)) << 0x20
*(arg1 + 0x20) = *arg4
int64_t result = RectISize(arg3)
*(arg1 + 0x28) = zx.q(result.d s/ *arg5) | zx.q((result u>> 0x20).d s/ *(arg5 + 4)) << 0x20
int64_t x8_7 = *arg5
*(arg1 + 0x848) = 0
*(arg1 + 0x30) = x8_7
*(arg1 + 0x838) = zx.o(0)
return result
