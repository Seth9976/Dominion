// 函数: sub_d97670
// 地址: 0xd97670
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

operator delete(arg4)
void* x0_1 = *arg3
void* x20

if (x0_1 != 0)
    arg2[2] = x0_1
    operator delete(x0_1)
    x20 = *arg2
    *arg2 = 0
    
    if (x20 != 0)
    label_d976bc:
        *(x20 + 0x68)
        std::__ndk1::__tree<std::__ndk1::__value_type<uint64_t, std::__ndk1::deque<Botan::Bucket, std::__ndk1::allocator<Botan::Bucket> > >, std::__ndk1::__map_value_compare<uint64_t, std::__ndk1::__value_type<uint64_t, std::__ndk1::deque<Botan::Bucket, std::__ndk1::allocator<Botan::Bucket> > >, std::__ndk1::less<uint64_t>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<uint64_t, std::__ndk1::deque<Botan::Bucket, std::__ndk1::allocator<Botan::Bucket> > > > >::destroy(
            x20 + 0x60)
        std::__ndk1::__deque_base<uint8_t*, std::__ndk1::allocator<uint8_t*> >::~__deque_base()
        std::__ndk1::mutex::~mutex()
        operator delete(x20)
        sub_1101e04(arg1)
        noreturn
else
    x20 = *arg2
    *arg2 = 0
    
    if (x20 != 0)
        goto label_d976bc
sub_1101e04(arg1)
noreturn
