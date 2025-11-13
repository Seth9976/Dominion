// 函数: sub_f300e4
// 地址: 0xf300e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0_1 = Botan_FFI::safe_get<Botan::Cipher_Mode, 3030564764u>(*(arg1 + 8))
(*(*x0_1 + 0x30))(x0_1, *(arg1 + 0x10), *(arg1 + 0x18))
void* x21 = *(arg1 + 8)
uint64_t x0_3 = (*(*x0_1 + 0x50))(x0_1)
int64_t x8_4 = *(x21 + 0x18)

if (*(x21 + 0x28) - x8_4 u< x0_3)
    int64_t x22_1 = *(x21 + 0x20) - x8_4
    int64_t x0_4 = Botan::allocate_memory(x0_3, 1)
    void* x19_1 = *(x21 + 0x18)
    int64_t x23_1 = x0_4 + x22_1
    size_t x2_1 = *(x21 + 0x20) - x19_1
    int64_t x20_2 = x23_1 - x2_1
    
    if (x2_1 s>= 1)
        memcpy(x20_2, x19_1, x2_1)
    
    int64_t x8_6 = *(x21 + 0x28)
    *(x21 + 0x18) = x20_2
    *(x21 + 0x20) = x23_1
    *(x21 + 0x28) = x0_4 + x0_3
    
    if (x19_1 != 0)
        Botan::deallocate_memory(x19_1, x8_6 - x19_1, 1)

return 0
