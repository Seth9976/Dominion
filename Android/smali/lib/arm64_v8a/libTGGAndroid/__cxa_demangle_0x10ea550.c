// 函数: __cxa_demangle
// 地址: 0x10ea550
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x25 + 0x28)
char* oldmem_2

if (arg1 != 0)
    oldmem_2 = arg2

char* result

if (arg1 != 0 && (arg2 == 0 || arg3 != 0))
    size_t x0_1 = strlen(arg1)
    void* x9_1 = &arg1[x0_1]
    void* var_13c0 = arg1
    int128_t var_1398
    int128_t* var_13a8_1 = &var_1398
    int128_t* var_1298
    int64_t* var_13a0_1 = &var_1298
    int128_t* var_13b0_1 = &var_1398
    int128_t* var_1128
    int64_t* var_1170_1 = &var_1128
    __builtin_memset(&var_1398, 0, 0x100)
    int128_t var_1280
    int128_t* var_1290_1 = &var_1280
    int128_t* var_1180
    int64_t* var_1288_1 = &var_1180
    var_1298 = &var_1280
    __builtin_memset(&var_1280, 0, 0x100)
    int128_t var_1168
    var_1180 = &var_1168
    int128_t* var_1178_1 = &var_1168
    __builtin_memset(&var_1168, 0, 0x40)
    int16_t var_10b8
    int16_t* var_10e0_1 = &var_10b8
    int128_t* var_10f0
    int64_t* var_1118_1 = &var_10f0
    int128_t var_1110
    var_1128 = &var_1110
    int128_t* var_1120_1 = &var_1110
    __builtin_memset(&var_1110, 0, 0x20)
    int128_t var_10d8
    var_10f0 = &var_10d8
    int128_t* var_10e8_1 = &var_10d8
    __builtin_memset(&var_10d8, 0, 0x20)
    var_10b8 = 1
    int128_t var_1090 = zx.o(0)
    char* oldmem
    __builtin_memset(&oldmem, 0, 0x18)
    int64_t var_10b0_1 = -1
    int32_t var_10a0_1 = 0
    int64_t var_10a8_1 = 0
    int128_t* var_90_1 = &var_1090
    int64_t var_13c8_1 = -1
    int32_t x8_9
    void* x23_1
    
    if (x0_1 u< 2 || zx.d(*arg1) != 0x5f)
    label_10ea7ec:
        void* x0_6 = sub_10eb95c(&var_13c0)
        x23_1 = x0_6
        result = nullptr
        x8_9 = -2
        
        if (x0_6 != 0 && x9_1 == var_13c0)
        label_10ea80c:
            int64_t x22_3
            
            if (oldmem_2 == 0)
            label_10eaa6c:
                x22_3 = 0x400
                char* oldmem_3 = malloc(0x400)
                oldmem_2 = oldmem_3
                
                if (oldmem_3 != 0)
                    goto label_10eaa7c
                
                result = nullptr
                x8_9 = -1
            else
            label_10ea810:
                x22_3 = *arg3
            label_10eaa7c:
                oldmem = oldmem_2
                int64_t var_13d8_1 = 0
                (*(*x23_1 + 0x20))(x23_1, &oldmem)
                
                if (zx.d(*(x23_1 + 9)) != 1)
                    (*(*x23_1 + 0x28))(x23_1, &oldmem)
                
                int64_t x8_23 = var_13d8_1
                size_t bytes_3 = x8_23 + 1
                char* oldmem_1
                
                if (bytes_3 u>= x22_3)
                    size_t bytes_2 = x22_3 << 1
                    size_t bytes
                    
                    bytes = bytes_2 u< bytes_3 ? bytes_3 : bytes_2
                    
                    size_t bytes_1 = bytes
                    oldmem_1 = realloc(oldmem, bytes)
                    oldmem = oldmem_1
                    
                    if (oldmem_1 == 0)
                        std::terminate()
                        noreturn
                    
                    x8_23 = var_13d8_1
                    bytes_3 = x8_23 + 1
                else
                    oldmem_1 = oldmem
                
                oldmem_1[x8_23] = 0
                
                if (arg3 != 0)
                    *arg3 = bytes_3
                
                result = oldmem
                x8_9 = 0
    else
        uint32_t x8_2 = zx.d(arg1[1])
        int64_t x8_3
        
        if (x8_2 != 0x5a)
            if (x0_1 u< 3 || x8_2 != 0x5f)
                goto label_10ea7ec
            
            if (zx.d(arg1[2]) == 0x5a)
                x8_3 = 3
                goto label_10ea720
            
            if (x0_1 u< 4)
                goto label_10ea7ec
            
            int64_t x8_10
            
            if (zx.d(arg1[2]) != 0x5f || zx.d(arg1[3]) != 0x5a)
                if (x0_1 u< 5 || x8_2 != 0x5f || zx.d(arg1[2]) != 0x5f || zx.d(arg1[3]) != 0x5f
                        || zx.d(arg1[4]) != 0x5a)
                    goto label_10ea7ec
                
                x8_10 = 5
            else
                x8_10 = 4
            
            var_13c0 = &arg1[x8_10]
            char* result_1 = sub_10eaca8(&var_13c0)
            result = result_1
            
            if (result_1 == 0)
                x8_9 = -2
            else
                void* x10_2 = var_13c0
                
                if (x9_1 - x10_2 u< 0xd || zx.d(*x10_2) != 0x5f || zx.d(*(x10_2 + 1)) != 0x62
                        || zx.d(*(x10_2 + 2)) != 0x6c || zx.d(*(x10_2 + 3)) != 0x6f
                        || zx.d(*(x10_2 + 4)) != 0x63 || zx.d(*(x10_2 + 5)) != 0x6b
                        || zx.d(*(x10_2 + 6)) != 0x5f || zx.d(*(x10_2 + 7)) != 0x69
                        || zx.d(*(x10_2 + 8)) != 0x6e || zx.d(*(x10_2 + 9)) != 0x76
                        || zx.d(*(x10_2 + 0xa)) != 0x6f || zx.d(*(x10_2 + 0xb)) != 0x6b
                        || zx.d(*(x10_2 + 0xc)) != 0x65)
                    result = nullptr
                    x8_9 = -2
                else
                    void* x9_24 = x10_2 + 0xd
                    var_13c0 = x9_24
                    
                    if (x9_24 == x9_1)
                        goto label_10ea9f8
                    
                    uint32_t x11_1 = zx.d(*x9_24)
                    
                    if (x11_1 == 0x5f)
                        x9_24 = x10_2 + 0xe
                        var_13c0 = x9_24
                    
                    void* x10_5
                    void* x12_2
                    
                    if (x9_1 == x9_24)
                        x9_24 = nullptr
                        x12_2 = nullptr
                        x10_5 = x9_1
                    else if (zx.d(*x9_24) - 0x30 u<= 9)
                        void* x10_6 = x9_24 + 1
                        
                        while (true)
                            var_13c0 = x10_6
                            
                            if (x9_1 == x10_6)
                                x10_5 = x9_1
                                x12_2 = x9_1
                                break
                            
                            uint32_t x12_3 = zx.d(*x10_6)
                            x10_6 += 1
                            
                            if (x12_3 - 0x30 u>= 0xa)
                                x10_5 = x10_6 - 1
                                x12_2 = x10_5
                                break
                    else
                        x12_2 = nullptr
                        x10_5 = x9_24
                        x9_24 = nullptr
                    
                    if (x11_1 != 0x5f || x9_24 != x12_2)
                        if (x9_1 == x10_5)
                            goto label_10ea9f8
                        
                        if (zx.d(*x10_5) == 0x2e)
                            var_13c0 = x9_1
                        label_10ea9f8:
                            void** x23_2 = var_90_1
                            int64_t x8_17 = *(var_90_1 + 8)
                            
                            if (x8_17 + 0x30 u>= 0xff0)
                                void** x0_8 = malloc(0x1000)
                                
                                if (x0_8 == 0)
                                    std::terminate()
                                    noreturn
                                
                                x8_17 = 0
                                *x0_8 = x23_2
                                x0_8[1] = 0
                                x23_2 = x0_8
                                var_90_1 = x0_8
                            
                            x23_2[1] = x8_17 + 0x30
                            x23_1 = x23_2 + x8_17 + 0x10
                            *x23_1 = &_vtable_for_(anonymous namespace)::itanium_demangle::SpecialName{for `(anonymous namespace)::itanium_demangle::Node'}
                            *(x23_1 + 8) = 0x1010114
                            *(x23_1 + 0x10) = "invocation function for block in "
                            *(x23_1 + 0x18) = &data_78ac1f[0x21]
                            *(x23_1 + 0x20) = result
                            
                            if (oldmem_2 != 0)
                                goto label_10ea810
                            
                            goto label_10eaa6c
                        
                        result = nullptr
                        x8_9 = -2
                    else
                        result = nullptr
                        x8_9 = -2
        else
            x8_3 = 2
        label_10ea720:
            var_13c0 = &arg1[x8_3]
            void* x0_3 = sub_10eaca8(&var_13c0)
            x23_1 = x0_3
            
            if (x0_3 == 0)
                result = nullptr
                x8_9 = -2
            else
                void* x22_2 = var_13c0
                
                if (x9_1 == x22_2)
                    goto label_10ea80c
                
                if (zx.d(*x22_2) == 0x2e)
                    int128_t* x0_4 = var_90_1
                    int64_t x8_6 = *(x0_4 + 8)
                    
                    if (x8_6 + 0x30 u>= 0xff0)
                        int128_t* var_1400_1 = x0_4
                        x0_4 = malloc(0x1000)
                        
                        if (x0_4 == 0)
                            std::terminate()
                            noreturn
                        
                        x8_6 = 0
                        var_90_1 = x0_4
                        *x0_4 = var_1400_1
                        *(x0_4 + 8) = 0
                    
                    *(x0_4 + 8) = x8_6 + 0x30
                    *(x0_4 + x8_6 + 0x10) = &_vtable_for_(anonymous namespace)::itanium_demangle::DotSuffix{for `(anonymous namespace)::itanium_demangle::Node'}
                    *(x0_4 + x8_6 + 0x18) = 0x1010101
                    *(x0_4 + x8_6 + 0x20) = x23_1
                    *(x0_4 + x8_6 + 0x28) = x22_2
                    *(x0_4 + x8_6 + 0x30) = x9_1
                    x23_1 = x0_4 + x8_6 + 0x10
                    var_13c0 = x9_1
                    
                    if (oldmem_2 != 0)
                        goto label_10ea810
                    
                    goto label_10eaa6c
                
                result = nullptr
                x8_9 = -2
    
    if (arg4 != 0)
        *arg4 = x8_9
    
    int128_t* x0_12 = var_90_1
    
    if (x0_12 != 0)
        while (true)
            int128_t* x8_25 = *x0_12
            
            if (&var_1090 != x0_12)
                free(x0_12)
                x0_12 = x8_25
                
                if (x0_12 == 0)
                    break
            else
                x0_12 = x8_25
                
                if (x0_12 == 0)
                    break
    
    var_1090.q = 0
    var_1090:8.q = 0
    int128_t* x0_13 = var_10f0
    int128_t* var_90_3 = &var_1090
    
    if (x0_13 != &var_10d8)
        free(x0_13)
    
    int128_t* x0_14 = var_1128
    
    if (x0_14 != &var_1110)
        free(x0_14)
    
    int128_t* x0_15 = var_1180
    
    if (x0_15 != &var_1168)
        free(x0_15)
    
    int128_t* x0_16 = var_1298
    
    if (x0_16 != &var_1280)
        free(x0_16)
    
    if (var_13b0_1 != &var_1398)
        free(var_13b0_1)
else
    result = nullptr
    
    if (arg4 != 0)
        *arg4 = 0xfffffffd

if (*(x25 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
