// 函数: _ZN8UIButton20ProcessLeftMouseDownEb
// 地址: 0x105dfb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = arg1
int32_t entry_x1

if ((entry_x1 & 1) == 0)
    *(x19 + 0xae) = 1
    *(x19 + 0xaa) = 0
    return 

if (zx.d(*(x19 + 0xa9)) == 0)
    *(x19 + 0xae) = 0
    *(x19 + 0xaa) = 1
    return 

XAsset* x0 = *(x19 + 0x80)
*(x19 + 0xb1) = 1

if (x0 != 0)
    SoundPlay(x0)

int64_t x8_1 = *(x19 + 0xc8)

if (x8_1 != 0)
    x8_1(*(x19 + 0xc0), x19)

InputQueueMarkAllAsProcessed()
*(x19 + 0xaa) = 1
