// 函数: _ZN5Botan14GCM_Decryption6finishERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEm
// 地址: 0xd81eb0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x24 + 0x28)
int64_t x8_1 = *arg2
int64_t x9_1 = *(arg2 + 8) - x8_1
int64_t entry_x2
int64_t x9_2 = x9_1 - entry_x2

if (x9_1 u< entry_x2)
    Botan::throw_invalid_argument("Invalid offset", "finish", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
else
    int64_t x2 = *(arg1 + 8)
    int64_t x22_1 = x9_2 - x2
    
    if (x9_2 u>= x2)
        if (x9_2 == x2)
            goto label_d81f54
        
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x0 = *(arg1 + 0x30)
        
        if (*(x0 + 0x40) - *(x0 + 0x38) != 0x10)
            Botan::SymmetricAlgorithm::throw_key_not_set_error()
        else
            uint64_t x23_1 = x8_1 + entry_x2
            *(x0 + 0xa0) += x22_1
            Botan::GHASH::ghash_update(x0, x0 + 0x38, x23_1)
            int64_t* x0_1 = *(arg1 + 0x28)
            (*(*x0_1 + 0x30))(x0_1, x23_1, x23_1, x22_1)
            *(arg1 + 8)
        label_d81f54:
            int64_t var_58 = 0
            int64_t var_50_1 = 0
            int64_t result = Botan::GHASH::final(*(arg1 + 0x30), &var_58)
            void* x9_6 = *arg2
            int64_t i_1 = *(arg1 + 8)
            int64_t x10_2 = x22_1 + entry_x2
            char var_70 = 0
            char* x8_5 = x9_6 + x10_2
            
            if (i_1 != 0)
                int64_t* x12_1 = &var_58
                char* x13_1 = x8_5
                int64_t i
                
                do
                    char x14_1 = *x12_1
                    x12_1 += 1
                    char x15_1 = *x13_1
                    x13_1 = &x13_1[1]
                    i = i_1
                    i_1 -= 1
                    var_70 = x15_1 ^ x14_1
                while (i != 1)
            
            void* x9_7 = *(arg2 + 8) - x9_6
            
            if (x10_2 u> x9_7)
                result =
                    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg2)
            else if (x10_2 u< x9_7)
                *(arg2 + 8) = x8_5
            
            if (*(x24 + 0x28) == x8)
                return result
        
        __stack_chk_fail()
        noreturn

void** x0_4 = __cxa_allocate_exception(0x20)
int64_t x0_5
int128_t v0
x0_5, v0 = operator new(0x40)
v0 = data_71ac10
int64_t var_60_1 = x0_5
__builtin_strncpy(x0_5, "Insufficient input for GCM decryption, tag missing", 0x33)
int128_t var_70_1 = v0
*x0_4 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_4[1])
*x0_4 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_4, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
