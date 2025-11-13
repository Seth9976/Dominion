// 函数: _ZN5Botan6RWLock11lock_sharedEv
// 地址: 0xe3c2d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
void* var_30 = entry_x0
char var_28 = 1
std::__ndk1::mutex::lock()
int32_t x8 = *(entry_x0 + 0x88)

if (x8 u<= 0x7ffffffe)
    *(entry_x0 + 0x88) = x8 + 1
else
    int32_t i
    
    do
        std::__ndk1::condition_variable::wait(entry_x0 + 0x28)
        i = *(entry_x0 + 0x88)
    while (i u> 0x7ffffffe)
    
    *(entry_x0 + 0x88) = i + 1

return std::__ndk1::mutex::unlock()
