// 函数: _ZN5Botan15mlock_allocatorD1Ev
// 地址: 0xd97a98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
void* x21 = *entry_x0

if (x21 != 0)
    *entry_x0 = 0
    *(x21 + 0x68)
    std::__ndk1::__tree<std::__ndk1::__value_type<uint64_t, std::__ndk1::deque<Botan::Bucket, std::__ndk1::allocator<Botan::Bucket> > >, std::__ndk1::__map_value_compare<uint64_t, std::__ndk1::__value_type<uint64_t, std::__ndk1::deque<Botan::Bucket, std::__ndk1::allocator<Botan::Bucket> > >, std::__ndk1::less<uint64_t>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<uint64_t, std::__ndk1::deque<Botan::Bucket, std::__ndk1::allocator<Botan::Bucket> > > > >::destroy(
        x21 + 0x60)
    std::__ndk1::__deque_base<uint8_t*, std::__ndk1::allocator<uint8_t*> >::~__deque_base()
    std::__ndk1::mutex::~mutex()
    operator delete(x21)
    Botan::OS::free_locked_pages(&entry_x0[1])

void* result = entry_x0[1]

if (result != 0)
    entry_x0[2] = result
    result = operator delete(result)

void* x20_3 = *entry_x0
*entry_x0 = 0

if (x20_3 == 0)
    return result

*(x20_3 + 0x68)
std::__ndk1::__tree<std::__ndk1::__value_type<uint64_t, std::__ndk1::deque<Botan::Bucket, std::__ndk1::allocator<Botan::Bucket> > >, std::__ndk1::__map_value_compare<uint64_t, std::__ndk1::__value_type<uint64_t, std::__ndk1::deque<Botan::Bucket, std::__ndk1::allocator<Botan::Bucket> > >, std::__ndk1::less<uint64_t>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<uint64_t, std::__ndk1::deque<Botan::Bucket, std::__ndk1::allocator<Botan::Bucket> > > > >::destroy(
    x20_3 + 0x60)
std::__ndk1::__deque_base<uint8_t*, std::__ndk1::allocator<uint8_t*> >::~__deque_base()
std::__ndk1::mutex::~mutex()
return operator delete(x20_3) __tailcall
