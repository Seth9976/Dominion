// 函数: _ZNK5Botan3TLS23Renegotiation_Extension9serializeENS0_15Connection_SideE
// 地址: 0xe6c290
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
uint8_t* x1 = *(arg1 + 8)
return Botan::TLS::append_tls_length_value<uint8_t, std::__ndk1::allocator<uint8_t> >(entry_x8, x1, 
    *(arg1 + 0x10) - x1, 1)
