// 函数: sub_fe0280
// 地址: 0xfe0280
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x25 + 0x28)
int32_t x20 = arg5
int32_t var_878
void* result_1 = sub_fea8a4(arg1, arg2, arg3, arg4, arg5, &var_878, 8)
void* result = result_1

if (result_1 == 0)
label_fe0460:
    
    if (*(x25 + 0x28) == x8)
        return result
else
    int32_t x8_1 = var_878
    
    if (x8_1 == 8)
    label_fe03b0:
        
        if (data_2423710 == 0)
            goto label_fe0460
        
        if (x20 == 0)
            x20 = *arg4
        
        int32_t x23_1 = *arg3
        
        if (x23_1 s>= 2)
            size_t x24_2 = sx.q(*arg2) * sx.q(x20)
            
            if (x24_2 != 0)
                int32_t x8_7 = x23_1 s>> 1
                int64_t x26_2 = 0
                uint64_t x27_1
                
                if (x8_7 s> 1)
                    x27_1 = zx.q(x8_7)
                else
                    x27_1 = 1
                
                do
                    int64_t x20_1 = result + x26_2 * x24_2
                    int64_t x21_1 = result + x24_2 * sx.q(x23_1 + not.d(x26_2.d))
                    size_t fp_1 = x24_2
                    size_t x22_1
                    size_t temp2_1
                    
                    do
                        x22_1 = fp_1 u< 0x800 ? fp_1 : 0x800
                        
                        void var_868
                        memcpy(&var_868, x20_1, x22_1)
                        memcpy(x20_1, x21_1, x22_1)
                        memcpy(x21_1, &var_868, x22_1)
                        x20_1 += x22_1
                        temp2_1 = fp_1
                        fp_1 -= x22_1
                        x21_1 += x22_1
                    while (temp2_1 != x22_1)
                    x26_2 += 1
                while (x26_2 != x27_1)
        
        goto label_fe0460
    
    if (x8_1 == 0x10)
        int32_t x10_1 = x20
        
        if (x20 == 0)
            x10_1 = *arg4
        
        int32_t x26_1 = *arg3 * *arg2 * x10_1
        void* result_2
        uint128_t v0_1
        uint128_t v1_1
        result_2, v0_1, v1_1 = malloc(sx.q(x26_1))
        
        if (result_2 == 0)
            data_2423720 = "outofmem"
        else
            if (x26_1 s>= 1)
                uint64_t x8_4 = zx.q(x26_1)
                int64_t i_4
                
                if (x26_1 u>= 0x10)
                    i_4 = x8_4 & 0xfffffff0
                    void* x10_2 = result + 0x10
                    void* x11_1 = result_2 + 8
                    int64_t i_3 = i_4
                    int64_t i
                    
                    do
                        v0_1 = *(x10_2 - 0x10)
                        v1_1 = *x10_2
                        x10_2 += 0x20
                        i = i_3
                        i_3 -= 0x10
                        v0_1 = vshrn_n_u16(v0_1, 8)
                        v1_1 = vshrn_n_u16(v1_1, 8)
                        *(x11_1 - 8) = v0_1.q
                        *x11_1 = v1_1.q
                        x11_1 += 0x10
                    while (i != 0x10)
                    
                    if (i_4 != x8_4)
                        goto label_fe0374
                else
                    i_4 = 0
                label_fe0374:
                    int64_t i_2 = x8_4 - i_4
                    char* x10_3 = result_2 + i_4
                    void* x9_2 = result + (i_4 << 1)
                    int64_t i_1
                    
                    do
                        char x11_2 = *(x9_2 + 1)
                        i_1 = i_2
                        i_2 -= 1
                        x9_2 += 2
                        *x10_3 = x11_2
                        x10_3 = &x10_3[1]
                    while (i_1 != 1)
            
            free(result)
        
        result = result_2
        var_878 = 8
        goto label_fe03b0
    
    __assert2("C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image.h", 0x446, 
        "unsigned char *stbi__load_and_postprocess_8bit(stbi__context *, int *, int *, int *, int)", 
        "ri.bits_per_channel == 16")

__stack_chk_fail()
noreturn
