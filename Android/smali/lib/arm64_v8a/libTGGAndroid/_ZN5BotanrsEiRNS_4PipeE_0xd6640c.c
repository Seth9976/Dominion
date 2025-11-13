// 函数: _ZN5BotanrsEiRNS_4PipeE
// 地址: 0xd6640c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t buf = Botan::allocate_memory(0x400, 1)
memset(buf, 0, 0x400)

while (true)
    ssize_t x0_1 = read(arg1, buf, 0x400)
    
    if ((x0_1 & 0xffffffff80000000) != 0)
        void** x0_5 = __cxa_allocate_exception(0x20)
        int64_t x0_6
        int128_t v0
        x0_6, v0 = operator new(0x30)
        int64_t var_50 = x0_6
        int128_t var_60 = data_71c500
        __builtin_strncpy(x0_6, "Pipe input operator (unixfd) has failed", 0x28)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "I/O error: ", &var_60)
        *x0_5 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_5[1])
        char var_48
        void* var_38
        
        if ((zx.d(var_48) & 1) != 0)
            operator delete(var_38)
        *x0_5 = _vtable_for_Botan::Stream_IO_Error + 0x10
        __cxa_throw(x0_5, _typeinfo_for_Botan::Stream_IO_Error, Botan::Exception::~Exception)
        noreturn
    
    if (x0_1 == 0)
        break
    
    Botan::Pipe::write(arg2, buf)

if (buf != 0)
    Botan::deallocate_memory(buf, 0x400, 1)

return zx.q(arg1)
