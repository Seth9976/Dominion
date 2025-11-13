// 函数: _ZNK5Botan11SecureQueue4sizeEv
// 地址: 0xd7b348
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
void** i = *(entry_x0 + 0x60)

if (i == 0)
    return 0

int64_t result = 0

do
    int64_t x10_1 = i[4]
    int64_t x9_1 = i[5]
    i = *i
    result = x9_1 + result - x10_1
while (i != 0)

return result
