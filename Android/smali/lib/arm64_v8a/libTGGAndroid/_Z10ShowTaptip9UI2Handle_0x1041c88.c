// 函数: _Z10ShowTaptip9UI2Handle
// 地址: 0x1041c88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x11 = *(gUI2 + 0x5c)
int64_t x9 = *gUI2

if (x11 != 0)
    uint64_t x12_1 = zx.q(x11.w)
    
    if (x12_1.d u< *(gUI2 + 8) && *(x9 + x12_1 * 0x19a8 + 0x19a0) == x11)
        *(x9 + x12_1 * 0x19a8 + 0x13f1) = 0

void* x9_1 = x9 + (zx.q(arg1.d) & 0xffff) * 0x19a8
*(x9_1 + 0x13f1) = 1
*(gUI2 + 0x5c) = *(x9_1 + 0x19a0)
