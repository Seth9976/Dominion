// 函数: sub_f3bdd4
// 地址: 0xf3bdd4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0_1 =
    __dynamic_cast(arg2, _typeinfo_for_Botan::Public_Key, _typeinfo_for_Botan::RSA_PublicKey, -1)
int64_t result
int32_t x8_3
int128_t var_50
void* x20_1
void* x20_3

if (x0_1 == 0)
    void* x0_8 = __dynamic_cast(arg2, _typeinfo_for_Botan::Public_Key, 
        _typeinfo_for_Botan::DL_Scheme_PublicKey, -1)
    
    if (x0_8 == 0)
        if (__dynamic_cast(arg2, _typeinfo_for_Botan::Public_Key, 
                _typeinfo_for_Botan::EC_PublicKey, -1) == 0)
            void** x0_73 = __cxa_allocate_exception(0x28)
            int64_t x0_74
            int128_t v0_2
            x0_74, v0_2 = operator new(0x40)
            int64_t var_40 = x0_74
            int128_t var_50_1 = data_71adb0
            __builtin_strncpy(x0_74, "Field getter not implemented for this algorithm type", 0x35)
            Botan::Exception::Exception(x0_73, "FFI error")
            x0_73[4].d = 0xffffffd8
            *x0_73 = _vtable_for_Botan_FFI::FFI_Error + 0x10
            __cxa_throw(x0_73, _typeinfo_for_Botan_FFI::FFI_Error, Botan::Exception::~Exception)
            noreturn
        
        uint64_t x10_8 = zx.q(*arg3)
        uint64_t x8_7 = *(arg3 + 8)
        int32_t x9_2 = x10_8.d & 1
        uint64_t x10_9 = x10_8 u>> 1
        uint64_t x11_4
        
        x11_4 = x9_2 == 0 ? x10_9 : x8_7
        
        if (x11_4 == 8)
            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    arg3, 0, -ffffffffffffffff, "public_x") == 0)
                return Botan::PointGFp::get_affine_x() __tailcall
            
            uint64_t x10_10 = zx.q(*arg3)
            x8_7 = *(arg3 + 8)
            x9_2 = x10_10.d & 1
            x10_9 = x10_10 u>> 1
        
        uint64_t x11_5
        
        if ((x9_2 & 0xff) == 0)
            x11_5 = x10_9
        else
            x11_5 = x8_7
        
        if (x11_5 == 8)
            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    arg3, 0, -ffffffffffffffff, "public_y") == 0)
                return Botan::PointGFp::get_affine_y() __tailcall
            
            uint64_t x10_11 = zx.q(*arg3)
            x8_7 = *(arg3 + 8)
            x9_2 = x10_11.d & 1
            x10_9 = x10_11 u>> 1
        
        uint64_t x11_6
        
        if ((x9_2 & 0xff) == 0)
            x11_6 = x10_9
        else
            x11_6 = x8_7
        
        if (x11_6 != 6)
            goto label_f3c0e0
        
        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                arg3, 0, -ffffffffffffffff, "base_x") == 0)
            void* x0_53 = Botan::EC_Group::data()
            result = std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(arg1)
            *(arg1 + 0x18) = *(x0_53 + 0xb0)
            x8_3 = *(x0_53 + 0xb8)
        else
            uint64_t x10_12 = zx.q(*arg3)
            x8_7 = *(arg3 + 8)
            x9_2 = x10_12.d & 1
            x10_9 = x10_12 u>> 1
        label_f3c0e0:
            uint64_t x11_7
            
            if ((x9_2 & 0xff) == 0)
                x11_7 = x10_9
            else
                x11_7 = x8_7
            
            if (x11_7 != 6)
                goto label_f3c120
            
            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    arg3, 0, -ffffffffffffffff, "base_y") == 0)
                void* x0_56 = Botan::EC_Group::data()
                result =
                    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(arg1)
                *(arg1 + 0x18) = *(x0_56 + 0xd8)
                x8_3 = *(x0_56 + 0xe0)
            else
                uint64_t x10_13 = zx.q(*arg3)
                x8_7 = *(arg3 + 8)
                x9_2 = x10_13.d & 1
                x10_9 = x10_13 u>> 1
            label_f3c120:
                uint64_t x11_8
                
                if ((x9_2 & 0xff) == 0)
                    x11_8 = x10_9
                else
                    x11_8 = x8_7
                
                if (x11_8 != 1)
                    goto label_f3c160
                
                int64_t* x0_60
                int64_t x8_18
                
                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        arg3, 0, -ffffffffffffffff, &data_774d4b) == 0)
                    x0_60 = *Botan::EC_Group::data()
                    x8_18 = *(*x0_60 + 0x10)
                label_f3c390:
                    x20_3 = x8_18(x0_60)
                    goto label_f3c3a0
                
                uint64_t x10_14 = zx.q(*arg3)
                x8_7 = *(arg3 + 8)
                x9_2 = x10_14.d & 1
                x10_9 = x10_14 u>> 1
            label_f3c160:
                uint64_t x11_9
                
                if ((x9_2 & 0xff) == 0)
                    x11_9 = x10_9
                else
                    x11_9 = x8_7
                
                if (x11_9 != 1)
                    goto label_f3c1a0
                
                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        arg3, 0, -ffffffffffffffff, &data_774cd1) == 0)
                    x0_60 = *Botan::EC_Group::data()
                    x8_18 = *(*x0_60 + 0x18)
                    goto label_f3c390
                
                uint64_t x10_15 = zx.q(*arg3)
                x8_7 = *(arg3 + 8)
                x9_2 = x10_15.d & 1
                x10_9 = x10_15 u>> 1
            label_f3c1a0:
                uint64_t x11_10
                
                if ((x9_2 & 0xff) == 0)
                    x11_10 = x10_9
                else
                    x11_10 = x8_7
                
                if (x11_10 != 1)
                    goto label_f3c1e0
                
                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        arg3, 0, -ffffffffffffffff, &data_7800cb) == 0)
                    x0_60 = *Botan::EC_Group::data()
                    x8_18 = *(*x0_60 + 0x20)
                    goto label_f3c390
                
                uint64_t x10_16 = zx.q(*arg3)
                x8_7 = *(arg3 + 8)
                x9_2 = x10_16.d & 1
                x10_9 = x10_16 u>> 1
            label_f3c1e0:
                uint64_t x11_11
                
                if ((x9_2 & 0xff) == 0)
                    x11_11 = x10_9
                else
                    x11_11 = x8_7
                
                if (x11_11 != 8)
                    goto label_f3c220
                
                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        arg3, 0, -ffffffffffffffff, "cofactor") == 0)
                    void* x0_67 = Botan::EC_Group::data()
                    result =
                        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(
                        arg1)
                    *(arg1 + 0x18) = *(x0_67 + 0x128)
                    x8_3 = *(x0_67 + 0x130)
                else
                    uint64_t x10_17 = zx.q(*arg3)
                    x8_7 = *(arg3 + 8)
                    x9_2 = x10_17.d & 1
                    x10_9 = x10_17 u>> 1
                label_f3c220:
                    uint64_t x8_8
                    
                    if ((x9_2 & 0xff) == 0)
                        x8_8 = x10_9
                    else
                        x8_8 = x8_7
                    
                    int32_t x0_37
                    
                    if (x8_8 == 5)
                        x0_37 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            arg3, 0, -ffffffffffffffff, "order")
                    
                    if (x8_8 != 5 || x0_37 != 0)
                        char* x0_77 = __cxa_allocate_exception(0x28)
                        void** x20_11 = x0_77
                        var_50.b = 0x12
                        __builtin_strcpy(&var_50:1, "Bad field")
                        Botan::Exception::Exception(x0_77, "FFI error")
                        x20_11[4].d = 0xffffffe0
                        *x20_11 = _vtable_for_Botan_FFI::FFI_Error + 0x10
                        __cxa_throw(x20_11, _typeinfo_for_Botan_FFI::FFI_Error, 
                            Botan::Exception::~Exception)
                        noreturn
                    
                    void* x0_39 = Botan::EC_Group::data()
                    result =
                        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(
                        arg1)
                    *(arg1 + 0x18) = *(x0_39 + 0x100)
                    x8_3 = *(x0_39 + 0x108)
    else
        uint64_t x10_3 = zx.q(*arg3)
        uint64_t x8_4 = *(arg3 + 8)
        int32_t x9_1 = x10_3.d & 1
        uint64_t x10_4 = x10_3 u>> 1
        uint64_t x11_1
        
        x11_1 = x9_1 == 0 ? x10_4 : x8_4
        
        if (x11_1 == 1)
            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    arg3, 0, -ffffffffffffffff, &data_774d4b) == 0)
                x20_3 = Botan::DL_Group::data()
                goto label_f3c3a0
            
            uint64_t x10_5 = zx.q(*arg3)
            x8_4 = *(arg3 + 8)
            x9_1 = x10_5.d & 1
            x10_4 = x10_5 u>> 1
        
        uint64_t x11_2
        
        if ((x9_1 & 0xff) == 0)
            x11_2 = x10_4
        else
            x11_2 = x8_4
        
        if (x11_2 == 1)
            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    arg3, 0, -ffffffffffffffff, &data_754d2f) == 0)
                x20_1 = Botan::DL_Group::data()
                goto label_f3be9c
            
            uint64_t x10_6 = zx.q(*arg3)
            x8_4 = *(arg3 + 8)
            x9_1 = x10_6.d & 1
            x10_4 = x10_6 u>> 1
        
        uint64_t x11_3
        
        if ((x9_1 & 0xff) == 0)
            x11_3 = x10_4
        else
            x11_3 = x8_4
        
        if (x11_3 != 1)
            goto label_f3bfa4
        
        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                arg3, 0, -ffffffffffffffff, &data_79217b) == 0)
            void* x0_46 = Botan::DL_Group::data()
            result = std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(arg1)
            *(arg1 + 0x18) = *(x0_46 + 0x68)
            x8_3 = *(x0_46 + 0x70)
        else
            uint64_t x10_7 = zx.q(*arg3)
            x8_4 = *(arg3 + 8)
            x9_1 = x10_7.d & 1
            x10_4 = x10_7 u>> 1
        label_f3bfa4:
            uint64_t x8_5
            
            if ((x9_1 & 0xff) == 0)
                x8_5 = x10_4
            else
                x8_5 = x8_4
            
            int32_t x0_16
            
            if (x8_5 == 1)
                x0_16 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    arg3, 0, -ffffffffffffffff, &data_738f6a)
            
            if (x8_5 != 1 || x0_16 != 0)
                char* x0_71 = __cxa_allocate_exception(0x28)
                void** x20_9 = x0_71
                var_50.b = 0x12
                __builtin_strcpy(&var_50:1, "Bad field")
                Botan::Exception::Exception(x0_71, "FFI error")
                x20_9[4].d = 0xffffffe0
                *x20_9 = _vtable_for_Botan_FFI::FFI_Error + 0x10
                __cxa_throw(x20_9, _typeinfo_for_Botan_FFI::FFI_Error, Botan::Exception::~Exception)
                noreturn
            
            result = std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(arg1)
            *(arg1 + 0x18) = *(x0_8 + 0x20)
            x8_3 = *(x0_8 + 0x28)
