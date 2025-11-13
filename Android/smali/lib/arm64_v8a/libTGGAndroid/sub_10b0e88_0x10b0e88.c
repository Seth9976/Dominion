// 函数: sub_10b0e88
// 地址: 0x10b0e88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x9 = *(x22 + 0x28)
size_t bytes = ((arg4 - arg3) s>> 3) * -0x5555555555555555
char* result = arg4
char* result_1 = arg3
int64_t* x23 = arg2
char* x19
char* x26
int64_t x28

if (bytes u< 0x65)
    x19 = nullptr
    void var_cc
    x26 = &var_cc
    
    if (result_1 != result)
    label_10b0f0c:
        x28 = 0
        char* result_3 = result_1
        char* x11_1 = x26
        
        do
            uint64_t x12_1 = zx.q(*result_3)
            
            if ((x12_1.d & 1) == 0)
                if (x12_1 u>> 1 == 0)
                    goto label_10b0f24
                
                *x11_1 = 1
            else if (*(result_3 + 8) == 0)
            label_10b0f24:
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
    x19 = x0_1
    x26 = x0_1
    
    if (x0_1 == 0)
        std::__throw_bad_alloc()
        noreturn
    
    if (result_1 != result)
        goto label_10b0f0c
    
    x28 = 0

char* var_f8 = x19
int64_t x21_1 = 0

while (true)
    int64_t var_e0_1 = x28
    
    while (true)
        int64_t* x28_2 = *arg1
        
        if (x28_2 == 0 || x28_2[3] != x28_2[4])
            goto label_10b0fc8
        
        if ((*(*x28_2 + 0x48))(x28_2) == 0xffffffff)
            x28_2 = nullptr
            *arg1 = 0
            
            if (x23 != 0)
                goto label_10b0fd0
        else
            x28_2 = *arg1
        label_10b0fc8:
            
            if (x23 != 0)
            label_10b0fd0:
                
                if (x23[3] == x23[4] && (*(*x23 + 0x48))(x23) == 0xffffffff)
                    x23 = nullptr
        
        int64_t* x28_3 = *arg1
        
        if (bytes == 0 || (((x28_2 == 0 ? 1 : 0) ^ (x23 == 0 ? 1 : 0)) & 1) == 0)
            int32_t* x21_2
            
            if (x28_3 != 0)
                x21_2 = arg6
                
                if (x28_3[3] != x28_3[4])
                    goto label_10b120c
                
                if ((*(*x28_3 + 0x48))(x28_3) != 0xffffffff)
                    x28_3 = *arg1
                    
                    if (x23 != 0)
                        goto label_10b1218
                    
                    goto label_10b12d0
                
                x28_3 = nullptr
                *arg1 = 0
                
                if (x23 != 0)
                    goto label_10b1218
                
                goto label_10b12d0
            
            x21_2 = arg6
        label_10b120c:
            
            if (x23 == 0)
            label_10b12d0:
                
                if (x28_3 == 0)
                    *x21_2 |= 2
            else
            label_10b1218:
                int32_t x0_16
                
                if (x23[3] == x23[4])
                    x0_16 = (*(*x23 + 0x48))(x23)
                
                if (x23[3] == x23[4] && x0_16 == 0xffffffff)
                    goto label_10b12d0
                
                if (x28_3 != 0)
                    *x21_2 |= 2
            
            if (result_1 == result)
            label_10b1270:
                *x21_2 |= 4
                
                if (x19 != 0)
                    free(x19)
            else
                while (zx.d(*x26) != 2)
                    result_1 = &result_1[0x18]
                    x26 = &x26[1]
                    
                    if (result == result_1)
                        goto label_10b1270
                
                result = result_1
                
                if (x19 != 0)
                    free(x19)
            
            if (*(x22 + 0x28) != x9)
                __stack_chk_fail()
                noreturn
            
            return result
        
        char* x8_10 = x28_3[3]
        uint32_t x28_1
        
        if (x8_10 == x28_3[4])
            x28_1 = (*(*x28_3 + 0x48))(x28_3)
            
            if ((arg7 & 1) == 0)
                x28_1 = (*(*arg5 + 0x18))(arg5, zx.q(x28_1))
        else
            x28_1 = zx.d(*x8_10)
            
            if ((arg7 & 1) == 0)
                x28_1 = (*(*arg5 + 0x18))(arg5, zx.q(x28_1))
        
        x21_1 += 1
        
        if (result_1 == result)
            continue
        
        char* result_4 = result_1
        char* x19_1 = x26
        int32_t var_e4_1 = 0
        
        do
            if (zx.d(*x19_1) == 1)
                void* x8_19
                
                if ((zx.d(*result_4) & 1) != 0)
                    x8_19 = *(result_4 + 0x10)
                else
                    x8_19 = &result_4[1]
                
                char x1_1 = *(x8_19 + x21_1 - 1)
                
                if ((arg7 & 1) == 0)
                    x1_1 = (*(*arg5 + 0x18))()
                
                if ((x28_1 & 0xff) != zx.d(x1_1))
                    bytes -= 1
                    *x19_1 = 0
                else
                    uint64_t x8_25 = zx.q(*result_4)
                    
                    if ((x8_25.d & 1) != 0)
                        if (*(result_4 + 8) == x21_1)
                        label_10b1114:
                            *x19_1 = 2
                            bytes -= 1
                            var_e0_1 += 1
                    else if (x8_25 u>> 1 == x21_1)
                        goto label_10b1114
                    
                    var_e4_1 = 1
            
            result_4 = &result_4[0x18]
            x19_1 = &x19_1[1]
        while (result != result_4)
        
        x19 = var_f8
        x28 = var_e0_1
        
        if ((var_e4_1 & 1) == 0)
            break
        
        int64_t* x0_12 = *arg1
        int64_t x8_31 = x0_12[3]
        
        if (x8_31 == x0_12[4])
            (*(*x0_12 + 0x50))()
        else
            x0_12[3] = x8_31 + 1
        
        char* result_2 = result_1
        char* x9_6 = x26
        
        if (x28 + bytes u< 2)
            break
        
        do
            if (zx.d(*x9_6) == 2)
                uint64_t x10_2 = zx.q(*result_2)
                
                if ((x10_2.d & 1) != 0)
                    if (*(result_2 + 8) != x21_1)
                        x28 -= 1
                        *x9_6 = 0
                else if (x10_2 u>> 1 != x21_1)
                    x28 -= 1
                    *x9_6 = 0
            
            result_2 = &result_2[0x18]
            x9_6 = &x9_6[1]
        while (result != result_2)
        
        break
