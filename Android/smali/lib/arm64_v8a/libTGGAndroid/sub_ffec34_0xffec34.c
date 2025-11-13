// 函数: sub_ffec34
// 地址: 0xffec34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x9 = *(arg1 + 0xb8)
void* x8 = *(arg1 + 0xc0)
int64_t result
void* x10_1

if (x9 u< x8)
    x10_1 = &x9[1]
    *(arg1 + 0xb8) = x10_1
    
    if (zx.d(*x9) == 0x42)
    label_ffeccc:
        
        if (x10_1 u< x8)
            *(arg1 + 0xb8) = x10_1 + 1
            
            if (zx.d(*x10_1) != 0x4d)
                result = 0
                data_2423720 = "not BMP"
            else
            label_ffed2c:
                sub_ffea38(arg1)
                void* x9_6 = *(arg1 + 0xb8)
                void* x8_10 = *(arg1 + 0xc0)
                
                if (x9_6 u< x8_10)
                    x9_6 += 1
                    *(arg1 + 0xb8) = x9_6
                else if (arg1[0xc] != 0)
                    int32_t x0_6 = (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
                    
                    if (x0_6 == 0)
                        arg1[0xc] = 0
                        x8_10 = arg1 + 0x39
                        arg1[0xe].b = 0
                    else
                        x8_10 = arg1 + sx.q(x0_6) + 0x38
                    
                    x9_6 = arg1 + 0x39
                    *(arg1 + 0xc0) = x8_10
                    *(arg1 + 0xb8) = x9_6
                
                if (x9_6 u< x8_10)
                    x9_6 += 1
                    *(arg1 + 0xb8) = x9_6
                else if (arg1[0xc] != 0)
                    int32_t x0_8 = (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
                    
                    if (x0_8 == 0)
                        arg1[0xc] = 0
                        x8_10 = arg1 + 0x39
                        arg1[0xe].b = 0
                    else
                        x8_10 = arg1 + sx.q(x0_8) + 0x38
                    
                    x9_6 = arg1 + 0x39
                    *(arg1 + 0xc0) = x8_10
                    *(arg1 + 0xb8) = x9_6
                
                if (x9_6 u< x8_10)
                    x9_6 += 1
                    *(arg1 + 0xb8) = x9_6
                else if (arg1[0xc] != 0)
                    int32_t x0_10 = (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
                    
                    if (x0_10 == 0)
                        arg1[0xc] = 0
                        x8_10 = arg1 + 0x39
                        arg1[0xe].b = 0
                    else
                        x8_10 = arg1 + sx.q(x0_10) + 0x38
                    
                    x9_6 = arg1 + 0x39
                    *(arg1 + 0xc0) = x8_10
                    *(arg1 + 0xb8) = x9_6
                
                if (x9_6 u< x8_10)
                    *(arg1 + 0xb8) = x9_6 + 1
                else if (arg1[0xc] != 0)
                    int32_t x0_12 = (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
                    void* x8_21
                    
                    if (x0_12 == 0)
                        arg1[0xc] = 0
                        x8_21 = arg1 + 0x39
                        arg1[0xe].b = 0
                    else
                        x8_21 = arg1 + sx.q(x0_12) + 0x38
                    
                    *(arg1 + 0xc0) = x8_21
                    *(arg1 + 0xb8) = arg1 + 0x39
                
                arg2[1] = sub_ffea38(arg1)
                int32_t x0_16 = sub_ffea38(arg1)
                arg2[2] = x0_16
                *(arg2 + 0x14) = 0
                *(arg2 + 0xc) = 0
                void* x8_22
                void* x9_8
                
                if (x0_16 s<= 0x37)
                    if (x0_16 != 0xc)
                        if (x0_16 == 0x28)
                            goto label_ffef14
                        
                        goto label_ffef74
                    
                    x9_8 = *(arg1 + 0xb8)
                    x8_22 = *(arg1 + 0xc0)
                    uint32_t x22_2
                    
                    if (x9_8 u< x8_22)
                        *(arg1 + 0xb8) = x9_8 + 1
                        x22_2 = zx.d(*x9_8)
                        x9_8 += 1
                    else if (arg1[0xc] == 0)
                        x22_2 = 0
                    else
                        int32_t x0_22 =
                            (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
                        
                        if (x0_22 == 0)
                            x22_2 = 0
                            arg1[0xc] = 0
                            x8_22 = arg1 + 0x39
                            arg1[0xe].b = 0
                        else
                            x22_2 = zx.d(arg1[0xe].b)
                            x8_22 = &arg1[0xe + sx.q(x0_22)]
                        
                        x9_8 = arg1 + 0x39
                        *(arg1 + 0xb8) = x9_8
                        *(arg1 + 0xc0) = x8_22
                    
                    uint32_t x10_11
                    
                    if (x9_8 u>= x8_22)
                        x10_11 = arg1[0xc]
                        
                        if (x10_11 != 0)
                            int32_t x0_24 =
                                (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
                            
                            if (x0_24 == 0)
                                x10_11 = 0
                                arg1[0xc] = 0
                                x8_22 = arg1 + 0x39
                                arg1[0xe].b = 0
                            else
                                x10_11 = zx.d(arg1[0xe].b)
                                x8_22 = &arg1[0xe + sx.q(x0_24)]
                            
                            x9_8 = arg1 + 0x39
                            *(arg1 + 0xb8) = x9_8
                            *(arg1 + 0xc0) = x8_22
                    else
                        *(arg1 + 0xb8) = x9_8 + 1
                        x10_11 = zx.d(*x9_8)
                        x9_8 += 1
                    
                    *arg1 = (0xffff00ff & x22_2) | (0xff & x10_11) << 8
                    uint32_t x22_4
                    
                    if (x9_8 u< x8_22)
                        *(arg1 + 0xb8) = x9_8 + 1
                        x22_4 = zx.d(*x9_8)
                        x9_8 += 1
                    else if (arg1[0xc] == 0)
                        x22_4 = 0
                    else
                        int32_t x0_26 =
                            (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
                        
                        if (x0_26 == 0)
                            x22_4 = 0
                            arg1[0xc] = 0
                            x8_22 = arg1 + 0x39
                            arg1[0xe].b = 0
                        else
                            x22_4 = zx.d(arg1[0xe].b)
                            x8_22 = &arg1[0xe + sx.q(x0_26)]
                        
                        x9_8 = arg1 + 0x39
                        *(arg1 + 0xb8) = x9_8
                        *(arg1 + 0xc0) = x8_22
                    
                    uint32_t x10_14
                    
                    if (x9_8 u>= x8_22)
                        x10_14 = arg1[0xc]
                        
                        if (x10_14 != 0)
                            int32_t x0_28 =
                                (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
                            
                            if (x0_28 == 0)
                                x10_14 = 0
                                arg1[0xc] = 0
                                x8_22 = arg1 + 0x39
                                arg1[0xe].b = 0
                            else
                                x10_14 = zx.d(arg1[0xe].b)
                                x8_22 = &arg1[0xe + sx.q(x0_28)]
                            
                            x9_8 = arg1 + 0x39
                            *(arg1 + 0xb8) = x9_8
                            *(arg1 + 0xc0) = x8_22
                    else
                        *(arg1 + 0xb8) = x9_8 + 1
                        x10_14 = zx.d(*x9_8)
                        x9_8 += 1
                    
                    arg1[1] = (0xffff00ff & x22_4) | (0xff & x10_14) << 8
                    
                    if (x9_8 u< x8_22)
                        goto label_ffef34
                    
                    goto label_fff13c
                
                if (x0_16 != 0x38 && x0_16 != 0x6c && x0_16 != 0x7c)
                label_ffef74:
                    data_2423720 = "unknown BMP"
                    return 0
                
            label_ffef14:
                *arg1 = sub_ffea38(arg1)
                int32_t x0_20 = sub_ffea38(arg1)
                x9_8 = *(arg1 + 0xb8)
                x8_22 = *(arg1 + 0xc0)
                arg1[1] = x0_20
                uint32_t x22_1
                
                if (x9_8 u>= x8_22)
                label_fff13c:
                    
                    if (arg1[0xc] == 0)
                        x22_1 = 0
                        
                        if (x9_8 u< x8_22)
                            goto label_ffef4c
                        
                        goto label_fff198
                    
                    int32_t x0_30 = (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
                    
                    if (x0_30 == 0)
                        x22_1 = 0
                        arg1[0xc] = 0
                        x8_22 = arg1 + 0x39
                        arg1[0xe].b = 0
                    else
                        x22_1 = zx.d(arg1[0xe].b)
                        x8_22 = &arg1[0xe + sx.q(x0_30)]
                    
                    x9_8 = arg1 + 0x39
                    *(arg1 + 0xb8) = x9_8
                    *(arg1 + 0xc0) = x8_22
                    
                    if (x9_8 u< x8_22)
                        goto label_ffef4c
                    
                    goto label_fff198
                
            label_ffef34:
                *(arg1 + 0xb8) = x9_8 + 1
                x22_1 = zx.d(*x9_8)
                x9_8 += 1
                uint32_t x10_8
                
                if (x9_8 u>= x8_22)
                label_fff198:
                    x10_8 = arg1[0xc]
                    
                    if (x10_8 == 0)
                        goto label_fff1cc
                    
                    int32_t x0_32 = (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
                    char x10_16
                    
                    if (x0_32 == 0)
                        x10_16 = 0
                        arg1[0xc] = 0
                        x8_22 = arg1 + 0x39
                        arg1[0xe].b = 0
                    else
                        x10_16 = arg1[0xe].b
                        x8_22 = &arg1[0xe] + sx.q(x0_32)
                    
                    x9_8 = arg1 + 0x39
                    *(arg1 + 0xb8) = x9_8
                    *(arg1 + 0xc0) = x8_22
                    
                    if (((0xffff00ff & x22_1) | zx.d(x10_16) << 8) != 1)
                        goto label_fff4c0
                    
                    goto label_fff200
                
            label_ffef4c:
                *(arg1 + 0xb8) = x9_8 + 1
                x10_8 = zx.d(*x9_8)
                x9_8 += 1
            label_fff1cc:
                
                if (((0xffff00ff & x22_1) | (0xff & x10_8) << 8) != 1)
                label_fff4c0:
                    data_2423720 = "bad BMP"
                    return 0
                
            label_fff200:
                uint32_t x22_8
                
                if (x9_8 u< x8_22)
                    *(arg1 + 0xb8) = x9_8 + 1
                    x22_8 = zx.d(*x9_8)
                    x9_8 += 1
                else if (arg1[0xc] == 0)
                    x22_8 = 0
                else
                    int32_t x0_34 = (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
                    
                    if (x0_34 == 0)
                        x22_8 = 0
                        arg1[0xc] = 0
                        x8_22 = arg1 + 0x39
                        arg1[0xe].b = 0
                    else
                        x22_8 = zx.d(arg1[0xe].b)
                        x8_22 = &arg1[0xe + sx.q(x0_34)]
                    
                    x9_8 = arg1 + 0x39
                    *(arg1 + 0xb8) = x9_8
                    *(arg1 + 0xc0) = x8_22
                
                uint32_t x8_45
                
                if (x9_8 u>= x8_22)
                    x8_45 = arg1[0xc]
                    
                    if (x8_45 != 0)
                        int32_t x0_36 =
                            (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
                        void* x9_12
                        
                        if (x0_36 == 0)
                            x8_45 = 0
                            arg1[0xc] = 0
                            x9_12 = arg1 + 0x39
                            arg1[0xe].b = 0
                        else
                            x8_45 = zx.d(arg1[0xe].b)
                            x9_12 = &arg1[0xe + sx.q(x0_36)]
                        
                        *(arg1 + 0xb8) = arg1 + 0x39
                        *(arg1 + 0xc0) = x9_12
                else
                    *(arg1 + 0xb8) = x9_8 + 1
                    x8_45 = zx.d(*x9_8)
                
                *arg2 = (0xffff00ff & x22_8) | (0xff & x8_45) << 8
                
                if (x0_16 == 0xc)
                    return 1
                
                int32_t x0_39 = sub_ffea38(arg1)
                
                if (x0_39 - 1 u<= 1)
                    data_2423720 = "BMP RLE"
                    return 0
                
                sub_ffea38(arg1)
                sub_ffea38(arg1)
                sub_ffea38(arg1)
                sub_ffea38(arg1)
                sub_ffea38(arg1)
                int32_t x8_48 = x0_16 & 0xffffffef
                
                if (x8_48 == 0x6c)
                    arg2[3] = sub_ffea38(arg1)
                    arg2[4] = sub_ffea38(arg1)
                    arg2[5] = sub_ffea38(arg1)
                    arg2[6] = sub_ffea38(arg1)
                    sub_ffea38(arg1)
                    sub_ffea38(arg1)
                    sub_ffea38(arg1)
                    sub_ffea38(arg1)
                    sub_ffea38(arg1)
                    sub_ffea38(arg1)
                    sub_ffea38(arg1)
                    sub_ffea38(arg1)
                    sub_ffea38(arg1)
                    sub_ffea38(arg1)
                    sub_ffea38(arg1)
                    sub_ffea38(arg1)
                    sub_ffea38(arg1)
                    
                    if (x0_16 == 0x7c)
                        sub_ffea38(arg1)
                        sub_ffea38(arg1)
                        sub_ffea38(arg1)
                        sub_ffea38(arg1)
                    
                    return 1
                
                if (x8_48 != 0x28)
                    goto label_fff4c0
                
                if (x0_16 == 0x38)
                    sub_ffea38(arg1)
                    sub_ffea38(arg1)
                    sub_ffea38(arg1)
                    sub_ffea38(arg1)
                
                int32_t x8_49 = *arg2
                
                if (x8_49 != 0x20 && x8_49 != 0x10)
                    return 1
                
                if (x0_39 != 3)
                    if (x0_39 != 0)
                        goto label_fff4c0
                    
                    if (x8_49 != 0x20)
                        arg2[5] = 0x1f
                        *(arg2 + 0xc) = 0x3e000007c00
                    else
                        int128_t v0_1 = data_71c930
                        arg2[7] = 0
                        *(arg2 + 0xc) = v0_1
                    
                    return 1
                
                arg2[3] = sub_ffea38(arg1)
                arg2[4] = sub_ffea38(arg1)
                int32_t x0_79 = sub_ffea38(arg1)
                int32_t x10_20 = arg2[3]
                int32_t x9_13 = arg2[4]
                arg2[5] = x0_79
                result = 1
                
                if (x10_20 == x9_13 && x9_13 == x0_79)
                    goto label_fff4c0
        else if (arg1[0xc] == 0)
            result = 0
            data_2423720 = "not BMP"
        else
            int32_t x0_3 = (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
            
            if (x0_3 == 0)
                arg1[0xc] = 0
                arg1[0xe].b = 0
                *(arg1 + 0xb8) = arg1 + 0x39
                *(arg1 + 0xc0) = arg1 + 0x39
                result = 0
                data_2423720 = "not BMP"
            else
                uint32_t x8_9 = zx.d(arg1[0xe].b)
                *(arg1 + 0xb8) = arg1 + 0x39
                *(arg1 + 0xc0) = &arg1[0xe] + sx.q(x0_3)
                
                if (x8_9 == 0x4d)
                    goto label_ffed2c
                
                result = 0
                data_2423720 = "not BMP"
    else
        result = 0
        data_2423720 = "not BMP"
else if (arg1[0xc] == 0)
    result = 0
    data_2423720 = "not BMP"
else
    int32_t x0_1 = (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
    
    if (x0_1 == 0)
        arg1[0xc] = 0
        arg1[0xe].b = 0
        *(arg1 + 0xb8) = arg1 + 0x39
        *(arg1 + 0xc0) = arg1 + 0x39
        result = 0
        data_2423720 = "not BMP"
    else
        uint32_t x9_2 = zx.d(arg1[0xe].b)
        x8 = &arg1[0xe] + sx.q(x0_1)
        x10_1 = arg1 + 0x39
        *(arg1 + 0xb8) = x10_1
        *(arg1 + 0xc0) = x8
        
        if (x9_2 == 0x42)
            goto label_ffeccc
        
        result = 0
        data_2423720 = "not BMP"
return result
