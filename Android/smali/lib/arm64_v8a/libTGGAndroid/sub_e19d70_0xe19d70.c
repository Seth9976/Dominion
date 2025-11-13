// 函数: sub_e19d70
// 地址: 0xe19d70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

__cxa_begin_catch(arg1)
__cxa_end_catch()
int32_t x0_7 = (*(*arg4 + 0x48))()

if ((x0_7 & 1) != 0)
    uint8_t* x0_9
    uint64_t x1_2
    x0_9, x1_2 = (*(*arg4 + 0x28))(arg4, 0)
    void* arg_8
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(&arg_8)
    Botan::TLS::Session::decrypt(x0_9, x1_2, &arg_8)
    Botan::TLS::Session::operator=(arg2)
    Botan::TLS::Session::~Session()
    void* x0_2 = arg_8
    
    if (x0_2 != 0)
        void* arg_10 = x0_2
        Botan::deallocate_memory(x0_2, arg3 - x0_2, 1)

if (arg5 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&arg5[1])
        i = __stlxr(x9_1 - 1, &arg5[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*arg5 + 0x10))(arg5)
        std::__ndk1::__shared_weak_count::__release_weak()

return zx.q(x0_7) & 1
