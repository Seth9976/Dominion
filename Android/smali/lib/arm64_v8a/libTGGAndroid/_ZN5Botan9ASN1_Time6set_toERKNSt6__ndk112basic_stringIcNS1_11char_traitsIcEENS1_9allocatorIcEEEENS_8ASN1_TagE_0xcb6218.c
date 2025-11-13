// 函数: _ZN5Botan9ASN1_Time6set_toERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_8ASN1_TagE
// 地址: 0xcb6218
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x22
char* var_20 = entry_x22
char* x19 = arg2
int32_t entry_x2

if (entry_x2 == 0x19)
    return Botan::ASN1_Time::set_to(arg1, x19)

char var_78
void* var_60
char const* const x0_1

if (entry_x2 - 0x17 u>= 2)
    Botan::assertion_failure("spec_tag == UTC_TIME || spec_tag == GENERALIZED_TIME", 
        "Invalid tag.", "set_to", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 
        0x3007)
    x0_1 = "Time string must not be empty."
else
    uint64_t x8_2 = zx.q(*x19)
    uint64_t x9_1
    void* x10_1
    
    if ((x8_2.d & 1) != 0)
        x9_1 = *(x19 + 8)
        
        if (x9_1 == 0)
            x0_1 = "Time string must not be empty."
        else
            x10_1 = *(x19 + 0x10)
        label_cb6290:
            
            if (zx.d(*(x10_1 + x9_1 - 1)) != 0x5a)
                x0_1 = "Botan does not support times with timezones other than Z"
            else
                uint64_t x9_5
                
                if ((x8_2.d & 1) == 0)
                    x9_5 = x8_2 u>> 1
                else
                    x9_5 = *(x19 + 8)
                
                if (entry_x2 != 0x18)
                    if (x9_5 == 0xd)
                    label_cb62d8:
                        int64_t i
                        
                        i = entry_x2 == 0x17 ? 2 : 4
                        
                        int64_t x22 = 0
                        __builtin_memset(&var_78, 0, 0x30)
                        
                        while (true)
                            void* x8_3
                            
                            if ((x8_2.d & 1) == 0)
                                x8_3 = &x19[1]
                            else
                                x8_3 = *(x19 + 0x10)
                            
                            *(x8_3 + x22)
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                                &var_78)
                            
                            if (i - 1 == x22)
                                break
                            
                            x8_2 = zx.q(*x19)
                            x22 += 1
                        
                        void* __offset(
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                            0x18) var_58
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            * x22_1 = var_58
                        int64_t var_50
                        
                        if (x22_1 == var_50)
                            std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>(
                                &var_60)
                        else
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                x22_1)
                            var_58 = x22_1 + 0x18
                        
                        uint64_t x8_7
                        
                        if ((zx.d(var_78) & 1) == 0)
                            var_78.w = 0
                            x8_7 = zx.q(*x19)
                            
                            if ((x8_7.d & 1) != 0)
                                goto label_cb63c4
                            
                            goto label_cb63ac
                        
                        void* var_68_1
                        *var_68_1 = 0
                        uint64_t var_70_1 = 0
                        x8_7 = zx.q(*x19)
                        void* x8_11
                        
                        if ((x8_7.d & 1) != 0)
                        label_cb63c4:
                            
                            while (i != *(x19 + 8) - 1)
                                x8_11 = *(x19 + 0x10)
                            label_cb63cc:
                                *(x8_11 + i)
                                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                                    &var_78)
                                uint64_t x8_14 = zx.q(var_78)
                                uint64_t x8_15
                                
                                if ((x8_14.d & 1) == 0)
                                    x8_15 = x8_14 u>> 1
                                else
                                    x8_15 = var_70_1
                                
                                if (x8_15 == 2)
                                    if (var_58 == var_50)
                                        std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>(
                                            &var_60)
                                    else
                                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                            var_58)
                                        var_58 += 0x18
                                    
                                    if ((zx.d(var_78) & 1) == 0)
                                        char var_77_1 = 0
                                        var_78 = 0
                                    else
                                        i += 1
                                        *var_68_1 = 0
                                        var_70_1 = 0
                                        x8_7 = zx.q(*x19)
                                        
                                        if ((x8_7.d & 1) == 0)
                                            goto label_cb63ac
                                        
                                        continue
                                
                                i += 1
                                x8_7 = zx.q(*x19)
                                
                                if ((x8_7.d & 1) == 0)
                                    goto label_cb63ac
                        else
                        label_cb63ac:
                            x8_11 = &x19[1]
                            
                            if (i != (x8_7 u>> 1) - 1)
                                goto label_cb63cc
                        *(arg1 + 8) = Botan::to_u32bit(var_60)
                        *(arg1 + 0xc) = Botan::to_u32bit(var_60 + 0x18)
                        *(arg1 + 0x10) = Botan::to_u32bit(var_60 + 0x30)
                        *(arg1 + 0x14) = Botan::to_u32bit(var_60 + 0x48)
                        *(arg1 + 0x18) = Botan::to_u32bit(var_60 + 0x60)
                        void* x8_24 = var_60
                        int64_t result
                        int32_t x8_25
                        
                        if (var_58 - x8_24 != 0x90)
                            result = 0
                            x8_25 = *(arg1 + 8)
                            *(arg1 + 0x1c) = 0
                            *(arg1 + 0x20) = entry_x2
                            
                            if (entry_x2 == 0x17)
                            label_cb64c8:
                                
                                if (x8_25 u> 0x31)
                                    x8_25 += 0x76c
                                else
                                    x8_25 += 0x7d0
                                
                                *(arg1 + 8) = x8_25
                        else
                            result = Botan::to_u32bit(x8_24 + 0x78)
                            x8_25 = *(arg1 + 8)
                            *(arg1 + 0x1c) = result.d
                            *(arg1 + 0x20) = entry_x2
                            
                            if (entry_x2 == 0x17)
                                goto label_cb64c8
                        
                        if (x8_25 - 0x79e u<= 0x47e)
                            int32_t x9_12 = *(arg1 + 0xc)
                            
                            if (x9_12 - 1 u<= 0xb)
                                int32_t x10_5 = *(arg1 + 0x10)
                                
                                if (x10_5 != 0
                                        && x10_5 u<= *(&data_828f7c + (zx.q(x9_12 - 1) << 2)))
                                    if (x9_12 != 2 || x10_5 != 0x1d)
                                    label_cb6568:
                                        
                                        if (*(arg1 + 0x14) u<= 0x17 && result.d u<= 0x3c
                                                && *(arg1 + 0x18) u<= 0x3b
                                                && (entry_x2 != 0x17 || result.d != 0x3c))
                                            if ((zx.d(var_78) & 1) != 0)
                                                result = operator delete(var_68_1)
                                            
                                            void* x19_1 = var_60
                                            
                                            if (x19_1 == 0)
                                                return result
                                            
                                            void* __offset(
                                                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                                                0x18) x8_31 = var_58
                                            void* x0_21
                                            
                                            if (x8_31 == x19_1)
                                                x0_21 = x19_1
                                            else
                                                void* __offset(
                                                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                                                    0x18) x20_1 = x8_31
                                                
                                                do
                                                    x20_1 -= 0x18
                                                    
                                                    if ((zx.d(*x20_1) & 1) != 0)
                                                        operator delete(*(x8_31 - 8))
                                                    
                                                    x8_31 = x20_1
                                                while (x19_1 != x20_1)
                                                
                                                x0_21 = var_60
                                            
                                            void* var_58_1 = x19_1
                                            return operator delete(x0_21)
                                    else if ((x8_25 & 3) == 0)
                                        int32_t x8_26 = x8_25 & 0xffff
                                        
                                        if (ror.d(x8_26 * 0xc28f5c29, 2) u> 0x28f5c28
                                                || zx.d((x8_26 u% 0x190).w) == 0)
                                            goto label_cb6568
                        
                        void** x0_22 = __cxa_allocate_exception(0x20)
                        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                            "Time ", x19)
                        char var_a8[0x18]
                        int128_t* x0_24
                        int128_t v0
                        x0_24, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                            &var_a8)
                        int64_t var_80 = x0_24[1].q
                        int128_t var_90 = *x0_24
                        __builtin_memset(x0_24, 0, 0x18)
                        *x0_22 = _vtable_for_Botan::Exception + 0x10
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                            &x0_22[1])
                        *x0_22 = _vtable_for_Botan::Invalid_Argument + 0x10
                        __cxa_throw(x0_22, _typeinfo_for_Botan::Invalid_Argument, 
                            Botan::Exception::~Exception)
                        noreturn
                    
                    x0_1 = "Invalid UTCTime string"
                else
                    if (x9_5 == 0xf)
                        goto label_cb62d8
                    
                    x0_1 = "Invalid GeneralizedTime string"
    else
        if (x8_2.d u>= 2)
            x10_1 = &x19[1]
            x9_1 = x8_2 u>> 1
            goto label_cb6290
        
        x0_1 = "Time string must not be empty."

int64_t* x0_27 = Botan::throw_invalid_argument(x0_1, "set_to", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
void* var_68

if ((zx.d(var_78) & 1) != 0)
    operator delete(var_68)
void* x19_2 = var_60

if (x19_2 != 0)
    char* x8_36 = entry_x22
    void* x0_29 = x19_2
    
    if (x8_36 != x19_2)
        char* x20_3 = x8_36
        
        do
            x20_3 = &x20_3[-0x18]
            
            if ((zx.d(*x20_3) & 1) != 0)
                operator delete(*(x8_36 - 8))
            
            x8_36 = x20_3
        while (x19_2 != x20_3)
        
        x0_29 = var_60
    
    void* var_58_3 = x19_2
    operator delete(x0_29)

sub_1101e04(x0_27)
noreturn
