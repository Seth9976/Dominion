// 函数: sub_1001df4
// 地址: 0x1001df4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_b0
__builtin_memset(&var_b0, 0, 0x44)
memset(arg1, 0, 0x400)
int64_t result
int32_t x2
int32_t x4_1

if (arg3 s<= 0)
    x2 = 0
    var_b0.d = 0
    x4_1 = var_b0:8.d
    
    if (x4_1 s>= 5)
        result = 0
        data_2423720 = "bad sizes"
    else
    label_1001e8c:
        int32_t x3_1 = var_b0:0xc.d
        
        if (x3_1 s> 8)
            result = 0
            data_2423720 = "bad sizes"
        else
            int128_t var_a0
            int32_t x1 = var_a0.d
            
            if (x1 s> 0x10)
                result = 0
                data_2423720 = "bad sizes"
            else
                int32_t x0 = var_a0:4.d
                
                if (x0 s> 0x20)
                    result = 0
                    data_2423720 = "bad sizes"
                else
                    int32_t x17_1 = var_a0:8.d
                    
                    if (x17_1 s> 0x40)
                        result = 0
                        data_2423720 = "bad sizes"
                    else
                        int32_t x16_1 = var_a0:0xc.d
                        
                        if (x16_1 s> 0x80)
                            result = 0
                            data_2423720 = "bad sizes"
                        else
                            int128_t var_90
                            int32_t x15_1 = var_90.d
                            
                            if (x15_1 s> 0x100)
                                result = 0
                                data_2423720 = "bad sizes"
                            else
                                int32_t x14_1 = var_90:4.d
                                
                                if (x14_1 s> 0x200)
                                    result = 0
                                    data_2423720 = "bad sizes"
                                else
                                    int32_t x13_1 = var_90:8.d
                                    
                                    if (x13_1 s> 0x400)
                                        result = 0
                                        data_2423720 = "bad sizes"
                                    else
                                        int32_t x12_3 = var_90:0xc.d
                                        
                                        if (x12_3 s> 0x800)
                                            result = 0
                                            data_2423720 = "bad sizes"
                                        else
                                            int128_t var_80
                                            int32_t x11_3 = var_80.d
                                            
                                            if (x11_3 s> 0x1000)
                                                result = 0
                                                data_2423720 = "bad sizes"
                                            else
                                                int32_t x10_2 = var_80:4.d
                                                
                                                if (x10_2 s> 0x2000)
                                                    result = 0
                                                    data_2423720 = "bad sizes"
                                                else
                                                    int32_t x8_1 = var_80:8.d
                                                    
                                                    if (x8_1 s> 0x4000)
                                                        result = 0
                                                        data_2423720 = "bad sizes"
                                                    else
                                                        int32_t x9_1 = var_80:0xc.d
                                                        
                                                        if (x9_1 s<= 0x8000)
                                                            int32_t x6_1 = x2 << 1
                                                            *(arg1 + 0x424) = x2 << 0xf
                                                            int32_t x5_2 = x4_1 + x6_1
                                                            *(arg1 + 0x402) = 0
                                                            *(arg1 + 0x466) = 0
                                                            int32_t var_5c_1 = 0
                                                            int32_t var_58_1 = x6_1
                                                            *(arg1 + 0x404) = x6_1.w
                                                            *(arg1 + 0x468) = x2.w
                                                            
                                                            if (x4_1 != 0 && x5_2 s> 4)
                                                                data_2423720 = "bad codelengths"
                                                                return 0
                                                            
                                                            int32_t x5_3 = x5_2 << 1
                                                            int16_t x2_1 = x4_1.w + x2.w
                                                            int32_t x4_2 = x3_1 + x5_3
                                                            *(arg1 + 0x428) = x5_2 << 0xe
                                                            int32_t var_54_1 = x5_3
                                                            *(arg1 + 0x406) = x5_3.w
                                                            *(arg1 + 0x46a) = x2_1
                                                            
                                                            if (x3_1 != 0 && x4_2 s> 8)
                                                                data_2423720 = "bad codelengths"
                                                                return 0
                                                            
                                                            int32_t x4_3 = x4_2 << 1
                                                            int16_t x2_2 = x3_1.w + x2_1
                                                            int32_t x3_2 = x1 + x4_3
                                                            *(arg1 + 0x42c) = x4_2 << 0xd
                                                            int32_t var_50_1 = x4_3
                                                            *(arg1 + 0x408) = x4_3.w
                                                            *(arg1 + 0x46c) = x2_2
                                                            
                                                            if (x1 != 0 && x3_2 s> 0x10)
                                                                data_2423720 = "bad codelengths"
                                                                return 0
                                                            
                                                            int32_t x3_3 = x3_2 << 1
                                                            int16_t x1_1 = x1.w + x2_2
                                                            int32_t x2_3 = x0 + x3_3
                                                            *(arg1 + 0x430) = x3_2 << 0xc
                                                            int32_t var_4c_1 = x3_3
                                                            *(arg1 + 0x40a) = x3_3.w
                                                            *(arg1 + 0x46e) = x1_1
                                                            
                                                            if (x0 != 0 && x2_3 s> 0x20)
                                                                data_2423720 = "bad codelengths"
                                                                return 0
                                                            
                                                            int32_t x2_4 = x2_3 << 1
                                                            int16_t x0_1 = x0.w + x1_1
                                                            int32_t x1_2 = x17_1 + x2_4
                                                            *(arg1 + 0x434) = x2_3 << 0xb
                                                            int32_t var_48_1 = x2_4
                                                            *(arg1 + 0x40c) = x2_4.w
                                                            *(arg1 + 0x470) = x0_1
                                                            
                                                            if (x17_1 != 0 && x1_2 s> 0x40)
                                                                data_2423720 = "bad codelengths"
                                                                return 0
                                                            
                                                            int32_t x1_3 = x1_2 << 1
                                                            int16_t x17_2 = x17_1.w + x0_1
                                                            int32_t x0_2 = x16_1 + x1_3
                                                            *(arg1 + 0x438) = x1_2 << 0xa
                                                            int32_t var_44_1 = x1_3
                                                            *(arg1 + 0x40e) = x1_3.w
                                                            *(arg1 + 0x472) = x17_2
                                                            
                                                            if (x16_1 != 0 && x0_2 s> 0x80)
                                                                data_2423720 = "bad codelengths"
                                                                return 0
                                                            
                                                            int32_t x0_3 = x0_2 << 1
                                                            int16_t x16_2 = x16_1.w + x17_2
                                                            int32_t x17_3 = x15_1 + x0_3
                                                            *(arg1 + 0x43c) = x0_2 << 9
                                                            int32_t var_40_1 = x0_3
                                                            *(arg1 + 0x410) = x0_3.w
                                                            *(arg1 + 0x474) = x16_2
                                                            
                                                            if (x15_1 != 0 && x17_3 s> 0x100)
                                                                data_2423720 = "bad codelengths"
                                                                return 0
                                                            
                                                            int32_t x17_4 = x17_3 << 1
                                                            int16_t x15_2 = x15_1.w + x16_2
                                                            int32_t x16_3 = x14_1 + x17_4
                                                            *(arg1 + 0x440) = x17_3 << 8
                                                            int32_t var_3c_1 = x17_4
                                                            *(arg1 + 0x412) = x17_4.w
                                                            *(arg1 + 0x476) = x15_2
                                                            
                                                            if (x14_1 != 0 && x16_3 s> 0x200)
                                                                data_2423720 = "bad codelengths"
                                                                return 0
                                                            
                                                            int32_t x16_4 = x16_3 << 1
                                                            int16_t x14_2 = x14_1.w + x15_2
                                                            int32_t x15_3 = x13_1 + x16_4
                                                            *(arg1 + 0x444) = x16_3 << 7
                                                            int32_t var_38_1 = x16_4
                                                            *(arg1 + 0x414) = x16_4.w
                                                            *(arg1 + 0x478) = x14_2
                                                            
                                                            if (x13_1 != 0 && x15_3 s> 0x400)
                                                                data_2423720 = "bad codelengths"
                                                                return 0
                                                            
                                                            int32_t x15_4 = x15_3 << 1
                                                            int16_t x13_2 = x13_1.w + x14_2
                                                            int32_t x14_3 = x12_3 + x15_4
                                                            *(arg1 + 0x448) = x15_3 << 6
                                                            int32_t var_34_1 = x15_4
                                                            *(arg1 + 0x416) = x15_4.w
                                                            *(arg1 + 0x47a) = x13_2
                                                            
                                                            if (x12_3 != 0 && x14_3 s> 0x800)
                                                                data_2423720 = "bad codelengths"
                                                                return 0
                                                            
                                                            int32_t x14_4 = x14_3 << 1
                                                            int16_t x12_4 = x12_3.w + x13_2
                                                            int32_t x13_3 = x11_3 + x14_4
                                                            *(arg1 + 0x44c) = x14_3 << 5
                                                            int32_t var_30_1 = x14_4
                                                            *(arg1 + 0x418) = x14_4.w
                                                            *(arg1 + 0x47c) = x12_4
                                                            
                                                            if (x11_3 != 0 && x13_3 s> 0x1000)
                                                                data_2423720 = "bad codelengths"
                                                                return 0
                                                            
                                                            int32_t x13_4 = x13_3 << 1
                                                            int16_t x11_4 = x11_3.w + x12_4
                                                            int32_t x12_5 = x10_2 + x13_4
                                                            *(arg1 + 0x450) = x13_3 << 4
                                                            int32_t var_2c_1 = x13_4
                                                            *(arg1 + 0x41a) = x13_4.w
                                                            *(arg1 + 0x47e) = x11_4
                                                            
                                                            if (x10_2 != 0 && x12_5 s> 0x2000)
                                                                data_2423720 = "bad codelengths"
                                                                return 0
                                                            
                                                            int32_t x12_6 = x12_5 << 1
                                                            int16_t x10_3 = x10_2.w + x11_4
                                                            int32_t x11_5 = x8_1 + x12_6
                                                            *(arg1 + 0x454) = x12_5 << 3
                                                            int32_t var_28_1 = x12_6
                                                            *(arg1 + 0x41c) = x12_6.w
                                                            *(arg1 + 0x480) = x10_3
                                                            
                                                            if (x8_1 != 0 && x11_5 s> 0x4000)
                                                                data_2423720 = "bad codelengths"
                                                                return 0
                                                            
                                                            int32_t x11_6 = x11_5 << 1
                                                            *(arg1 + 0x458) = x11_5 << 2
                                                            int32_t var_24_1 = x11_6
                                                            *(arg1 + 0x482) = x8_1.w + x10_3
                                                            int32_t x8_3 = x9_1 + x11_6
                                                            *(arg1 + 0x41e) = x11_6.w
                                                            
                                                            if (x9_1 != 0 && x8_3 s> 0x8000)
                                                                data_2423720 = "bad codelengths"
                                                                return 0
                                                            
                                                            *(arg1 + 0x45c) = x8_3 << 1
                                                            *(arg1 + 0x460) = 0x10000
                                                            
                                                            if (arg3 s<= 0)
                                                                return 1
                                                            
                                                            int64_t i = 0
                                                            result = 1
                                                            
                                                            do
                                                                uint64_t x13_6 = zx.q(arg2[i])
                                                                
                                                                if (x13_6 != 0)
                                                                    void* x15_6 = arg1 + (x13_6 << 1)
                                                                    void var_60
                                                                    int32_t x14_7 =
                                                                        *(&var_60 + (x13_6 << 2))
                                                                    int64_t x15_8 = zx.q(*(x15_6 + 0x464))
                                                                        + sx.q(x14_7 - zx.d(*(x15_6 + 0x400)))
                                                                    *(arg1 + x15_8 + 0x484) = (x13_6.d).b
                                                                    *(arg1 + (x15_8 << 1) + 0x5a4) = (i.d).w
                                                                    
                                                                    if (x13_6.d u<= 9)
                                                                        uint32_t j_1 = __rbit(x14_7) u>> 0x10
                                                                            u>> (0x10 - x13_6.d)
                                                                        
                                                                        if (j_1 s<= 0x1ff)
                                                                            uint64_t j = zx.q(j_1)
                                                                            
                                                                            do
                                                                                *(arg1 + (j << 1)) =
                                                                                    i.w | (x13_6.d << 9).w
                                                                                j += sx.q(1 << x13_6.d)
                                                                            while (j s< 0x200)
                                                                    
                                                                    *(&var_60 + (x13_6 << 2)) = x14_7 + 1
                                                                
                                                                i += 1
                                                            while (i != zx.q(arg3))
                                                        else
                                                            result = 0
                                                            data_2423720 = "bad sizes"
else
    uint64_t i_2 = zx.q(arg3)
    char* x10_1 = arg2
    uint64_t i_1
    
    do
        uint64_t x11_1 = zx.q(*x10_1)
        x10_1 = &x10_1[1]
        i_1 = i_2
        i_2 -= 1
        uint64_t x11_2 = x11_1 << 2
        *(&var_b0 + x11_2) += 1
    while (i_1 != 1)
    x2 = var_b0:4.d
    var_b0.d = 0
    
    if (x2 s> 2)
        result = 0
        data_2423720 = "bad sizes"
    else
        x4_1 = var_b0:8.d
        
        if (x4_1 s< 5)
            goto label_1001e8c
        
        result = 0
        data_2423720 = "bad sizes"
return result
