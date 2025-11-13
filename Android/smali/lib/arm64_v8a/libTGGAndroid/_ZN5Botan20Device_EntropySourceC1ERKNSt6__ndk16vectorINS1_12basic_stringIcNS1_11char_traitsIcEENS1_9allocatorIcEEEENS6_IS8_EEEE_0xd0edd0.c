// 函数: _ZN5Botan20Device_EntropySourceC1ERKNSt6__ndk16vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS6_IS8_EEEE
// 地址: 0xd0edd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0
*arg1 = _vtable_for_Botan::Device_EntropySource + 0x10
void* __offset(
    std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >, 
    0x8) x20_1 = arg1 + 8
*x20_1 = 0
int64_t* entry_x1
int64_t x21 = *entry_x1
int64_t x26 = entry_x1[1]

if (x21 == x26)
    return 

std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >
     const& x19_1 = arg1

do
    char var_78
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_78)
    char* file_1
    char* file
    
    if ((zx.d(var_78) & 1) == 0)
        file = &var_78 | 1
    else
        file = file_1
    
    arg1 = open(file, 0x900)
    int32_t fd = arg1.d
    
    if ((arg1.d & 0x80000000) != 0)
        arg1 = __errno()
        int32_t x8_4 = *arg1
        
        if (x8_4 != 2 && x8_4 != 0xd)
            goto label_d0f01c
    else
        int128_t var_90
        
        if (fd s>= 0x401)
            close(fd)
            void** x0_6 = __cxa_allocate_exception(0x20)
            int64_t x0_7
            int128_t v0
            x0_7, v0 = operator new(0x50)
            v0 = data_71c530
            int64_t var_80 = x0_7
            __builtin_strncpy(x0_7, 
                "Open of OS RNG succeeded but returned fd is too large for fd_set", 0x41)
            var_90 = v0
            *x0_6 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_6[1])
            *x0_6 = _vtable_for_Botan::Invalid_State + 0x10
            __cxa_throw(x0_6, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
            noreturn
        
        int32_t* x8_2 = *(x19_1 + 0x10)
        
        if (x8_2 == *(x19_1 + 0x18))
            void* x23_1 = *x20_1
            void* x24_1 = x8_2 - x23_1
            int64_t fp_1 = x24_1 s>> 2
            
            if ((fp_1 + 1) u>> 0x3e != 0)
                arg1 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
            label_d0f01c:
                void* x0_12 = __cxa_allocate_exception(0x28)
                int64_t x0_13
                int128_t v0_1
                x0_13, v0_1 = operator new(0x20)
                int64_t var_80_1 = x0_13
                var_90 = data_71d400
                __builtin_strncpy(x0_13, "Opening OS RNG device failed", 0x1d)
                *arg1
                Botan::System_Error::System_Error(x0_12, &var_90)
                __cxa_throw(x0_12, _typeinfo_for_Botan::System_Error, Botan::Exception::~Exception)
                noreturn
            
            int64_t x9_4 = x24_1 s>> 1
            int64_t x8_6
            
            if (x9_4 u< fp_1 + 1)
                x8_6 = fp_1 + 1
            else
                x8_6 = x9_4
            
            int64_t x27_1
            
            x27_1 = fp_1 u< 0x1fffffffffffffff ? x8_6 : 0x3fffffffffffffff
            
            std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >
                 const& x25_1
            void* fp_3
            
            if (x27_1 == 0)
                x25_1 = nullptr
                *(fp_1 << 2) = fd
                fp_3 = (fp_1 << 2) + 4
                
                if (x24_1 s>= 1)
                    memcpy(x25_1, x23_1, x24_1)
            else
                if (x27_1 u>> 0x3e != 0)
                    sub_ef2a0c()
                    noreturn
                
                x25_1 = operator new(x27_1 << 2)
                void* fp_2 = x25_1 + (fp_1 << 2)
                *fp_2 = fd
                fp_3 = fp_2 + 4
                
                if (x24_1 s>= 1)
                    memcpy(x25_1, x23_1, x24_1)
            
            *(x19_1 + 8) = x25_1
            *(x19_1 + 0x10) = fp_3
            *(x19_1 + 0x18) = x25_1 + (x27_1 << 2)
            
            if (x23_1 != 0)
                operator delete(x23_1)
        else
            *x8_2 = fd
            *(x19_1 + 0x10) = &x8_2[1]
        
        int32_t fd_2 = *(x19_1 + 0x20)
        int32_t fd_1
        
        fd_1 = fd_2 s< fd ? fd : fd_2
        
        *(x19_1 + 0x20) = fd_1
    
    if ((zx.d(var_78) & 1) != 0)
        operator delete(file_1)
    
    x21 += 0x18
while (x26 != x21)
