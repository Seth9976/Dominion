// 函数: sub_10d713c
// 地址: 0x10d713c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = _ReadMSR(tpidr_el0)
int64_t x9 = *(x20 + 0x28)
size_t bytes = ((arg4 - arg3) s>> 3) * -0x5555555555555555
char* result = arg4
char* result_1 = arg3
int32_t var_d8 = arg7
char* x0_1
char* x13

if (bytes u< 0x65)
    x0_1 = nullptr
    void var_d4
    x13 = &var_d4
else
    x0_1 = malloc(bytes)
    arg7 = var_d8
    x13 = x0_1
    
    if (x0_1 == 0)
        std::__throw_bad_alloc()
        noreturn

int64_t x24 = 0

if (result_1 != result)
    char* result_4 = result_1
    char* x11_1 = x13
    
    do
        uint64_t x12_1 = zx.q(*result_4)
        
        if ((x12_1.d & 1) == 0)
            if (x12_1 u>> 1 == 0)
                goto label_10d71e4
            
            *x11_1 = 1
        else if (*(result_4 + 8) == 0)
        label_10d71e4:
            bytes -= 1
            x24 += 1
            *x11_1 = 2
        else
            *x11_1 = 1
        
        result_4 = &result_4[0x18]
        x11_1 = &x11_1[1]
    while (result != result_4)

int32_t* x8_3 = *arg1

if (bytes != 0 && x8_3 != arg2)
    int64_t x26_1 = 0
    char* result_2 = result_1
    
    do
        int32_t x28_1 = *x8_3
        
        if ((arg7 & 1) == 0)
            arg7 = var_d8
            x28_1 = (*(*arg5 + 0x38))(arg5, zx.q(x28_1))
        
        if (result_1 != result)
            char* x20_1 = x13
            int32_t x21_1 = 0
            
            do
                if (zx.d(*x20_1) == 1)
                    int32_t x1_1
                    
                    if ((zx.d(*result_1) & 1) != 0)
                        x1_1 = *(*(result_1 + 0x10) + (x26_1 << 2))
                        
                        if ((arg7 & 1) == 0)
                            x1_1 = (*(*arg5 + 0x38))(arg5, x1_1)
                            arg7 = var_d8
                    else
                        x1_1 = *(result_1 + 4 + (x26_1 << 2))
                        
                        if ((arg7 & 1) == 0)
                            x1_1 = (*(*arg5 + 0x38))(arg5, x1_1)
                            arg7 = var_d8
                    
                    if (x28_1 != x1_1)
                        bytes -= 1
                        *x20_1 = 0
                    else
                        uint64_t x8_12 = zx.q(*result_1)
                        
                        if ((x8_12.d & 1) == 0)
                            if (x8_12 u>> 1 == x26_1 + 1)
                                goto label_10d731c
                            
                            x21_1 = 1
                        else if (*(result_1 + 8) != x26_1 + 1)
                            x21_1 = 1
                        else
                        label_10d731c:
                            *x20_1 = 2
                            bytes -= 1
                            x24 += 1
                            x21_1 = 1
                
                result_1 = &result_1[0x18]
                x20_1 = &x20_1[1]
            while (result != result_1)
            
            if ((x21_1 & 1) == 0)
                result_1 = result_2
            else
                result_1 = result_2
                *arg1 += 4
                
                if (x24 + bytes u>= 2)
                    char* x9_3 = x13
                    char* result_3 = result_1
                    
                    do
                        if (zx.d(*x9_3) == 2)
                            uint64_t x10_3 = zx.q(*result_3)
                            
                            if ((x10_3.d & 1) != 0)
                                if (*(result_3 + 8) != x26_1 + 1)
                                    x24 -= 1
                                    *x9_3 = 0
                            else if (x10_3 u>> 1 != x26_1 + 1)
                                x24 -= 1
                                *x9_3 = 0
                        
                        result_3 = &result_3[0x18]
                        x9_3 = &x9_3[1]
                    while (result != result_3)
        
        x8_3 = *arg1
        
        if (bytes == 0)
            break
        
        x26_1 += 1
    while (x8_3 != arg2)

if (x8_3 == arg2)
    *arg6 |= 2

char* x10_6 = x13

if (result_1 == result)
label_10d741c:
    *arg6 |= 4
    
    if (x0_1 != 0)
        free(x0_1)
else
    while (zx.d(*x10_6) != 2)
        result_1 = &result_1[0x18]
        x10_6 = &x10_6[1]
        
        if (result == result_1)
            goto label_10d741c
    
    result = result_1
    
    if (x0_1 != 0)
        free(x0_1)

if (*(x20 + 0x28) == x9)
    return result

__stack_chk_fail()
noreturn
