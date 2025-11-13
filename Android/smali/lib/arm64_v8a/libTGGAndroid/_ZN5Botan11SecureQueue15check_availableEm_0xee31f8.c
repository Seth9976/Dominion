// 函数: _ZN5Botan11SecureQueue15check_availableEm
// 地址: 0xee31f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** i = *(arg1 + 0x60)
int64_t entry_x1

if (i == 0)
    return zx.q(0 u>= entry_x1 ? 1 : 0)

int64_t x9 = 0

do
    int64_t x11_1 = i[4]
    int64_t x10_1 = i[5]
    i = *i
    x9 = x10_1 + x9 - x11_1
while (i != 0)

return zx.q(x9 u>= entry_x1 ? 1 : 0)
