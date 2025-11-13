// 函数: _ZN5Botan14CBC_Decryption6finishERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEm
// 地址: 0xcf05a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_50

if (*(arg1 + 0x18) == *(arg1 + 0x20))
    Botan::throw_invalid_state("state().empty() == false", "finish", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
    Botan::assertion_failure("buffer.size() >= offset", "Offset is sane", "finish", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x4e3b)
else
    int64_t x8_1 = *arg2
    int64_t x9_2 = *(arg2 + 8) - x8_1
    int64_t entry_x2
    
    if (x9_2 u< entry_x2)
        Botan::assertion_failure("buffer.size() >= offset", "Offset is sane", "finish", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x4e3b)
    else
        int64_t x21_1
        
        if (x9_2 != entry_x2)
            x21_1 = *(arg1 + 0x30)
        
        int32_t var_40
        
        if (x9_2 == entry_x2 || (x9_2 - entry_x2) u% x21_1 != 0)
            void** x0_9 = __cxa_allocate_exception(0x20)
            (*(*arg1 + 0x20))(arg1)
            char var_68[0x18]
            int128_t* x0_12
            int128_t v0_1
            x0_12, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                &var_68)
            var_40.q = x0_12[1].q
            var_50.o = *x0_12
            __builtin_memset(x0_12, 0, 0x18)
            *x0_9 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_9[1])
            *x0_9 = _vtable_for_Botan::Decoding_Error + 0x10
            __cxa_throw(x0_9, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
            noreturn
        
        int64_t x0_1 = (*(*arg1 + 0x38))(arg1, x8_1 + entry_x2)
        int64_t x8_2 = *arg2
        int64_t x9_7 = x0_1 + entry_x2
        int64_t x10_2 = *(arg2 + 8) - x8_2
        
        if (x9_7 u> x10_2)
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg2)
        else if (x9_7 u< x10_2)
            *(arg2 + 8) = x8_2 + x9_7
        
        int64_t* x0_3 = *(arg1 + 0x10)
        
        if (x0_3 == 0)
        label_cf07e0:
            Botan::assertion_failure("m_padding is not null", &data_793a18, "padding", 
                "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x1d20)
            Botan::throw_invalid_state("state().empty() == false", "finish", 
                "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
            Botan::assertion_failure("buffer.size() >= offset", "Offset is sane", "finish", 
                "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x4e3b)
        else
            int64_t result = (*(*x0_3 + 8))(x0_3, *(arg2 + 8) - x21_1, x21_1)
            int64_t x9_9 = *arg2
            int64_t x8_6 = x21_1 - result
            int64_t x11_1 = *(arg2 + 8) - x9_9
            int64_t x10_4 = x11_1 - x8_6
            
            if (x11_1 u< x8_6)
                return std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(
                    arg2) __tailcall
            
            if (x10_4 u< x11_1)
                *(arg2 + 8) = x9_9 + x10_4
            
            if (x8_6 != 0)
                return result
            
            int64_t* x0_6 = *(arg1 + 0x10)
            
            if (x0_6 == 0)
                goto label_cf07e0
            
            result = (*(*x0_6 + 0x18))()
            uint64_t x9_13 = zx.q(var_50)
            int32_t x8_9 = x9_13.d & 1
            uint64_t x9_15
            int120_t var_4f
            
            if (x8_9 == 0)
                x9_15 = x9_13 u>> 1
            else
                x9_15 = var_4f:7.q
            int32_t x19_2
            
            if (x9_15 != 9)
                x19_2 = 1
                
                if ((x8_9 & 0xff) != 0)
                    result = operator delete(var_40.q)
            else
                result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &var_50, 0, -ffffffffffffffff, "NoPadding")
                x19_2 = result.d != 0 ? 1 : 0
                
                if ((zx.d(var_50) & 1) != 0)
                    result = operator delete(var_40.q)
            
            if (x19_2 == 0)
                return result

void** x0_15 = __cxa_allocate_exception(0x20)
__builtin_strncpy(&var_50, "&Invalid CBC padding", 0x15)
*x0_15 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_15[1])
*x0_15 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_15, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
