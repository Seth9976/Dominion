// 函数: vorbis_bitrate_addblock
// 地址: 0x1095690
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

double v8
double var_70 = v8
void* x8 = *(arg1 + 0x68)
void* x25 = *(arg1 + 0xb8)
void* x20 = *(x8 + 0x88)
void* x26 = *(*(x8 + 8) + 0x30)
uint32_t x27 = vcvtd_s32_f64(vrndx_f64(*(x20 + 0xc8)))
int64_t x0_1 = oggpack_bytes(*(x25 + (sx.q(x27) << 3) + 0x10))
int64_t x9 = *(arg1 + 0x38)
int64_t x8_2 = *(x20 + 0xb0)
int64_t var_68
int64_t x21
void* x24_1

if (x9 != 0)
    x24_1 = x20 + 0xb8
    int64_t x11_1 = *(x24_1 + 8)
    x21 = *x24_1 * x11_1
    var_68 = x11_1 * x8_2
    
    if (*(x20 + 0x90) == 0)
        goto label_10957e8
    
    goto label_1095718

x24_1 = x20 + 0xb8
x21 = *x24_1
var_68 = x8_2
int64_t result

if (*(x20 + 0x90) != 0)
label_1095718:
    int64_t x19_1 = *(x20 + 0xa8)
    int64_t x10_2 = *(x26 + (x9 << 3))
    int64_t x28_1 = x0_1 << 3
    uint64_t x11_2 = vcvtd_s64_f64(*(x26 + 0x1560) * float.d(*(x26 + 0x1558)))
    *(x20 + 0xd0) = arg1
    
    if (x19_1 s>= 1)
        int64_t x22_1 = sx.q(x27)
        uint64_t x11_3 = x10_2 u>> 1
        
        if (x9 != 0)
            x19_1 *= *(x20 + 0xc0)
        
        int64_t x8_4 = *(x20 + 0x98)
        int64_t x9_2 = x8_4 + x28_1 - x19_1
        v8 = fconvert.d(15.0) / *(x26 + 0x1568)
        uint64_t x28_2
        
        if (x9_2 s<= x11_2)
            if (x9_2 s< x11_2 && x28_1 s< x19_1 && x27 s<= 0xd && x28_1 - x19_1 + x8_4 s< x11_2)
                x28_2 = x11_3
                
                while (true)
                    int64_t x8_13 = oggpack_bytes(*(x25 + (x22_1 << 3) + 0x18)) << 3
                    
                    if (x8_13 s>= x19_1 || x22_1 s> 0xc)
                        x27 = x22_1.d + 1
                        break
                    
                    x22_1 += 1
                    
                    if (x8_13 - x19_1 + *(x20 + 0x98) s>= x11_2)
                        goto label_1095854
                    
                    continue
                
                x11_3 = x28_2
        else if (x28_1 s> x19_1 && x27 s>= 1)
            x28_2 = x11_3
            
            if (x28_1 - x19_1 + x8_4 s<= x11_2)
            label_1095854:
                x27 = x22_1.d
            else
                while (true)
                    int64_t x8_7 = oggpack_bytes(*(x25 + (x22_1 << 3) + 8)) << 3
                    
                    if (x8_7 s<= x19_1 || x22_1 s< 2)
                        x27 = x22_1.d - 1
                        break
                    
                    x22_1 -= 1
                    
                    if (x8_7 - x19_1 + *(x20 + 0x98) s<= x11_2)
                        goto label_1095854
                    
                    continue
            
            x11_3 = x28_2
        double v1_1 = *(x20 + 0xc8)
        double v3_1 = float.d(sx.q(x11_3.d))
        double v2_1 = float.d(v2_1)
        double temp0_6 = vfma_f64(v1_1, 
            vminnm_f64(vmaxnm_f64(vrndx_f64(float.d(sx.q(x27)) - v1_1) / v3_1 * v2_1, fneg(v8)), v8)
                / v2_1, 
            v3_1)
        *(x20 + 0xc8) = temp0_6
        x27 = vcvtd_s32_f64(vrndx_f64(temp0_6))
        int64_t x0_7 = oggpack_bytes(*(x25 + (sx.q(x27) << 3) + 0x10))
        x8_2 = *(x20 + 0xb0)
        x28_1 = x0_7 << 3
    
    if (x28_1 s< var_68 && x8_2 s>= 1 && x28_1 - var_68 + *(x20 + 0xa0) s< 0)
        int64_t x8_18 = sx.q(x27)
        uint32_t x9_9 = x27 + 1
        
        do
            x27 = x9_9
            
            if (x8_18 s> 0xd)
                break
            
            x28_1 = oggpack_bytes(*(x25 + (x8_18 << 3) + 0x18)) << 3
            x9_9 = x27 + 1
            x8_18 += 1
        while (x28_1 - var_68 + *(x20 + 0xa0) s< 0)
    
    if (x28_1 s> x21 && *x24_1 s>= 1 && x28_1 - x21 + *(x20 + 0xa0) s> *(x26 + 0x1558))
        int64_t x8_22 = sx.q(x27)
        uint32_t x9_14 = x27 - 1
        
        do
            x27 = x9_14
            
            if (x8_22 s< 1)
                break
            
            x28_1 = oggpack_bytes(*(x25 + (x8_22 << 3) + 8)) << 3
            x9_14 = x27 - 1
            x8_22 -= 1
        while (x28_1 - x21 + *(x20 + 0xa0) s> *(x26 + 0x1558))
    
    if ((x27 & 0x80000000) != 0)
        int64_t x8_30 = *(x26 + 0x1558)
        int64_t x9_21 = *(x20 + 0xa0)
        *(x20 + 0xd8) = 0
        int64_t x8_32 = x8_30 + x21 - x9_21
        int64_t x8_33
        
        if (x8_32 s< 0)
            x8_33 = x8_32 + 7
        else
            x8_33 = x8_32
        
        int64_t x19_6 = x8_33 s>> 3
        
        if (oggpack_bytes(*(x25 + 0x10)) s> x19_6)
            oggpack_writetrunc(*(x25 + 0x10), x19_6 << 3)
            x28_1 = oggpack_bytes(*(x25 + 0x10)) << 3
    else
        int64_t x8_27 = var_68 + 7 - *(x20 + 0xa0)
        int64_t x8_28
        
        if (x8_27 s< 0)
            x8_28 = x8_27 + 7
        else
            x8_28 = x8_27
        
        uint32_t x9_18
        
        x9_18 = x27 s< 0xe ? x27 : 0xe
        
        *(x20 + 0xd8) = x9_18
        int64_t x22_2 = x8_28 s>> 3
        int64_t x0_13 = oggpack_bytes(*(x25 + (sx.q(x9_18) << 3) + 0x10))
        int64_t x0_14 = *(x25 + (sx.q(x9_18) << 3) + 0x10)
        
        if (x22_2 - x0_13 s>= 1)
            int64_t i = x22_2 + 1 - x0_13
            
            do
                oggpack_write()
                x0_14 = *(x25 + (sx.q(x9_18) << 3) + 0x10)
                i -= 1
            while (i s> 1)
        
        x28_1 = oggpack_bytes(x0_14) << 3
    
    if (*(x20 + 0xb0) s> 0 || *x24_1 s>= 1)
        int64_t x8_36
        
        if (x21 s>= 1)
            x8_36 = x28_1 - x21
        
        if ((x21 s< 1 || x28_1 s<= x21) && var_68 s>= 1)
            x8_36 = x28_1 - var_68
        
        uint64_t x8_37
        
        if ((x21 s< 1 || x28_1 s<= x21) && (var_68 s< 1 || x28_1 s>= var_68))
            int64_t x8_41 = *(x20 + 0xa0)
            
            if (x8_41 s<= x11_2)
                if (var_68 s< 1)
                    x8_37 = x11_2
                else
                    uint64_t x8_43 = x8_41 + x28_1 - var_68
                    
                    x8_37 = x8_43 s> x11_2 ? x11_2 : x8_43
            else if (x21 s< 1)
                x8_37 = x11_2
            else
                uint64_t x8_42 = x8_41 + x28_1 - x21
                
                x8_37 = x8_42 s< x11_2 ? x11_2 : x8_42
        else
            x8_37 = x8_36 + *(x20 + 0xa0)
        
        *(x20 + 0xa0) = x8_37
    
    int64_t x8_38 = *(x20 + 0xa8)
    
    if (x8_38 s< 1)
        return 0
    
    if (*(arg1 + 0x38) != 0)
        x8_38 *= *(x20 + 0xc0)
    
    result = 0
    *(x20 + 0x98) += x28_1 - x8_38
else
label_10957e8:
    
    if (*(x20 + 0xd0) != 0)
        return 0xffffffff
    
    result = 0
    *(x20 + 0xd0) = arg1

return result
