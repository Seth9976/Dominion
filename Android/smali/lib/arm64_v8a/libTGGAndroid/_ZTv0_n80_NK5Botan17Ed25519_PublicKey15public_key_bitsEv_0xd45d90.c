// 函数: _ZTv0_n80_NK5Botan17Ed25519_PublicKey15public_key_bitsEv
// 地址: 0xd45d90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1 = *(*arg1 - 0x50)
__builtin_memset(arg2, 0, 0x18)
void* x8_2 = arg1 + x8_1
int64_t x21 = *(x8_2 + 8)
int64_t x9 = *(x8_2 + 0x10)
uint64_t x20 = x9 - x21

if (x9 == x21)
    return 

if ((x20 & 0xffffffff80000000) != 0)
    int64_t* x0_3 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
    void* x8_3 = *arg2
    
    if (x8_3 != 0)
        arg2[1] = x8_3
        operator delete(x8_3)
    
    sub_1101e04(x0_3)
    noreturn

int64_t x0_1 = operator new(x20)
int64_t x22_1 = x0_1 + x20
*arg2 = x0_1
arg2[1] = x0_1
arg2[2] = x22_1
memcpy(x0_1, x21, x20)
arg2[1] = x22_1
