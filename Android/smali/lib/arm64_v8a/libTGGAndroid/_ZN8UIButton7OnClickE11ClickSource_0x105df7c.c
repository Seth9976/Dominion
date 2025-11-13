// 函数: _ZN8UIButton7OnClickE11ClickSource
// 地址: 0x105df7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1
*(arg1 + sx.q(entry_x1) + 0xb1) = 1
void* x19 = arg1
XAsset* x0 = *(arg1 + 0x80)

if (x0 != 0)
    SoundPlay(x0)

int64_t x8_1 = *(x19 + 0xc8)

if (x8_1 != 0)
    x8_1(*(x19 + 0xc0), x19)

return InputQueueMarkAllAsProcessed() __tailcall
