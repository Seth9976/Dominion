// 函数: _ZN5Botan6RWLock4lockEv
// 地址: 0xe3c22c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
void* var_30 = entry_x0
char var_28 = 1
std::__ndk1::mutex::lock()
int32_t x8 = *(entry_x0 + 0x88)

while ((x8 & 0x80000000) != 0)
    std::__ndk1::condition_variable::wait(entry_x0 + 0x28)
    x8 = *(entry_x0 + 0x88)

*(entry_x0 + 0x88) = x8 | 0x80000000

if (x8 != 0)
    do
        std::__ndk1::condition_variable::wait(entry_x0 + 0x58)
    while ((*(entry_x0 + 0x88) & 0x7fffffff) != 0)

return std::__ndk1::mutex::unlock()
