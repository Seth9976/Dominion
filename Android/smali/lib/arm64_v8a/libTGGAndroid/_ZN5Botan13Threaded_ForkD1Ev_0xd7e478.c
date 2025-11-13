// 函数: _ZN5Botan13Threaded_ForkD1Ev
// 地址: 0xd7e478
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
*entry_x0 = _vtable_for_Botan::Threaded_Fork + 0x10
*(entry_x0[0xd] + 0xc8) = 0
*(entry_x0[0xd] + 0xd0) = 0
int32_t* x24 = entry_x0[0xd]
int64_t* x25 = entry_x0[0xa]
int64_t x26 = entry_x0[0xb]
void* x8_3 = x26 - x25

if (x26 != x25)
    void* x10_1
    
    x10_1 = x8_3 s>= 0 ? x8_3 : -ffffffffffffffff
    
    void* x9_1 = x25 - x26
    void* x10_2
    
    x10_2 = x10_1 s< 1 ? x10_1 : 1
    
    void* x8_4
    
    x8_4 = x9_1 s> x8_3 ? x9_1 : x8_3
    
    int64_t i_2 = x10_2 * (x8_4 u>> 4)
    int32_t i
    
    do
        std::__ndk1::mutex::lock()
        int32_t x8_6 = *x24
        *x24 = x8_6 + 1
        
        if ((x8_6 & 0x80000000) != 0)
            x24[1] += 1
            std::__ndk1::condition_variable::notify_one()
        
        std::__ndk1::mutex::unlock()
        i = i_2
        i_2 -= 1
    while (i != 1)
    x25 = entry_x0[0xa]
    x26 = entry_x0[0xb]

if (x25 != x26)
    do
        *x25
        std::__ndk1::thread::join()
        x25 = &x25[2]
    while (x26 != x25)

void* x22_2 = entry_x0[0xd]
entry_x0[0xd] = 0

if (x22_2 != 0)
    std::__ndk1::condition_variable::~condition_variable()
    std::__ndk1::mutex::~mutex()
    std::__ndk1::condition_variable::~condition_variable()
    std::__ndk1::mutex::~mutex()
    operator delete(x22_2)

void* x22_3 = entry_x0[0xa]

if (x22_3 != 0)
    void* x23_2 = entry_x0[0xb]
    void* x0_9
    
    if (x23_2 != x22_3)
        do
            int64_t* x21_2 = *(x23_2 - 8)
            x23_2 -= 0x10
            
            if (x21_2 != 0)
                int64_t x9_3
                int32_t i_1
                
                do
                    x9_3 = __ldaxr(&x21_2[1])
                    i_1 = __stlxr(x9_3 - 1, &x21_2[1])
                while (i_1 != 0)
                
                if (x9_3 == 0)
                    (*(*x21_2 + 0x10))(x21_2)
                    std::__ndk1::__shared_weak_count::__release_weak()
        while (x23_2 != x22_3)
        
        x0_9 = entry_x0[0xa]
    else
        x0_9 = x22_3
    
    entry_x0[0xb] = x22_3
    operator delete(x0_9)

void* x0_12 = entry_x0[4]
*entry_x0 = _vtable_for_Botan::Filter + 0x10

if (x0_12 != 0)
    entry_x0[5] = x0_12
    operator delete(x0_12)

void* result = entry_x0[1]

if (result == 0)
    return result

int64_t x8_13 = entry_x0[3]
entry_x0[2] = result
return Botan::deallocate_memory(result, x8_13 - result, 1)
