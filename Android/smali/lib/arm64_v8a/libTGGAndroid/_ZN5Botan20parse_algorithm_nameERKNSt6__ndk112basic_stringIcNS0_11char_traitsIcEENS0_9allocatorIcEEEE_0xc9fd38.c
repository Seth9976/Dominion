// 函数: _ZN5Botan20parse_algorithm_nameERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// 地址: 0xc9fd38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::find(
    arg1.b, 0x28)
int64_t x0_2

if (x0 == -1)
    x0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::find(
        arg1.b, 0x29)

int64_t result
int64_t* entry_x8

if (x0 == -1 && x0_2 == -1)
    __builtin_memset(entry_x8, 0, 0x18)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_21 = operator new(0x18)
    *entry_x8 = x0_21
    entry_x8[1] = x0_21
    entry_x8[2] = x0_21 + 0x18
    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        x0_21)
    entry_x8[1] = x0_21 + 0x18
else
    char var_70
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_70)
    int64_t var_a0
    __builtin_memset(&var_a0, 0, 0x30)
    char var_58
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_58, &var_70, 0, 
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::find(
            &var_70, 0x28))
    void* var_98
    int128_t* x8 = var_98
    int64_t var_90
    char* var_48
    
    if (x8 u>= var_90)
        std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
            &var_a0)
        
        if ((zx.d(var_58) & 1) != 0)
            operator delete(var_48)
    else
        x8[1].q = var_48
        *x8 = var_58.o
        var_98 = x8 + 0x18
    
    int128_t v0_2
    result, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_58, &var_70, 
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::find(
            &var_70, 0x28), 
        -ffffffffffffffff)
    void* var_60
    
    if ((zx.d(var_70) & 1) != 0)
        result, v0_2 = operator delete(var_60)
    char* x8_3 = var_48
    var_70.o = var_58.o
    uint64_t x10_2 = zx.q(var_70)
    uint64_t var_68
    uint64_t x9_3 = var_68
    char* var_60_1 = x8_3
    int32_t temp0_1 = x10_2.d & 1
    uint64_t x12_1
    
    if (temp0_1 == 0)
        x12_1 = x10_2 u>> 1
    else
        x12_1 = x9_3
    
    int32_t x11_2 = temp0_1 == 0 ? 1 : 0
    int64_t var_88
    void* var_78
    uint64_t var_80_1
    
    if (x12_1 == 0)
    label_c9fff0:
        uint64_t x8_15 = zx.q(var_88.b)
        uint64_t x8_16
        
        if ((x8_15.d & 1) == 0)
            x8_16 = x8_15 u>> 1
        else
            x8_16 = var_80_1
        
        if (x8_16 != 0)
            void** x0_32 = __cxa_allocate_exception(0x20)
            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                "Invalid algorithm name: ", arg1)
            *x0_32 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_32[1])
            *x0_32 = _vtable_for_Botan::Invalid_Argument + 0x10
            
            if ((zx.d(var_58) & 1) != 0)
                operator delete(var_48)
            
            *x0_32 = _vtable_for_Botan::Invalid_Algorithm_Name + 0x10
            __cxa_throw(x0_32, _typeinfo_for_Botan::Invalid_Algorithm_Name, 
                Botan::Exception::~Exception)
            noreturn
    else
        char* x23_1 = &var_70 | 1
        int64_t x21_1 = 0
        char* x24_1
        
        if ((x10_2.d & 1) == 0)
            x24_1 = x23_1
        else
            x24_1 = x8_3
        
        while (true)
            uint32_t x1_3 = zx.d(*x24_1)
            
            if (x1_3 == 0x28)
                x21_1 += 1
            
            if (x1_3 == 0x29)
                if (x21_1 == 1)
                    if ((x11_2 & 1) != 0)
                        x9_3 = zx.q(x10_2.d u>> 1) & 0x7f
                        x8_3 = x23_1
                        
                        if (x24_1 == &(&var_70)[x9_3])
                            goto label_ca0088
                    else if (x24_1 == &x8_3[x9_3] - 1)
                    label_ca0088:
                        
                        if (var_98 - var_a0 != 0x18)
                            if (var_98 == var_90)
                                result, v0_2 = std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>(
                                    &var_a0)
                            else
                                result, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                    var_98)
                                var_98 += 0x18
                            
                            break
                            break
                        
                        result, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                            &var_58, &var_88, 1, -ffffffffffffffff)
                        
                        if (var_98 u>= var_90)
                            result, v0_2 = std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
                                &var_a0)
                            
                            if ((zx.d(var_58) & 1) != 0)
                                result, v0_2 = operator delete(var_48)
                        else
                            v0_2 = var_58.o
                            *(var_98 + 0x10) = var_48
                            *var_98 = v0_2
                            var_98 += 0x18
                        
                        break
                        break
                    
                    if (x24_1 != &x8_3[x9_3] - 1)
                        goto label_ca0128
                    
                    x21_1 -= 1
                else
                    if (x21_1 == 0)
                    label_ca0128:
                        void** x0_27 = __cxa_allocate_exception(0x20)
                        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                            "Invalid algorithm name: ", arg1)
                        *x0_27 = _vtable_for_Botan::Exception + 0x10
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                            &x0_27[1])
                        *x0_27 = _vtable_for_Botan::Invalid_Argument + 0x10
                        
                        if ((zx.d(var_58) & 1) != 0)
                            operator delete(var_48)
                        
                        *x0_27 = _vtable_for_Botan::Invalid_Algorithm_Name + 0x10
                        __cxa_throw(x0_27, _typeinfo_for_Botan::Invalid_Algorithm_Name, 
                            Botan::Exception::~Exception)
                        noreturn
                    
                    x21_1 -= 1
                
                result, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                    &var_88)
            else if (x1_3 != 0x2c || x21_1 != 1)
                result, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                    &var_88)
            else
                if (var_98 - var_a0 == 0x18)
                    result, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                        &var_58, &var_88, 1, -ffffffffffffffff)
                    
                    if (var_98 u>= var_90)
                        result, v0_2 = std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
                            &var_a0)
                        
                        if ((zx.d(var_58) & 1) != 0)
                            result, v0_2 = operator delete(var_48)
                    else
                        v0_2 = var_58.o
                        *(var_98 + 0x10) = var_48
                        *var_98 = v0_2
                        var_98 += 0x18
                else if (var_98 == var_90)
                    result, v0_2 = std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>(
                        &var_a0)
                else
                    result, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                        var_98)
                    var_98 += 0x18
                
                if ((zx.d(var_88.b) & 1) != 0)
                    *var_78 = 0
                    var_80_1 = 0
                else
                    var_88.w = 0
                
                x21_1 = 1
            
            x10_2 = zx.q(var_70)
            x9_3 = var_68
            x8_3 = var_60_1
            x24_1 = &x24_1[1]
            int32_t temp1_1 = x10_2.d & 1
            char* x13_1
            
            x13_1 = temp1_1 == 0 ? x23_1 : x8_3
            
            uint64_t x12_4
            
            if (temp1_1 == 0)
                x12_4 = x10_2 u>> 1
            else
                x12_4 = x9_3
            
            x11_2 = temp1_1 == 0 ? 1 : 0
            
            if (x24_1 == &x13_1[x12_4])
                goto label_c9fff0
    uint32_t x9_7 = zx.d(var_88.b)
    *entry_x8 = var_a0
    *(entry_x8 + 8) = var_98.o
    
    if ((x9_7 & 1) != 0)
        result = operator delete(var_78)
    
    if ((zx.d(var_70) & 1) != 0)
        return operator delete(var_60_1)
return result
