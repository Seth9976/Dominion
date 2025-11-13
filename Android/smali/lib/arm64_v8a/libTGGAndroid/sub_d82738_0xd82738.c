// 函数: sub_d82738
// 地址: 0xd82738
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_2 = *arg3

if (x8_2 != 0)
    int64_t x9_1 = *(arg2 + 0x30)
    *(arg2 + 0x28) = x8_2
    Botan::deallocate_memory(x8_2, x9_1 - x8_2, 1)

void* x21 = *(arg2 + 0x18)
*(arg2 + 0x18) = 0

if (x21 != 0)
    Botan::GHASH::~GHASH()
    operator delete(x21)

int64_t* x21_1 = *(arg2 + 0x10)
*(arg2 + 0x10) = 0

if (x21_1 != 0)
    (*(*x21_1 + 8))(x21_1)

sub_1101e04(arg1)
noreturn
