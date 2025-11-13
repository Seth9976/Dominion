// 函数: _ZN5Botan6CTR_BEC1EPNS_11BlockCipherE
// 地址: 0xd08b2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::CTR_BE + 0x10
int64_t* entry_x1
*(arg1 + 8) = entry_x1
int64_t x0_1 = (*(*entry_x1 + 0x30))(entry_x1)
int64_t* x21 = *(arg1 + 8)
*(arg1 + 0x10) = x0_1
*(arg1 + 0x18) = x0_1
int64_t x9 = (*(*x21 + 0x38))(x21) * (*(*x21 + 0x30))(x21)
int64_t* x20_1 = *(arg1 + 8)
*(arg1 + 0x20) = (x9 << 2) u/ *(arg1 + 0x10)
int64_t x0_7 = (*(*x20_1 + 0x38))(x20_1)
int64_t result = (*(*x20_1 + 0x30))(x20_1)
int64_t x21_2 = (x0_7 * result) << 2
__builtin_memset(arg1 + 0x28, 0, 0x18)
int64_t x22_1
int64_t x23_1

if (x21_2 == 0)
    x22_1 = 0
    x23_1 = 0
label_d08c18:
    uint64_t x22_2 = x23_1 - x22_1
    x21_2 = arg1 + 0x40
    __builtin_memset(x21_2, 0, 0x18)
    
    if (x23_1 == x22_1)
        __builtin_memset(arg1 + 0x58, 0, 0x20)
        return result
    
    if ((x22_2 & 0xffffffff80000000) == 0)
        int64_t x0_12 = Botan::allocate_memory(x22_2, 1)
        int64_t x20_3 = x0_12 + x22_2
        *(arg1 + 0x40) = x0_12
        *(arg1 + 0x50) = x20_3
        result = memset(x0_12, 0, x22_2)
        *(arg1 + 0x48) = x20_3
        __builtin_memset(arg1 + 0x58, 0, 0x20)
        return result
else
    if ((x21_2 & 0xffffffff80000000) == 0)
        int64_t x0_10 = Botan::allocate_memory(x21_2, 1)
        x23_1 = x0_10 + x21_2
        x22_1 = x0_10
        *(arg1 + 0x28) = x0_10
        *(arg1 + 0x38) = x23_1
        result = memset(x0_10, 0, x21_2)
        *(arg1 + 0x30) = x23_1
        goto label_d08c18
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
int64_t* x0_15 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
void* x8_14 = *x21_2

if (x8_14 != 0)
    int64_t x9_2 = *(arg1 + 0x50)
    *(arg1 + 0x48) = x8_14
    Botan::deallocate_memory(x8_14, x9_2 - x8_14, 1)

void* x0_17 = *(arg1 + 0x28)

if (x0_17 != 0)
    int64_t x8_15 = *(arg1 + 0x38)
    *(arg1 + 0x30) = x0_17
    Botan::deallocate_memory(x0_17, x8_15 - x0_17, 1)

int64_t* x0_18 = *(arg1 + 8)
*(arg1 + 8) = 0

if (x0_18 != 0)
    (*(*x0_18 + 8))()

sub_1101e04(x0_15)
noreturn
