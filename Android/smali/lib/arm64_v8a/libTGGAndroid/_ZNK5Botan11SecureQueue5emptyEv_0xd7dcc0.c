// 函数: _ZNK5Botan11SecureQueue5emptyEv
// 地址: 0xd7dcc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
void** i = *(entry_x0 + 0x60)

if (i == 0)
    return 1

int64_t x9 = 0

do
    int64_t x11_1 = i[4]
    int64_t x10_1 = i[5]
    i = *i
    x9 = x10_1 + x9 - x11_1
while (i != 0)

return zx.q(x9 == 0 ? 1 : 0)
