// 函数: _Z13SpineListenerP16spAnimationState11spEventTypeP12spTrackEntryP7spEvent
// 地址: 0xfab504
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((arg2 & 0xfffffffe) != 2)
    return 

uint64_t x8 = zx.q(*(arg1 + 0x30))
int64_t x9_1 = *gSpine
int32_t x10_2 = *(x9_1 + x8 * 0x28 + 0x18)

if (x10_2 == 2)
    *(x9_1 + x8 * 0x28 + 0x1c) = 1
else if (x10_2 == 1)
    *(x9_1 + x8 * 0x28 + 0x1c) = 0x101
