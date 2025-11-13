// 函数: stbi_load_gif_from_memory
// 地址: 0xfe0bc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = _ReadMSR(tpidr_el0)
int64_t x8_1 = *(x8 + 0x28)
int64_t x9 = arg1 + sx.q(arg2)
int64_t var_88e8 = arg1
int64_t var_88e0 = x9
int64_t var_88f8 = arg1
int64_t var_88f0 = x9
int32_t* x20 = arg6
int64_t* x26 = arg3
int64_t var_89a0 = 0
int32_t var_8980 = 0
void* result
void var_89b0
int32_t var_88d8

if (sub_ff09d8(&var_89b0) == 0)
    result = nullptr
    data_2423720 = "not GIF"
    
    if (data_2423710 != 0)
    label_fe0e84:
        int32_t x8_16 = *x20
        
        if (x8_16 s>= 1)
            int32_t x24_2 = *arg5
            int32_t x8_18 = x24_2 s>> 1
            uint64_t x25_1
            
            if (x8_18 s> 1)
                x25_1 = zx.q(x8_18)
            else
                x25_1 = 1
            
            if (x24_2 s>= 2)
                int64_t x8_20 = sx.q(*arg4)
                int64_t x9_7 = sx.q(*arg7)
                size_t x28_1 = x9_7 * x8_20
                
                if (x28_1 != 0)
                    void* result_1 = result
                    int32_t x27_2 = 0
                    
                    do
                        int64_t x23_2 = 0
                        
                        do
                            int64_t x20_1 = result_1 + x23_2 * x28_1
                            int64_t x21_2 = result_1 + x28_1 * sx.q(x24_2 + not.d(x23_2.d))
                            size_t x26_1 = x28_1
                            size_t x22_3
                            size_t temp0_1
                            
                            do
                                x22_3 = x26_1 u< 0x800 ? x26_1 : 0x800
                                
                                memcpy(&var_88d8, x20_1, x22_3)
                                memcpy(x20_1, x21_2, x22_3)
                                memcpy(x21_2, &var_88d8, x22_3)
                                x20_1 += x22_3
                                temp0_1 = x26_1
                                x26_1 -= x22_3
                                x21_2 += x22_3
                            while (temp0_1 != x22_3)
                            x23_2 += 1
                        while (x23_2 != x25_1)
                        
                        x27_2 += 1
                        result_1 += sx.q(x24_2 * x8_20.d * x9_7.d)
                    while (x27_2 != x8_16)
else
    memset(&var_88d8, 0, 0x8870)
    
    if (x26 != 0)
        *x26 = 0
    
    void* i_3 = sub_fff4f4(&var_89b0, &var_88d8, arg7, 0)
    void* oldmem = nullptr
    uint64_t x21_1 = 0
    int32_t var_88d4
    
    if (i_3 != &var_89b0)
        void* i_2 = i_3
        
        if (i_3 != 0)
            if (x26 == 0)
                oldmem = nullptr
                int32_t x19_2 = 0
                void* i
                
                do
                    int32_t x8_9 = var_88d8
                    x21_1 = zx.q(x19_2 + 1)
                    *arg4 = x8_9
                    int32_t x22_2 = var_88d4 * x8_9
                    int32_t x24_1 = x22_2 << 2
                    size_t bytes_1 = sx.q(x24_1 * x21_1.d)
                    *arg5 = var_88d4
                    void* oldmem_1
                    
                    if (oldmem == 0)
                        oldmem_1 = malloc(bytes_1)
                    else
                        oldmem_1 = realloc(oldmem, bytes_1)
                    
                    oldmem = oldmem_1
                    memcpy(oldmem_1 + sx.q(x24_1 * x19_2), i_2, sx.q(x24_1))
                    
                    if (x19_2 != 0)
                        x26 = oldmem - sx.q(x22_2 << 3)
                    
                    i = sub_fff4f4(&var_89b0, &var_88d8, arg7, x26)
                    
                    if (i == &var_89b0)
                        break
                    
                    i_2 = i
                    x19_2 = x21_1.d
                while (i != 0)
            else
                uint64_t x23_1 = 0
                void* x27_1 = nullptr
                oldmem = nullptr
                size_t bytes_2 = 4
                int32_t var_89d0
                var_89d0.q = x20
                void* i_1
                
                do
                    int32_t x8_2 = var_88d8
                    x21_1 = x23_1 + 1
                    *arg4 = x8_2
                    int32_t x19_1 = var_88d4 * x8_2
                    int32_t x22_1 = x19_1 << 2
                    int64_t bytes = sx.q(x22_1 * x21_1.d)
                    *arg5 = var_88d4
                    int64_t x0_7
                    void* oldmem_2
                    
                    if (oldmem == 0)
                        oldmem_2 = malloc(bytes)
                        x0_7 = malloc(bytes_2)
                    else
                        oldmem_2 = realloc(oldmem, bytes)
                        x0_7 = realloc(*x26, bytes_2)
                    
                    *x26 = x0_7
                    memcpy(oldmem_2 + sx.q(x22_1 * x23_1.d), i_2, sx.q(x22_1))
                    
                    if (x23_1 != 0)
                        x27_1 = oldmem_2 - sx.q(x19_1 << 3)
                    
                    int32_t var_70
                    *(x0_7 + (x23_1 << 2)) = var_70
                    i_1 = sub_fff4f4(&var_89b0, &var_88d8, arg7, x27_1)
                    oldmem = oldmem_2
                    
                    if (i_1 == &var_89b0)
                        break
                    
                    i_2 = i_1
                    bytes_2 += 4
                    x23_1 = x21_1
                while (i_1 != 0)
                x20 = var_89d0.q
    
    int64_t var_88d0
    free(var_88d0)
    int64_t var_88c0
    free(var_88c0)
    int64_t var_88c8
    free(var_88c8)
    
    if ((arg8 & 0xfffffffb) != 0)
        oldmem = sub_ffaa68(oldmem, 4, arg8, var_88d8 * x21_1.d, var_88d4)
    
    result = oldmem
    *x20 = x21_1.d
    
    if (data_2423710 != 0)
        goto label_fe0e84

if (*(x8 + 0x28) == x8_1)
    return result

__stack_chk_fail()
noreturn
