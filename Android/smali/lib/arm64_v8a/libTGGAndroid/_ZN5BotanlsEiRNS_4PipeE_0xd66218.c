// 函数: _ZN5BotanlsEiRNS_4PipeE
// 地址: 0xd66218
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x0 = Botan::allocate_memory(0x400, 1)
memset(x0, 0, 0x400)

while (Botan::Pipe::remaining(arg2) != 0)
    size_t nbytes_1 = Botan::Pipe::read(arg2, x0, 0x400)
    size_t nbytes = nbytes_1
    
    if (nbytes_1 != 0)
        int64_t x23_1 = 0
        ssize_t x0_5
        size_t nbytes_2
        
        do
            x0_5 = write(arg1, x0 + x23_1, nbytes)
            
            if ((x0_5 & 0xffffffff80000000) != 0)
                void** x0_8 = __cxa_allocate_exception(0x20)
                int64_t x0_9
                int128_t v0
                x0_9, v0 = operator new(0x30)
                int64_t var_50 = x0_9
                int128_t var_60 = data_71aa70
                __builtin_strncpy(x0_9, "Pipe output operator (unixfd) has failed", 0x29)
                std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                    "I/O error: ", &var_60)
                *x0_8 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_8[1])
                char var_48
                void* var_38
                
                if ((zx.d(var_48) & 1) != 0)
                    operator delete(var_38)
                *x0_8 = _vtable_for_Botan::Stream_IO_Error + 0x10
                __cxa_throw(x0_8, _typeinfo_for_Botan::Stream_IO_Error, 
                    Botan::Exception::~Exception)
                noreturn
            
            nbytes_2 = nbytes
            nbytes -= x0_5
            x23_1 += x0_5
        while (nbytes_2 != x0_5)

if (x0 != 0)
    Botan::deallocate_memory(x0, 0x400, 1)

return zx.q(arg1)
