// 函数: _ZN5Botan11Thread_Pool8shutdownEv
// 地址: 0xe3ccc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::mutex::lock()
int64_t* entry_x0

if (zx.d(entry_x0[0x14].b) != 0)
    return std::__ndk1::mutex::unlock() __tailcall

entry_x0[0x14].b = 1
std::__ndk1::condition_variable::notify_all()
int64_t result = std::__ndk1::mutex::unlock()
int64_t x20_1 = *entry_x0
int64_t x21 = entry_x0[1]

if (x20_1 != x21)
    do
        result = std::__ndk1::thread::join()
        x20_1 += 8
    while (x21 != x20_1)
    
    x20_1 = *entry_x0
    int64_t x21_1 = entry_x0[1]
    
    if (x21_1 != x20_1)
        do
            x21_1 -= 8
            result = std::__ndk1::thread::~thread()
        while (x20_1 != x21_1)

entry_x0[1] = x20_1
return result
