// 函数: _ZN5Botan7Barrier4syncEv
// 地址: 0xd7ed8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
void* var_30 = &entry_x0[2]
char var_28 = 1
std::__ndk1::mutex::lock()
int64_t x8 = *entry_x0

if (x8 u< 2)
    int64_t x8_4 = entry_x0[1] + 1
    *entry_x0 = 0
    entry_x0[1] = x8_4
    std::__ndk1::condition_variable::notify_all()
else
    int64_t i = entry_x0[1]
    *entry_x0 = x8 - 1
    
    do
        std::__ndk1::condition_variable::wait(&entry_x0[7])
    while (entry_x0[1] == i)

return std::__ndk1::mutex::unlock()
