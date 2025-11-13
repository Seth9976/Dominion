// 函数: _ZN5Botan19generate_dsa_primesERNS_21RandomNumberGeneratorERNS_6BigIntES3_mm
// 地址: 0xd17718
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = arg5 u>> 3
int64_t result
std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >* entry_x8

if (x25 == 0)
    do
        __builtin_memset(entry_x8, 0, 0x18)
        (*(*arg1 + 0x10))(arg1, 0, 0)
        result = Botan::generate_dsa_primes(arg1, arg2, arg3, arg4, arg5, entry_x8, 0)
    while ((result.d & 1) == 0)
else
    while (true)
        __builtin_memset(entry_x8, 0, 0x18)
        void* x0_1 = operator new(x25)
        void* x27_1 = x0_1 + x25
        *entry_x8 = x0_1
        *(entry_x8 + 0x10) = x27_1
        memset(x0_1, 0, x25)
        *(entry_x8 + 8) = x27_1
        (*(*arg1 + 0x10))(arg1, x0_1, x25)
        result = Botan::generate_dsa_primes(arg1, arg2, arg3, arg4, arg5, entry_x8, 0)
        
        if ((result.d & 1) != 0)
            break
        
        *(entry_x8 + 8) = x0_1
        operator delete(x0_1)
return result
