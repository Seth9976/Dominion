// 函数: _ZN5Botan8EC_GroupC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xd25ae8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = 0
char* entry_x1
uint64_t x8 = zx.q(*entry_x1)
uint64_t x8_1

if ((x8.d & 1) == 0)
    x8_1 = x8 u>> 1
else
    x8_1 = *(entry_x1 + 8)

void* __offset(vtable_for_Botan::OID, 0x10) result

if (x8_1 == 0)
    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        entry_x1, 0, -ffffffffffffffff, &data_793a18)

if (x8_1 != 0 || result.d != 0)
    Botan::OID::from_string(entry_x1)
    void* result_2
    result = result_2
    int64_t var_68
    int64_t* var_60
    void* __offset(vtable_for_Botan::OID, 0x10) result_4
    
    if (result != result_4)
        Botan::EC_Group::ec_group_data()
        Botan::EC_Group_Data_Map::lookup(&data_23ecee0)
        int64_t x8_3 = var_68
        int64_t* x9_1 = var_60
        var_68 = 0
        var_60 = nullptr
        int64_t* x21_1 = *(arg1 + 8)
        *arg1 = x8_3
        *(arg1 + 8) = x9_1
        
        if (x21_1 != 0)
            int64_t x9_2
            int32_t i
            
            do
                x9_2 = __ldaxr(&x21_1[1])
                i = __stlxr(x9_2 - 1, &x21_1[1])
            while (i != 0)
            
            if (x9_2 == 0)
                (*(*x21_1 + 0x10))(x21_1)
                std::__ndk1::__shared_weak_count::__release_weak()
        
        if (var_60 != 0)
            int64_t x9_3
            int32_t i_1
            
            do
                x9_3 = __ldaxr(&var_60[1])
                i_1 = __stlxr(x9_3 - 1, &var_60[1])
            while (i_1 != 0)
            
            if (x9_3 == 0)
                (*(*var_60 + 0x10))(var_60)
                std::__ndk1::__shared_weak_count::__release_weak()
        
        result = result_2
    
    void* __offset(vtable_for_Botan::OID, 0x10) result_1 = _vtable_for_Botan::OID + 0x10
    
    if (result != 0)
        result_4 = result
        result = operator delete(result)
    
    if (*arg1 == 0)
        uint64_t x8_12 = zx.q(*entry_x1)
        uint64_t x8_13
        
        if ((x8_12.d & 1) == 0)
            x8_13 = x8_12 u>> 1
        else
            x8_13 = *(entry_x1 + 8)
        
        if (x8_13 u>= 0x1f)
            result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &result_1, entry_x1, 0, 0x1d)
            uint64_t x9_5 = zx.q(result_1.b)
            int32_t x8_14 = x9_5.d & 1
            void* result_6
            
            if (x8_14 == 0)
                result_6 = x9_5 u>> 1
            else
                result_6 = result_2
            
            int32_t x21_3
            
            if (result_6 != 0x1d)
                x21_3 = 0
                
                if ((x8_14 & 0xff) != 0)
                    result = operator delete(result_4)
            else
                result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &result_1, 0, -ffffffffffffffff, "-----BEGIN EC PARAMETERS-----")
                x21_3 = result.d == 0 ? 1 : 0
                
                if ((zx.d(result_1.b) & 1) != 0)
                    result = operator delete(result_4)
            
            if (x21_3 != 0)
                var_68.b = 0x1a
                __builtin_strncpy(&var_68:1, "EC PARAMETERS", 0xe)
                Botan::PEM_Code::decode_check_label(entry_x1, &var_68)
                void* var_58
                
                if ((zx.d(var_68.b) & 1) != 0)
                    operator delete(var_58)
                uint8_t* result_5 = result_1
                Botan::EC_Group::BER_decode_EC_group(result_5, result_2 - result_5, 1)
                int64_t x8_19 = var_68
                var_68 = 0
                int64_t* var_60_1 = nullptr
                int64_t* x21_4 = *(arg1 + 8)
                *arg1 = x8_19
                *(arg1 + 8) = var_60
                
                if (x21_4 != 0)
                    int64_t x9_8
                    int32_t i_2
                    
                    do
                        x9_8 = __ldaxr(&x21_4[1])
                        i_2 = __stlxr(x9_8 - 1, &x21_4[1])
                    while (i_2 != 0)
                    
                    if (x9_8 == 0)
                        (*(*x21_4 + 0x10))(x21_4)
                        std::__ndk1::__shared_weak_count::__release_weak()
                
                if (var_60_1 != 0)
                    int64_t x9_9
                    int32_t i_3
                    
                    do
                        x9_9 = __ldaxr(&var_60_1[1])
                        i_3 = __stlxr(x9_9 - 1, &var_60_1[1])
                    while (i_3 != 0)
                    
                    if (x9_9 == 0)
                        (*(*var_60_1 + 0x10))(var_60_1)
                        std::__ndk1::__shared_weak_count::__release_weak()
                
                result = result_1
                
                if (result != 0)
                    void* __offset(vtable_for_Botan::OID, 0x10) result_3 = result
                    result = Botan::deallocate_memory(result, result_4 - result, 1)
        
        if (*arg1 == 0)
            void** x0_15 = __cxa_allocate_exception(0x20)
            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                "Unknown ECC group '", entry_x1)
            int128_t* x0_17
            int128_t v0
            x0_17, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                &var_68)
            int64_t var_40 = x0_17[1].q
            result_1.o = *x0_17
            __builtin_memset(x0_17, 0, 0x18)
            *x0_15 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_15[1])
            *x0_15 = _vtable_for_Botan::Invalid_Argument + 0x10
            __cxa_throw(x0_15, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
            noreturn

return result
