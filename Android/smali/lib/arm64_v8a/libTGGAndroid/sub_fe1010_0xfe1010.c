// 函数: sub_fe1010
// 地址: 0xfe1010
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x25 + 0x28)
int32_t x21 = arg5
float* x19_1

if (sub_fe1748(arg1) != 0)
    float* x0_2 = sub_ff0cb0(arg1, arg2, arg3, arg4, x21)
    x19_1 = x0_2
    
    if (x0_2 != 0 && data_2423710 != 0)
        if (x21 == 0)
            x21 = *arg4
        
        int32_t x23_1 = *arg3
        
        if (x23_1 s>= 2)
            size_t x24_1 = sx.q(x21 << 2) * sx.q(*arg2)
            
            if (x24_1 != 0)
                int32_t x8_3 = x23_1 s>> 1
                int64_t x26_1 = 0
                uint64_t x27_1
                
                if (x8_3 s> 1)
                    x27_1 = zx.q(x8_3)
                else
                    x27_1 = 1
                
                do
                    int64_t x20_1 = x19_1 + x26_1 * x24_1
                    int64_t x21_1 = x19_1 + x24_1 * sx.q(x23_1 + not.d(x26_1.d))
                    size_t fp_1 = x24_1
                    size_t x22_1
                    size_t temp0_1
                    
                    do
                        x22_1 = fp_1 u< 0x800 ? fp_1 : 0x800
                        
                        void var_878
                        memcpy(&var_878, x20_1, x22_1)
                        memcpy(x20_1, x21_1, x22_1)
                        memcpy(x21_1, &var_878, x22_1)
                        x20_1 += x22_1
                        temp0_1 = fp_1
                        fp_1 -= x22_1
                        x21_1 += x22_1
                    while (temp0_1 != x22_1)
                    x26_1 += 1
                while (x26_1 != x27_1)
    
    goto label_fe12cc

char* x0_7 = sub_fe0280(arg1, arg2, arg3, arg4, x21)
char const* const x9_4

if (x0_7 == 0)
    x19_1 = nullptr
    x9_4 = "unknown image type"
label_fe12c0:
    data_2423720 = x9_4
label_fe12cc:
    
    if (*(x25 + 0x28) == x8)
        return x19_1
else
    int32_t x8_7 = *arg2
    int32_t x9_3 = *arg3
    
    if (x21 != 0)
        if (((x9_3 | x8_7) & 0x80000000) == 0 && (x9_3 == 0 || 0x7fffffff s/ x9_3 s>= x8_7))
            goto label_fe119c
        
        goto label_fe12ac
    
    x21 = *arg4
    
    if (((x9_3 | x8_7) & 0x80000000) != 0 || (x9_3 != 0 && 0x7fffffff s/ x9_3 s< x8_7))
    label_fe12ac:
        free(x0_7)
        x19_1 = nullptr
        x9_4 = "outofmem"
        goto label_fe12c0
    
label_fe119c:
    int32_t x24_2 = x9_3 * x8_7
    
    if (((x21 | x24_2) & 0x80000000) != 0)
        goto label_fe12ac
    
    if (x21 == 0)
        if ((x21 * x24_2) u>> 0x1d != 0)
            goto label_fe12ac
        
        goto label_fe11d4
    
    if (0x7fffffff s/ x21 s< x24_2 || (x21 * x24_2) u>> 0x1d != 0)
        goto label_fe12ac
    
label_fe11d4:
    float* x0_9
    float v0_1
    float v1_1
    float y
    float x
    x0_9, v0_1, v1_1, y, x = malloc(sx.q((x24_2 * x21) << 2))
    
    if (x0_9 == 0)
        goto label_fe12ac
    
    if (x24_2 s>= 1)
        int64_t x15_1 = sx.q(x21)
        uint64_t x9_5 = zx.q(x24_2)
        
        if (x21 + (x21 & 1) - 1 s> 0)
            v8.d = data_11bd288
            v9.d = data_11bd28c
            uint64_t i_6 = zx.q(x21 + (x21 & 1) - 1)
            int64_t x24_3 = 0
            uint64_t i_7 = i_6
            int64_t var_888_1 = x15_1
            
            if (x21 + (x21 & 1) - 1 s>= x21)
                char* x28_2 = x0_7
                float* fp_3 = x0_9
                
                do
                    char* x23_3 = x28_2
                    float* x22_3 = fp_3
                    uint64_t i
                    
                    do
                        uint32_t x8_21 = zx.d(*x23_3)
                        x23_3 = &x23_3[1]
                        v0_1, y, x = powf(float.s(x8_21) / float.s(0x437f0000), v8.d, y, x)
                        i = i_6
                        i_6 -= 1
                        *x22_3 = v9.d f* v0_1
                        x22_3 = &x22_3[1]
                    while (i != 1)
                    x24_3 += 1
                    fp_3 = &fp_3[x15_1]
                    i_6 = i_7
                    x28_2 = &x28_2[var_888_1]
                while (x24_3 != x9_5)
            else
                char* x20_2 = x0_7
                float* x22_2 = x0_9
                
                do
                    int64_t x23_2 = x24_3 * x15_1
                    char* x28_1 = x20_2
                    float* fp_2 = x22_2
                    uint64_t i_1
                    
                    do
                        uint32_t x8_18 = zx.d(*x28_1)
                        x28_1 = &x28_1[1]
                        v0_1, v1_1, y, x = powf(float.s(x8_18) / float.s(0x437f0000), v8.d, y, x)
                        i_1 = i_6
                        i_6 -= 1
                        *fp_2 = v9.d f* v0_1
                        fp_2 = &fp_2[1]
                    while (i_1 != 1)
                    i_6 = i_7
                    x24_3 += 1
                    int64_t x8_19 = x23_2 + i_6
                    v1_1.b = x0_7[x8_19]
                    x22_2 = &x22_2[x15_1]
                    x15_1 = var_888_1
                    x20_2 = &x20_2[x15_1]
                    x0_9[x8_19] = float.s(v1_1) / float.s(0x437f0000)
                while (x24_3 != x9_5)
        else if (x21 s>= 1)
            int64_t i_8
            
            if (x24_2 u>= 2)
                i_8 = x9_5 & 0xfffffffe
                int64_t i_5 = i_8
                char* x13_1 = x0_7
                float* x14_1 = x0_9
                int64_t i_2
                
                do
                    v0_1.b = *x13_1
                    v1_1.b = x13_1[x15_1]
                    y = float.s(0x437f0000)
                    i_2 = i_5
                    i_5 -= 2
                    *x14_1 = float.s(v0_1) / y
                    x14_1[x15_1] = float.s(v1_1) / y
                    x14_1 = &x14_1[x15_1 * 2]
                    x13_1 = &x13_1[x15_1 << 1]
                while (i_2 != 2)
                
                if (i_8 != x9_5)
                    goto label_fe13dc
            else
                i_8 = 0
            label_fe13dc:
                int64_t i_4 = x9_5 - i_8
                int64_t x8_25 = i_8 * x15_1
                int64_t i_3
                
                do
                    v0_1.b = x0_7[x8_25]
                    i_3 = i_4
                    i_4 -= 1
                    x0_9[x8_25] = float.s(v0_1) / float.s(0x437f0000)
                    x8_25 += x15_1
                while (i_3 != 1)
    
    free(x0_7)
    
    if (*(x25 + 0x28) == x8)
        return x0_9
__stack_chk_fail()
noreturn
