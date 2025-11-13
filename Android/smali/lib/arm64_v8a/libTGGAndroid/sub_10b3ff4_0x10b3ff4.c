// 函数: sub_10b3ff4
// 地址: 0x10b3ff4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = _ReadMSR(tpidr_el0)
int64_t x9 = *(x19 + 0x28)
size_t bytes = ((arg4 - arg3) s>> 3) * -0x5555555555555555
char* result = arg4
char* result_1 = arg3
int64_t* x23 = arg2
char* x22
char* x26
int64_t x28

if (bytes u< 0x65)
    x22 = nullptr
    void var_cc
    x26 = &var_cc
    
    if (result_1 != result)
    label_10b4078:
        x28 = 0
        char* result_3 = result_1
        char* x11_1 = x26
        
        do
            uint64_t x12_1 = zx.q(*result_3)
            
            if ((x12_1.d & 1) == 0)
                if (x12_1 u>> 1 == 0)
                    goto label_10b4090
                
                *x11_1 = 1
            else if (*(result_3 + 8) == 0)
            label_10b4090:
                bytes -= 1
                x28 += 1
                *x11_1 = 2
            else
                *x11_1 = 1
            
            result_3 = &result_3[0x18]
            x11_1 = &x11_1[1]
        while (result != result_3)
    else
        x28 = 0
else
    char* x0_1 = malloc(bytes)
    x22 = x0_1
    x26 = x0_1
    
    if (x0_1 == 0)
        std::__throw_bad_alloc()
        noreturn
    
    if (result_1 != result)
        goto label_10b4078
    
    x28 = 0

int64_t x21 = 0
char* var_100 = x22

