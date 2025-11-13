// 函数: _ZN5Botan4GMAC12key_scheduleEPKhm
// 地址: 0xd82dbc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

(*(**(arg1 + 0x10) + 0x10))()
void* x23 = *(arg1 + 0x18)
int64_t x0_1 = *(x23 + 8)
int64_t x8_2 = *(x23 + 0x10)

if (x8_2 != x0_1)
    memset(x0_1, 0, x8_2 - x0_1)
    x0_1 = *(x23 + 8)

*(x23 + 0x10) = x0_1
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::shrink_to_fit()
int64_t x0_3 = *(x23 + 0x68)
int64_t x8_3 = *(x23 + 0x70)

if (x8_3 != x0_3)
    memset(x0_3, 0, x8_3 - x0_3)
    x0_3 = *(x23 + 0x68)

*(x23 + 0x70) = x0_3
std::__ndk1::vector<uint64_t, Botan::secure_allocator<uint64_t> >::shrink_to_fit()
int64_t x0_5 = *(x23 + 0x20)
int64_t x8_4 = *(x23 + 0x28)

if (x8_4 != x0_5)
    memset(x0_5, 0, x8_4 - x0_5)

int64_t x8_5 = *(x23 + 0x38)
int64_t x9 = *(x23 + 0x50)
*(x23 + 0x98) = 0
*(x23 + 0xa0) = 0
*(x23 + 0x40) = x8_5
*(x23 + 0x58) = x9
int64_t x0_6 = *(arg1 + 0x20)
int64_t x8_6 = *(arg1 + 0x28)

if (x8_6 != x0_6)
    memset(x0_6, 0, x8_6 - x0_6)

uint8_t* x0_7 = *(arg1 + 0x10)
*(arg1 + 0x38) = 0
arg1[0x40] = 0
Botan::SymmetricAlgorithm::set_key(x0_7, arg2)
int64_t* x0_8 = Botan::allocate_memory(0x10, 1)
*x0_8 = 0
x0_8[1] = 0
int64_t* x21_1 = *(arg1 + 0x10)
(*(*x21_1 + 0x48))(x21_1, x0_8, x0_8, 0x10 u/ (*(*x21_1 + 0x30))(x21_1))
Botan::SymmetricAlgorithm::set_key(*(arg1 + 0x18), x0_8)
return Botan::deallocate_memory(x0_8, 0x10, 1)
