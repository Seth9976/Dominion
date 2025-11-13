// 函数: _ZNK5Botan17Ed25519_PublicKey15public_key_bitsEv
// 地址: 0xd45d0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
void* entry_x0
int64_t x21 = *(entry_x0 + 8)
int64_t x8 = *(entry_x0 + 0x10)
uint64_t x20 = x8 - x21

if (x8 == x21)
    return 

if ((x20 & 0xffffffff80000000) != 0)
    int64_t* x0_3 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
    void* x8_1 = *entry_x8
    
    if (x8_1 != 0)
        entry_x8[1] = x8_1
        operator delete(x8_1)
    
    sub_1101e04(x0_3)
    noreturn

int64_t x0_1 = operator new(x20)
int64_t x22_1 = x0_1 + x20
*entry_x8 = x0_1
entry_x8[1] = x0_1
entry_x8[2] = x22_1
memcpy(x0_1, x21, x20)
entry_x8[1] = x22_1
