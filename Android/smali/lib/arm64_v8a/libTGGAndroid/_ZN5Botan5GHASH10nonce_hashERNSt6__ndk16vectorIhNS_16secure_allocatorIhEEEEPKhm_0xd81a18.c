// 函数: _ZN5Botan5GHASH10nonce_hashERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEPKhm
// 地址: 0xd81a18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >& x20
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >& var_10 = x20

if (*(arg1 + 0x40) != *(arg1 + 0x38))
    Botan::assertion_failure("m_ghash.size() == 0", "nonce_hash called during wrong time", 
        "nonce_hash", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xa7ae)
else
    Botan::GHASH::ghash_update(arg1, arg2, arg3)
    void* x8_1 = *(arg1 + 0x68)
    
    if (x8_1 != *(arg1 + 0x70))
        int64_t* x9_2 = *arg2
        int64_t i = 0
        uint64_t x10 = 0
        uint64_t x12 = 0
        uint64_t x13 = *x9_2
        uint64_t x14_1 = _byteswap(x9_2[1])
        uint64_t x13_1 = _byteswap(x13)
        int64_t entry_x3
        int64_t x14_2 = x14_1 ^ entry_x3 << 3
        int64_t result
        
        do
            int64_t* x16_1 = x8_1 + i
            int64_t x15_1 = x13_1 s>> 0x3f
            i += 0x20
            result = x14_2 s>> 0x3f
            x13_1 <<= 1
            x14_2 <<= 1
            x12 = (*x16_1 & x15_1) ^ x12 ^ (x16_1[2] & result)
            x10 = (x16_1[1] & x15_1) ^ x10 ^ (x16_1[3] & result)
        while (i != 0x800)
        
        uint64_t x8_2 = _byteswap(x12)
        uint64_t x10_2 = _byteswap(x10)
        *x9_2 = x8_2
        x9_2[1] = x10_2
        return result

uint8_t* x0_2
uint64_t x1_2
x0_2, x1_2 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
return Botan::GHASH::start(x0_2, x1_2) __tailcall
