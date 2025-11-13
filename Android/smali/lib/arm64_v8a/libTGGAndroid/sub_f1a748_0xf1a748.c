// 函数: sub_f1a748
// 地址: 0xf1a748
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 == 0)
    return 

size_t nbytes = arg3
int64_t buf = arg2
ssize_t x21_1 = arg1

while (true)
    arg1 = read(*(x21_1 + 8), buf, nbytes)
    char var_40
    
    if ((arg1 & 0xffffffff80000000) != 0)
        arg1 = __errno()
        
        if (*arg1 != 4)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                * x0_5 = __cxa_allocate_exception(0x28)
            __builtin_strncpy(&var_40, ",System_RNG read failed", 0x18)
            *arg1
            Botan::System_Error::System_Error(x0_5, &var_40)
            __cxa_throw(x0_5, _typeinfo_for_Botan::System_Error, Botan::Exception::~Exception)
            noreturn
        
        if (nbytes == 0)
            break
    else
        if (arg1 == 0)
            void** x0_1 = __cxa_allocate_exception(0x28)
            int64_t x0_2
            int128_t v0
            x0_2, v0 = operator new(0x20)
            int128_t var_3f
            var_3f:0xf.q = x0_2
            var_40.o = data_71af80
            __builtin_strncpy(x0_2, "System_RNG EOF on device", 0x19)
            *x0_1 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_1[1])
            x0_1[4].d = 0
            *x0_1 = _vtable_for_Botan::System_Error + 0x10
            __cxa_throw(x0_1, _typeinfo_for_Botan::System_Error, Botan::Exception::~Exception)
            noreturn
        
        buf += arg1
        nbytes -= arg1
        
        if (nbytes == 0)
            break
