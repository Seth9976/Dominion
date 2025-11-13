// 函数: spSkeletonBinary_readSkin
// 地址: 0xfc21cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x8 = *arg2
*arg2 = &x8[1]
uint32_t x9_1 = zx.d(*x8)
int32_t x26 = x9_1 & 0x7f
void* result

if (arg3 == 0)
    if ((x9_1 & 0x80) != 0)
        *arg2 = &x8[2]
        uint32_t x9_10 = zx.d(x8[1])
        x26 = (0xffffc07f & x26) | (0x7f & x9_10) << 7
        
        if ((x9_10 & 0x80) != 0)
            *arg2 = &x8[3]
            uint32_t x9_12 = zx.d(x8[2])
            x26 = (0xffe03fff & x26) | (0x7f & x9_12) << 0xe
            
            if ((x9_12 & 0x80) != 0)
                *arg2 = &x8[4]
                uint32_t x9_14 = zx.d(x8[3])
                x26 = (0xf01fffff & x26) | (0x7f & x9_14) << 0x15
                
                if ((x9_14 & 0x80) != 0)
                    *arg2 = &x8[5]
                    x26 = (0xfffffff & x26) | (0xf & zx.d(x8[4])) << 0x1c
    
    int64_t x0_1
    
    if (x26 == 0)
        x0_1 = 0
    else
        x0_1 = *(*(arg4 + 0x28) + (sx.q(x26 - 1) << 3))
    
    void* result_1 = spSkin_create(x0_1)
    char* x9_17 = *arg2
    result = result_1
    void* x8_4 = &x9_17[1]
    *arg2 = x8_4
    uint32_t x10_1 = zx.d(*x9_17)
    int32_t i_4 = x10_1 & 0x7f
    
    if ((x10_1 & 0x80) != 0)
        x8_4 = &x9_17[2]
        *arg2 = x8_4
        uint32_t x10_2 = zx.d(x9_17[1])
        i_4 = (0xffffc07f & i_4) | (0x7f & x10_2) << 7
        
        if ((x10_2 & 0x80) != 0)
            x8_4 = &x9_17[3]
            *arg2 = x8_4
            uint32_t x10_3 = zx.d(x9_17[2])
            i_4 = (0xffe03fff & i_4) | (0x7f & x10_3) << 0xe
            
            if ((x10_3 & 0x80) != 0)
                x8_4 = &x9_17[4]
                *arg2 = x8_4
                uint32_t x10_4 = zx.d(x9_17[3])
                i_4 = (0xf01fffff & i_4) | (0x7f & x10_4) << 0x15
                
                if ((x10_4 & 0x80) != 0)
                    x8_4 = &x9_17[5]
                    *arg2 = x8_4
                    i_4 = (0xfffffff & i_4) | (0xf & zx.d(x9_17[4])) << 0x1c
    
    if (i_4 s>= 1)
        int32_t i
        
        do
            int64_t x0_5 = *(result + 8)
            int64_t x9_39 = *(arg4 + 0x38)
            *arg2 = x8_4 + 1
            uint32_t x11_5 = zx.d(*x8_4)
            int32_t x10_23 = x11_5 & 0x7f
            
            if ((x11_5 & 0x80) != 0)
                *arg2 = x8_4 + 2
                uint32_t x11_7 = zx.d(*(x8_4 + 1))
                x10_23 = (0xffffc07f & x10_23) | (0x7f & x11_7) << 7
                
                if ((x11_7 & 0x80) != 0)
                    *arg2 = x8_4 + 3
                    uint32_t x11_9 = zx.d(*(x8_4 + 2))
                    x10_23 = (0xffe03fff & x10_23) | (0x7f & x11_9) << 0xe
                    
                    if ((x11_9 & 0x80) != 0)
                        *arg2 = x8_4 + 4
                        uint32_t x11_11 = zx.d(*(x8_4 + 3))
                        x10_23 = (0xf01fffff & x10_23) | (0x7f & x11_11) << 0x15
                        
                        if ((x11_11 & 0x80) != 0)
                            *arg2 = x8_4 + 5
                            x10_23 = (0xfffffff & x10_23) | (0xf & zx.d(*(x8_4 + 4))) << 0x1c
            
            spBoneDataArray_add(x0_5, *(x9_39 + (sx.q(x10_23) << 3)))
            x8_4 = *arg2
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    void* x9_19 = x8_4 + 1
    *arg2 = x9_19
    uint32_t x10_5 = zx.d(*x8_4)
    int32_t i_5 = x10_5 & 0x7f
    
    if ((x10_5 & 0x80) != 0)
        x9_19 = x8_4 + 2
        *arg2 = x9_19
        uint32_t x10_6 = zx.d(*(x8_4 + 1))
        i_5 = (0xffffc07f & i_5) | (0x7f & x10_6) << 7
        
        if ((x10_6 & 0x80) != 0)
            x9_19 = x8_4 + 3
            *arg2 = x9_19
            uint32_t x10_7 = zx.d(*(x8_4 + 2))
            i_5 = (0xffe03fff & i_5) | (0x7f & x10_7) << 0xe
            
            if ((x10_7 & 0x80) != 0)
                x9_19 = x8_4 + 4
                *arg2 = x9_19
                uint32_t x10_8 = zx.d(*(x8_4 + 3))
                i_5 = (0xf01fffff & i_5) | (0x7f & x10_8) << 0x15
                
                if ((x10_8 & 0x80) != 0)
                    x9_19 = x8_4 + 5
                    *arg2 = x9_19
                    i_5 = (0xfffffff & i_5) | (0xf & zx.d(*(x8_4 + 4))) << 0x1c
    
    if (i_5 s>= 1)
        int32_t i_1
        
        do
            int64_t x0_6 = *(result + 0x10)
            int64_t x8_19 = *(arg4 + 0x90)
            *arg2 = x9_19 + 1
            uint32_t x11_13 = zx.d(*x9_19)
            int32_t x10_25 = x11_13 & 0x7f
            
            if ((x11_13 & 0x80) != 0)
                *arg2 = x9_19 + 2
                uint32_t x11_15 = zx.d(*(x9_19 + 1))
                x10_25 = (0xffffc07f & x10_25) | (0x7f & x11_15) << 7
                
                if ((x11_15 & 0x80) != 0)
                    *arg2 = x9_19 + 3
                    uint32_t x11_17 = zx.d(*(x9_19 + 2))
                    x10_25 = (0xffe03fff & x10_25) | (0x7f & x11_17) << 0xe
                    
                    if ((x11_17 & 0x80) != 0)
                        *arg2 = x9_19 + 4
                        uint32_t x11_19 = zx.d(*(x9_19 + 3))
                        x10_25 = (0xf01fffff & x10_25) | (0x7f & x11_19) << 0x15
                        
                        if ((x11_19 & 0x80) != 0)
                            *arg2 = x9_19 + 5
                            x10_25 = (0xfffffff & x10_25) | (0xf & zx.d(*(x9_19 + 4))) << 0x1c
            
            spIkConstraintDataArray_add(x0_6, *(x8_19 + (sx.q(x10_25) << 3)))
            x9_19 = *arg2
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
    
    void* x10_9 = x9_19 + 1
    *arg2 = x10_9
    uint32_t x8_6 = zx.d(*x9_19)
    int32_t i_6 = x8_6 & 0x7f
    
    if ((x8_6 & 0x80) != 0)
        x10_9 = x9_19 + 2
        *arg2 = x10_9
        uint32_t x8_7 = zx.d(*(x9_19 + 1))
        i_6 = (0xffffc07f & i_6) | (0x7f & x8_7) << 7
        
        if ((x8_7 & 0x80) != 0)
            x10_9 = x9_19 + 3
            *arg2 = x10_9
            uint32_t x8_8 = zx.d(*(x9_19 + 2))
            i_6 = (0xffe03fff & i_6) | (0x7f & x8_8) << 0xe
            
            if ((x8_8 & 0x80) != 0)
                x10_9 = x9_19 + 4
                *arg2 = x10_9
                uint32_t x8_9 = zx.d(*(x9_19 + 3))
                i_6 = (0xf01fffff & i_6) | (0x7f & x8_9) << 0x15
                
                if ((x8_9 & 0x80) != 0)
                    x10_9 = x9_19 + 5
                    *arg2 = x10_9
                    i_6 = (0xfffffff & i_6) | (0xf & zx.d(*(x9_19 + 4))) << 0x1c
    
    if (i_6 s>= 1)
        int32_t i_2
        
        do
            int64_t x0_7 = *(result + 0x18)
            int64_t x8_20 = *(arg4 + 0xa0)
            *arg2 = x10_9 + 1
            uint32_t x11_21 = zx.d(*x10_9)
            int32_t x9_41 = x11_21 & 0x7f
            
            if ((x11_21 & 0x80) != 0)
                *arg2 = x10_9 + 2
                uint32_t x11_23 = zx.d(*(x10_9 + 1))
                x9_41 = (0xffffc07f & x9_41) | (0x7f & x11_23) << 7
                
                if ((x11_23 & 0x80) != 0)
                    *arg2 = x10_9 + 3
                    uint32_t x11_25 = zx.d(*(x10_9 + 2))
                    x9_41 = (0xffe03fff & x9_41) | (0x7f & x11_25) << 0xe
                    
                    if ((x11_25 & 0x80) != 0)
                        *arg2 = x10_9 + 4
                        uint32_t x11_27 = zx.d(*(x10_9 + 3))
                        x9_41 = (0xf01fffff & x9_41) | (0x7f & x11_27) << 0x15
                        
                        if ((x11_27 & 0x80) != 0)
                            *arg2 = x10_9 + 5
                            x9_41 = (0xfffffff & x9_41) | (0xf & zx.d(*(x10_9 + 4))) << 0x1c
            
            spTransformConstraintDataArray_add(x0_7, *(x8_20 + (sx.q(x9_41) << 3)))
            x10_9 = *arg2
            i_2 = i_6
            i_6 -= 1
        while (i_2 != 1)
    
    void* x8_11 = x10_9 + 1
    *arg2 = x8_11
    uint32_t x9_20 = zx.d(*x10_9)
    int32_t i_7 = x9_20 & 0x7f
    
    if ((x9_20 & 0x80) != 0)
        x8_11 = x10_9 + 2
        *arg2 = x8_11
        uint32_t x9_21 = zx.d(*(x10_9 + 1))
        i_7 = (0xffffc07f & i_7) | (0x7f & x9_21) << 7
        
        if ((x9_21 & 0x80) != 0)
            x8_11 = x10_9 + 3
            *arg2 = x8_11
            uint32_t x9_22 = zx.d(*(x10_9 + 2))
            i_7 = (0xffe03fff & i_7) | (0x7f & x9_22) << 0xe
            
            if ((x9_22 & 0x80) != 0)
                x8_11 = x10_9 + 4
                *arg2 = x8_11
                uint32_t x9_23 = zx.d(*(x10_9 + 3))
                i_7 = (0xf01fffff & i_7) | (0x7f & x9_23) << 0x15
                
                if ((x9_23 & 0x80) != 0)
                    x8_11 = x10_9 + 5
                    *arg2 = x8_11
                    i_7 = (0xfffffff & i_7) | (0xf & zx.d(*(x10_9 + 4))) << 0x1c
    
    if (i_7 s>= 1)
        int32_t i_3
        
        do
            int64_t x0_8 = *(result + 0x20)
            int64_t x9_43 = *(arg4 + 0xb0)
            *arg2 = x8_11 + 1
            uint32_t x11_29 = zx.d(*x8_11)
            int32_t x10_28 = x11_29 & 0x7f
            
            if ((x11_29 & 0x80) != 0)
                *arg2 = x8_11 + 2
                uint32_t x11_31 = zx.d(*(x8_11 + 1))
                x10_28 = (0xffffc07f & x10_28) | (0x7f & x11_31) << 7
                
                if ((x11_31 & 0x80) != 0)
                    *arg2 = x8_11 + 3
                    uint32_t x11_33 = zx.d(*(x8_11 + 2))
                    x10_28 = (0xffe03fff & x10_28) | (0x7f & x11_33) << 0xe
                    
                    if ((x11_33 & 0x80) != 0)
                        *arg2 = x8_11 + 4
                        uint32_t x11_35 = zx.d(*(x8_11 + 3))
                        x10_28 = (0xf01fffff & x10_28) | (0x7f & x11_35) << 0x15
                        
                        if ((x11_35 & 0x80) != 0)
                            *arg2 = x8_11 + 5
                            x10_28 = (0xfffffff & x10_28) | (0xf & zx.d(*(x8_11 + 4))) << 0x1c
            
            spPathConstraintDataArray_add(x0_8, *(x9_43 + (sx.q(x10_28) << 3)))
            x8_11 = *arg2
            i_3 = i_7
            i_7 -= 1
        while (i_3 != 1)
    
    *arg2 = x8_11 + 1
    uint32_t x9_26 = zx.d(*x8_11)
    x26 = x9_26 & 0x7f
    
    if ((x9_26 & 0x80) != 0)
        *arg2 = x8_11 + 2
        uint32_t x9_28 = zx.d(*(x8_11 + 1))
        x26 = (0xffffc07f & x26) | (0x7f & x9_28) << 7
        
        if ((x9_28 & 0x80) != 0)
            *arg2 = x8_11 + 3
            uint32_t x9_30 = zx.d(*(x8_11 + 2))
            x26 = (0xffe03fff & x26) | (0x7f & x9_30) << 0xe
            
            if ((x9_30 & 0x80) != 0)
                *arg2 = x8_11 + 4
                uint32_t x9_32 = zx.d(*(x8_11 + 3))
                x26 = (0xf01fffff & x26) | (0x7f & x9_32) << 0x15
                
                if ((x9_32 & 0x80) != 0)
                    *arg2 = x8_11 + 5
                    x26 = (0xfffffff & x26) | (0xf & zx.d(*(x8_11 + 4))) << 0x1c
