// 函数: sub_fe05bc
// 地址: 0xfe05bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x25 + 0x28)
int32_t x20 = arg5
int32_t var_878
void* result_1 = sub_fea8a4(arg1, arg2, arg3, arg4, arg5, &var_878, 0x10)
void* result = result_1

if (result_1 == 0)
label_fe07c0:
    
    if (*(x25 + 0x28) == x8)
        return result
else
    int32_t x8_1 = var_878
    
    if (x8_1 == 8)
        int32_t x10_1 = x20
        
        if (x20 == 0)
            x10_1 = *arg4
        
        int32_t x26_1 = *arg3 * *arg2 * x10_1
        void* result_2
        uint128_t v0_1
        uint128_t v1_1
        uint128_t v2_1
        result_2, v0_1, v1_1, v2_1 = malloc(sx.q(x26_1 << 1))
        
        if (result_2 == 0)
            data_2423720 = "outofmem"
        else
            if (x26_1 s>= 1)
                uint64_t x8_6 = zx.q(x26_1)
                int64_t i_4
                
                if (x26_1 u>= 0x10)
                    i_4 = x8_6 & 0xfffffff0
                    void* x10_2 = result + 8
                    void* x11_1 = result_2 + 0x10
                    v0_1.b = 1
                    v0_1:1.b = 1
                    v0_1:2.b = 1
                    v0_1:3.b = 1
                    v0_1:4.b = 1
                    v0_1:5.b = 1
                    v0_1:6.b = 1
                    v0_1:7.b = 1
                    v0_1:8.b = 1
                    v0_1:9.b = 1
                    v0_1:0xa.b = 1
                    v0_1:0xb.b = 1
                    v0_1:0xc.b = 1
                    v0_1:0xd.b = 1
                    v0_1:0xe.b = 1
                    v0_1:0xf.b = 1
                    int64_t i_3 = i_4
                    int64_t i
                    
                    do
                        v1_1.q = *(x10_2 - 8)
                        v2_1.q = *x10_2
                        x10_2 += 0x10
                        i = i_3
                        i_3 -= 0x10
                        v1_1.w = zx.w(v1_1.b)
                        v1_1:2.w = zx.w(v1_1:1.b)
                        v1_1:4.w = zx.w(v1_1:2.b)
                        v1_1:6.w = zx.w(v1_1:3.b)
                        v1_1:8.w = zx.w(v1_1:4.b)
                        v1_1:0xa.w = zx.w(v1_1:5.b)
                        v1_1:0xc.w = zx.w(v1_1:6.b)
                        v1_1:0xe.w = zx.w(v1_1:7.b)
                        v2_1.w = zx.w(v2_1.b)
                        v2_1:2.w = zx.w(v2_1:1.b)
                        v2_1:4.w = zx.w(v2_1:2.b)
                        v2_1:6.w = zx.w(v2_1:3.b)
                        v2_1:8.w = zx.w(v2_1:4.b)
                        v2_1:0xa.w = zx.w(v2_1:5.b)
                        v2_1:0xc.w = zx.w(v2_1:6.b)
                        v2_1:0xe.w = zx.w(v2_1:7.b)
                        v1_1 = vmulq_s16(v1_1, v0_1)
                        v2_1 = vmulq_s16(v2_1, v0_1)
                        *(x11_1 - 0x10) = v1_1
                        *x11_1 = v2_1
                        x11_1 += 0x20
                    while (i != 0x10)
                    
                    if (i_4 != x8_6)
                        goto label_fe06d0
                else
                    i_4 = 0
                label_fe06d0:
                    int64_t i_2 = x8_6 - i_4
                    uint16_t* x10_3 = result_2 + (i_4 << 1)
                    char* x9_2 = result + i_4
                    int64_t i_1
                    
                    do
                        char x11_2 = *x9_2
                        x9_2 = &x9_2[1]
                        i_1 = i_2
                        i_2 -= 1
                        *x10_3 = zx.w(x11_2) | (zx.d(x11_2) << 8).w
                        x10_3 = &x10_3[1]
                    while (i_1 != 1)
            
            free(result)
        
        result = result_2
        var_878 = 0x10
        
        if (data_2423710 == 0)
            goto label_fe07c0
        
        goto label_fe0710
    
    if (x8_1 == 0x10)
        if (data_2423710 == 0)
            goto label_fe07c0
        
    label_fe0710:
        
        if (x20 == 0)
            x20 = *arg4
        
        int32_t x23_1 = *arg3
        
        if (x23_1 s>= 2)
            size_t x24_2 = sx.q(x20 << 1) * sx.q(*arg2)
            
            if (x24_2 != 0)
                int32_t x8_9 = x23_1 s>> 1
                int64_t x26_2 = 0
                uint64_t x27_1
                
                if (x8_9 s> 1)
                    x27_1 = zx.q(x8_9)
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
        
        goto label_fe07c0
    
    __assert2("C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image.h", 0x45e, 
        "stbi__uint16 *stbi__load_and_postprocess_16bit(stbi__context *, int *, int *, int *, int)", 
        "ri.bits_per_channel == 8")

__stack_chk_fail()
noreturn
