// 函数: sub_fc1dcc
// 地址: 0xfc1dcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i_6 = arg4 << 1
int32_t* x0 = spFloatArray_create(8)
int32_t* x0_1 = spIntArray_create(8)
*(arg3 + 0x48) = i_6
char* x8 = *arg2
*arg2 = &x8[1]

if (zx.d(*x8) == 0)
    *(arg3 + 0x38) = i_6
    int64_t v8
    v8.d = *arg1
    float* x0_13 = _spMalloc(zx.q(i_6) << 0x20 s>> 0x1e, 
        "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x264)
    float v0_5 = fconvert.s(1f)
    
    if (v8.d f!= v0_5)
        if (i_6 s>= 1)
            uint64_t i_4 = zx.q(i_6)
            float* x9_37 = x0_13
            uint64_t i
            
            do
                char* x10_11 = *arg2
                i = i_4
                i_4 -= 1
                *arg2 = &x10_11[1]
                uint32_t x11_14 = zx.d(*x10_11)
                *arg2 = &x10_11[2]
                char x12_8 = x10_11[1]
                *arg2 = &x10_11[3]
                uint32_t x13_5 = zx.d(x10_11[2])
                *arg2 = &x10_11[4]
                v0_5 = v8.d f* float.s(zx.d(x10_11[3])
                    | (0xffffff & ((0xffff00ff & x11_14 << 0x10) | zx.d(x12_8) << 8 | x13_5)) << 8)
                *x9_37 = v0_5
                x9_37 = &x9_37[1]
            while (i != 1)
    else if (i_6 s>= 1)
        uint64_t i_3 = zx.q(i_6)
        float* x9_36 = x0_13
        uint64_t i_1
        
        do
            char* x10_8 = *arg2
            i_1 = i_3
            i_3 -= 1
            *arg2 = &x10_8[1]
            uint32_t x11_9 = zx.d(*x10_8)
            *arg2 = &x10_8[2]
            char x12_6 = x10_8[1]
            *arg2 = &x10_8[3]
            uint32_t x13_3 = zx.d(x10_8[2])
            *arg2 = &x10_8[4]
            *x9_36 = zx.d(x10_8[3])
                | (0xffffff & ((0xffff00ff & x11_9 << 0x10) | zx.d(x12_6) << 8 | x13_3)) << 8
            x9_36 = &x9_36[1]
        while (i_1 != 1)
    
    *(arg3 + 0x40) = x0_13
    *(arg3 + 0x28) = 0
    *(arg3 + 0x30) = 0
    spFloatArray_dispose(x0, v0_5)
    return spIntArray_dispose(x0_1) __tailcall

spFloatArray_ensureCapacity(x0, zx.q(arg4 * 0x12))
spIntArray_ensureCapacity(x0_1, zx.q(arg4 * 6))

if (arg4 s>= 1)
    int32_t x26_1 = 0
    
    do
        char* x8_3 = *arg2
        *arg2 = &x8_3[1]
        uint32_t x9_3 = zx.d(*x8_3)
        int32_t i_5 = x9_3 & 0x7f
        
        if ((x9_3 & 0x80) != 0)
            *arg2 = &x8_3[2]
            uint32_t x9_5 = zx.d(x8_3[1])
            i_5 = (0xffffc07f & i_5) | (0x7f & x9_5) << 7
            
            if ((x9_5 & 0x80) != 0)
                *arg2 = &x8_3[3]
                uint32_t x9_7 = zx.d(x8_3[2])
                i_5 = (0xffe03fff & i_5) | (0x7f & x9_7) << 0xe
                
                if ((x9_7 & 0x80) != 0)
                    *arg2 = &x8_3[4]
                    uint32_t x9_9 = zx.d(x8_3[3])
                    i_5 = (0xf01fffff & i_5) | (0x7f & x9_9) << 0x15
                    
                    if ((x9_9 & 0x80) != 0)
                        *arg2 = &x8_3[5]
                        i_5 = (0xfffffff & i_5) | (0xf & zx.d(x8_3[4])) << 0x1c
        
        spIntArray_add(x0_1, zx.q(i_5))
        
        if (i_5 s>= 1)
            int32_t i_2
            
            do
                char* x8_14 = *arg2
                *arg2 = &x8_14[1]
                uint32_t x9_27 = zx.d(*x8_14)
                int32_t x1_3 = x9_27 & 0x7f
                
                if ((x9_27 & 0x80) != 0)
                    *arg2 = &x8_14[2]
                    uint32_t x9_29 = zx.d(x8_14[1])
                    x1_3 = (0xffffc07f & x1_3) | (0x7f & x9_29) << 7
                    
                    if ((x9_29 & 0x80) != 0)
                        *arg2 = &x8_14[3]
                        uint32_t x9_31 = zx.d(x8_14[2])
                        x1_3 = (0xffe03fff & x1_3) | (0x7f & x9_31) << 0xe
                        
                        if ((x9_31 & 0x80) != 0)
                            *arg2 = &x8_14[4]
                            uint32_t x9_33 = zx.d(x8_14[3])
                            x1_3 = (0xf01fffff & x1_3) | (0x7f & x9_33) << 0x15
                            
                            if ((x9_33 & 0x80) != 0)
                                *arg2 = &x8_14[5]
                                x1_3 = (0xfffffff & x1_3) | (0xf & zx.d(x8_14[4])) << 0x1c
                
                spIntArray_add(x0_1, x1_3)
                char* x8_5 = *arg2
                *arg2 = &x8_5[1]
                uint32_t x9_12 = zx.d(*x8_5)
                *arg2 = &x8_5[2]
                char x10_2 = x8_5[1]
                *arg2 = &x8_5[3]
                uint32_t x11_2 = zx.d(x8_5[2])
                *arg2 = &x8_5[4]
                float v1_1 = float.s(zx.d(x8_5[3])
                    | (0xffffff & ((0xffff00ff & x9_12 << 0x10) | zx.d(x10_2) << 8 | x11_2)) << 8)
                spFloatArray_add(x0, *arg1 * v1_1, v1_1)
                char* x8_8 = *arg2
                *arg2 = &x8_8[1]
                uint32_t x9_17 = zx.d(*x8_8)
                *arg2 = &x8_8[2]
                char x10_4 = x8_8[1]
                *arg2 = &x8_8[3]
                uint32_t x11_4 = zx.d(x8_8[2])
                *arg2 = &x8_8[4]
                float v1_2 = float.s(zx.d(x8_8[3])
                    | (0xffffff & ((0xffff00ff & x9_17 << 0x10) | zx.d(x10_4) << 8 | x11_4)) << 8)
                spFloatArray_add(x0, *arg1 * v1_2, v1_2)
                char* x8_11 = *arg2
                *arg2 = &x8_11[1]
                uint32_t x9_22 = zx.d(*x8_11)
                *arg2 = &x8_11[2]
                char x10_6 = x8_11[1]
                *arg2 = &x8_11[3]
                uint32_t x11_6 = zx.d(x8_11[2])
                *arg2 = &x8_11[4]
                int128_t v0_3
                v0_3.d = float.s(zx.d(x8_11[3])
                    | (0xffffff & ((0xffff00ff & x9_22 << 0x10) | zx.d(x10_6) << 8 | x11_6)) << 8)
                spFloatArray_add(x0, v0_3)
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
        
        x26_1 += 1
    while (x26_1 != arg4)

*(arg3 + 0x38) = *x0
*(arg3 + 0x40) = *(x0 + 8)
_spFree(x0)
*(arg3 + 0x28) = *x0_1
*(arg3 + 0x30) = *(x0_1 + 8)
return _spFree(x0_1) __tailcall