else
    if ((x9_1 & 0x80) != 0)
        *arg2 = &x8[2]
        uint32_t x9_3 = zx.d(x8[1])
        x26 = (0xffffc07f & x26) | (0x7f & x9_3) << 7
        
        if ((x9_3 & 0x80) != 0)
            *arg2 = &x8[3]
            uint32_t x9_5 = zx.d(x8[2])
            x26 = (0xffe03fff & x26) | (0x7f & x9_5) << 0xe
            
            if ((x9_5 & 0x80) != 0)
                *arg2 = &x8[4]
                uint32_t x9_7 = zx.d(x8[3])
                x26 = (0xf01fffff & x26) | (0x7f & x9_7) << 0x15
                
                if ((x9_7 & 0x80) != 0)
                    *arg2 = &x8[5]
                    x26 = (0xfffffff & x26) | (0xf & zx.d(x8[4])) << 0x1c
    
    if (x26 == 0)
        return nullptr
    
    result = spSkin_create("default")

if (x26 s>= 1)
    int32_t x27_1 = 0
    
    do
        char* x8_13 = *arg2
        void* x9_34 = &x8_13[1]
        *arg2 = x9_34
        uint32_t x10_10 = zx.d(*x8_13)
        int32_t x24_1 = x10_10 & 0x7f
        
        if ((x10_10 & 0x80) != 0)
            x9_34 = &x8_13[2]
            *arg2 = x9_34
            uint32_t x10_11 = zx.d(x8_13[1])
            x24_1 = (0xffffc07f & x24_1) | (0x7f & x10_11) << 7
            
            if ((x10_11 & 0x80) != 0)
                x9_34 = &x8_13[3]
                *arg2 = x9_34
                uint32_t x10_12 = zx.d(x8_13[2])
                x24_1 = (0xffe03fff & x24_1) | (0x7f & x10_12) << 0xe
                
                if ((x10_12 & 0x80) != 0)
                    x9_34 = &x8_13[4]
                    *arg2 = x9_34
                    uint32_t x10_13 = zx.d(x8_13[3])
                    x24_1 = (0xf01fffff & x24_1) | (0x7f & x10_13) << 0x15
                    
                    if ((x10_13 & 0x80) != 0)
                        x9_34 = &x8_13[5]
                        *arg2 = x9_34
                        x24_1 = (0xfffffff & x24_1) | (0xf & zx.d(x8_13[4])) << 0x1c
        
        void* x8_15 = x9_34 + 1
        *arg2 = x8_15
        uint32_t x11_1 = zx.d(*x9_34)
        int32_t x10_14 = x11_1 & 0x7f
        
        if ((x11_1 & 0x80) != 0)
            x8_15 = x9_34 + 2
            *arg2 = x8_15
            uint32_t x11_2 = zx.d(*(x9_34 + 1))
            x10_14 = (0xffffc07f & x10_14) | (0x7f & x11_2) << 7
            
            if ((x11_2 & 0x80) != 0)
                x8_15 = x9_34 + 3
                *arg2 = x8_15
                uint32_t x11_3 = zx.d(*(x9_34 + 2))
                x10_14 = (0xffe03fff & x10_14) | (0x7f & x11_3) << 0xe
                
                if ((x11_3 & 0x80) != 0)
                    x8_15 = x9_34 + 4
                    *arg2 = x8_15
                    uint32_t x11_4 = zx.d(*(x9_34 + 3))
                    x10_14 = (0xf01fffff & x10_14) | (0x7f & x11_4) << 0x15
                    
                    if ((x11_4 & 0x80) != 0)
                        x8_15 = x9_34 + 5
                        *arg2 = x8_15
                        x10_14 = (0xfffffff & x10_14) | (0xf & zx.d(*(x9_34 + 4))) << 0x1c
        
        int32_t x28_1 = x10_14 - 1
        
        if (x10_14 s>= 1)
            while (true)
                *arg2 = x8_15 + 1
                uint32_t x10_15 = zx.d(*x8_15)
                int32_t x9_37 = x10_15 & 0x7f
                
                if ((x10_15 & 0x80) != 0)
                    *arg2 = x8_15 + 2
                    uint32_t x10_17 = zx.d(*(x8_15 + 1))
                    x9_37 = (0xffffc07f & x9_37) | (0x7f & x10_17) << 7
                    
                    if ((x10_17 & 0x80) != 0)
                        *arg2 = x8_15 + 3
                        uint32_t x10_19 = zx.d(*(x8_15 + 2))
                        x9_37 = (0xffe03fff & x9_37) | (0x7f & x10_19) << 0xe
                        
                        if ((x10_19 & 0x80) != 0)
                            *arg2 = x8_15 + 4
                            uint32_t x10_21 = zx.d(*(x8_15 + 3))
                            x9_37 = (0xf01fffff & x9_37) | (0x7f & x10_21) << 0x15
                            
                            if ((x10_21 & 0x80) != 0)
                                *arg2 = x8_15 + 5
                                x9_37 = (0xfffffff & x9_37) | (0xf & zx.d(*(x8_15 + 4))) << 0x1c
                
                int64_t x25_1
                
                if (x9_37 == 0)
                    x25_1 = 0
                else
                    x25_1 = *(*(arg4 + 0x28) + (sx.q(x9_37 - 1) << 3))
                
                int64_t x0_3 = spSkeletonBinary_readAttachment(arg1, arg2, result, zx.q(x24_1), 
                    x25_1, arg4, zx.q(arg5))
                
                if (x0_3 != 0)
                    spSkin_setAttachment(result, zx.q(x24_1), x25_1, x0_3)
                
                if (x28_1 == 0)
                    break
                
                x8_15 = *arg2
                x28_1 -= 1
        
        x27_1 += 1
    while (x27_1 != x26)

return result
