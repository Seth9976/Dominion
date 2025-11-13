// 函数: _ZNK5Botan3TLS14SRP_Identifier9serializeENS0_15Connection_SideE
// 地址: 0xe6bd64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
uint64_t x8 = zx.q(*(arg1 + 8))
void* x1
uint64_t x2

if ((x8.d & 1) != 0)
    x2 = *(arg1 + 0x10)
    x1 = *(arg1 + 0x18)
else
    x1 = arg1 + 9
    x2 = x8 u>> 1

return Botan::TLS::append_tls_length_value<uint8_t, std::__ndk1::allocator<uint8_t> >(entry_x8, x1, 
    x2, 1)
