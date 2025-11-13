// 函数: _ZN5Botan9Semaphore7acquireEv
// 地址: 0xd7ee28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x0
void* var_30 = &entry_x0[2]
char var_28 = 1
std::__ndk1::mutex::lock()
int32_t x8 = *entry_x0
*entry_x0 = x8 - 1

if (x8 s<= 0)
    int32_t x8_1 = entry_x0[1]
    
    if (x8_1 s<= 0)
        int32_t i
        
        do
            std::__ndk1::condition_variable::wait(&entry_x0[0xc])
            i = entry_x0[1]
        while (i s< 1)
        
        entry_x0[1] = i - 1
    else
        entry_x0[1] = x8_1 - 1

return std::__ndk1::mutex::unlock()
