// 函数: sub_10f538c
// 地址: 0x10f538c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
int16_t* x20 = arg1
int32_t x8_1 = *(arg1 + 0xc)
int64_t x8_4
void* x22_2

if (x8_1 == 2)
    x22_2 = &arg2[1]
    int64_t x8_3 = *x22_2
    int64_t x10_3 = *(x22_2 + 8)
    
    if (x8_3 + 3 u>= x10_3)
        void* oldmem_2 = *arg2
        size_t bytes_7 = x10_3 << 1
        size_t bytes_2
        
        if (bytes_7 u< x8_3 + 3)
            bytes_2 = x8_3 + 3
        else
            bytes_2 = bytes_7
        
        arg2[2] = bytes_2
        arg1 = realloc(oldmem_2, bytes_2)
        *arg2 = arg1
        
        if (arg1 != 0)
            x8_3 = *x22_2
            goto label_10f54b8
    else
        arg1 = *arg2
    label_10f54b8:
        void* x8_5 = arg1 + x8_3
        *(x8_5 + 2) = 0x54
        *x8_5 = 0x5424
        x8_4 = 3
    label_10f54d8:
        *x22_2 += x8_4
    label_10f54dc:
        int32_t x8_7 = *(x20 + 0x10)
        
        if (x8_7 == 0)
            goto label_10f55e8
        
        if (x8_7 == 1)
            int64_t x8_13 = arg2[1]
            int64_t x10_5 = arg2[2]
            size_t bytes_11 = x8_13 + 1
            
            if (bytes_11 u< x10_5)
                arg1 = *arg2
            label_10f55d4:
                arg2[1] = bytes_11
                *(arg1 + x8_13) = 0x30
            label_10f55e8:
                
                if (*(x21 + 0x28) == x8)
                    return 
                
                __stack_chk_fail()
                noreturn
            
            void* oldmem_4 = *arg2
            size_t bytes_9 = x10_5 << 1
            size_t bytes_4
            
            bytes_4 = bytes_9 u< bytes_11 ? bytes_11 : bytes_9
            
            arg2[2] = bytes_4
            arg1 = realloc(oldmem_4, bytes_4)
            *arg2 = arg1
            
            if (arg1 != 0)
                x8_13 = arg2[1]
                bytes_11 = x8_13 + 1
                goto label_10f55d4
        else
            int64_t x20_1 = 0
            uint64_t x8_9 = zx.q(x8_7 - 1)
            char var_50[0x18]
            bool cond:0_1
            
            do
                uint64_t x12_2 = x8_9 u/ 0xa
                cond:0_1 = x8_9 u> 9
                var_50[x20_1 + 0x14] = (x8_9.b - x12_2.b * 0xa) | 0x30
                x20_1 -= 1
                x8_9 = x12_2
            while (cond:0_1)
            
            if (x20_1 == 0)
                goto label_10f55e8
            
            int64_t x8_12 = arg2[1]
            int64_t x10_4 = arg2[2]
            size_t bytes_10 = x8_12 - x20_1
            void* x0
            
            if (bytes_10 u< x10_4)
                x0 = *arg2
            label_10f5598:
                memmove(x0 + x8_12, &var_50[x20_1 + 0x15], neg.q(x20_1))
                arg2[1] -= x20_1
                goto label_10f55e8
            
            void* oldmem_3 = *arg2
            size_t bytes_8 = x10_4 << 1
            size_t bytes_3
            
            bytes_3 = bytes_8 u< bytes_10 ? bytes_10 : bytes_8
            
            arg2[2] = bytes_3
            x0 = realloc(oldmem_3, bytes_3)
            *arg2 = x0
            
            if (x0 != 0)
                x8_12 = arg2[1]
                goto label_10f5598
else
    int64_t x8_2
    int16_t x9_3
    
    if (x8_1 == 1)
        x22_2 = &arg2[1]
        x8_2 = *x22_2
        int64_t x10_2 = *(x22_2 + 8)
        
        if (x8_2 + 2 u< x10_2)
            arg1 = *arg2
            x9_3 = 0x4e24
        label_10f5488:
            *(arg1 + x8_2) = x9_3
            x8_4 = 2
            goto label_10f54d8
        
        void* oldmem = *arg2
        size_t bytes_5 = x10_2 << 1
        size_t bytes
        
        if (bytes_5 u< x8_2 + 2)
            bytes = x8_2 + 2
        else
            bytes = bytes_5
        
        arg2[2] = bytes
        arg1 = realloc(oldmem, bytes)
        *arg2 = arg1
        
        if (arg1 != 0)
            x8_2 = *x22_2
            x9_3 = 0x4e24
            goto label_10f5488
    else
        if (x8_1 != 0)
            goto label_10f54dc
        
        x22_2 = &arg2[1]
        x8_2 = *x22_2
        int64_t x10_1 = *(x22_2 + 8)
        
        if (x8_2 + 2 u< x10_1)
            arg1 = *arg2
        label_10f5484:
            x9_3 = 0x5424
            goto label_10f5488
        
        void* oldmem_1 = *arg2
        size_t bytes_6 = x10_1 << 1
        size_t bytes_1
        
        if (bytes_6 u< x8_2 + 2)
            bytes_1 = x8_2 + 2
        else
            bytes_1 = bytes_6
        
        arg2[2] = bytes_1
        arg1 = realloc(oldmem_1, bytes_1)
        *arg2 = arg1
        
        if (arg1 != 0)
            x8_2 = *x22_2
            goto label_10f5484
std::terminate()
noreturn