else
    uint64_t x10 = zx.q(*arg3)
    uint64_t x8 = *(arg3 + 8)
    int32_t x9 = x10.d & 1
    uint64_t x10_1 = x10 u>> 1
    uint64_t x11
    
    x11 = x9 == 0 ? x10_1 : x8
    
    if (x11 != 1)
        goto label_f3be64
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg3, 0, -ffffffffffffffff, &data_7719ed) == 0)
        x20_3 = *(x0_1 + 8)
    label_f3c3a0:
        result = std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(arg1)
        *(arg1 + 0x18) = *(x20_3 + 0x18)
        x8_3 = *(x20_3 + 0x20)
    else
        uint64_t x10_2 = zx.q(*arg3)
        x8 = *(arg3 + 8)
        x9 = x10_2.d & 1
        x10_1 = x10_2 u>> 1
    label_f3be64:
        uint64_t x8_1
        
        if ((x9 & 0xff) == 0)
            x8_1 = x10_1
        else
            x8_1 = x8
        
        int32_t x0_5
        
        if (x8_1 == 1)
            x0_5 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                arg3, 0, -ffffffffffffffff, &data_766ee7)
        
        if (x8_1 != 1 || x0_5 != 0)
            char* x0_69 = __cxa_allocate_exception(0x28)
            void** x20_8 = x0_69
            var_50.b = 0x12
            __builtin_strcpy(&var_50:1, "Bad field")
            Botan::Exception::Exception(x0_69, "FFI error")
            x20_8[4].d = 0xffffffe0
            *x20_8 = _vtable_for_Botan_FFI::FFI_Error + 0x10
            __cxa_throw(x20_8, _typeinfo_for_Botan_FFI::FFI_Error, Botan::Exception::~Exception)
            noreturn
        
        x20_1 = *(x0_1 + 8)
    label_f3be9c:
        result = std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(arg1)
        *(arg1 + 0x18) = *(x20_1 + 0x40)
        x8_3 = *(x20_1 + 0x48)
*(arg1 + 0x20) = x8_3
return result
