// 函数: _ZNK5Botan3TLS18New_Session_Ticket9serializeEv
// 地址: 0xe53a6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int32_t* x0 = operator new(4)
entry_x8[1] = &x0[1]
entry_x8[2] = &x0[1]
*entry_x8 = x0
void* entry_x0
*x0 = _byteswap(*(entry_x0 + 8))
uint8_t* x1 = *(entry_x0 + 0x10)
return Botan::TLS::append_tls_length_value<uint8_t, std::__ndk1::allocator<uint8_t> >(entry_x8, x1, 
    *(entry_x0 + 0x18) - x1, 2)
