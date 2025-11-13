// 函数: _ZNK5Botan8Parallel13output_lengthEv
// 地址: 0xde185c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t* x20 = *(entry_x0 + 8)
int64_t x21 = *(entry_x0 + 0x10)

if (x20 == x21)
    return 0

int64_t result = 0

do
    int64_t* x0 = *x20
    x20 = &x20[1]
    result += (**x0)()
while (x21 != x20)

return result
