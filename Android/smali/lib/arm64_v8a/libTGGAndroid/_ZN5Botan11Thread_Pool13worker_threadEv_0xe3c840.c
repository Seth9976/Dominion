// 函数: _ZN5Botan11Thread_Pool13worker_threadEv
// 地址: 0xe3c840
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = _ReadMSR(tpidr_el0)
int64_t x8_1 = *(x8 + 0x28)
int128_t v0 = data_71b430
int64_t* result
int32_t i

do
    int64_t* result_1 = nullptr
    void* entry_x0
    void* var_e0_1 = entry_x0 + 0x18
    char var_d8_1 = 1
    std::__ndk1::mutex::lock()
    
    while (zx.d(*(entry_x0 + 0xa0)) == 0)
        if (*(entry_x0 + 0x98) != 0)
            goto label_e3c8f4
        
        std::__ndk1::condition_variable::wait(entry_x0 + 0x40)
    
    void var_d0
    int32_t x22_1
    
    if (*(entry_x0 + 0x98) == 0)
        x22_1 = 0
        i = 1
    else
    label_e3c8f4:
        int64_t x9_1 = *(entry_x0 + 0x90)
        int64_t x8_9 = *(*(entry_x0 + 0x78) + ((x9_1 u/ 0x55) << 3))
        int64_t x9_2 = x9_1 u% 0x55
        int64_t* x0_2 = *(x8_9 + x9_2 * 0x30 + 0x20)
        void var_a0
        int64_t* var_80_1
        
        if (x0_2 == 0)
            var_80_1 = nullptr
        else if (x8_9 + x9_2 * 0x30 == x0_2)
            var_80_1 = &var_a0
            (*(*x0_2 + 0x18))(x0_2, &var_a0)
        else
            var_80_1 = (*(*x0_2 + 0x10))()
        
        int128_t v0_1
        int128_t v1_1
        v0_1, v1_1 = sub_f4ae38(&var_a0, &var_d0)
        
        if (&var_a0 == var_80_1)
            v0_1, v1_1 = (*(*var_80_1 + 0x20))()
        else if (var_80_1 != 0)
            v0_1, v1_1 = (*(*var_80_1 + 0x28))()
        
        int64_t x8_18 = *(entry_x0 + 0x90)
        void* x8_20 = *(*(entry_x0 + 0x78) + ((x8_18 u/ 0x55) << 3)) + x8_18 u% 0x55 * 0x30
        int64_t* x0_6 = *(x8_20 + 0x20)
        
        if (x8_20 == x0_6)
            v0_1, v1_1 = (*(*x0_6 + 0x20))()
        else if (x0_6 != 0)
            v0_1, v1_1 = (*(*x0_6 + 0x28))()
        
        int128_t v0_2 = *(entry_x0 + 0x90) + v0
        *(entry_x0 + 0x90) = v0_2
        
        if (v0_2.q u>= 0xaa)
            operator delete(**(entry_x0 + 0x78))
            i = 0
            int64_t x9_6 = *(entry_x0 + 0x90) - 0x55
            *(entry_x0 + 0x78) += 8
            *(entry_x0 + 0x90) = x9_6
            x22_1 = 1
        else
            i = 0
            x22_1 = 1
    
    std::__ndk1::mutex::unlock()
    
    if (x22_1 != 0)
        if (result_1 == 0)
            sub_a58ab4()
            noreturn
        
        (*(*result_1 + 0x30))()
        i = 0
    
    result = result_1
    
    if (&var_d0 == result)
        result = (*(*result + 0x20))()
    else if (result != 0)
        result = (*(*result + 0x28))()
while (i == 0)

if (*(x8 + 0x28) == x8_1)
    return result

__stack_chk_fail()
noreturn
