// 函数: _ZN5Botan4GMAC8add_dataEPKhm
// 地址: 0xd82c04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 0x38)
size_t entry_x2
size_t x21 = entry_x2
uint64_t x20 = arg2

if (x8 == 0)
label_d82d18:
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x0_4 = *(arg1 + 0x18)
    
    if (*(x0_4 + 0x40) - *(x0_4 + 0x38) != 0x10)
        Botan::SymmetricAlgorithm::throw_key_not_set_error()
    else
        size_t x22_2 = x21 & 0xf
        int64_t x21_1 = x21 & 0xfffffffffffffff0
        *(x0_4 + 0x98) += x21_1
        int64_t result = Botan::GHASH::ghash_update(x0_4, x0_4 + 0x38, x20)
        
        if (x22_2 == 0)
            return result
        
        if (x20 != 0)
            result = memmove(*(arg1 + 0x20) + *(arg1 + 0x38), x20 + x21_1, x22_2)
            *(arg1 + 0x38) += x22_2
            return result
else
    size_t x22_1
    
    if (0x10 - x8 u> x21)
        x22_1 = x21
    else
        x22_1 = 0x10 - x8
    
    if (x22_1 == 0)
        goto label_d82c54
    
    if (x20 != 0)
        memmove(*(arg1 + 0x20) + x8, x20, x22_1)
        x8 = *(arg1 + 0x38)
    label_d82c54:
        int64_t x8_1 = x8 + x22_1
        x20 += x22_1
        x21 -= x22_1
        *(arg1 + 0x38) = x8_1
        
        if (x8_1 != 0x10)
            goto label_d82d18
        
        void* x0_1 = *(arg1 + 0x18)
        int64_t* x8_2 = *(x0_1 + 0x38)
        
        if (*(x0_1 + 0x40) - x8_2 != 0x10)
            Botan::SymmetricAlgorithm::throw_key_not_set_error()
        else
            void* x9_5 = *(x0_1 + 0x68)
            int64_t* x13_1 = *(arg1 + 0x20)
            bool cond:1_1 = x9_5 == *(x0_1 + 0x70)
            *(x0_1 + 0x98) += 0x10
            
            if (not(cond:1_1))
                int64_t i = 0
                uint64_t x10_3 = 0
                uint64_t x12_1 = 0
                uint64_t x15_2 = x13_1[1] ^ x8_2[1]
                uint64_t x13_3 = _byteswap(*x13_1 ^ *x8_2)
                uint64_t x14_3 = _byteswap(x15_2)
                
                do
                    int64_t* x16_2 = x9_5 + i
                    int64_t x15_3 = x13_3 s>> 0x3f
                    i += 0x20
                    int64_t x0_3 = x14_3 s>> 0x3f
                    x13_3 <<= 1
                    x14_3 <<= 1
                    x12_1 = (*x16_2 & x15_3) ^ x12_1 ^ (x16_2[2] & x0_3)
                    x10_3 = (x16_2[1] & x15_3) ^ x10_3 ^ (x16_2[3] & x0_3)
                while (i != 0x800)
                
                uint64_t x9_6 = _byteswap(x12_1)
                uint64_t x10_5 = _byteswap(x10_3)
                *x8_2 = x9_6
                x8_2[1] = x10_5
                *(arg1 + 0x38) = 0
                goto label_d82d18
            
            Botan::SymmetricAlgorithm::throw_key_not_set_error()

uint8_t* x0_6
uint64_t x1_6
x0_6, x1_6 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
return Botan::GMAC::key_schedule(x0_6, x1_6) __tailcall
