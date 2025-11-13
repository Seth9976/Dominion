// 函数: sub_e3c748
// 地址: 0xe3c748
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::__deque_base<std::__ndk1::function<void ()>, std::__ndk1::allocator<std::__ndk1::function<void ()> > >::clear()
int64_t* x24 = arg2[0xf]
int64_t x25 = arg2[0x10]

if (x24 != x25)
    do
        void* x0_1 = *x24
        x24 = &x24[1]
        operator delete(x0_1)
    while (x25 != x24)
    
    int64_t x9_1 = arg2[0xf]
    int64_t x8_1 = arg2[0x10]
    
    if (x8_1 != x9_1)
        arg2[0x10] = x8_1 + ((-1 ^ (x8_1 - x9_1 - 8) u>> 3) << 3)

void* x0_2 = *arg3

if (x0_2 != 0)
    operator delete(x0_2)

std::__ndk1::condition_variable::~condition_variable()
std::__ndk1::mutex::~mutex()
void* x21 = *arg2

if (x21 != 0)
    int64_t x20_1 = arg2[1]
    void* x0_4 = x21
    
    if (x20_1 != x21)
        do
            x20_1 -= 8
            std::__ndk1::thread::~thread()
        while (x21 != x20_1)
        
        x0_4 = *arg2
    
    arg2[1] = x21
    operator delete(x0_4)

sub_1101e04(arg1)
noreturn
