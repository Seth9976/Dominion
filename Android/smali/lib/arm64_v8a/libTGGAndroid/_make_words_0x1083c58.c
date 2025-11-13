// 函数: _make_words
// 地址: 0x1083c58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
int64_t x9

x9 = arg3 != 0 ? arg3 : arg2

int64_t result = malloc(x9 << 2)
void var_dc
memset(&var_dc, 0, 0x84)

if (arg2 s< 1)
label_1083dc4:
    int64_t i = 1
    int64_t x9_2 = 0x1f
    
    do
        if ((0xffffffff u>> x9_2 & zx.q(*(&var_dc + (i << 2)))) != 0)
            goto label_1083e68
        
        i += 1
        x9_2 -= 1
    while (i u<= 0x20)
else
    int64_t x8_1 = 0
    int64_t x13_1 = 0
    
    do
        int64_t x10_1 = sx.q(*(arg1 + x8_1))
        
        if (x10_1 s< 1)
            x13_1 += zx.q(arg3 == 0 ? 1 : 0)
        else
            int32_t x12_1 = *(&var_dc + (x10_1 << 2))
            
            if (x10_1.d s<= 0x1f && x12_1 u>> (x10_1.d & 0xffffffff) != 0)
            label_1083e68:
                free(result)
                result = 0
                goto label_1083e78
            
            *(result + (x13_1 << 2)) = x12_1
            void* x13_2 = &var_dc + (x10_1 << 2)
            int64_t x14_1 = x10_1
            
            if ((x12_1 & 1) == 0)
                x14_1 = x10_1
                int32_t x15_1 = x12_1
                
                while (true)
                    *x13_2 = x15_1 + 1
                    
                    if (x14_1 s< 2)
                        break
                    
                    x13_2 -= 4
                    x15_1 = *x13_2
                    x14_1 -= 1
                    
                    if ((x15_1 & 1) != 0)
                        goto label_1083d2c
                
                goto label_1083d40
            
        label_1083d2c:
            
            if (x14_1 != 1)
                *x13_2 = *(&var_dc + (x14_1 << 2) - 4) << 1
                
                if (x10_1.d s<= 0x1f)
                label_1083d9c:
                    
                    do
                        void* x14_5 = &var_dc + (x10_1 << 2)
                        int32_t x13_5 = *(x14_5 + 4)
                        
                        if (x13_5 u>> 1 != x12_1)
                            break
                        
                        int32_t x12_2 = *(&var_dc + (x10_1 << 2))
                        x10_1 += 1
                        *(x14_5 + 4) = x12_2 << 1
                        x12_1 = x13_5
                    while (x10_1 - 1 s< 0x1f)
            else
                int32_t var_d8 = var_d8 + 1
            label_1083d40:
                
                if (x10_1.d s<= 0x1f)
                    goto label_1083d9c
            
            x13_1 += 1
        
        x8_1 += 1
    while (x8_1 s< arg2)
    
    int32_t var_d4
    
    if (x13_1 != 1 || var_d4 != 2)
        goto label_1083dc4

if (arg2 s>= 1)
    int64_t x8_3 = 0
    int64_t x9_3 = 0
    
    do
        int64_t x10_2 = sx.q(*(arg1 + x8_3))
        
        if (x10_2 s< 1)
            if (arg3 == 0 || x10_2.d != 0)
                *(result + (x9_3 << 2)) = 0
                x9_3 += 1
        else
            int32_t x13_6 = 0
            int64_t x14_6 = 0
            int32_t x12_7
            
            do
                uint32_t x12_6 = *(result + (x9_3 << 2)) u>> (x14_6.d & 0xffffffff)
                x14_6 += 1
                x12_7 = (1 & x12_6) | (0x7fffffff & x13_6) << 1
                x13_6 = x12_7
            while (x14_6 s< x10_2)
            
            if (arg3 == 0 || x10_2.d != 0)
                *(result + (x9_3 << 2)) = x12_7
                x9_3 += 1
        
        x8_3 += 1
    while (x8_3 != arg2)

label_1083e78:

if (*(x23 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
