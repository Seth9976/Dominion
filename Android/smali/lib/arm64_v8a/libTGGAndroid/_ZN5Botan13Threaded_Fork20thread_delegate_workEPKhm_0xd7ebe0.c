// 函数: _ZN5Botan13Threaded_Fork20thread_delegate_workEPKhm
// 地址: 0xd7ebe0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(*(arg1 + 0x68) + 0xc8) = arg2
int64_t entry_x2
*(*(arg1 + 0x68) + 0xd0) = entry_x2
void* x21 = *(arg1 + 0x68)
int64_t x22 = *(arg1 + 0x28) - *(arg1 + 0x20)
std::__ndk1::mutex::lock()
*(x21 + 0x60) = *(x21 + 0x60) + (x22 s>> 3) + 1
std::__ndk1::mutex::unlock()
int64_t x10 = *(arg1 + 0x20)
int64_t x9_1 = *(arg1 + 0x28)
int32_t* x22_1 = *(arg1 + 0x68)
int64_t x8_6 = x9_1 - x10

if (x9_1 != x10)
    int64_t x9_2 = x10 - x9_1
    int64_t x10_1
    
    x10_1 = x8_6 s>= 0 ? x8_6 : -1
    
    int64_t x10_2
    
    x10_2 = x10_1 s< 1 ? x10_1 : 1
    
    int64_t x8_7
    
    x8_7 = x9_2 s> x8_6 ? x9_2 : x8_6
    
    int64_t i_2 = x10_2 * (x8_7 u>> 3)
    int64_t i
    
    do
        std::__ndk1::mutex::lock()
        int32_t x8_9 = *x22_1
        *x22_1 = x8_9 + 1
        
        if ((x8_9 & 0x80000000) != 0)
            x22_1[1] += 1
            std::__ndk1::condition_variable::notify_one()
        
        std::__ndk1::mutex::unlock()
        i = i_2
        i_2 -= 1
    while (i != 1)
    x22_1 = *(arg1 + 0x68)

void* var_40 = &x22_1[0x1c]
char var_38 = 1
std::__ndk1::mutex::lock()
int64_t x8_12 = *(x22_1 + 0x60)

if (x8_12 u< 2)
    int64_t x8_16 = *(x22_1 + 0x68) + 1
    *(x22_1 + 0x60) = 0
    *(x22_1 + 0x68) = x8_16
    std::__ndk1::condition_variable::notify_all()
else
    int64_t i_1 = *(x22_1 + 0x68)
    *(x22_1 + 0x60) = x8_12 - 1
    
    do
        std::__ndk1::condition_variable::wait(&x22_1[0x26])
    while (*(x22_1 + 0x68) == i_1)

int64_t result = std::__ndk1::mutex::unlock()
*(*(arg1 + 0x68) + 0xc8) = 0
*(*(arg1 + 0x68) + 0xd0) = 0
return result
