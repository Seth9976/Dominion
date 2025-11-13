// 函数: _ZN5Botan11Thread_PoolC1Em
// 地址: 0xe3c648
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_i
int64_t i_2 = entry_i
*(arg1 + 0x40) = zx.o(0)
*(arg1 + 0x70) = zx.o(0)
__builtin_memset(arg1 + 0x80, 0, 0x20)
__builtin_memset(arg1 + 0x50, 0, 0x20)
__builtin_memset(arg1, 0, 0x40)

if (entry_i == 0)
    int64_t i_3 = sysconf(0x61)
    
    if (i_3 s<= 0)
        i_3 = sysconf(0x60)
        
        if (i_3 s<= 0)
            i_3 = zx.q(std::__ndk1::thread::hardware_concurrency())
    
    i_2 = i_3 u< 0x10 ? i_3 : 0x10

*(arg1 + 0xa0) = 0
int64_t i_1

i_1 = i_2 u> 2 ? i_2 : 2

int64_t result
int64_t i

do
    int64_t (* const var_58)() = Botan::Thread_Pool::worker_thread
    int64_t var_50_1 = 0
    uint64_t var_60 = arg1
    int64_t var_48
    sub_e3cb20(&var_48, &var_58, &var_60)
    int64_t* x8_1 = *(arg1 + 8)
    
    if (x8_1 u< *(arg1 + 0x10))
        *x8_1 = var_48
        var_48 = 0
        *(arg1 + 8) = &x8_1[1]
    else
        std::__ndk1::vector<std::__ndk1::thread, std::__ndk1::allocator<std::__ndk1::thread> >::__push_back_slow_path<std::__ndk1::thread>(
            arg1)
    
    result = std::__ndk1::thread::~thread()
    i = i_1
    i_1 -= 1
while (i != 1)
return result
