// 函数: _ZNK5Botan3TLS15Handshake_State14session_ticketEv
// 地址: 0xe6b214
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
void* x22 = *(entry_x0 + 0x150)

if (x22 == 0 || *(x22 + 0x10) == *(x22 + 0x18))
    *(entry_x0 + 0x100)
    return Botan::TLS::Client_Hello::session_ticket() __tailcall

void** entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int64_t x9_2 = *(x22 + 0x10)
int64_t x8_1 = *(x22 + 0x18)
uint64_t x21 = x8_1 - x9_2

if (x8_1 == x9_2)
    return 

if ((x21 & 0xffffffff80000000) != 0)
    int64_t* x0_5 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
    void* x8_6 = *entry_x8
    
    if (x8_6 != 0)
        entry_x8[1] = x8_6
        operator delete(x8_6)
    
    sub_1101e04(x0_5)
    noreturn

entry_x0 = operator new(x21)
*entry_x8 = entry_x0
entry_x8[1] = entry_x0
entry_x8[2] = entry_x0 + x21
int64_t x1_1 = *(x22 + 0x10)
void* x20_1 = entry_x0
size_t x21_1 = *(x22 + 0x18) - x1_1

if (x21_1 s>= 1)
    memcpy(x20_1, x1_1, x21_1)
    x20_1 += x21_1

entry_x8[1] = x20_1
