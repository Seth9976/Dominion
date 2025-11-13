// 函数: _Z16ImageRotationUVS13ImageRotationPfS0_ii
// 地址: 0xfcfed8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1.d u> 7)
    pthread_kill(pthread_self(), 6)
    int64_t x0_6
    int32_t* x1_5
    int32_t* x2_5
    int32_t x3
    int32_t x4
    x0_6, x1_5, x2_5, x3, x4 = XNoReturn()
    return ImageRotationUVS(x0_6, x1_5, x2_5, x3, x4) __tailcall

int32_t var_50[0x4]
uint64_t x22_3
float v1

switch (arg1.d)
    case 1
        int32_t x24_1 = arg4 - 1
        
        if (arg4 s>= 1)
            uint64_t x23_1 = zx.q(arg4)
            int128_t v0_1
            int128_t v1_1
            arg1, v0_1, v1_1 = memcpy(&var_50, arg2, x23_1 << 2)
            int64_t i_28
            
            if (arg4 u< 8 || (&arg3[x23_1] u> arg2 && &arg2[x23_1] u> arg3))
                i_28 = 0
            label_fcff60:
                int64_t i_20 = x23_1 - i_28
                void* x8_3 = &arg2[i_28]
                void* x10_2 = &arg3[i_28]
                int64_t i
                
                do
                    v0_1.d = *x10_2
                    x10_2 += 4
                    i = i_20
                    i_20 -= 1
                    *x8_3 = v0_1.d
                    x8_3 += 4
                while (i != 1)
            else
                i_28 = x23_1 & 0xfffffff8
                void* x9_19 = &arg3[4]
                void* x10_13 = &arg2[4]
                int64_t i_26 = i_28
                int64_t i_1
                
                do
                    v0_1 = *(x9_19 - 0x10)
                    v1_1 = *x9_19
                    x9_19 += 0x20
                    i_1 = i_26
                    i_26 -= 8
                    *(x10_13 - 0x10) = v0_1
                    *x10_13 = v1_1
                    x10_13 += 0x20
                while (i_1 != 8)
                
                if (i_28 != x23_1)
                    goto label_fcff60
            int64_t i_29
            
            if (arg4 u>= 4)
                i_29 = 0
                
                if (x24_1 - (x23_1 - 1).d s> x24_1 || (x23_1 - 1) u>> 0x20 != 0)
                    goto label_fd0278
                
                i_29 = x23_1 & 0xfffffffc
                void* x9_15 = &arg3[2]
                int64_t i_24 = i_29
                int64_t i_2
                
                do
                    void* x12_1 = &var_50[sx.q(x24_1)]
                    v0_1.q = *(x12_1 - 4)
                    v1_1.q = *(x12_1 - 0xc)
                    i_2 = i_24
                    i_24 -= 4
                    x24_1 -= 4
                    v0_1 = vrev64_s32(v0_1)
                    v1_1 = vrev64_s32(v1_1)
                    *(x9_15 - 8) = v0_1.q
                    *x9_15 = v1_1.q
                    x9_15 += 0x10
                while (i_2 != 4)
                
                if (i_29 != x23_1)
                    goto label_fd0278
            else
                i_29 = 0
            label_fd0278:
                int64_t i_3 = x23_1 - i_29
                void* x10_11 = &arg3[i_29]
                int32_t x8_23 = not.d(i_29.d) + arg4
                
                do
                    v0_1.d = var_50[sx.q(x8_23)]
                    i_3 -= 1
                    x8_23 -= 1
                    *x10_11 = v0_1.d
                    x10_11 += 4
                while (i_3 != 0)
    case 2
        if (arg4 s>= 2)
            uint64_t i_16 = zx.q(arg4 u>> 1)
            int32_t x9_1 = arg4 - 1
            float* x10_3 = arg2
            uint64_t i_4
            
            do
                int64_t x11_1 = zx.q(x9_1) << 0x20 s>> 0x1e
                v1 = *x10_3
                i_4 = i_16
                i_16 -= 1
                x9_1 -= 1
                *x10_3 = *(arg2 + x11_1)
                x10_3 = &x10_3[1]
                *(arg2 + x11_1) = v1
            while (i_4 != 1)
        
        if (arg5 s>= 2)
            uint64_t i_17 = zx.q(arg5 u>> 1)
            int32_t x9_2 = arg5 - 1
            float* x10_4 = arg3
            uint64_t i_5
            
            do
                int64_t x11_2 = zx.q(x9_2) << 0x20 s>> 0x1e
                v1 = *x10_4
                i_5 = i_17
                i_17 -= 1
                x9_2 -= 1
                *x10_4 = *(arg3 + x11_2)
                x10_4 = &x10_4[1]
                *(arg3 + x11_2) = v1
            while (i_5 != 1)
    case 3
        int32_t x23_2 = arg4 - 1
        
        if (arg4 s>= 1)
            uint64_t x22_2 = zx.q(arg4)
            int128_t v0_2
            int128_t v1_2
            arg1, v0_2, v1_2 = memcpy(&var_50, arg2, x22_2 << 2)
            int64_t i_30
            
            if (arg4 u< 4)
            label_fd0064:
                i_30 = 0
            label_fd0068:
                int64_t i_6 = x22_2 - i_30
                void* x10_5 = &arg2[i_30]
                int32_t x8_10 = not.d(i_30.d) + arg4
                
                do
                    v0_2.d = arg3[sx.q(x8_10)]
                    i_6 -= 1
                    x8_10 -= 1
                    *x10_5 = v0_2.d
                    x10_5 += 4
                while (i_6 != 0)
            else
                i_30 = 0
                
                if (x23_2 - (x22_2 - 1).d s> x23_2 || (x22_2 - 1) u>> 0x20 != 0)
                    goto label_fd0068
                
                if (&arg3[sx.q(x23_2) + 1] u> arg2
                        && &arg3[sx.q(x23_2) + 1 - x22_2] u< &arg2[x22_2])
                    goto label_fd0064
                
                i_30 = x22_2 & 0xfffffffc
                void* x9_21 = &arg2[2]
                int64_t i_22 = i_30
                int32_t x11_5 = x23_2
                int64_t i_7
                
                do
                    void* x12_3 = &arg3[sx.q(x11_5)]
                    v0_2.q = *(x12_3 - 4)
                    v1_2.q = *(x12_3 - 0xc)
                    i_7 = i_22
                    i_22 -= 4
                    x11_5 -= 4
                    v0_2 = vrev64_s32(v0_2)
                    v1_2 = vrev64_s32(v1_2)
                    *(x9_21 - 8) = v0_2.q
                    *x9_21 = v1_2.q
                    x9_21 += 0x10
                while (i_7 != 4)
                
                if (i_30 != x22_2)
                    goto label_fd0068
            int64_t i_31
            
            if (arg4 u>= 4)
                i_31 = 0
                
                if (x23_2 - (x22_2 - 1).d s> x23_2 || (x22_2 - 1) u>> 0x20 != 0)
                    goto label_fd0300
                
                i_31 = x22_2 & 0xfffffffc
                void* x9_18 = &arg3[2]
                int64_t i_25 = i_31
                int64_t i_8
                
                do
                    void* x12_2 = &var_50[sx.q(x23_2)]
                    v0_2.q = *(x12_2 - 4)
                    v1_2.q = *(x12_2 - 0xc)
                    i_8 = i_25
                    i_25 -= 4
                    x23_2 -= 4
                    v0_2 = vrev64_s32(v0_2)
                    v1_2 = vrev64_s32(v1_2)
                    *(x9_18 - 8) = v0_2.q
                    *x9_18 = v1_2.q
                    x9_18 += 0x10
                while (i_8 != 4)
                
                if (i_31 != x22_2)
                    goto label_fd0300
            else
                i_31 = 0
            label_fd0300:
                int64_t i_9 = x22_2 - i_31
                void* x10_12 = &arg3[i_31]
                int32_t x8_26 = not.d(i_31.d) + arg4
                
                do
                    v0_2.d = var_50[sx.q(x8_26)]
                    i_9 -= 1
                    x8_26 -= 1
                    *x10_12 = v0_2.d
                    x10_12 += 4
                while (i_9 != 0)
    case 4
        if (arg5 s>= 2)
            uint64_t i_18 = zx.q(arg5 u>> 1)
            int32_t x9_7 = arg5 - 1
            float* x10_6 = arg3
            uint64_t i_10
            
            do
                int64_t x11_3 = zx.q(x9_7) << 0x20 s>> 0x1e
                v1 = *x10_6
                i_10 = i_18
                i_18 -= 1
                x9_7 -= 1
                *x10_6 = *(arg3 + x11_3)
                x10_6 = &x10_6[1]
                *(arg3 + x11_3) = v1
            while (i_10 != 1)
    case 5
        if (arg4 s>= 2)
            uint64_t i_19 = zx.q(arg4 u>> 1)
            int32_t x9_8 = arg4 - 1
            float* x10_7 = arg2
            uint64_t i_11
            
            do
                int64_t x11_4 = zx.q(x9_8) << 0x20 s>> 0x1e
                v1 = *x10_7
                i_11 = i_19
                i_19 -= 1
                x9_8 -= 1
                *x10_7 = *(arg2 + x11_4)
                x10_7 = &x10_7[1]
                *(arg2 + x11_4) = v1
            while (i_11 != 1)
    case 6
        int32_t x24_2 = arg4 - 1
        
        if (arg4 s>= 1)
            uint64_t x23_3 = zx.q(arg4)
            x22_3 = x23_3 << 2
            int128_t v0_3
            int128_t v1_3
            v0_3, v1_3 = memcpy(&var_50, arg2, x22_3)
            int64_t i_32
            
            if (arg4 u< 4)
            label_fd0178:
                i_32 = 0
            label_fd017c:
                int64_t i_12 = x23_3 - i_32
                void* x10_8 = &arg2[i_32]
                int32_t x8_17 = not.d(i_32.d) + arg4
                
                do
                    v0_3.d = arg3[sx.q(x8_17)]
                    i_12 -= 1
                    x8_17 -= 1
                    *x10_8 = v0_3.d
                    x10_8 += 4
                while (i_12 != 0)
            else
                i_32 = 0
                
                if (x24_2 - (x23_3 - 1).d s> x24_2 || (x23_3 - 1) u>> 0x20 != 0)
                    goto label_fd017c
                
                if (&arg3[sx.q(x24_2) + 1] u> arg2
                        && &arg3[sx.q(x24_2) + 1 - x23_3] u< &arg2[x23_3])
                    goto label_fd0178
                
                i_32 = x23_3 & 0xfffffffc
                void* x9_22 = &arg2[2]
                int64_t i_23 = i_32
                int64_t i_13
                
                do
                    void* x11_6 = &arg3[sx.q(x24_2)]
                    v0_3.q = *(x11_6 - 4)
                    v1_3.q = *(x11_6 - 0xc)
                    i_13 = i_23
                    i_23 -= 4
                    x24_2 -= 4
                    v0_3 = vrev64_s32(v0_3)
                    v1_3 = vrev64_s32(v1_3)
                    *(x9_22 - 8) = v0_3.q
                    *x9_22 = v1_3.q
                    x9_22 += 0x10
                while (i_13 != 4)
                
                if (i_32 != x23_3)
                    goto label_fd017c
            memcpy(arg3, &var_50, x22_3)
    case 7
        if (arg4 s>= 1)
            uint64_t x23_4 = zx.q(arg4)
            x22_3 = x23_4 << 2
            int128_t v0_4
            int128_t v1_4
            v0_4, v1_4 = memcpy(&var_50, arg2, x22_3)
            int64_t i_33
            
            if (arg4 u< 8 || (arg3 + x22_3 u> arg2 && arg2 + x22_3 u> arg3))
                i_33 = 0
            label_fd01e8:
                int64_t i_21 = x23_4 - i_33
                void* x8_20 = &arg2[i_33]
                void* x10_10 = &arg3[i_33]
                int64_t i_14
                
                do
                    v0_4.d = *x10_10
                    x10_10 += 4
                    i_14 = i_21
                    i_21 -= 1
                    *x8_20 = v0_4.d
                    x8_20 += 4
                while (i_14 != 1)
            else
                i_33 = x23_4 & 0xfffffff8
                void* x9_20 = &arg3[4]
                void* x10_14 = &arg2[4]
                int64_t i_27 = i_33
                int64_t i_15
                
                do
                    v0_4 = *(x9_20 - 0x10)
                    v1_4 = *x9_20
                    x9_20 += 0x20
                    i_15 = i_27
                    i_27 -= 8
                    *(x10_14 - 0x10) = v0_4
                    *x10_14 = v1_4
                    x10_14 += 0x20
                while (i_15 != 8)
                
                if (i_33 != x23_4)
                    goto label_fd01e8
            memcpy(arg3, &var_50, x22_3)
