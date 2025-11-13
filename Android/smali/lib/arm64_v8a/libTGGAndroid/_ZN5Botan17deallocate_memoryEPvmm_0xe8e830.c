// 函数: _ZN5Botan17deallocate_memoryEPvmm
// 地址: 0xe8e830
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 0)
    return 

void* x19_1 = arg1
memset(arg1, 0, arg3 * arg2)

if ((zx.d(data_23ec9d0) & 1) == 0 && __cxa_guard_acquire(&data_23ec9d0) != 0)
    Botan::mlock_allocator::mlock_allocator()
    __cxa_atexit(Botan::mlock_allocator::~mlock_allocator, &data_23ecc78, &data_1122730)
    __cxa_guard_release(&data_23ec9d0)

void* x0 = data_23ecc78

if (x0 != 0 && 0 == (mulu.dp.q(arg3, arg2) u>> 0x40).q)
    arg1 = Botan::Memory_Pool::deallocate(x0, x19_1)

if (x0 == 0 || 0 != (mulu.dp.q(arg3, arg2) u>> 0x40).q || (arg1.d & 1) == 0)
    return free(x19_1) __tailcall
