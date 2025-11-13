// 函数: _ZN5Botan6ChaCha6set_ivEPKhm
// 地址: 0xd00bf0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21
int64_t var_18 = x21
char var_48

if (*(arg1 + 0x28) == *(arg1 + 0x30))
    Botan::SymmetricAlgorithm::throw_key_not_set_error()
else
    int64_t entry_x2
    int64_t x22_1 = ror.q(entry_x2, 2)
    
    if (x22_1 u<= 6 && (1 << x22_1 & 0x4d) != 0)
        Botan::ChaCha::initialize_state()
        
        switch (x22_1)
            case 0
                *(*(arg1 + 0x28) + 0x38) = 0
                *(*(arg1 + 0x28) + 0x3c) = 0
            case 2
                *(*(arg1 + 0x28) + 0x38) = *arg2
                *(*(arg1 + 0x28) + 0x3c) = *(arg2 + 4)
            case 3
                *(*(arg1 + 0x28) + 0x34) = *arg2
                *(*(arg1 + 0x28) + 0x38) = *(arg2 + 4)
                *(*(arg1 + 0x28) + 0x3c) = *(arg2 + 8)
            case 6
                *(*(arg1 + 0x28) + 0x30) = *arg2
                *(*(arg1 + 0x28) + 0x34) = *(arg2 + 4)
                *(*(arg1 + 0x28) + 0x38) = *(arg2 + 8)
                *(*(arg1 + 0x28) + 0x3c) = *(arg2 + 0xc)
                void* x0_1 = Botan::allocate_memory(8, 4)
                __builtin_memset(x0_1, 0, 0x20)
                int64_t x9_10 = *(arg1 + 8)
                
                if ((x9_10.d & 1) != 0)
                    int64_t* x0_17 = Botan::assertion_failure("rounds % 2 == 0", "Valid rounds", 
                        "hchacha", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 
                        0x5347)
                    
                    if ((zx.d(var_48) & 1) != 0)
                        void* var_38
                        operator delete(var_38)
                        
                        if ((x22_1.d & 1) == 0)
                            sub_1101e04(x0_17)
                            noreturn
                    else if (x22_1.d == 0)
                        sub_1101e04(x0_17)
                        noreturn
                    
                    __cxa_free_exception(arg2)
                    sub_1101e04(x0_17)
                    noreturn
                
                int32_t* x8_12 = *(arg1 + 0x28)
                uint64_t i_1 = x9_10 u>> 1
                int32_t x6_1 = *x8_12
                int32_t x7_1 = x8_12[1]
                int32_t x5_1 = x8_12[2]
                int32_t x4_1 = x8_12[3]
                int32_t x10_2 = x8_12[0xc]
                int32_t x11_1 = x8_12[0xd]
                int32_t x13_1 = x8_12[0xe]
                int32_t x12_1 = x8_12[0xf]
                
                if (i_1 != 0)
                    int32_t x15_1 = x8_12[0xa]
                    int32_t x14_1 = x8_12[0xb]
                    int32_t x17_1 = x8_12[8]
                    int32_t x16_1 = x8_12[9]
                    int32_t x1 = x8_12[6]
                    int32_t x0_2 = x8_12[7]
                    int32_t x3_1 = x8_12[4]
                    int32_t x2 = x8_12[5]
                    uint64_t i
                    
                    do
                        int32_t x6_2 = x6_1 + x3_1
                        int32_t x7_2 = x7_1 + x2
                        int32_t x5_2 = x5_1 + x1
                        int32_t x4_2 = x4_1 + x0_2
                        int32_t x10_4 = ror.d(x6_2 ^ x10_2, 0x10)
                        int32_t x11_3 = ror.d(x7_2 ^ x11_1, 0x10)
                        int32_t x13_3 = ror.d(x5_2 ^ x13_1, 0x10)
                        int32_t x12_3 = ror.d(x4_2 ^ x12_1, 0x10)
                        int32_t x17_2 = x10_4 + x17_1
                        int32_t x16_2 = x11_3 + x16_1
                        int32_t x15_2 = x13_3 + x15_1
                        int32_t x14_2 = x12_3 + x14_1
                        int32_t x3_3 = ror.d(x17_2 ^ x3_1, 0x14)
                        int32_t x2_2 = ror.d(x16_2 ^ x2, 0x14)
                        int32_t x1_2 = ror.d(x15_2 ^ x1, 0x14)
                        int32_t x0_4 = ror.d(x14_2 ^ x0_2, 0x14)
                        int32_t x6_3 = x3_3 + x6_2
                        int32_t x7_3 = x2_2 + x7_2
                        int32_t x5_3 = x1_2 + x5_2
                        int32_t x4_3 = x0_4 + x4_2
                        int32_t x10_6 = ror.d(x6_3 ^ x10_4, 0x18)
                        int32_t x11_5 = ror.d(x7_3 ^ x11_3, 0x18)
                        int32_t x13_5 = ror.d(x5_3 ^ x13_3, 0x18)
                        int32_t x12_5 = ror.d(x4_3 ^ x12_3, 0x18)
                        int32_t x17_3 = x10_6 + x17_2
                        int32_t x16_3 = x11_5 + x16_2
                        int32_t x15_3 = x13_5 + x15_2
                        int32_t x14_3 = x12_5 + x14_2
                        int32_t x3_5 = ror.d(x17_3 ^ x3_3, 0x19)
                        int32_t x2_4 = ror.d(x16_3 ^ x2_2, 0x19)
                        int32_t x1_4 = ror.d(x15_3 ^ x1_2, 0x19)
                        int32_t x0_6 = ror.d(x14_3 ^ x0_4, 0x19)
                        int32_t x6_4 = x2_4 + x6_3
                        int32_t x7_4 = x1_4 + x7_3
                        int32_t x5_4 = x0_6 + x5_3
                        int32_t x4_4 = x3_5 + x4_3
                        int32_t x12_7 = ror.d(x6_4 ^ x12_5, 0x10)
                        int32_t x10_8 = ror.d(x7_4 ^ x10_6, 0x10)
                        int32_t x11_7 = ror.d(x5_4 ^ x11_5, 0x10)
                        int32_t x13_7 = ror.d(x4_4 ^ x13_5, 0x10)
                        int32_t x15_4 = x12_7 + x15_3
                        int32_t x14_4 = x10_8 + x14_3
                        int32_t x17_4 = x11_7 + x17_3
                        int32_t x16_4 = x13_7 + x16_3
                        int32_t x2_6 = ror.d(x15_4 ^ x2_4, 0x14)
                        int32_t x1_6 = ror.d(x14_4 ^ x1_4, 0x14)
                        int32_t x0_8 = ror.d(x17_4 ^ x0_6, 0x14)
                        int32_t x3_7 = ror.d(x16_4 ^ x3_5, 0x14)
                        x6_1 = x2_6 + x6_4
                        x7_1 = x1_6 + x7_4
                        x5_1 = x0_8 + x5_4
                        x4_1 = x3_7 + x4_4
                        x12_1 = ror.d(x6_1 ^ x12_7, 0x18)
                        x10_2 = ror.d(x7_1 ^ x10_8, 0x18)
                        x11_1 = ror.d(x5_1 ^ x11_7, 0x18)
                        x13_1 = ror.d(x4_1 ^ x13_7, 0x18)
                        x15_1 = x12_1 + x15_4
                        x14_1 = x10_2 + x14_4
                        x17_1 = x11_1 + x17_4
                        x16_1 = x13_1 + x16_4
                        i = i_1
                        i_1 -= 1
                        x2 = ror.d(x15_1 ^ x2_6, 0x19)
                        x1 = ror.d(x14_1 ^ x1_6, 0x19)
                        x0_2 = ror.d(x17_1 ^ x0_8, 0x19)
                        x3_1 = ror.d(x16_1 ^ x3_7, 0x19)
                    while (i != 1)
                
                *x0_1 = x6_1
                *(x0_1 + 4) = x7_1
                *(x0_1 + 8) = x5_1
                *(x0_1 + 0xc) = x4_1
                *(x0_1 + 0x10) = x10_2
                *(x0_1 + 0x14) = x11_1
                *(x0_1 + 0x18) = x13_1
                *(x0_1 + 0x1c) = x12_1
                x8_12[4] = x6_1
                *(*(arg1 + 0x28) + 0x14) = *(x0_1 + 4)
                *(*(arg1 + 0x28) + 0x18) = *(x0_1 + 8)
                *(*(arg1 + 0x28) + 0x1c) = *(x0_1 + 0xc)
                *(*(arg1 + 0x28) + 0x20) = *(x0_1 + 0x10)
                *(*(arg1 + 0x28) + 0x24) = *(x0_1 + 0x14)
                *(*(arg1 + 0x28) + 0x28) = *(x0_1 + 0x18)
                *(*(arg1 + 0x28) + 0x2c) = *(x0_1 + 0x1c)
                *(*(arg1 + 0x28) + 0x30) = 0
                *(*(arg1 + 0x28) + 0x34) = 0
                *(*(arg1 + 0x28) + 0x38) = *(arg2 + 0x10)
                *(*(arg1 + 0x28) + 0x3c) = *(arg2 + 0x14)
                Botan::deallocate_memory(x0_1, 8, 4)
        
        *(arg1 + 8)
        int64_t result = Botan::ChaCha::chacha_x8(arg1, *(arg1 + 0x40), *(arg1 + 0x28))
        *(arg1 + 0x58) = 0
        return result

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0_13 = __cxa_allocate_exception(0x20)
Botan::ChaCha::name()
Botan::Invalid_IV_Length::Invalid_IV_Length(x0_13, &var_48)
__cxa_throw(x0_13, _typeinfo_for_Botan::Invalid_IV_Length, Botan::Exception::~Exception)
noreturn
