// 函数: _ZN5Botan15mlock_allocatorC1Ev
// 地址: 0xd97504
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
__builtin_memset(entry_x0, 0, 0x20)
char var_48
__builtin_strncpy(&var_48, "*BOTAN_MLOCK_POOL_SIZE", 0x17)
int64_t x0_1 = Botan::OS::read_env_variable_sz(&var_48, 0x200)
int64_t x21

x21 = x0_1 u< 0x200 ? x0_1 : 0x200

int128_t var_47
int64_t x22

if (x21 == 0)
    x22 = 0
else
    getrlimit(__RLIMIT_MEMLOCK)
    int64_t x8_1 = var_48.q
    int64_t x9_1 = var_47:7.q
    
    if (x8_1 u< x9_1)
        var_48.q = x9_1
        setrlimit(__RLIMIT_MEMLOCK)
        getrlimit(__RLIMIT_MEMLOCK)
        x8_1 = var_48.q
    
    int64_t x9_2 = x21 << 0xa
    
    x22 = x9_2 u< x8_1 ? x9_2 : x8_1

uint64_t result = sysconf(0x27)
uint64_t result_1

result_1 = result s> 1 ? result : 0x1000

if (x22 != 0)
    result = x22 u/ result_1
    
    if (x22 u% result_1 == 0)
        Botan::OS::allocate_locked_pages(result)
        result = entry_x0[1]
        
        if (result != 0)
            entry_x0[2] = result
            int128_t v0_1
            result, v0_1 = operator delete(result)
            __builtin_memset(&entry_x0[1], 0, 0x18)
        
        int64_t x8_3 = var_48.q
        entry_x0[1] = x8_3
        *(entry_x0 + 0x10) = var_47
        
        if (var_47.q != x8_3)
            std::__ndk1::vector<void*, std::__ndk1::allocator<void*> >* x0_2 = operator new(0x88)
            result = Botan::Memory_Pool::Memory_Pool(x0_2, &entry_x0[1])
            void* x20_1 = *entry_x0
            *entry_x0 = x0_2
            
            if (x20_1 != 0)
                *(x20_1 + 0x68)
                std::__ndk1::__tree<std::__ndk1::__value_type<uint64_t, std::__ndk1::deque<Botan::Bucket, std::__ndk1::allocator<Botan::Bucket> > >, std::__ndk1::__map_value_compare<uint64_t, std::__ndk1::__value_type<uint64_t, std::__ndk1::deque<Botan::Bucket, std::__ndk1::allocator<Botan::Bucket> > >, std::__ndk1::less<uint64_t>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<uint64_t, std::__ndk1::deque<Botan::Bucket, std::__ndk1::allocator<Botan::Bucket> > > > >::destroy(
                    x20_1 + 0x60)
                std::__ndk1::__deque_base<uint8_t*, std::__ndk1::allocator<uint8_t*> >::~__deque_base()
                std::__ndk1::mutex::~mutex()
                return operator delete(x20_1)

return result