while (true)
    int64_t var_e0_1 = x28
    
    while (true)
        int64_t* x0_2 = *arg1
        
        if (x0_2 == 0)
            goto label_10b415c
        
        int32_t* x8_2 = x0_2[3]
        int32_t x0_3
        
        if (x8_2 == x0_2[4])
            x0_3 = (*(*x0_2 + 0x48))()
        else
            x0_3 = *x8_2
        
        int32_t x19_1
        
        if (x0_3 != 0xffffffff)
            x19_1 = *arg1 == 0 ? 1 : 0
            
            if (x23 != 0)
                goto label_10b4164
            
            goto label_10b4148
        
        *arg1 = 0
    label_10b415c:
        x19_1 = 1
        int64_t* x0_4
        int32_t x8_9
        
        if (x23 == 0)
        label_10b4148:
            x8_9 = 1
            x0_4 = *arg1
            
            if (bytes != 0)
            label_10b41a0:
                
                if (((x19_1 ^ x8_9) & 1) != 0)
                    int32_t* x8_11 = x0_4[3]
                    int32_t x28_1
                    
                    if (x8_11 == x0_4[4])
                        x28_1 = (*(*x0_4 + 0x48))()
                        
                        if ((arg7 & 1) == 0)
                            x28_1 = (*(*arg5 + 0x38))(arg5, zx.q(x28_1))
                    else
                        x28_1 = *x8_11
                        
                        if ((arg7 & 1) == 0)
                            x28_1 = (*(*arg5 + 0x38))(arg5, zx.q(x28_1))
                    
                    x21 += 1
                    
                    if (result_1 == result)
                        continue
                    
                    char* result_4 = result_1
                    char* x19_2 = x26
                    int32_t var_e4_1 = 0
                    
                    do
                        if (zx.d(*x19_2) == 1)
                            void* x8_20
                            
                            if ((zx.d(*result_4) & 1) != 0)
                                x8_20 = *(result_4 + 0x10)
                            else
                                x8_20 = &result_4[4]
                            
                            int32_t x1_1 = *(x8_20 + (x21 << 2) - 4)
                            
                            if ((arg7 & 1) == 0)
                                x1_1 = (*(*arg5 + 0x38))()
                            
                            if (x28_1 != x1_1)
                                bytes -= 1
                                *x19_2 = 0
                            else
                                uint64_t x8_25 = zx.q(*result_4)
                                
                                if ((x8_25.d & 1) != 0)
                                    if (*(result_4 + 8) == x21)
                                    label_10b428c:
                                        *x19_2 = 2
                                        bytes -= 1
                                        var_e0_1 += 1
                                else if (x8_25 u>> 1 == x21)
                                    goto label_10b428c
                                
                                var_e4_1 = 1
                        
                        result_4 = &result_4[0x18]
                        x19_2 = &x19_2[1]
                    while (result != result_4)
                    
                    x22 = var_100
                    x28 = var_e0_1
                    
                    if ((var_e4_1 & 1) == 0)
                        break
                    
                    int64_t* x0_12 = *arg1
                    int64_t x8_31 = x0_12[3]
                    
                    if (x8_31 == x0_12[4])
                        (*(*x0_12 + 0x50))()
                    else
                        x0_12[3] = x8_31 + 4
                    
                    char* result_2 = result_1
                    char* x9_5 = x26
                    
                    if (x28 + bytes u< 2)
                        break
                    
                    do
                        if (zx.d(*x9_5) == 2)
                            uint64_t x10_2 = zx.q(*result_2)
                            
                            if ((x10_2.d & 1) != 0)
                                if (*(result_2 + 8) != x21)
                                    x28 -= 1
                                    *x9_5 = 0
                            else if (x10_2 u>> 1 != x21)
                                x28 -= 1
                                *x9_5 = 0
                        
                        result_2 = &result_2[0x18]
                        x9_5 = &x9_5[1]
                    while (result != result_2)
                    
                    break
        else
        label_10b4164:
            int32_t* x8_6 = x23[3]
            int32_t x0_5
            
            if (x8_6 == x23[4])
                x0_5 = (*(*x23 + 0x48))(x23)
            else
                x0_5 = *x8_6
            
            x8_9 = x0_5 == 0xffffffff ? 1 : 0
            
            if (x0_5 == 0xffffffff)
                x23 = nullptr
            
            x0_4 = *arg1
            
            if (bytes != 0)
                goto label_10b41a0
        int32_t x19_3
        uint64_t x21_1
        
        if (x0_4 != 0)
            int32_t* x8_36 = x0_4[3]
            x21_1 = x19
            int32_t x0_13
            
            if (x8_36 == x0_4[4])
                x0_13 = (*(*x0_4 + 0x48))()
            else
                x0_13 = *x8_36
            
            if (x0_13 != 0xffffffff)
                x19_3 = *arg1 == 0 ? 1 : 0
                
                if (x23 == 0)
                    goto label_10b446c
                
                goto label_10b4398
            
            x19_3 = 1
            *arg1 = 0
            
            if (x23 != 0)
                goto label_10b4398
            
            goto label_10b446c
        
        x21_1 = x19
        x19_3 = 1
        int32_t* x9_8
        
        if (x23 != 0)
        label_10b4398:
            int32_t* x8_40 = x23[3]
            int32_t x8_41
            
            if (x8_40 == x23[4])
                x8_41 = (*(*x23 + 0x48))(x23)
            else
                x8_41 = *x8_40
            
            x9_8 = arg6
            
            if (((x19_3 ^ (x8_41 == 0xffffffff ? 1 : 0)) & 1) == 0)
                *x9_8 |= 2
        else
        label_10b446c:
            x9_8 = arg6
            
            if ((x19_3 & 1) != 0)
                *x9_8 |= 2
        
        if (result_1 == result)
        label_10b440c:
            *x9_8 |= 4
            
            if (x22 != 0)
                free(x22)
        else
            while (zx.d(*x26) != 2)
                result_1 = &result_1[0x18]
                x26 = &x26[1]
                
                if (result == result_1)
                    goto label_10b440c
            
            result = result_1
            
            if (x22 != 0)
                free(x22)
        
        if (*(x21_1 + 0x28) == x9)
            return result
        
        __stack_chk_fail()
        noreturn
