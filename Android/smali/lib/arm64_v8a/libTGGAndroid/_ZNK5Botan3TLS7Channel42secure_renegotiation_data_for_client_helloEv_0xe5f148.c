// 函数: _ZNK5Botan3TLS7Channel42secure_renegotiation_data_for_client_helloEv
// 地址: 0xe5f148
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
void* x9 = *(entry_x0 + 0x40)
int64_t* entry_x8

if (x9 == 0)
    __builtin_memset(entry_x8, 0, 0x18)
    return 

void* x8 = *(x9 + 0x160)
__builtin_memset(entry_x8, 0, 0x18)
int64_t x21 = *(x8 + 8)
int64_t x9_1 = *(x8 + 0x10)
uint64_t x20 = x9_1 - x21

if (x9_1 == x21)
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
