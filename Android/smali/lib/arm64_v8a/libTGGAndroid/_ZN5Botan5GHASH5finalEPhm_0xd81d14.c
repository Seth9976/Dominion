// 函数: _ZN5Botan5GHASH5finalEPhm
// 地址: 0xd81d14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x2

if (entry_x2 - 1 u>= 0x10)
    Botan::throw_invalid_argument("GHASH output length", "final", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
else
    void* x8_1 = *(arg1 + 0x68)
    
    if (x8_1 != *(arg1 + 0x70))
        int64_t* x10 = *(arg1 + 0x38)
        int64_t x16 = *(arg1 + 0xa0)
        int64_t i = 0
        uint64_t x9_2 = 0
        uint64_t x14 = x10[1]
        uint64_t x12 = 0
        int64_t x13_2 = _byteswap(*x10) ^ *(arg1 + 0x98) << 3
        int64_t x14_2 = _byteswap(x14) ^ x16 << 3
        
        do
            int64_t* x16_1 = x8_1 + i
            int64_t x15_1 = x13_2 s>> 0x3f
            i += 0x20
            int64_t x3_2 = x14_2 s>> 0x3f
            x13_2 <<= 1
            x14_2 <<= 1
            x12 = (*x16_1 & x15_1) ^ x12 ^ (x16_1[2] & x3_2)
            x9_2 = (x16_1[1] & x15_1) ^ x9_2 ^ (x16_1[3] & x3_2)
        while (i != 0x800)
        
        uint64_t x8_2 = _byteswap(x12)
        uint64_t x9_4 = _byteswap(x9_2)
        *x10 = x8_2
        x10[1] = x9_4
        
        if (entry_x2 != 0)
            int64_t x8_3 = 0
            
            do
                *(arg2 + x8_3) = (*(arg1 + 0x50))[x8_3] ^ (*(arg1 + 0x38))[x8_3]
                x8_3 += 1
            while (entry_x2 != x8_3)
        
        int64_t x8_4 = *(arg1 + 0x38)
        *(arg1 + 0xa0) = 0
        *(arg1 + 0x40) = x8_4
        return 

Botan::SymmetricAlgorithm::throw_key_not_set_error()
return Botan::GCM_Mode::tag_size() __tailcall
