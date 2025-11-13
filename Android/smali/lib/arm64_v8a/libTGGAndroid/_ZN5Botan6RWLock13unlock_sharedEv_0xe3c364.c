// 函数: _ZN5Botan6RWLock13unlock_sharedEv
// 地址: 0xe3c364
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::mutex::lock()
void* entry_x0
int32_t x9 = *(entry_x0 + 0x88)
int32_t x9_2 = ((x9 & 0x7fffffff) - 1) | (x9 & 0x80000000)
*(entry_x0 + 0x88) = x9_2

if ((x9_2 & 0x80000000) != 0)
    if ((x9 & 0x7fffffff) != 1)
        return std::__ndk1::mutex::unlock() __tailcall
else if ((x9 & 0x7fffffff) != 0x7fffffff)
    return std::__ndk1::mutex::unlock() __tailcall

std::__ndk1::condition_variable::notify_one()
return std::__ndk1::mutex::unlock() __tailcall
