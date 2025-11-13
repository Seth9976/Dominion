// 函数: _ZN5Botan13Threaded_Fork12thread_entryEPNS_6FilterE
// 地址: 0xd7e898
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result

while (true)
    int32_t* x23_1 = *(arg1 + 0x68)
    char var_48_1 = 1
    void* var_50_1 = &x23_1[2]
    std::__ndk1::mutex::lock()
    int32_t x8_3 = *x23_1
    *x23_1 = x8_3 - 1
    
    if (x8_3 s<= 0)
        int32_t x8_4 = x23_1[1]
        
        if (x8_4 s<= 0)
            int32_t i
            
            do
                std::__ndk1::condition_variable::wait(&x23_1[0xc])
                i = x23_1[1]
            while (i s< 1)
            
            x23_1[1] = i - 1
        else
            x23_1[1] = x8_4 - 1
    
    result = std::__ndk1::mutex::unlock()
    void* x8_7 = *(arg1 + 0x68)
    int64_t x1 = *(x8_7 + 0xc8)
    
    if (x1 == 0)
        break
    
    int64_t* entry_x1
    (*(*entry_x1 + 8))(entry_x1, x1, *(x8_7 + 0xd0))
    void* x23_2 = *(arg1 + 0x68)
    char var_48_2 = 1
    void* var_50_2 = x23_2 + 0x70
    std::__ndk1::mutex::lock()
    int64_t x8_9 = *(x23_2 + 0x60)
    
    if (x8_9 u< 2)
        int64_t x8_2 = *(x23_2 + 0x68) + 1
        *(x23_2 + 0x60) = 0
        *(x23_2 + 0x68) = x8_2
        std::__ndk1::condition_variable::notify_all()
    else
        int64_t i_1 = *(x23_2 + 0x68)
        *(x23_2 + 0x60) = x8_9 - 1
        
        do
            std::__ndk1::condition_variable::wait(x23_2 + 0x98)
        while (*(x23_2 + 0x68) == i_1)
    
    std::__ndk1::mutex::unlock()

return result
