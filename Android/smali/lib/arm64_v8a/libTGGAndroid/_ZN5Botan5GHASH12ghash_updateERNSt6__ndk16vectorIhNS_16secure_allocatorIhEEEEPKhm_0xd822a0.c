// 函数: _ZN5Botan5GHASH12ghash_updateERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEPKhm
// 地址: 0xd822a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
void* x8_1 = *(arg1 + 0x68)

if (x8_1 == *(arg1 + 0x70))
    Botan::SymmetricAlgorithm::throw_key_not_set_error()
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
else
    int64_t entry_x3
    uint64_t x9_1 = entry_x3 u>> 4
    size_t x19_1 = entry_x3 & 0xf
    
    if (x9_1 != 0)
        int64_t* x10_1 = *arg2
        int64_t x11_1 = 0
        uint64_t x14_1 = x10_1[1]
        uint64_t x13_1 = _byteswap(*x10_1)
        uint64_t x12_2 = _byteswap(x14_1)
        
        do
            uint64_t x16_2 = *(arg3 + (8 | (0xfffffffffffffff & x11_1) << 4))
            int64_t i = 0
            uint64_t x15_4 = _byteswap(*(arg3 + (x11_1 << 4))) ^ x13_1
            uint64_t x16_3 = _byteswap(x16_2) ^ x12_2
            x12_2 = 0
            x13_1 = 0
            
            do
                int64_t* x0 = x8_1 + i
                int64_t x17_1 = x15_4 s>> 0x3f
                i += 0x20
                int64_t x4_2 = x16_3 s>> 0x3f
                x15_4 <<= 1
                x16_3 <<= 1
                x13_1 = (*x0 & x17_1) ^ x13_1 ^ (x0[2] & x4_2)
                x12_2 = (x0[1] & x17_1) ^ x12_2 ^ (x0[3] & x4_2)
            while (i != 0x800)
            
            x11_1 += 1
        while (x11_1 != x9_1)
        
        uint64_t x8_2 = _byteswap(x13_1)
        uint64_t x9_2 = _byteswap(x12_2)
        *x10_1 = x8_2
        x10_1[1] = x9_2
    
    if (x19_1 == 0)
    label_d82440:
        
        if (*(x22 + 0x28) == x8)
            return 
    else
        int64_t var_48 = 0
        int64_t var_40_1 = 0
        
        if (arg3 != 0)
            memcpy(&var_48, arg3 + (entry_x3 & 0xfffffffffffffff0), x19_1)
            int64_t* x8_4 = *arg2
            void* x12_4 = *(arg1 + 0x68)
            int64_t i_1 = 0
            uint64_t x9_3 = 0
            uint64_t x11_2 = 0
            uint64_t x14_3 = var_40_1 ^ x8_4[1]
            uint64_t x13_6 = _byteswap(var_48 ^ *x8_4)
            uint64_t x14_4 = _byteswap(x14_3)
            
            do
                int64_t* x16_5 = x12_4 + i_1
                int64_t x15_6 = x13_6 s>> 0x3f
                i_1 += 0x20
                int64_t x0_4 = x14_4 s>> 0x3f
                x13_6 <<= 1
                x14_4 <<= 1
                x11_2 = (*x16_5 & x15_6) ^ x11_2 ^ (x16_5[2] & x0_4)
                x9_3 = (x16_5[1] & x15_6) ^ x9_3 ^ (x16_5[3] & x0_4)
            while (i_1 != 0x800)
            
            uint64_t x10_2 = _byteswap(x11_2)
            uint64_t x9_5 = _byteswap(x9_3)
            *x8_4 = x10_2
            x8_4[1] = x9_5
            memset(&var_48, 0, x19_1)
            goto label_d82440
        
        Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)

__stack_chk_fail()
noreturn
