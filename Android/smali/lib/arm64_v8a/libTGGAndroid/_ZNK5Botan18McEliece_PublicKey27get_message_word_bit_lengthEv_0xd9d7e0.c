// 函数: _ZNK5Botan18McEliece_PublicKey27get_message_word_bit_lengthEv
// 地址: 0xd9d7e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t result = *(entry_x0 + 0x28)

if ((result & 0xffffffff80000000) != 0)
    return result - *(entry_x0 + 0x20) * 0x40

if (result u< 2)
    return result

int32_t x9 = 0
int64_t x10 = 1

do
    x10 <<= 1
    x9 += 1
while (x10 u< result)

return result - *(entry_x0 + 0x20) * zx.q(x9.b)
