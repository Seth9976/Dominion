// 函数: _ZN5Botan15allocate_memoryEmm
// 地址: 0xe8e740
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = 0

if (arg1 != 0 && arg2 != 0)
    if ((zx.d(data_23ec9d0) & 1) == 0 && __cxa_guard_acquire(&data_23ec9d0) != 0)
        Botan::mlock_allocator::mlock_allocator()
        __cxa_atexit(Botan::mlock_allocator::~mlock_allocator, &data_23ecc78, &data_1122730)
        __cxa_guard_release(&data_23ec9d0)
    
    uint64_t x0 = data_23ecc78
    
    if (x0 != 0 && 0 == (mulu.dp.q(arg2, arg1) u>> 0x40).q)
        result = Botan::Memory_Pool::allocate(x0)
    
    if (x0 == 0 || 0 != (mulu.dp.q(arg2, arg1) u>> 0x40).q || result == 0)
        result = calloc(arg1, arg2)
        
        if (result == 0)
            void* x0_5 = __cxa_allocate_exception(8)
            std::bad_alloc::bad_alloc()
            __cxa_throw(x0_5, _typeinfo_for_std::bad_alloc, std::bad_alloc::~bad_alloc)
            noreturn

return result
