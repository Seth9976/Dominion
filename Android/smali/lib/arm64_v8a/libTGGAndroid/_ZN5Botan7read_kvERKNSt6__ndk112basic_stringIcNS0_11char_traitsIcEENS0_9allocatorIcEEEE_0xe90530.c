// 函数: _ZN5Botan7read_kvERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// 地址: 0xe90530
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x24 + 0x28)
int64_t** entry_x8
entry_x8[1] = 0
entry_x8[2] = 0
*entry_x8 = &entry_x8[1]
uint64_t x8_1 = zx.q(*arg1)
uint64_t x8_2

if ((x8_1.d & 1) == 0)
    x8_2 = x8_1 u>> 1
else
    x8_2 = *(arg1 + 8)

std::__ndk1::piecewise_construct_t** result

if (x8_2 == 0)
    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        arg1, 0, -ffffffffffffffff, &data_793a18)

if (x8_2 != 0 || result.d != 0)
    std::__ndk1::piecewise_construct_t* var_a0 = &_vtable_for_std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>{for `std::__ndk1::__function::__base<bool (char)>'}
    char var_98_1 = 0x2c
    std::__ndk1::piecewise_construct_t** result_1 = &var_a0
    Botan::split_on_pred(arg1, &var_a0)
    result = result_1
    
    if (&var_a0 == result)
        result = (*(*result + 0x20))()
    else if (result != 0)
        result = (*(*result + 0x28))()
    
    uint64_t x8_6 = zx.q(*arg1)
    uint64_t i_2 = *(arg1 + 8)
    void* x9_1 = *(arg1 + 0x10)
    void* var_c0
    void* x20_1 = var_c0
    char* var_b8
    char* x23_1 = var_b8
    var_a0 = nullptr
    var_98_1.q = 0
    int32_t temp0_1 = x8_6.d & 1
    uint64_t i_1
    
    if (temp0_1 == 0)
        i_1 = x8_6 u>> 1
    else
        i_1 = i_2
    
    void* __offset(
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
        0x1) x27_1
    
    if (temp0_1 != 0)
        x27_1 = x9_1
    else
        x27_1 = arg1 + 1
    
    void* var_90_1 = nullptr
    __builtin_memset(&var_c0, 0, 0x18)
    
    if (i_1 != 0)
        int32_t x9_2 = 0
        int32_t x8_7 = 1
        char var_e0
        int128_t var_df
        uint64_t i
        
        do
            uint32_t x1_2 = zx.d(*x27_1)
            
            if ((x9_2 & 1) == 0 && x1_2 == 0x5c)
                x9_2 = 1
            else if (((x9_2 | (x1_2 != 0x2c ? 1 : 0)) & 1) == 0)
                uint64_t x8_8 = zx.q(var_a0.b)
                uint64_t x8_9
                
                if ((x8_8.d & 1) == 0)
                    x8_9 = x8_8 u>> 1
                else
                    x8_9 = var_98_1.q
                
                if (x8_9 == 0)
                    void** x0_24 = __cxa_allocate_exception(0x20)
                    char var_e0_1
                    __builtin_strncpy(&var_e0_1, "*Bad KV spec empty key", 0x17)
                    *x0_24 = _vtable_for_Botan::Exception + 0x10
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                        &x0_24[1])
                    *x0_24 = _vtable_for_Botan::Invalid_Argument + 0x10
                    __cxa_throw(x0_24, _typeinfo_for_Botan::Invalid_Argument, 
                        Botan::Exception::~Exception)
                    noreturn
                
                if (&entry_x8[1] != std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::find<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
                        entry_x8))
                    void** x0_20 = __cxa_allocate_exception(0x20)
                    int64_t x0_21
                    int128_t v0
                    x0_21, v0 = operator new(0x20)
                    var_df:0xf.q = x0_21
                    var_e0.o = data_71bd10
                    __builtin_strncpy(x0_21, "Bad KV spec duplicated key", 0x1b)
                    *x0_20 = _vtable_for_Botan::Exception + 0x10
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                        &x0_20[1])
                    *x0_20 = _vtable_for_Botan::Invalid_Argument + 0x10
                    __cxa_throw(x0_20, _typeinfo_for_Botan::Invalid_Argument, 
                        Botan::Exception::~Exception)
                    noreturn
                
                var_e0.q = &var_a0
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::__emplace_unique_key_args<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>, std::__ndk1::tuple<> >(
                    entry_x8, &var_a0) + 0x38)
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
                    &var_a0)
                result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
                    &var_c0)
                x9_2 = 0
                x8_7 = 1
            else if (((x9_2 | (x1_2 != 0x3d ? 1 : 0)) & 1) == 0)
                if ((x8_7 & 1) == 0)
                    void** x0_27 = __cxa_allocate_exception(0x20)
                    int64_t x0_28
                    int128_t v0_1
                    x0_28, v0_1 = operator new(0x30)
                    v0_1 = data_71d3f0
                    var_df:0xf.q = x0_28
                    __builtin_strncpy(x0_28, "Bad KV spec unexpected equals sign", 0x23)
                    var_e0.o = v0_1
                    *x0_27 = _vtable_for_Botan::Exception + 0x10
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                        &x0_27[1])
                    *x0_27 = _vtable_for_Botan::Invalid_Argument + 0x10
                    __cxa_throw(x0_27, _typeinfo_for_Botan::Invalid_Argument, 
                        Botan::Exception::~Exception)
                    noreturn
                
                x9_2 = 0
                x8_7 = 0
            else if ((x8_7 & 1) == 0)
                result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                    &var_c0)
                x9_2 = 0
                x8_7 = 0
            else
                result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                    &var_a0)
                x9_2 = 0
                x8_7 = 1
            
            i = i_1
            i_1 -= 1
            x27_1 += 1
        while (i != 1)
        uint64_t x9_5 = zx.q(var_a0.b)
        uint64_t x9_6
        
        if ((x9_5.d & 1) == 0)
            x9_6 = x9_5 u>> 1
        else
            x9_6 = var_98_1.q
        
        if (x9_6 != 0)
            if ((x8_7 & 1) != 0)
                void** x0_32 = __cxa_allocate_exception(0x20)
                int64_t x0_33
                int128_t v0_2
                x0_33, v0_2 = operator new(0x20)
                var_df:0xf.q = x0_33
                var_e0.o = data_71cd20
                __builtin_strncpy(x0_33, "Bad KV spec incomplete string", 0x1e)
                *x0_32 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_32[1])
                *x0_32 = _vtable_for_Botan::Invalid_Argument + 0x10
                __cxa_throw(x0_32, _typeinfo_for_Botan::Invalid_Argument, 
                    Botan::Exception::~Exception)
                noreturn
            
            if (&entry_x8[1] != std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::find<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
                    entry_x8))
                void** x0_36 = __cxa_allocate_exception(0x20)
                int64_t x0_37
                int128_t v0_3
                x0_37, v0_3 = operator new(0x20)
                var_df:0xf.q = x0_37
                var_e0.o = data_71bd10
                __builtin_strncpy(x0_37, "Bad KV spec duplicated key", 0x1b)
                *x0_36 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_36[1])
                *x0_36 = _vtable_for_Botan::Invalid_Argument + 0x10
                __cxa_throw(x0_36, _typeinfo_for_Botan::Invalid_Argument, 
                    Botan::Exception::~Exception)
                noreturn
            
            var_e0.q = &var_a0
            result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::__emplace_unique_key_args<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>, std::__ndk1::tuple<> >(
                entry_x8, &var_a0) + 0x38)
    
    if ((zx.d(var_c0.b) & 1) == 0)
        if ((zx.d(var_a0.b) & 1) != 0)
            goto label_e907bc
        
        goto label_e907a0
    
    void* var_b0
    result = operator delete(var_b0)
    
    if ((zx.d(var_a0.b) & 1) == 0)
    label_e907a0:
        
        if (x20_1 != 0)
        label_e907c8:
            
            if (x23_1 != x20_1)
                char* x19_1 = x23_1
                
                do
                    x19_1 = &x19_1[-0x18]
                    
                    if ((zx.d(*x19_1) & 1) != 0)
                        operator delete(*(x23_1 - 8))
                    
                    x23_1 = x19_1
                while (x20_1 != x19_1)
            
            result = operator delete(x20_1)
    else
    label_e907bc:
        result = operator delete(var_90_1)
        
        if (x20_1 != 0)
            goto label_e907c8

if (*(x24 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
