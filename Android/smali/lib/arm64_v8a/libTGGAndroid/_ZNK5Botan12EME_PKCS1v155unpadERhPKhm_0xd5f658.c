// 函数: _ZNK5Botan12EME_PKCS1v155unpadERhPKhm
// 地址: 0xd5f658
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t entry_x3
int64_t* entry_x8

if (entry_x3 u<= 0xa)
    *arg2 = 0
    __builtin_memset(entry_x8, 0, 0x18)
    return 

uint32_t x10_1 = zx.d(*arg3)
uint32_t x11_1 = zx.d(*(arg3 + 1))
int32_t x8 = 0
uint64_t x9_1 = 2
int64_t x11_2 = 2

do
    uint32_t x12_2 = zx.d(*(arg3 + x11_2))
    x9_1 += zx.q(not.d(x8)) & 1
    x11_2 += 1
    x8 |= sx.d((x12_2.b - 1) & (not.d(x12_2)).b) s>> 7
while (entry_x3 != x11_2)

int32_t x8_2 = (((x9_1 - 0xb) & not.q(x9_1)) s>> 0x3f).d | not.d(x8
    & ((x10_1 - 1) & not.d(x10_1) & not.d(x11_1) & ((x11_1 ^ 2) - 1) & 0x80) << 0x18 s>> 0x1f)
*arg2 = (not.d(x8_2)).b
Botan::CT::copy_output(zx.q(x8_2.b), arg3, entry_x3, x9_1)
__builtin_memset(entry_x8, 0, 0x18)
void* var_48
int64_t var_40
uint64_t x21_1 = var_40 - var_48

if (var_40 != var_48)
    if ((x21_1 & 0xffffffff80000000) != 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    int64_t x0_2 = Botan::allocate_memory(x21_1, 1)
    int64_t x22_1 = x0_2 + x21_1
    *entry_x8 = x0_2
    entry_x8[1] = x0_2
    entry_x8[2] = x22_1
    memcpy(x0_2, var_48, x21_1)
    entry_x8[1] = x22_1

int64_t var_38

if (var_48 != 0)
    Botan::deallocate_memory(var_48, var_38 - var_48, 1)
