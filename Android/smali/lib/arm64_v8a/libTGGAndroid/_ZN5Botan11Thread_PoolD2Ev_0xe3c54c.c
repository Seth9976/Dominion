// 函数: _ZN5Botan11Thread_PoolD2Ev
// 地址: 0xe3c54c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::Thread_Pool::shutdown()
std::__ndk1::__deque_base<std::__ndk1::function<void ()>, std::__ndk1::allocator<std::__ndk1::function<void ()> > >::clear()
int64_t* entry_x0
int64_t* x21 = entry_x0[0xf]
int64_t x22 = entry_x0[0x10]

if (x21 != x22)
    do
        void* x0_1 = *x21
        x21 = &x21[1]
        operator delete(x0_1)
    while (x22 != x21)
    
    int64_t x9_1 = entry_x0[0xf]
    int64_t x8_1 = entry_x0[0x10]
    
    if (x8_1 != x9_1)
        entry_x0[0x10] = x8_1 + ((-1 ^ (x8_1 - x9_1 - 8) u>> 3) << 3)

void* x0_2 = entry_x0[0xe]

if (x0_2 != 0)
    operator delete(x0_2)

std::__ndk1::condition_variable::~condition_variable()
int64_t result = std::__ndk1::mutex::~mutex()
void* x21_1 = *entry_x0

if (x21_1 == 0)
    return result

int64_t x20_1 = entry_x0[1]
void* x0_6

if (x20_1 == x21_1)
    x0_6 = x21_1
else
    do
        x20_1 -= 8
        std::__ndk1::thread::~thread()
    while (x21_1 != x20_1)
    
    x0_6 = *entry_x0

entry_x0[1] = x21_1
return operator delete(x0_6) __tailcall
