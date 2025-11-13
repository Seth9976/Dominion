// 函数: _ZN5Botan2OS21allocate_locked_pagesEm
// 地址: 0xd977b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_1 = arg1
int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)

if (arg1 != 0)
    if (i_1 u>> 0x3d != 0)
        sub_ef2a0c()
        noreturn
    
    int64_t x0_1 = operator new(i_1 << 3)
    *entry_x8 = x0_1
    entry_x8[1] = x0_1
    entry_x8[2] = x0_1 + (i_1 << 3)

int64_t result = sysconf(0x27)
int64_t result_1

result_1 = result s> 1 ? result : 0x1000

if ((zx.d(data_23eca20) & 1) == 0)
    result = __cxa_guard_acquire(&data_23eca20)
    
    if (result.d != 0)
        data_23ec990 = 0xffffffff
        result = __cxa_guard_release(&data_23eca20)

if (i_1 != 0)
    int64_t x25_1 = result_1 << 1
    size_t len = x25_1 + result_1
    int64_t var_68_1 = x25_1
    uint64_t i
    
    do
        result = mmap(nullptr, len, 3, 0x22, data_23ec990)
        
        if (result != -1)
            int64_t x23_1 = result + result_1
            
            if (mlock(x23_1, result_1) != 0)
                result = munmap(result, len)
            else
                madvise(x23_1, result_1, 0x10)
                memset(result, 0, len)
                int64_t x0_7 = sysconf(0x27)
                int64_t x1_5
                
                x1_5 = x0_7 s> 1 ? x0_7 : 0x1000
                
                mprotect(result, x1_5, 0)
                int64_t x0_9 = sysconf(0x27)
                int64_t x1_6
                
                x1_6 = x0_9 s> 1 ? x0_9 : 0x1000
                
                result = mprotect(result + x25_1, x1_6, 0)
                int64_t* x9_1 = entry_x8[1]
                int64_t x8_4 = entry_x8[2]
                
                if (x9_1 u>= x8_4)
                    void* x24_2 = *entry_x8
                    size_t x25_2 = x9_1 - x24_2
                    int64_t x27_1 = x25_2 s>> 3
                    
                    if ((x27_1 + 1) u>> 0x3d != 0)
                        std::__ndk1::__vector_base_common<true>::__throw_length_error()
                        sub_ef2a0c()
                        noreturn
                    
                    void* x8_5 = x8_4 - x24_2
                    int64_t x10_2 = x8_5 s>> 2
                    int64_t x9_4
                    
                    if (x10_2 u< x27_1 + 1)
                        x9_4 = x27_1 + 1
                    else
                        x9_4 = x10_2
                    
                    int64_t fp_1
                    
                    if (0xfffffffffffffff u> x8_5 s>> 3)
                        fp_1 = x9_4
                    else
                        fp_1 = 0x1fffffffffffffff
                    
                    int64_t result_2
                    void* x27_3
                    
                    if (fp_1 == 0)
                        result_2 = 0
                        *(x27_1 << 3) = x23_1
                        x27_3 = (x27_1 << 3) + 8
                        
                        if (x25_2 s>= 1)
                            result = memcpy(result_2, x24_2, x25_2)
                    else
                        if (fp_1 u>> 0x3d != 0)
                            sub_ef2a0c()
                            noreturn
                        
                        result = operator new(fp_1 << 3)
                        result_2 = result
                        int64_t x27_2 = result_2 + (x27_1 << 3)
                        *x27_2 = x23_1
                        x27_3 = x27_2 + 8
                        
                        if (x25_2 s>= 1)
                            result = memcpy(result_2, x24_2, x25_2)
                    
                    x25_1 = var_68_1
                    *entry_x8 = result_2
                    entry_x8[1] = x27_3
                    entry_x8[2] = result_2 + (fp_1 << 3)
                    
                    if (x24_2 != 0)
                        result = operator delete(x24_2)
                else
                    *x9_1 = x23_1
                    entry_x8[1] = &x9_1[1]
        
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
