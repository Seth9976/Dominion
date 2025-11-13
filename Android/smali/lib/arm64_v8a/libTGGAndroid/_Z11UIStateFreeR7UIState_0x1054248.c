// 函数: _Z11UIStateFreeR7UIState
// 地址: 0x1054248
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x11 = zx.d(*(arg1 + 0x450))
int32_t x9 = *(gUISystem + 0x3c)
*(arg1 + 0x450) = *(gUISystem + 0x38)
*(gUISystem + 0x38) = x11
*(gUISystem + 0x3c) = x9 - 1
