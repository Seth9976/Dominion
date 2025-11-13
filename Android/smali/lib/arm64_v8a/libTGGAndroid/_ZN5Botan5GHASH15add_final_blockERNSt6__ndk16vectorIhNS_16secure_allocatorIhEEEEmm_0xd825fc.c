// 函数: _ZN5Botan5GHASH15add_final_blockERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEmm
// 地址: 0xd825fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg1 + 0x68)

if (x8 == *(arg1 + 0x70))
    return Botan::GMAC::GMAC(Botan::SymmetricAlgorithm::throw_key_not_set_error()) __tailcall

int64_t* x9_1 = *arg2
int64_t i = 0
uint64_t x10 = 0
uint64_t x12 = 0
uint64_t x14 = x9_1[1]
uint64_t x13_2 = _byteswap(*x9_1) ^ arg3 << 3
int64_t entry_x3
int64_t x14_2 = _byteswap(x14) ^ entry_x3 << 3
int64_t result

do
    int64_t* x16_1 = x8 + i
    int64_t x15_1 = x13_2 s>> 0x3f
    i += 0x20
    result = x14_2 s>> 0x3f
    x13_2 <<= 1
    x14_2 <<= 1
    x12 = (*x16_1 & x15_1) ^ x12 ^ (x16_1[2] & result)
    x10 = (x16_1[1] & x15_1) ^ x10 ^ (x16_1[3] & result)
while (i != 0x800)

uint64_t x8_1 = _byteswap(x12)
uint64_t x10_2 = _byteswap(x10)
*x9_1 = x8_1
x9_1[1] = x10_2
return result
