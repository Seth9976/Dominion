// 函数: _ZN5Botan6ChaCha4seekEm
// 地址: 0xd01274
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg1 + 0x28)

if (x8 == *(arg1 + 0x30))
    Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::ChaCha20Poly1305_Mode::ChaCha20Poly1305_Mode() __tailcall

int64_t entry_x1
*(x8 + 0x30) = (entry_x1 u>> 6).d
void* x8_1 = *(arg1 + 0x28)
*(x8_1 + 0x34) += (entry_x1 u>> 0x26).d
*(arg1 + 8)
int64_t result = Botan::ChaCha::chacha_x8(arg1, *(arg1 + 0x40), *(arg1 + 0x28))
*(arg1 + 0x58) = entry_x1 & 0x3f
return result
