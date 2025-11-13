// 函数: _ZN5Botan9Semaphore7releaseEm
// 地址: 0xd7e680
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_i

if (entry_i == 0)
    return 

int64_t i_1 = entry_i
int64_t i

do
    std::__ndk1::mutex::lock()
    int32_t x8_1 = *arg1
    *arg1 = x8_1 + 1
    
    if ((x8_1 & 0x80000000) != 0)
        *(arg1 + 4) += 1
        std::__ndk1::condition_variable::notify_one()
    
    std::__ndk1::mutex::unlock()
    i = i_1
    i_1 -= 1
while (i != 1)
