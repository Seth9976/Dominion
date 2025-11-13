// 函数: _ZN5Botan13split_on_predERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS0_8functionIFbcEEE
// 地址: 0xe8efc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >** 
    entry_x8
__builtin_memset(entry_x8, 0, 0x18)
uint64_t x8 = zx.q(*arg1)
int64_t var_58
uint64_t x9_1
void* i_1
void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x1) i

if ((x8.d & 1) != 0)
    x9_1 = *(arg1 + 8)
    
    if (x9_1 != 0)
        __builtin_memset(&var_58, 0, 0x18)
        i_1 = *(arg1 + 0x10)
        i = i_1
    label_e8f028:
        int32_t temp0_1 = x8.d & 1
        void* __offset(
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
            0x1) i_2
        
        if (temp0_1 != 0)
            i_2 = i_1
        else
            i_2 = arg1 + 1
        
        uint64_t x9_2
        
        if (temp0_1 == 0)
            x9_2 = x8 u>> 1
        else
            x9_2 = x9_1
        
        if (i == i_2 + x9_2)
        label_e8f160:
            void** x0_6 = __cxa_allocate_exception(0x20)
            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                "Unable to split string: ", arg1)
            *x0_6 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_6[1])
            *x0_6 = _vtable_for_Botan::Invalid_Argument + 0x10
            __cxa_throw(x0_6, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
            noreturn
        
        uint64_t var_50_1
        void* var_48
        void* __offset(
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
            0x1) x8_3
        uint64_t x9_4
        
        do
            char var_70 = *i
            int64_t* x0_1 = *(arg2 + 0x20)
            
            if (x0_1 == 0)
                sub_a58ab4()
                noreturn
            
            if (((*(*x0_1 + 0x30))(x0_1, &var_70) & 1) == 0)
                *i
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                    &var_58)
            else
                uint64_t x8_8 = zx.q(var_58.b)
                uint64_t x8_9
                
                if ((x8_8.d & 1) == 0)
                    x8_9 = x8_8 u>> 1
                else
                    x8_9 = var_50_1
                
                if (x8_9 != 0)
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                        * x22_1 = entry_x8[1]
                    
                    if (x22_1 == entry_x8[2])
                        std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>(
                            entry_x8)
                    else
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                            x22_1)
                        entry_x8[1] = x22_1 + 0x18
                
                if ((zx.d(var_58.b) & 1) != 0)
                    *var_48 = 0
                    var_50_1 = 0
                else
                    var_58.w = 0
            
            uint64_t x8_2 = zx.q(*arg1)
            i += 1
            int32_t temp1_1 = x8_2.d & 1
            
            if (temp1_1 == 0)
                x8_3 = arg1 + 1
            else
                x8_3 = *(arg1 + 0x10)
            
            if (temp1_1 == 0)
                x9_4 = x8_2 u>> 1
            else
                x9_4 = *(arg1 + 8)
        while (i != x8_3 + x9_4)
        uint32_t x9_6 = zx.d(var_58.b)
        uint64_t x8_15
        
        if ((x9_6 & 1) == 0)
            x8_15 = zx.q(x9_6 u>> 1)
        else
            x8_15 = var_50_1
        
        if (x8_15 == 0)
            goto label_e8f160
        
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * x21_1 = entry_x8[1]
        
        if (x21_1 == entry_x8[2])
            std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>(
                entry_x8)
        else
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                x21_1)
            entry_x8[1] = x21_1 + 0x18
        
        if ((zx.d(var_58.b) & 1) != 0)
            operator delete(var_48)
else if (x8.d u>= 2)
    __builtin_memset(&var_58, 0, 0x18)
    x9_1 = *(arg1 + 8)
    i_1 = *(arg1 + 0x10)
    i = arg1 + 1
    goto label_e8f028
