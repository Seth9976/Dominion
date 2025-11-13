// 函数: spSkeletonBinary_readSkeletonData
// 地址: 0xfc2930
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = _spCalloc(1, 0x10, "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x372)
*x0 = arg2
x0[1] = arg2 + sx.q(arg3)
_spFree(*(arg1 + 0x10))
*(arg1 + 0x10) = 0
arg1[7] = 0
int64_t* result = spSkeletonData_create()
char* x9 = *x0
*x0 = &x9[1]
uint32_t x10 = zx.d(*x9)
int32_t x8_2 = x10 & 0x7f

if ((x10 & 0x80) != 0)
    *x0 = &x9[2]
    uint32_t x10_2 = zx.d(x9[1])
    x8_2 = (0xffffc07f & x8_2) | (0x7f & x10_2) << 7
    
    if ((x10_2 & 0x80) != 0)
        *x0 = &x9[3]
        uint32_t x10_4 = zx.d(x9[2])
        x8_2 = (0xffe03fff & x8_2) | (0x7f & x10_4) << 0xe
        
        if ((x10_4 & 0x80) != 0)
            *x0 = &x9[4]
            uint32_t x10_6 = zx.d(x9[3])
            x8_2 = (0xf01fffff & x8_2) | (0x7f & x10_6) << 0x15
            
            if ((x10_6 & 0x80) != 0)
                *x0 = &x9[5]
                x8_2 = (0xfffffff & x8_2) | (0xf & zx.d(x9[4])) << 0x1c

if (x8_2 == 0)
    result[1] = 0
    
    if (zx.d(*nullptr) == 0)
        _spFree(nullptr)
        result[1] = 0
else
    int64_t x23_1 = sx.q(x8_2)
    char* x0_3 = _spMalloc(x23_1, "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x95)
    memcpy(x0_3, *x0, x23_1 - 1)
    *x0 += x23_1 - 1
    x0_3[x23_1 - 1] = 0
    result[1] = x0_3
    
    if (zx.d(*x0_3) == 0)
        _spFree(x0_3)
        result[1] = 0

char* x9_2 = *x0
*x0 = &x9_2[1]
uint32_t x10_8 = zx.d(*x9_2)
int32_t x8_7 = x10_8 & 0x7f

if ((x10_8 & 0x80) != 0)
    *x0 = &x9_2[2]
    uint32_t x10_10 = zx.d(x9_2[1])
    x8_7 = (0xffffc07f & x8_7) | (0x7f & x10_10) << 7
    
    if ((x10_10 & 0x80) != 0)
        *x0 = &x9_2[3]
        uint32_t x10_12 = zx.d(x9_2[2])
        x8_7 = (0xffe03fff & x8_7) | (0x7f & x10_12) << 0xe
        
        if ((x10_12 & 0x80) != 0)
            *x0 = &x9_2[4]
            uint32_t x10_14 = zx.d(x9_2[3])
            x8_7 = (0xf01fffff & x8_7) | (0x7f & x10_14) << 0x15
            
            if ((x10_14 & 0x80) != 0)
                *x0 = &x9_2[5]
                x8_7 = (0xfffffff & x8_7) | (0xf & zx.d(x9_2[4])) << 0x1c

if (x8_7 == 0)
    *result = 0
    
    if (zx.d(*nullptr) == 0)
        _spFree(nullptr)
        *result = 0
else
    int64_t x23_3 = sx.q(x8_7)
    char* x0_6 = _spMalloc(x23_3, "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x95)
    memcpy(x0_6, *x0, x23_3 - 1)
    *x0 += x23_3 - 1
    x0_6[x23_3 - 1] = 0
    *result = x0_6
    
    if (zx.d(*x0_6) == 0)
        _spFree(x0_6)
        *result = 0

char* x8_11 = *x0
*x0 = &x8_11[1]
uint32_t x9_5 = zx.d(*x8_11)
*x0 = &x8_11[2]
char x10_17 = x8_11[1]
*x0 = &x8_11[3]
uint32_t x11_1 = zx.d(x8_11[2])
*x0 = &x8_11[4]
result[2].d =
    zx.d(x8_11[3]) | (0xffffff & ((0xffff00ff & x9_5 << 0x10) | zx.d(x10_17) << 8 | x11_1)) << 8
char* x8_14 = *x0
*x0 = &x8_14[1]
uint32_t x9_10 = zx.d(*x8_14)
*x0 = &x8_14[2]
char x10_19 = x8_14[1]
*x0 = &x8_14[3]
uint32_t x11_3 = zx.d(x8_14[2])
*x0 = &x8_14[4]
*(result + 0x14) =
    zx.d(x8_14[3]) | (0xffffff & ((0xffff00ff & x9_10 << 0x10) | zx.d(x10_19) << 8 | x11_3)) << 8
char* x8_17 = *x0
*x0 = &x8_17[1]
uint32_t x9_15 = zx.d(*x8_17)
*x0 = &x8_17[2]
char x10_21 = x8_17[1]
*x0 = &x8_17[3]
uint32_t x11_5 = zx.d(x8_17[2])
*x0 = &x8_17[4]
result[3].d =
    zx.d(x8_17[3]) | (0xffffff & ((0xffff00ff & x9_15 << 0x10) | zx.d(x10_21) << 8 | x11_5)) << 8
char* x8_20 = *x0
*x0 = &x8_20[1]
uint32_t x9_20 = zx.d(*x8_20)
*x0 = &x8_20[2]
char x10_23 = x8_20[1]
*x0 = &x8_20[3]
uint32_t x11_7 = zx.d(x8_20[2])
*x0 = &x8_20[4]
*(result + 0x1c) =
    zx.d(x8_20[3]) | (0xffffff & ((0xffff00ff & x9_20 << 0x10) | zx.d(x10_23) << 8 | x11_7)) << 8
char* x9_24 = *x0
void* x8_23 = &x9_24[1]
*x0 = x8_23
uint32_t x27 = zx.d(*x9_24)
int32_t x22_3 = x27 != 0 ? 1 : 0

if (x27 != 0)
    *x0 = &x9_24[6]
    uint32_t x10_24 = zx.d(x9_24[5])
    int32_t x8_25 = x10_24 & 0x7f
    
    if ((x10_24 & 0x80) != 0)
        *x0 = &x9_24[7]
        uint32_t x10_26 = zx.d(x9_24[6])
        x8_25 = (0xffffc07f & x8_25) | (0x7f & x10_26) << 7
        
        if ((x10_26 & 0x80) != 0)
            *x0 = &x9_24[8]
            uint32_t x10_28 = zx.d(x9_24[7])
            x8_25 = (0xffe03fff & x8_25) | (0x7f & x10_28) << 0xe
            
            if ((x10_28 & 0x80) != 0)
                *x0 = &x9_24[9]
                uint32_t x10_30 = zx.d(x9_24[8])
                x8_25 = (0xf01fffff & x8_25) | (0x7f & x10_30) << 0x15
                
                if ((x10_30 & 0x80) != 0)
                    *x0 = &x9_24[0xa]
                    x8_25 = (0xfffffff & x8_25) | (0xf & zx.d(x9_24[9])) << 0x1c
    
    int64_t x23_5
    
    if (x8_25 == 0)
        x23_5 = 0
    else
        int64_t x24_1 = sx.q(x8_25)
        int64_t x0_9 =
            _spMalloc(x24_1, "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x95)
        x23_5 = x0_9
        memcpy(x0_9, *x0, x24_1 - 1)
        *x0 += x24_1 - 1
        *(x23_5 + x24_1 - 1) = 0
    
    _spFree(x23_5)
    char* x9_26 = *x0
    *x0 = &x9_26[1]
    uint32_t x10_32 = zx.d(*x9_26)
    int32_t x8_31 = x10_32 & 0x7f
    
    if ((x10_32 & 0x80) != 0)
        *x0 = &x9_26[2]
        uint32_t x10_34 = zx.d(x9_26[1])
        x8_31 = (0xffffc07f & x8_31) | (0x7f & x10_34) << 7
        
        if ((x10_34 & 0x80) != 0)
            *x0 = &x9_26[3]
            uint32_t x10_36 = zx.d(x9_26[2])
            x8_31 = (0xffe03fff & x8_31) | (0x7f & x10_36) << 0xe
            
            if ((x10_36 & 0x80) != 0)
                *x0 = &x9_26[4]
                uint32_t x10_38 = zx.d(x9_26[3])
                x8_31 = (0xf01fffff & x8_31) | (0x7f & x10_38) << 0x15
                
                if ((x10_38 & 0x80) != 0)
                    *x0 = &x9_26[5]
                    x8_31 = (0xfffffff & x8_31) | (0xf & zx.d(x9_26[4])) << 0x1c
    
    int64_t x23_6
    
    if (x8_31 == 0)
        x23_6 = 0
    else
        int64_t x24_3 = sx.q(x8_31)
        int64_t x0_12 =
            _spMalloc(x24_3, "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x95)
        x23_6 = x0_12
        memcpy(x0_12, *x0, x24_3 - 1)
        *x0 += x24_3 - 1
        *(x23_6 + x24_3 - 1) = 0
    
    _spFree(x23_6)
    x8_23 = *x0

*x0 = x8_23 + 1
uint32_t x9_29 = zx.d(*x8_23)
int32_t x23_7 = x9_29 & 0x7f

if ((x9_29 & 0x80) != 0)
    *x0 = x8_23 + 2
    uint32_t x9_31 = zx.d(*(x8_23 + 1))
    x23_7 = (0xffffc07f & x23_7) | (0x7f & x9_31) << 7
    
    if ((x9_31 & 0x80) != 0)
        *x0 = x8_23 + 3
        uint32_t x9_33 = zx.d(*(x8_23 + 2))
        x23_7 = (0xffe03fff & x23_7) | (0x7f & x9_33) << 0xe
        
        if ((x9_33 & 0x80) != 0)
            *x0 = x8_23 + 4
            uint32_t x9_35 = zx.d(*(x8_23 + 3))
            x23_7 = (0xf01fffff & x23_7) | (0x7f & x9_35) << 0x15
            
            if ((x9_35 & 0x80) != 0)
                *x0 = x8_23 + 5
                x23_7 = (0xfffffff & x23_7) | (0xf & zx.d(*(x8_23 + 4))) << 0x1c

result[4].d = x23_7
result[5] = _spMalloc(zx.q(x23_7) << 0x20 s>> 0x1d, 
    "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x397)

if (x23_7 s>= 1)
    int64_t i = 0
    
    do
        char* x9_37 = *x0
        *x0 = &x9_37[1]
        uint32_t x10_40 = zx.d(*x9_37)
        int32_t x8_36 = x10_40 & 0x7f
        
        if ((x10_40 & 0x80) != 0)
            *x0 = &x9_37[2]
            uint32_t x10_42 = zx.d(x9_37[1])
            x8_36 = (0xffffc07f & x8_36) | (0x7f & x10_42) << 7
            
            if ((x10_42 & 0x80) != 0)
                *x0 = &x9_37[3]
                uint32_t x10_44 = zx.d(x9_37[2])
                x8_36 = (0xffe03fff & x8_36) | (0x7f & x10_44) << 0xe
                
                if ((x10_44 & 0x80) != 0)
                    *x0 = &x9_37[4]
                    uint32_t x10_46 = zx.d(x9_37[3])
                    x8_36 = (0xf01fffff & x8_36) | (0x7f & x10_46) << 0x15
                    
                    if ((x10_46 & 0x80) != 0)
                        *x0 = &x9_37[5]
                        x8_36 = (0xfffffff & x8_36) | (0xf & zx.d(x9_37[4])) << 0x1c
        
        int64_t x24_5
        
        if (x8_36 == 0)
            x24_5 = 0
        else
            int64_t x25_1 = sx.q(x8_36)
            int64_t x0_17 =
                _spMalloc(x25_1, "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x95)
            x24_5 = x0_17
            memcpy(x0_17, *x0, x25_1 - 1)
            *x0 += x25_1 - 1
            *(x24_5 + x25_1 - 1) = 0
        
        *(result[5] + i) = x24_5
        i += 8
    while (zx.q(x23_7) << 3 != i)

char* x9_39 = *x0
*x0 = &x9_39[1]
uint32_t x10_48 = zx.d(*x9_39)
int32_t x8_42 = x10_48 & 0x7f

if ((x10_48 & 0x80) != 0)
    *x0 = &x9_39[2]
    uint32_t x10_50 = zx.d(x9_39[1])
    x8_42 = (0xffffc07f & x8_42) | (0x7f & x10_50) << 7
    
    if ((x10_50 & 0x80) != 0)
        *x0 = &x9_39[3]
        uint32_t x10_52 = zx.d(x9_39[2])
        x8_42 = (0xffe03fff & x8_42) | (0x7f & x10_52) << 0xe
        
        if ((x10_52 & 0x80) != 0)
            *x0 = &x9_39[4]
            uint32_t x10_54 = zx.d(x9_39[3])
            x8_42 = (0xf01fffff & x8_42) | (0x7f & x10_54) << 0x15
            
            if ((x10_54 & 0x80) != 0)
                *x0 = &x9_39[5]
                x8_42 = (0xfffffff & x8_42) | (0xf & zx.d(x9_39[4])) << 0x1c

result[6].d = x8_42
int64_t x0_19 = _spMalloc(zx.q(x8_42) << 0x20 s>> 0x1d, 
    "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x39e)
int32_t x8_43 = result[6].d
result[7] = x0_19

if (x8_43 s>= 1)
    int64_t i_1 = 0
    
    do
        char* x9_41 = *x0
        *x0 = &x9_41[1]
        uint32_t x10_56 = zx.d(*x9_41)
        int32_t x8_47 = x10_56 & 0x7f
        
        if ((x10_56 & 0x80) != 0)
            *x0 = &x9_41[2]
            uint32_t x10_58 = zx.d(x9_41[1])
            x8_47 = (0xffffc07f & x8_47) | (0x7f & x10_58) << 7
            
            if ((x10_58 & 0x80) != 0)
                *x0 = &x9_41[3]
                uint32_t x10_60 = zx.d(x9_41[2])
                x8_47 = (0xffe03fff & x8_47) | (0x7f & x10_60) << 0xe
                
                if ((x10_60 & 0x80) != 0)
                    *x0 = &x9_41[4]
                    uint32_t x10_62 = zx.d(x9_41[3])
                    x8_47 = (0xf01fffff & x8_47) | (0x7f & x10_62) << 0x15
                    
                    if ((x10_62 & 0x80) != 0)
                        *x0 = &x9_41[5]
                        x8_47 = (0xfffffff & x8_47) | (0xf & zx.d(x9_41[4])) << 0x1c
        
        int64_t x2_6
        int64_t x26_1
        
        if (x8_47 == 0)
            x26_1 = 0
            
            if (i_1 != 0)
            label_fc3088:
                char* x10_64 = *x0
                int64_t x8_50 = result[7]
                *x0 = &x10_64[1]
                uint32_t x11_8 = zx.d(*x10_64)
                int32_t x9_44 = x11_8 & 0x7f
                
                if ((x11_8 & 0x80) != 0)
                    *x0 = &x10_64[2]
                    uint32_t x11_10 = zx.d(x10_64[1])
                    x9_44 = (0xffffc07f & x9_44) | (0x7f & x11_10) << 7
                    
                    if ((x11_10 & 0x80) != 0)
                        *x0 = &x10_64[3]
                        uint32_t x11_12 = zx.d(x10_64[2])
                        x9_44 = (0xffe03fff & x9_44) | (0x7f & x11_12) << 0xe
                        
                        if ((x11_12 & 0x80) != 0)
                            *x0 = &x10_64[4]
                            uint32_t x11_14 = zx.d(x10_64[3])
                            x9_44 = (0xf01fffff & x9_44) | (0x7f & x11_14) << 0x15
                            
                            if ((x11_14 & 0x80) != 0)
                                *x0 = &x10_64[5]
                                x9_44 = (0xfffffff & x9_44) | (0xf & zx.d(x10_64[4])) << 0x1c
                
                x2_6 = *(x8_50 + (sx.q(x9_44) << 3))
            else
                x2_6 = 0
        else
            int64_t x25_3 = sx.q(x8_47)
            int64_t x0_21 =
                _spMalloc(x25_3, "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x95)
            x26_1 = x0_21
            memcpy(x0_21, *x0, x25_3 - 1)
            *x0 += x25_3 - 1
            *(x26_1 + x25_3 - 1) = 0
            
            if (i_1 != 0)
                goto label_fc3088
            
            x2_6 = 0
        
        void* x0_23 = spBoneData_create(zx.q(i_1.d), x26_1, x2_6)
        _spFree(x26_1)
        char* x8_51 = *x0
        *x0 = &x8_51[1]
        uint32_t x9_46 = zx.d(*x8_51)
        *x0 = &x8_51[2]
        char x10_67 = x8_51[1]
        *x0 = &x8_51[3]
        uint32_t x11_17 = zx.d(x8_51[2])
        *x0 = &x8_51[4]
        *(x0_23 + 0x24) = zx.d(x8_51[3])
            | (0xffffff & ((0xffff00ff & x9_46 << 0x10) | zx.d(x10_67) << 8 | x11_17)) << 8
        char* x8_54 = *x0
        *x0 = &x8_54[1]
        uint32_t x9_51 = zx.d(*x8_54)
        *x0 = &x8_54[2]
        char x10_69 = x8_54[1]
        *x0 = &x8_54[3]
        uint32_t x11_19 = zx.d(x8_54[2])
        *x0 = &x8_54[4]
        *(x0_23 + 0x1c) = *arg1 * float.s(zx.d(x8_54[3])
            | (0xffffff & ((0xffff00ff & x9_51 << 0x10) | zx.d(x10_69) << 8 | x11_19)) << 8)
        char* x8_57 = *x0
        *x0 = &x8_57[1]
        uint32_t x9_56 = zx.d(*x8_57)
        *x0 = &x8_57[2]
        char x10_71 = x8_57[1]
        *x0 = &x8_57[3]
        uint32_t x11_21 = zx.d(x8_57[2])
        *x0 = &x8_57[4]
        *(x0_23 + 0x20) = *arg1 * float.s(zx.d(x8_57[3])
            | (0xffffff & ((0xffff00ff & x9_56 << 0x10) | zx.d(x10_71) << 8 | x11_21)) << 8)
        char* x8_60 = *x0
        *x0 = &x8_60[1]
        uint32_t x9_61 = zx.d(*x8_60)
        *x0 = &x8_60[2]
        char x10_73 = x8_60[1]
        *x0 = &x8_60[3]
        uint32_t x11_23 = zx.d(x8_60[2])
        *x0 = &x8_60[4]
        *(x0_23 + 0x28) = zx.d(x8_60[3])
            | (0xffffff & ((0xffff00ff & x9_61 << 0x10) | zx.d(x10_73) << 8 | x11_23)) << 8
        char* x8_63 = *x0
        *x0 = &x8_63[1]
        uint32_t x9_66 = zx.d(*x8_63)
        *x0 = &x8_63[2]
        char x10_75 = x8_63[1]
        *x0 = &x8_63[3]
        uint32_t x11_25 = zx.d(x8_63[2])
        *x0 = &x8_63[4]
        *(x0_23 + 0x2c) = zx.d(x8_63[3])
            | (0xffffff & ((0xffff00ff & x9_66 << 0x10) | zx.d(x10_75) << 8 | x11_25)) << 8
        char* x8_66 = *x0
        *x0 = &x8_66[1]
        uint32_t x9_71 = zx.d(*x8_66)
        *x0 = &x8_66[2]
        char x10_77 = x8_66[1]
        *x0 = &x8_66[3]
        uint32_t x11_27 = zx.d(x8_66[2])
        *x0 = &x8_66[4]
        *(x0_23 + 0x30) = zx.d(x8_66[3])
            | (0xffffff & ((0xffff00ff & x9_71 << 0x10) | zx.d(x10_77) << 8 | x11_27)) << 8
        char* x8_69 = *x0
        *x0 = &x8_69[1]
        uint32_t x9_76 = zx.d(*x8_69)
        *x0 = &x8_69[2]
        char x10_79 = x8_69[1]
        *x0 = &x8_69[3]
        uint32_t x11_29 = zx.d(x8_69[2])
        *x0 = &x8_69[4]
        *(x0_23 + 0x34) = zx.d(x8_69[3])
            | (0xffffff & ((0xffff00ff & x9_76 << 0x10) | zx.d(x10_79) << 8 | x11_29)) << 8
        char* x8_72 = *x0
        *x0 = &x8_72[1]
        uint32_t x9_81 = zx.d(*x8_72)
        *x0 = &x8_72[2]
        char x10_81 = x8_72[1]
        *x0 = &x8_72[3]
        uint32_t x11_31 = zx.d(x8_72[2])
        *x0 = &x8_72[4]
        *(x0_23 + 0x18) = *arg1 * float.s(zx.d(x8_72[3])
            | (0xffffff & ((0xffff00ff & x9_81 << 0x10) | zx.d(x10_81) << 8 | x11_31)) << 8)
        char* x9_85 = *x0
        *x0 = &x9_85[1]
        uint32_t x10_82 = zx.d(*x9_85)
        int32_t x8_76 = x10_82 & 0x7f
        
        if ((x10_82 & 0x80) != 0)
            *x0 = &x9_85[2]
            uint32_t x10_84 = zx.d(x9_85[1])
            x8_76 = (0xffffc07f & x8_76) | (0x7f & x10_84) << 7
            
            if ((x10_84 & 0x80) != 0)
                *x0 = &x9_85[3]
                uint32_t x10_86 = zx.d(x9_85[2])
                x8_76 = (0xffe03fff & x8_76) | (0x7f & x10_86) << 0xe
                
                if ((x10_86 & 0x80) != 0)
                    *x0 = &x9_85[4]
                    uint32_t x10_88 = zx.d(x9_85[3])
                    x8_76 = (0xf01fffff & x8_76) | (0x7f & x10_88) << 0x15
                    
                    if ((x10_88 & 0x80) != 0)
                        *x0 = &x9_85[5]
                        x8_76 = (0xfffffff & x8_76) | (0xf & zx.d(x9_85[4])) << 0x1c
        
        if (x8_76 u<= 4)
            *(x0_23 + 0x38) = x8_76
        
        char* x8_77 = *x0
        *x0 = &x8_77[1]
        *(x0_23 + 0x3c) = zx.d(*x8_77) != 0 ? 1 : 0
        
        if (x27 != 0)
            *x0 += 4
        
        *(result[7] + (i_1 << 3)) = x0_23
        i_1 += 1
    while (i_1 s< sx.q(result[6].d))

char* x9_88 = *x0
*x0 = &x9_88[1]
uint32_t x10_90 = zx.d(*x9_88)
int32_t x8_83 = x10_90 & 0x7f

if ((x10_90 & 0x80) != 0)
    *x0 = &x9_88[2]
    uint32_t x10_92 = zx.d(x9_88[1])
    x8_83 = (0xffffc07f & x8_83) | (0x7f & x10_92) << 7
    
    if ((x10_92 & 0x80) != 0)
        *x0 = &x9_88[3]
        uint32_t x10_94 = zx.d(x9_88[2])
        x8_83 = (0xffe03fff & x8_83) | (0x7f & x10_94) << 0xe
        
        if ((x10_94 & 0x80) != 0)
            *x0 = &x9_88[4]
            uint32_t x10_96 = zx.d(x9_88[3])
            x8_83 = (0xf01fffff & x8_83) | (0x7f & x10_96) << 0x15
            
            if ((x10_96 & 0x80) != 0)
                *x0 = &x9_88[5]
                x8_83 = (0xfffffff & x8_83) | (0xf & zx.d(x9_88[4])) << 0x1c

result[8].d = x8_83
int64_t x0_26 = _spMalloc(zx.q(x8_83) << 0x20 s>> 0x1d, 
    "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x3be)
int32_t x8_84 = result[8].d
result[9] = x0_26

if (x8_84 s>= 1)
    int64_t i_2 = 0
    
    do
        char* x10_98 = *x0
        void* x8_88 = &x10_98[1]
        *x0 = x8_88
        uint32_t x11_32 = zx.d(*x10_98)
        int32_t x9_90 = x11_32 & 0x7f
        
        if ((x11_32 & 0x80) != 0)
            x8_88 = &x10_98[2]
            *x0 = x8_88
            uint32_t x11_33 = zx.d(x10_98[1])
            x9_90 = (0xffffc07f & x9_90) | (0x7f & x11_33) << 7
            
            if ((x11_33 & 0x80) != 0)
                x8_88 = &x10_98[3]
                *x0 = x8_88
                uint32_t x11_34 = zx.d(x10_98[2])
                x9_90 = (0xffe03fff & x9_90) | (0x7f & x11_34) << 0xe
                
                if ((x11_34 & 0x80) != 0)
                    x8_88 = &x10_98[4]
                    *x0 = x8_88
                    uint32_t x11_35 = zx.d(x10_98[3])
                    x9_90 = (0xf01fffff & x9_90) | (0x7f & x11_35) << 0x15
                    
                    if ((x11_35 & 0x80) != 0)
                        x8_88 = &x10_98[5]
                        *x0 = x8_88
                        x9_90 = (0xfffffff & x9_90) | (0xf & zx.d(x10_98[4])) << 0x1c
        
        int64_t x26_2
        
        if (x9_90 == 0)
            x26_2 = 0
        else
            int64_t x25_6 = sx.q(x9_90)
            int64_t x0_28 =
                _spMalloc(x25_6, "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x95)
            x26_2 = x0_28
            memcpy(x0_28, *x0, x25_6 - 1)
            *x0 += x25_6 - 1
            *(x26_2 + x25_6 - 1) = 0
            x8_88 = *x0
        
        int64_t x9_91 = result[7]
        *x0 = x8_88 + 1
        uint32_t x11_36 = zx.d(*x8_88)
        int32_t x10_101 = x11_36 & 0x7f
        
        if ((x11_36 & 0x80) != 0)
            *x0 = x8_88 + 2
            uint32_t x11_38 = zx.d(*(x8_88 + 1))
            x10_101 = (0xffffc07f & x10_101) | (0x7f & x11_38) << 7
            
            if ((x11_38 & 0x80) != 0)
                *x0 = x8_88 + 3
                uint32_t x11_40 = zx.d(*(x8_88 + 2))
                x10_101 = (0xffe03fff & x10_101) | (0x7f & x11_40) << 0xe
                
                if ((x11_40 & 0x80) != 0)
                    *x0 = x8_88 + 4
                    uint32_t x11_42 = zx.d(*(x8_88 + 3))
                    x10_101 = (0xf01fffff & x10_101) | (0x7f & x11_42) << 0x15
                    
                    if ((x11_42 & 0x80) != 0)
                        *x0 = x8_88 + 5
                        x10_101 = (0xfffffff & x10_101) | (0xf & zx.d(*(x8_88 + 4))) << 0x1c
        
        void* x0_30 = spSlotData_create(zx.q(i_2.d), x26_2, *(x9_91 + (sx.q(x10_101) << 3)))
        _spFree(x26_2)
        char* x8_92 = *x0
        float v1_2 = float.s(0x437f0000)
        *x0 = &x8_92[1]
        float v0_2
        v0_2.b = *x8_92
        *(x0_30 + 0x20) = float.s(v0_2) / v1_2
        char* x8_93 = *x0
        *x0 = &x8_93[1]
        v0_2.b = *x8_93
        *(x0_30 + 0x24) = float.s(v0_2) / v1_2
        char* x8_94 = *x0
        *x0 = &x8_94[1]
        v0_2.b = *x8_94
        *(x0_30 + 0x28) = float.s(v0_2) / v1_2
        char* x8_95 = *x0
        *x0 = &x8_95[1]
        v0_2.b = *x8_95
        *(x0_30 + 0x2c) = float.s(v0_2) / v1_2
        char* x10_102 = *x0
        *x0 = &x10_102[1]
        uint32_t x9_96 = zx.d(*x10_102)
        *x0 = &x10_102[2]
        uint32_t fp_1 = zx.d(x10_102[1])
        *x0 = &x10_102[3]
        uint32_t x26_3 = zx.d(x10_102[2])
        void* x8_97 = &x10_102[4]
        *x0 = x8_97
        uint32_t x28_2 = zx.d(x10_102[3])
        
        if ((x26_3 & fp_1) != 0xff || (x28_2 & x9_96) != 0xff)
            float v2_1 = float.s(0x437f0000)
            *(x0_30 + 0x30) = spColor_create()
            spColor_setFromFloats(float.s(fp_1) / v2_1, float.s(x26_3) / v2_1, 
                float.s(x28_2) / v2_1, fconvert.s(1f))
            x8_97 = *x0
        
        *x0 = x8_97 + 1
        uint32_t x10_104 = zx.d(*x8_97)
        int32_t x9_99 = x10_104 & 0x7f
        
        if ((x10_104 & 0x80) != 0)
            *x0 = x8_97 + 2
            uint32_t x10_106 = zx.d(*(x8_97 + 1))
            x9_99 = (0xffffc07f & x9_99) | (0x7f & x10_106) << 7
            
            if ((x10_106 & 0x80) != 0)
                *x0 = x8_97 + 3
                uint32_t x10_108 = zx.d(*(x8_97 + 2))
                x9_99 = (0xffe03fff & x9_99) | (0x7f & x10_108) << 0xe
                
                if ((x10_108 & 0x80) != 0)
                    *x0 = x8_97 + 4
                    uint32_t x10_110 = zx.d(*(x8_97 + 3))
                    x9_99 = (0xf01fffff & x9_99) | (0x7f & x10_110) << 0x15
                    
                    if ((x10_110 & 0x80) != 0)
                        *x0 = x8_97 + 5
                        x9_99 = (0xfffffff & x9_99) | (0xf & zx.d(*(x8_97 + 4))) << 0x1c
        
        char* x26_4
        
        if (x9_99 != 0)
            x26_4 = *(result[5] + (sx.q(x9_99 - 1) << 3))
        
        if (x9_99 == 0 || x26_4 == 0)
            *(x0_30 + 0x18) = 0
        else
            int64_t x0_36 = _spMalloc(strlen(x26_4) + 1, 
                "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x3d1)
            *(x0_30 + 0x18) = x0_36
            strcpy(x0_36, x26_4)
        
        char* x9_101 = *x0
        *x0 = &x9_101[1]
        uint32_t x10_112 = zx.d(*x9_101)
        int32_t x8_85 = x10_112 & 0x7f
        
        if ((x10_112 & 0x80) != 0)
            *x0 = &x9_101[2]
            uint32_t x10_114 = zx.d(x9_101[1])
            x8_85 = (0xffffc07f & x8_85) | (0x7f & x10_114) << 7
            
            if ((x10_114 & 0x80) != 0)
                *x0 = &x9_101[3]
                uint32_t x10_116 = zx.d(x9_101[2])
                x8_85 = (0xffe03fff & x8_85) | (0x7f & x10_116) << 0xe
                
                if ((x10_116 & 0x80) != 0)
                    *x0 = &x9_101[4]
                    uint32_t x10_118 = zx.d(x9_101[3])
                    x8_85 = (0xf01fffff & x8_85) | (0x7f & x10_118) << 0x15
                    
                    if ((x10_118 & 0x80) != 0)
                        *x0 = &x9_101[5]
                        x8_85 = (0xfffffff & x8_85) | (0xf & zx.d(x9_101[4])) << 0x1c
        
        *(x0_30 + 0x38) = x8_85
        *(result[9] + (i_2 << 3)) = x0_30
        i_2 += 1
    while (i_2 s< sx.q(result[8].d))

char* x9_103 = *x0
*x0 = &x9_103[1]
uint32_t x10_120 = zx.d(*x9_103)
int32_t x8_102 = x10_120 & 0x7f

if ((x10_120 & 0x80) != 0)
    *x0 = &x9_103[2]
    uint32_t x10_122 = zx.d(x9_103[1])
    x8_102 = (0xffffc07f & x8_102) | (0x7f & x10_122) << 7
    
    if ((x10_122 & 0x80) != 0)
        *x0 = &x9_103[3]
        uint32_t x10_124 = zx.d(x9_103[2])
        x8_102 = (0xffe03fff & x8_102) | (0x7f & x10_124) << 0xe
        
        if ((x10_124 & 0x80) != 0)
            *x0 = &x9_103[4]
            uint32_t x10_126 = zx.d(x9_103[3])
            x8_102 = (0xf01fffff & x8_102) | (0x7f & x10_126) << 0x15
            
            if ((x10_126 & 0x80) != 0)
                *x0 = &x9_103[5]
                x8_102 = (0xfffffff & x8_102) | (0xf & zx.d(x9_103[4])) << 0x1c

result[0x11].d = x8_102
int64_t x0_38 = _spMalloc(zx.q(x8_102) << 0x20 s>> 0x1d, 
    "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x3d9)
int32_t x8_103 = result[0x11].d
result[0x12] = x0_38

if (x8_103 s>= 1)
    int64_t i_3 = 0
    
    do
        char* x9_120 = *x0
        *x0 = &x9_120[1]
        uint32_t x10_132 = zx.d(*x9_120)
        int32_t x8_125 = x10_132 & 0x7f
        
        if ((x10_132 & 0x80) != 0)
            *x0 = &x9_120[2]
            uint32_t x10_134 = zx.d(x9_120[1])
            x8_125 = (0xffffc07f & x8_125) | (0x7f & x10_134) << 7
            
            if ((x10_134 & 0x80) != 0)
                *x0 = &x9_120[3]
                uint32_t x10_136 = zx.d(x9_120[2])
                x8_125 = (0xffe03fff & x8_125) | (0x7f & x10_136) << 0xe
                
                if ((x10_136 & 0x80) != 0)
                    *x0 = &x9_120[4]
                    uint32_t x10_138 = zx.d(x9_120[3])
                    x8_125 = (0xf01fffff & x8_125) | (0x7f & x10_138) << 0x15
                    
                    if ((x10_138 & 0x80) != 0)
                        *x0 = &x9_120[5]
                        x8_125 = (0xfffffff & x8_125) | (0xf & zx.d(x9_120[4])) << 0x1c
        
        int64_t x25_9
        
        if (x8_125 == 0)
            x25_9 = 0
        else
            int64_t x24_6 = sx.q(x8_125)
            int64_t x0_40 =
                _spMalloc(x24_6, "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x95)
            x25_9 = x0_40
            memcpy(x0_40, *x0, x24_6 - 1)
            *x0 += x24_6 - 1
            *(x25_9 + x24_6 - 1) = 0
        
        void* x0_42 = spIkConstraintData_create(x25_9)
        char* x9_122 = *x0
        *x0 = &x9_122[1]
        uint32_t x10_140 = zx.d(*x9_122)
        int32_t x8_129 = x10_140 & 0x7f
        
        if ((x10_140 & 0x80) != 0)
            *x0 = &x9_122[2]
            uint32_t x10_142 = zx.d(x9_122[1])
            x8_129 = (0xffffc07f & x8_129) | (0x7f & x10_142) << 7
            
            if ((x10_142 & 0x80) != 0)
                *x0 = &x9_122[3]
                uint32_t x10_144 = zx.d(x9_122[2])
                x8_129 = (0xffe03fff & x8_129) | (0x7f & x10_144) << 0xe
                
                if ((x10_144 & 0x80) != 0)
                    *x0 = &x9_122[4]
                    uint32_t x10_146 = zx.d(x9_122[3])
                    x8_129 = (0xf01fffff & x8_129) | (0x7f & x10_146) << 0x15
                    
                    if ((x10_146 & 0x80) != 0)
                        *x0 = &x9_122[5]
                        x8_129 = (0xfffffff & x8_129) | (0xf & zx.d(x9_122[4])) << 0x1c
        
        *(x0_42 + 8) = x8_129
        char* x8_130 = *x0
        *x0 = &x8_130[1]
        *(x0_42 + 0xc) = zx.d(*x8_130) != 0 ? 1 : 0
        _spFree(x25_9)
        char* x9_125 = *x0
        *x0 = &x9_125[1]
        uint32_t x10_148 = zx.d(*x9_125)
        int32_t x8_134 = x10_148 & 0x7f
        
        if ((x10_148 & 0x80) != 0)
            *x0 = &x9_125[2]
            uint32_t x10_150 = zx.d(x9_125[1])
            x8_134 = (0xffffc07f & x8_134) | (0x7f & x10_150) << 7
            
            if ((x10_150 & 0x80) != 0)
                *x0 = &x9_125[3]
                uint32_t x10_152 = zx.d(x9_125[2])
                x8_134 = (0xffe03fff & x8_134) | (0x7f & x10_152) << 0xe
                
                if ((x10_152 & 0x80) != 0)
                    *x0 = &x9_125[4]
                    uint32_t x10_154 = zx.d(x9_125[3])
                    x8_134 = (0xf01fffff & x8_134) | (0x7f & x10_154) << 0x15
                    
                    if ((x10_154 & 0x80) != 0)
                        *x0 = &x9_125[5]
                        x8_134 = (0xfffffff & x8_134) | (0xf & zx.d(x9_125[4])) << 0x1c
        
        *(x0_42 + 0x10) = x8_134
        int64_t x0_45 = _spMalloc(zx.q(x8_134) << 0x20 s>> 0x1d, 
            "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x3e2)
        int32_t x8_135 = *(x0_42 + 0x10)
        *(x0_42 + 0x18) = x0_45
        
        if (x8_135 s>= 1)
            int64_t j = 0
            
            do
                char* x11_49 = *x0
                int64_t x9_129 = result[7]
                *x0 = &x11_49[1]
                uint32_t x12_15 = zx.d(*x11_49)
                int32_t x10_156 = x12_15 & 0x7f
                
                if ((x12_15 & 0x80) != 0)
                    *x0 = &x11_49[2]
                    uint32_t x12_17 = zx.d(x11_49[1])
                    x10_156 = (0xffffc07f & x10_156) | (0x7f & x12_17) << 7
                    
                    if ((x12_17 & 0x80) != 0)
                        *x0 = &x11_49[3]
                        uint32_t x12_19 = zx.d(x11_49[2])
                        x10_156 = (0xffe03fff & x10_156) | (0x7f & x12_19) << 0xe
                        
                        if ((x12_19 & 0x80) != 0)
                            *x0 = &x11_49[4]
                            uint32_t x12_21 = zx.d(x11_49[3])
                            x10_156 = (0xf01fffff & x10_156) | (0x7f & x12_21) << 0x15
                            
                            if ((x12_21 & 0x80) != 0)
                                *x0 = &x11_49[5]
                                x10_156 = (0xfffffff & x10_156) | (0xf & zx.d(x11_49[4])) << 0x1c
                
                *(*(x0_42 + 0x18) + (j << 3)) = *(x9_129 + (sx.q(x10_156) << 3))
                j += 1
            while (j s< sx.q(*(x0_42 + 0x10)))
        
        char* x10_159 = *x0
        int64_t x8_136 = result[7]
        *x0 = &x10_159[1]
        uint32_t x11_51 = zx.d(*x10_159)
        int32_t x9_105 = x11_51 & 0x7f
        
        if ((x11_51 & 0x80) != 0)
            *x0 = &x10_159[2]
            uint32_t x11_53 = zx.d(x10_159[1])
            x9_105 = (0xffffc07f & x9_105) | (0x7f & x11_53) << 7
            
            if ((x11_53 & 0x80) != 0)
                *x0 = &x10_159[3]
                uint32_t x11_55 = zx.d(x10_159[2])
                x9_105 = (0xffe03fff & x9_105) | (0x7f & x11_55) << 0xe
                
                if ((x11_55 & 0x80) != 0)
                    *x0 = &x10_159[4]
                    uint32_t x11_57 = zx.d(x10_159[3])
                    x9_105 = (0xf01fffff & x9_105) | (0x7f & x11_57) << 0x15
                    
                    if ((x11_57 & 0x80) != 0)
                        *x0 = &x10_159[5]
                        x9_105 = (0xfffffff & x9_105) | (0xf & zx.d(x10_159[4])) << 0x1c
        
        *(x0_42 + 0x20) = *(x8_136 + (sx.q(x9_105) << 3))
        char* x8_105 = *x0
        *x0 = &x8_105[1]
        uint32_t x9_107 = zx.d(*x8_105)
        *x0 = &x8_105[2]
        char x10_129 = x8_105[1]
        *x0 = &x8_105[3]
        uint32_t x11_46 = zx.d(x8_105[2])
        *x0 = &x8_105[4]
        *(x0_42 + 0x38) = zx.d(x8_105[3])
            | (0xffffff & ((0xffff00ff & x9_107 << 0x10) | zx.d(x10_129) << 8 | x11_46)) << 8
        char* x8_108 = *x0
        *x0 = &x8_108[1]
        uint32_t x9_112 = zx.d(*x8_108)
        *x0 = &x8_108[2]
        char x10_131 = x8_108[1]
        *x0 = &x8_108[3]
        uint32_t x11_48 = zx.d(x8_108[2])
        *x0 = &x8_108[4]
        *(x0_42 + 0x3c) = zx.d(x8_108[3])
            | (0xffffff & ((0xffff00ff & x9_112 << 0x10) | zx.d(x10_131) << 8 | x11_48)) << 8
        char* x8_111 = *x0
        *x0 = &x8_111[1]
        *(x0_42 + 0x28) = sx.d(*x8_111)
        char* x8_113 = *x0
        *x0 = &x8_113[1]
        *(x0_42 + 0x2c) = zx.d(*x8_113) != 0 ? 1 : 0
        char* x8_116 = *x0
        *x0 = &x8_116[1]
        *(x0_42 + 0x30) = zx.d(*x8_116) != 0 ? 1 : 0
        char* x8_119 = *x0
        *x0 = &x8_119[1]
        *(x0_42 + 0x34) = zx.d(*x8_119) != 0 ? 1 : 0
        *(result[0x12] + (i_3 << 3)) = x0_42
        i_3 += 1
    while (i_3 s< sx.q(result[0x11].d))

char* x9_131 = *x0
*x0 = &x9_131[1]
uint32_t x10_161 = zx.d(*x9_131)
int32_t x8_138 = x10_161 & 0x7f

if ((x10_161 & 0x80) != 0)
    *x0 = &x9_131[2]
    uint32_t x10_163 = zx.d(x9_131[1])
    x8_138 = (0xffffc07f & x8_138) | (0x7f & x10_163) << 7
    
    if ((x10_163 & 0x80) != 0)
        *x0 = &x9_131[3]
        uint32_t x10_165 = zx.d(x9_131[2])
        x8_138 = (0xffe03fff & x8_138) | (0x7f & x10_165) << 0xe
        
        if ((x10_165 & 0x80) != 0)
            *x0 = &x9_131[4]
            uint32_t x10_167 = zx.d(x9_131[3])
            x8_138 = (0xf01fffff & x8_138) | (0x7f & x10_167) << 0x15
            
            if ((x10_167 & 0x80) != 0)
                *x0 = &x9_131[5]
                x8_138 = (0xfffffff & x8_138) | (0xf & zx.d(x9_131[4])) << 0x1c

result[0x13].d = x8_138
int64_t x0_47 = _spMalloc(zx.q(x8_138) << 0x20 s>> 0x1d, 
    "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x3f2)
int32_t x8_139 = result[0x13].d
result[0x14] = x0_47

if (x8_139 s>= 1)
    int64_t i_4 = 0
    
    do
        char* x9_186 = *x0
        *x0 = &x9_186[1]
        uint32_t x10_189 = zx.d(*x9_186)
        int32_t x8_180 = x10_189 & 0x7f
        
        if ((x10_189 & 0x80) != 0)
            *x0 = &x9_186[2]
            uint32_t x10_191 = zx.d(x9_186[1])
            x8_180 = (0xffffc07f & x8_180) | (0x7f & x10_191) << 7
            
            if ((x10_191 & 0x80) != 0)
                *x0 = &x9_186[3]
                uint32_t x10_193 = zx.d(x9_186[2])
                x8_180 = (0xffe03fff & x8_180) | (0x7f & x10_193) << 0xe
                
                if ((x10_193 & 0x80) != 0)
                    *x0 = &x9_186[4]
                    uint32_t x10_195 = zx.d(x9_186[3])
                    x8_180 = (0xf01fffff & x8_180) | (0x7f & x10_195) << 0x15
                    
                    if ((x10_195 & 0x80) != 0)
                        *x0 = &x9_186[5]
                        x8_180 = (0xfffffff & x8_180) | (0xf & zx.d(x9_186[4])) << 0x1c
        
        int64_t x25_10
        
        if (x8_180 == 0)
            x25_10 = 0
        else
            int64_t x24_9 = sx.q(x8_180)
            int64_t x0_49 =
                _spMalloc(x24_9, "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x95)
            x25_10 = x0_49
            memcpy(x0_49, *x0, x24_9 - 1)
            *x0 += x24_9 - 1
            *(x25_10 + x24_9 - 1) = 0
        
        void* x0_51 = spTransformConstraintData_create(x25_10)
        char* x9_188 = *x0
        *x0 = &x9_188[1]
        uint32_t x10_197 = zx.d(*x9_188)
        int32_t x8_184 = x10_197 & 0x7f
        
        if ((x10_197 & 0x80) != 0)
            *x0 = &x9_188[2]
            uint32_t x10_199 = zx.d(x9_188[1])
            x8_184 = (0xffffc07f & x8_184) | (0x7f & x10_199) << 7
            
            if ((x10_199 & 0x80) != 0)
                *x0 = &x9_188[3]
                uint32_t x10_201 = zx.d(x9_188[2])
                x8_184 = (0xffe03fff & x8_184) | (0x7f & x10_201) << 0xe
                
                if ((x10_201 & 0x80) != 0)
                    *x0 = &x9_188[4]
                    uint32_t x10_203 = zx.d(x9_188[3])
                    x8_184 = (0xf01fffff & x8_184) | (0x7f & x10_203) << 0x15
                    
                    if ((x10_203 & 0x80) != 0)
                        *x0 = &x9_188[5]
                        x8_184 = (0xfffffff & x8_184) | (0xf & zx.d(x9_188[4])) << 0x1c
        
        *(x0_51 + 8) = x8_184
        char* x8_185 = *x0
        *x0 = &x8_185[1]
        *(x0_51 + 0xc) = zx.d(*x8_185) != 0 ? 1 : 0
        _spFree(x25_10)
        char* x9_191 = *x0
        *x0 = &x9_191[1]
        uint32_t x10_205 = zx.d(*x9_191)
        int32_t x8_189 = x10_205 & 0x7f
        
        if ((x10_205 & 0x80) != 0)
            *x0 = &x9_191[2]
            uint32_t x10_207 = zx.d(x9_191[1])
            x8_189 = (0xffffc07f & x8_189) | (0x7f & x10_207) << 7
            
            if ((x10_207 & 0x80) != 0)
                *x0 = &x9_191[3]
                uint32_t x10_209 = zx.d(x9_191[2])
                x8_189 = (0xffe03fff & x8_189) | (0x7f & x10_209) << 0xe
                
                if ((x10_209 & 0x80) != 0)
                    *x0 = &x9_191[4]
                    uint32_t x10_211 = zx.d(x9_191[3])
                    x8_189 = (0xf01fffff & x8_189) | (0x7f & x10_211) << 0x15
                    
                    if ((x10_211 & 0x80) != 0)
                        *x0 = &x9_191[5]
                        x8_189 = (0xfffffff & x8_189) | (0xf & zx.d(x9_191[4])) << 0x1c
        
        *(x0_51 + 0x10) = x8_189
        int64_t x0_54 = _spMalloc(zx.q(x8_189) << 0x20 s>> 0x1d, 
            "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x3fb)
        int32_t x8_190 = *(x0_51 + 0x10)
        *(x0_51 + 0x18) = x0_54
        
        if (x8_190 s>= 1)
            int64_t j_1 = 0
            
            do
                char* x11_79 = *x0
                int64_t x9_195 = result[7]
                *x0 = &x11_79[1]
                uint32_t x12_33 = zx.d(*x11_79)
                int32_t x10_213 = x12_33 & 0x7f
                
                if ((x12_33 & 0x80) != 0)
                    *x0 = &x11_79[2]
                    uint32_t x12_35 = zx.d(x11_79[1])
                    x10_213 = (0xffffc07f & x10_213) | (0x7f & x12_35) << 7
                    
                    if ((x12_35 & 0x80) != 0)
                        *x0 = &x11_79[3]
                        uint32_t x12_37 = zx.d(x11_79[2])
                        x10_213 = (0xffe03fff & x10_213) | (0x7f & x12_37) << 0xe
                        
                        if ((x12_37 & 0x80) != 0)
                            *x0 = &x11_79[4]
                            uint32_t x12_39 = zx.d(x11_79[3])
                            x10_213 = (0xf01fffff & x10_213) | (0x7f & x12_39) << 0x15
                            
                            if ((x12_39 & 0x80) != 0)
                                *x0 = &x11_79[5]
                                x10_213 = (0xfffffff & x10_213) | (0xf & zx.d(x11_79[4])) << 0x1c
                
                *(*(x0_51 + 0x18) + (j_1 << 3)) = *(x9_195 + (sx.q(x10_213) << 3))
                j_1 += 1
            while (j_1 s< sx.q(*(x0_51 + 0x10)))
        
        char* x10_216 = *x0
        int64_t x8_191 = result[7]
        *x0 = &x10_216[1]
        uint32_t x11_81 = zx.d(*x10_216)
        int32_t x9_133 = x11_81 & 0x7f
        
        if ((x11_81 & 0x80) != 0)
            *x0 = &x10_216[2]
            uint32_t x11_83 = zx.d(x10_216[1])
            x9_133 = (0xffffc07f & x9_133) | (0x7f & x11_83) << 7
            
            if ((x11_83 & 0x80) != 0)
                *x0 = &x10_216[3]
                uint32_t x11_85 = zx.d(x10_216[2])
                x9_133 = (0xffe03fff & x9_133) | (0x7f & x11_85) << 0xe
                
                if ((x11_85 & 0x80) != 0)
                    *x0 = &x10_216[4]
                    uint32_t x11_87 = zx.d(x10_216[3])
                    x9_133 = (0xf01fffff & x9_133) | (0x7f & x11_87) << 0x15
                    
                    if ((x11_87 & 0x80) != 0)
                        *x0 = &x10_216[5]
                        x9_133 = (0xfffffff & x9_133) | (0xf & zx.d(x10_216[4])) << 0x1c
        
        *(x0_51 + 0x20) = *(x8_191 + (sx.q(x9_133) << 3))
        char* x8_141 = *x0
        *x0 = &x8_141[1]
        *(x0_51 + 0x54) = zx.d(*x8_141) != 0 ? 1 : 0
        char* x8_144 = *x0
        *x0 = &x8_144[1]
        *(x0_51 + 0x50) = zx.d(*x8_144) != 0 ? 1 : 0
        char* x8_147 = *x0
        *x0 = &x8_147[1]
        uint32_t x9_137 = zx.d(*x8_147)
        *x0 = &x8_147[2]
        char x10_170 = x8_147[1]
        *x0 = &x8_147[3]
        uint32_t x11_60 = zx.d(x8_147[2])
        *x0 = &x8_147[4]
        *(x0_51 + 0x38) = zx.d(x8_147[3])
            | (0xffffff & ((0xffff00ff & x9_137 << 0x10) | zx.d(x10_170) << 8 | x11_60)) << 8
        char* x8_150 = *x0
        *x0 = &x8_150[1]
        uint32_t x9_142 = zx.d(*x8_150)
        *x0 = &x8_150[2]
        char x10_172 = x8_150[1]
        *x0 = &x8_150[3]
        uint32_t x11_62 = zx.d(x8_150[2])
        *x0 = &x8_150[4]
        *(x0_51 + 0x3c) = *arg1 * float.s(zx.d(x8_150[3])
            | (0xffffff & ((0xffff00ff & x9_142 << 0x10) | zx.d(x10_172) << 8 | x11_62)) << 8)
        char* x8_153 = *x0
        *x0 = &x8_153[1]
        uint32_t x9_147 = zx.d(*x8_153)
        *x0 = &x8_153[2]
        char x10_174 = x8_153[1]
        *x0 = &x8_153[3]
        uint32_t x11_64 = zx.d(x8_153[2])
        *x0 = &x8_153[4]
        *(x0_51 + 0x40) = *arg1 * float.s(zx.d(x8_153[3])
            | (0xffffff & ((0xffff00ff & x9_147 << 0x10) | zx.d(x10_174) << 8 | x11_64)) << 8)
        char* x8_156 = *x0
        *x0 = &x8_156[1]
        uint32_t x9_152 = zx.d(*x8_156)
        *x0 = &x8_156[2]
        char x10_176 = x8_156[1]
        *x0 = &x8_156[3]
        uint32_t x11_66 = zx.d(x8_156[2])
        *x0 = &x8_156[4]
        *(x0_51 + 0x44) = zx.d(x8_156[3])
            | (0xffffff & ((0xffff00ff & x9_152 << 0x10) | zx.d(x10_176) << 8 | x11_66)) << 8
        char* x8_159 = *x0
        *x0 = &x8_159[1]
        uint32_t x9_157 = zx.d(*x8_159)
        *x0 = &x8_159[2]
        char x10_178 = x8_159[1]
        *x0 = &x8_159[3]
        uint32_t x11_68 = zx.d(x8_159[2])
        *x0 = &x8_159[4]
        *(x0_51 + 0x48) = zx.d(x8_159[3])
            | (0xffffff & ((0xffff00ff & x9_157 << 0x10) | zx.d(x10_178) << 8 | x11_68)) << 8
        char* x8_162 = *x0
        *x0 = &x8_162[1]
        uint32_t x9_162 = zx.d(*x8_162)
        *x0 = &x8_162[2]
        char x10_180 = x8_162[1]
        *x0 = &x8_162[3]
        uint32_t x11_70 = zx.d(x8_162[2])
        *x0 = &x8_162[4]
        *(x0_51 + 0x4c) = zx.d(x8_162[3])
            | (0xffffff & ((0xffff00ff & x9_162 << 0x10) | zx.d(x10_180) << 8 | x11_70)) << 8
        char* x8_165 = *x0
        *x0 = &x8_165[1]
        uint32_t x9_167 = zx.d(*x8_165)
        *x0 = &x8_165[2]
        char x10_182 = x8_165[1]
        *x0 = &x8_165[3]
        uint32_t x11_72 = zx.d(x8_165[2])
        *x0 = &x8_165[4]
        *(x0_51 + 0x28) = zx.d(x8_165[3])
            | (0xffffff & ((0xffff00ff & x9_167 << 0x10) | zx.d(x10_182) << 8 | x11_72)) << 8
        char* x8_168 = *x0
        *x0 = &x8_168[1]
        uint32_t x9_172 = zx.d(*x8_168)
        *x0 = &x8_168[2]
        char x10_184 = x8_168[1]
        *x0 = &x8_168[3]
        uint32_t x11_74 = zx.d(x8_168[2])
        *x0 = &x8_168[4]
        *(x0_51 + 0x2c) = zx.d(x8_168[3])
            | (0xffffff & ((0xffff00ff & x9_172 << 0x10) | zx.d(x10_184) << 8 | x11_74)) << 8
        char* x8_171 = *x0
        *x0 = &x8_171[1]
        uint32_t x9_177 = zx.d(*x8_171)
        *x0 = &x8_171[2]
        char x10_186 = x8_171[1]
        *x0 = &x8_171[3]
        uint32_t x11_76 = zx.d(x8_171[2])
        *x0 = &x8_171[4]
        *(x0_51 + 0x30) = zx.d(x8_171[3])
            | (0xffffff & ((0xffff00ff & x9_177 << 0x10) | zx.d(x10_186) << 8 | x11_76)) << 8
        char* x8_174 = *x0
        *x0 = &x8_174[1]
        uint32_t x9_182 = zx.d(*x8_174)
        *x0 = &x8_174[2]
        char x10_188 = x8_174[1]
        *x0 = &x8_174[3]
        uint32_t x11_78 = zx.d(x8_174[2])
        *x0 = &x8_174[4]
        *(x0_51 + 0x34) = zx.d(x8_174[3])
            | (0xffffff & ((0xffff00ff & x9_182 << 0x10) | zx.d(x10_188) << 8 | x11_78)) << 8
        *(result[0x14] + (i_4 << 3)) = x0_51
        i_4 += 1
    while (i_4 s< sx.q(result[0x13].d))

char* x9_197 = *x0
*x0 = &x9_197[1]
uint32_t x10_218 = zx.d(*x9_197)
int32_t x8_193 = x10_218 & 0x7f

if ((x10_218 & 0x80) != 0)
    *x0 = &x9_197[2]
    uint32_t x10_220 = zx.d(x9_197[1])
    x8_193 = (0xffffc07f & x8_193) | (0x7f & x10_220) << 7
    
    if ((x10_220 & 0x80) != 0)
        *x0 = &x9_197[3]
        uint32_t x10_222 = zx.d(x9_197[2])
        x8_193 = (0xffe03fff & x8_193) | (0x7f & x10_222) << 0xe
        
        if ((x10_222 & 0x80) != 0)
            *x0 = &x9_197[4]
            uint32_t x10_224 = zx.d(x9_197[3])
            x8_193 = (0xf01fffff & x8_193) | (0x7f & x10_224) << 0x15
            
            if ((x10_224 & 0x80) != 0)
                *x0 = &x9_197[5]
                x8_193 = (0xfffffff & x8_193) | (0xf & zx.d(x9_197[4])) << 0x1c

result[0x15].d = x8_193
int64_t x0_56 = _spMalloc(zx.q(x8_193) << 0x20 s>> 0x1d, 
    "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x410)
int32_t x8_194 = result[0x15].d
result[0x16] = x0_56

if (x8_194 s>= 1)
    int64_t i_5 = 0
    
    do
        char* x9_209 = *x0
        *x0 = &x9_209[1]
        uint32_t x10_230 = zx.d(*x9_209)
        int32_t x8_204 = x10_230 & 0x7f
        
        if ((x10_230 & 0x80) != 0)
            *x0 = &x9_209[2]
            uint32_t x10_232 = zx.d(x9_209[1])
            x8_204 = (0xffffc07f & x8_204) | (0x7f & x10_232) << 7
            
            if ((x10_232 & 0x80) != 0)
                *x0 = &x9_209[3]
                uint32_t x10_234 = zx.d(x9_209[2])
                x8_204 = (0xffe03fff & x8_204) | (0x7f & x10_234) << 0xe
                
                if ((x10_234 & 0x80) != 0)
                    *x0 = &x9_209[4]
                    uint32_t x10_236 = zx.d(x9_209[3])
                    x8_204 = (0xf01fffff & x8_204) | (0x7f & x10_236) << 0x15
                    
                    if ((x10_236 & 0x80) != 0)
                        *x0 = &x9_209[5]
                        x8_204 = (0xfffffff & x8_204) | (0xf & zx.d(x9_209[4])) << 0x1c
        
        int64_t x25_11
        
        if (x8_204 == 0)
            x25_11 = 0
        else
            int64_t x24_12 = sx.q(x8_204)
            int64_t x0_58 =
                _spMalloc(x24_12, "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x95)
            x25_11 = x0_58
            memcpy(x0_58, *x0, x24_12 - 1)
            *x0 += x24_12 - 1
            *(x25_11 + x24_12 - 1) = 0
        
        void* x0_60 = spPathConstraintData_create(x25_11)
        char* x9_211 = *x0
        *x0 = &x9_211[1]
        uint32_t x10_238 = zx.d(*x9_211)
        int32_t x8_208 = x10_238 & 0x7f
        
        if ((x10_238 & 0x80) != 0)
            *x0 = &x9_211[2]
            uint32_t x10_240 = zx.d(x9_211[1])
            x8_208 = (0xffffc07f & x8_208) | (0x7f & x10_240) << 7
            
            if ((x10_240 & 0x80) != 0)
                *x0 = &x9_211[3]
                uint32_t x10_242 = zx.d(x9_211[2])
                x8_208 = (0xffe03fff & x8_208) | (0x7f & x10_242) << 0xe
                
                if ((x10_242 & 0x80) != 0)
                    *x0 = &x9_211[4]
                    uint32_t x10_244 = zx.d(x9_211[3])
                    x8_208 = (0xf01fffff & x8_208) | (0x7f & x10_244) << 0x15
                    
                    if ((x10_244 & 0x80) != 0)
                        *x0 = &x9_211[5]
                        x8_208 = (0xfffffff & x8_208) | (0xf & zx.d(x9_211[4])) << 0x1c
        
        *(x0_60 + 8) = x8_208
        char* x8_209 = *x0
        *x0 = &x8_209[1]
        *(x0_60 + 0xc) = zx.d(*x8_209) != 0 ? 1 : 0
        _spFree(x25_11)
        char* x9_214 = *x0
        *x0 = &x9_214[1]
        uint32_t x10_246 = zx.d(*x9_214)
        int32_t x8_213 = x10_246 & 0x7f
        
        if ((x10_246 & 0x80) != 0)
            *x0 = &x9_214[2]
            uint32_t x10_248 = zx.d(x9_214[1])
            x8_213 = (0xffffc07f & x8_213) | (0x7f & x10_248) << 7
            
            if ((x10_248 & 0x80) != 0)
                *x0 = &x9_214[3]
                uint32_t x10_250 = zx.d(x9_214[2])
                x8_213 = (0xffe03fff & x8_213) | (0x7f & x10_250) << 0xe
                
                if ((x10_250 & 0x80) != 0)
                    *x0 = &x9_214[4]
                    uint32_t x10_252 = zx.d(x9_214[3])
                    x8_213 = (0xf01fffff & x8_213) | (0x7f & x10_252) << 0x15
                    
                    if ((x10_252 & 0x80) != 0)
                        *x0 = &x9_214[5]
                        x8_213 = (0xfffffff & x8_213) | (0xf & zx.d(x9_214[4])) << 0x1c
        
        *(x0_60 + 0x10) = x8_213
        int64_t x0_63 = _spMalloc(zx.q(x8_213) << 0x20 s>> 0x1d, 
            "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x419)
        int32_t x8_214 = *(x0_60 + 0x10)
        *(x0_60 + 0x18) = x0_63
        
        if (x8_214 s>= 1)
            int64_t j_2 = 0
            
            do
                char* x11_93 = *x0
                int64_t x9_218 = result[7]
                *x0 = &x11_93[1]
                uint32_t x12_43 = zx.d(*x11_93)
                int32_t x10_254 = x12_43 & 0x7f
                
                if ((x12_43 & 0x80) != 0)
                    *x0 = &x11_93[2]
                    uint32_t x12_45 = zx.d(x11_93[1])
                    x10_254 = (0xffffc07f & x10_254) | (0x7f & x12_45) << 7
                    
                    if ((x12_45 & 0x80) != 0)
                        *x0 = &x11_93[3]
                        uint32_t x12_47 = zx.d(x11_93[2])
                        x10_254 = (0xffe03fff & x10_254) | (0x7f & x12_47) << 0xe
                        
                        if ((x12_47 & 0x80) != 0)
                            *x0 = &x11_93[4]
                            uint32_t x12_49 = zx.d(x11_93[3])
                            x10_254 = (0xf01fffff & x10_254) | (0x7f & x12_49) << 0x15
                            
                            if ((x12_49 & 0x80) != 0)
                                *x0 = &x11_93[5]
                                x10_254 = (0xfffffff & x10_254) | (0xf & zx.d(x11_93[4])) << 0x1c
                
                *(*(x0_60 + 0x18) + (j_2 << 3)) = *(x9_218 + (sx.q(x10_254) << 3))
                j_2 += 1
            while (j_2 s< sx.q(*(x0_60 + 0x10)))
        
        char* x10_257 = *x0
        int64_t x8_215 = result[9]
        *x0 = &x10_257[1]
        uint32_t x11_95 = zx.d(*x10_257)
        int32_t x9_220 = x11_95 & 0x7f
        
        if ((x11_95 & 0x80) != 0)
            *x0 = &x10_257[2]
            uint32_t x11_97 = zx.d(x10_257[1])
            x9_220 = (0xffffc07f & x9_220) | (0x7f & x11_97) << 7
            
            if ((x11_97 & 0x80) != 0)
                *x0 = &x10_257[3]
                uint32_t x11_99 = zx.d(x10_257[2])
                x9_220 = (0xffe03fff & x9_220) | (0x7f & x11_99) << 0xe
                
                if ((x11_99 & 0x80) != 0)
                    *x0 = &x10_257[4]
                    uint32_t x11_101 = zx.d(x10_257[3])
                    x9_220 = (0xf01fffff & x9_220) | (0x7f & x11_101) << 0x15
                    
                    if ((x11_101 & 0x80) != 0)
                        *x0 = &x10_257[5]
                        x9_220 = (0xfffffff & x9_220) | (0xf & zx.d(x10_257[4])) << 0x1c
        
        *(x0_60 + 0x20) = *(x8_215 + (sx.q(x9_220) << 3))
        char* x9_221 = *x0
        *x0 = &x9_221[1]
        uint32_t x10_259 = zx.d(*x9_221)
        int32_t x8_218 = x10_259 & 0x7f
        
        if ((x10_259 & 0x80) != 0)
            *x0 = &x9_221[2]
            uint32_t x10_261 = zx.d(x9_221[1])
            x8_218 = (0xffffc07f & x8_218) | (0x7f & x10_261) << 7
            
            if ((x10_261 & 0x80) != 0)
                *x0 = &x9_221[3]
                uint32_t x10_263 = zx.d(x9_221[2])
                x8_218 = (0xffe03fff & x8_218) | (0x7f & x10_263) << 0xe
                
                if ((x10_263 & 0x80) != 0)
                    *x0 = &x9_221[4]
                    uint32_t x10_265 = zx.d(x9_221[3])
                    x8_218 = (0xf01fffff & x8_218) | (0x7f & x10_265) << 0x15
                    
                    if ((x10_265 & 0x80) != 0)
                        *x0 = &x9_221[5]
                        x8_218 = (0xfffffff & x8_218) | (0xf & zx.d(x9_221[4])) << 0x1c
        
        *(x0_60 + 0x28) = x8_218
        char* x9_223 = *x0
        *x0 = &x9_223[1]
        uint32_t x10_267 = zx.d(*x9_223)
        int32_t x8_220 = x10_267 & 0x7f
        
        if ((x10_267 & 0x80) != 0)
            *x0 = &x9_223[2]
            uint32_t x10_269 = zx.d(x9_223[1])
            x8_220 = (0xffffc07f & x8_220) | (0x7f & x10_269) << 7
            
            if ((x10_269 & 0x80) != 0)
                *x0 = &x9_223[3]
                uint32_t x10_271 = zx.d(x9_223[2])
                x8_220 = (0xffe03fff & x8_220) | (0x7f & x10_271) << 0xe
                
                if ((x10_271 & 0x80) != 0)
                    *x0 = &x9_223[4]
                    uint32_t x10_273 = zx.d(x9_223[3])
                    x8_220 = (0xf01fffff & x8_220) | (0x7f & x10_273) << 0x15
                    
                    if ((x10_273 & 0x80) != 0)
                        *x0 = &x9_223[5]
                        x8_220 = (0xfffffff & x8_220) | (0xf & zx.d(x9_223[4])) << 0x1c
        
        *(x0_60 + 0x2c) = x8_220
        char* x9_225 = *x0
        *x0 = &x9_225[1]
        uint32_t x10_275 = zx.d(*x9_225)
        int32_t x8_222 = x10_275 & 0x7f
        
        if ((x10_275 & 0x80) != 0)
            *x0 = &x9_225[2]
            uint32_t x10_277 = zx.d(x9_225[1])
            x8_222 = (0xffffc07f & x8_222) | (0x7f & x10_277) << 7
            
            if ((x10_277 & 0x80) != 0)
                *x0 = &x9_225[3]
                uint32_t x10_279 = zx.d(x9_225[2])
                x8_222 = (0xffe03fff & x8_222) | (0x7f & x10_279) << 0xe
                
                if ((x10_279 & 0x80) != 0)
                    *x0 = &x9_225[4]
                    uint32_t x10_281 = zx.d(x9_225[3])
                    x8_222 = (0xf01fffff & x8_222) | (0x7f & x10_281) << 0x15
                    
                    if ((x10_281 & 0x80) != 0)
                        *x0 = &x9_225[5]
                        x8_222 = (0xfffffff & x8_222) | (0xf & zx.d(x9_225[4])) << 0x1c
        
        *(x0_60 + 0x30) = x8_222
        char* x8_223 = *x0
        *x0 = &x8_223[1]
        uint32_t x9_228 = zx.d(*x8_223)
        *x0 = &x8_223[2]
        char x10_284 = x8_223[1]
        *x0 = &x8_223[3]
        uint32_t x11_104 = zx.d(x8_223[2])
        *x0 = &x8_223[4]
        *(x0_60 + 0x34) = zx.d(x8_223[3])
            | (0xffffff & ((0xffff00ff & x9_228 << 0x10) | zx.d(x10_284) << 8 | x11_104)) << 8
        char* x8_226 = *x0
        *x0 = &x8_226[1]
        uint32_t x9_233 = zx.d(*x8_226)
        *x0 = &x8_226[2]
        char x10_286 = x8_226[1]
        *x0 = &x8_226[3]
        uint32_t x11_106 = zx.d(x8_226[2])
        *x0 = &x8_226[4]
        int32_t x12_53 = *(x0_60 + 0x28)
        int32_t x8_228 = zx.d(x8_226[3])
            | (0xffffff & ((0xffff00ff & x9_233 << 0x10) | zx.d(x10_286) << 8 | x11_106)) << 8
        *(x0_60 + 0x38) = x8_228
        
        if (x12_53 == 0)
            *(x0_60 + 0x38) = *arg1 * float.s(x8_228)
        
        char* x8_229 = *x0
        *x0 = &x8_229[1]
        uint32_t x9_238 = zx.d(*x8_229)
        *x0 = &x8_229[2]
        char x10_288 = x8_229[1]
        *x0 = &x8_229[3]
        uint32_t x11_108 = zx.d(x8_229[2])
        *x0 = &x8_229[4]
        int32_t x8_231 = zx.d(x8_229[3])
            | (0xffffff & ((0xffff00ff & x9_238 << 0x10) | zx.d(x10_288) << 8 | x11_108)) << 8
        bool cond:1_1 = *(x0_60 + 0x2c) u> 1
        *(x0_60 + 0x3c) = x8_231
        
        if (not(cond:1_1))
            *(x0_60 + 0x3c) = *arg1 * float.s(x8_231)
        
        char* x8_195 = *x0
        *x0 = &x8_195[1]
        uint32_t x9_200 = zx.d(*x8_195)
        *x0 = &x8_195[2]
        char x10_227 = x8_195[1]
        *x0 = &x8_195[3]
        uint32_t x11_90 = zx.d(x8_195[2])
        *x0 = &x8_195[4]
        *(x0_60 + 0x40) = zx.d(x8_195[3])
            | (0xffffff & ((0xffff00ff & x9_200 << 0x10) | zx.d(x10_227) << 8 | x11_90)) << 8
        char* x8_198 = *x0
        *x0 = &x8_198[1]
        uint32_t x9_205 = zx.d(*x8_198)
        *x0 = &x8_198[2]
        char x10_229 = x8_198[1]
        *x0 = &x8_198[3]
        uint32_t x11_92 = zx.d(x8_198[2])
        *x0 = &x8_198[4]
        *(x0_60 + 0x44) = zx.d(x8_198[3])
            | (0xffffff & ((0xffff00ff & x9_205 << 0x10) | zx.d(x10_229) << 8 | x11_92)) << 8
        *(result[0x16] + (i_5 << 3)) = x0_60
        i_5 += 1
    while (i_5 s< sx.q(result[0x15].d))

result[0xc] = spSkeletonBinary_readSkin(arg1, x0, 0xffffffff, result, zx.q(x22_3))
char* x9_242 = *x0
*x0 = &x9_242[1]
uint32_t x10_289 = zx.d(*x9_242)
int32_t x8_233 = x10_289 & 0x7f

if ((x10_289 & 0x80) != 0)
    *x0 = &x9_242[2]
    uint32_t x10_291 = zx.d(x9_242[1])
    x8_233 = (0xffffc07f & x8_233) | (0x7f & x10_291) << 7
    
    if ((x10_291 & 0x80) != 0)
        *x0 = &x9_242[3]
        uint32_t x10_293 = zx.d(x9_242[2])
        x8_233 = (0xffe03fff & x8_233) | (0x7f & x10_293) << 0xe
        
        if ((x10_293 & 0x80) != 0)
            *x0 = &x9_242[4]
            uint32_t x10_295 = zx.d(x9_242[3])
            x8_233 = (0xf01fffff & x8_233) | (0x7f & x10_295) << 0x15
            
            if ((x10_295 & 0x80) != 0)
                *x0 = &x9_242[5]
                x8_233 = (0xfffffff & x8_233) | (0xf & zx.d(x9_242[4])) << 0x1c

result[0xa].d = x8_233

if (result[0xc] != 0)
    x8_233 += 1
    result[0xa].d = x8_233

int64_t* x0_67 = _spMalloc(zx.q(x8_233) << 0x20 s>> 0x1d, 
    "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x431)
uint64_t x8_234 = result[0xc]
result[0xb] = x0_67

if (x8_234 != 0)
    *x0_67 = x8_234
    x8_234 = zx.q(result[0xc] != 0 ? 1 : 0)

if (result[0xa].d s> x8_234.d)
    uint64_t x23_8 = zx.q(x8_234.d)
    
    do
        *(result[0xb] + (x23_8 << 3)) = spSkeletonBinary_readSkin(arg1, x0, 0, result, zx.q(x22_3))
        x23_8 += 1
    while (result[0xa].d s> x23_8.d)

if (arg1[7] s< 1)
label_fc4b24:
    char* x9_247 = *x0
    *x0 = &x9_247[1]
    uint32_t x10_297 = zx.d(*x9_247)
    int32_t x8_246 = x10_297 & 0x7f
    
    if ((x10_297 & 0x80) != 0)
        *x0 = &x9_247[2]
        uint32_t x10_299 = zx.d(x9_247[1])
        x8_246 = (0xffffc07f & x8_246) | (0x7f & x10_299) << 7
        
        if ((x10_299 & 0x80) != 0)
            *x0 = &x9_247[3]
            uint32_t x10_301 = zx.d(x9_247[2])
            x8_246 = (0xffe03fff & x8_246) | (0x7f & x10_301) << 0xe
            
            if ((x10_301 & 0x80) != 0)
                *x0 = &x9_247[4]
                uint32_t x10_303 = zx.d(x9_247[3])
                x8_246 = (0xf01fffff & x8_246) | (0x7f & x10_303) << 0x15
                
                if ((x10_303 & 0x80) != 0)
                    *x0 = &x9_247[5]
                    x8_246 = (0xfffffff & x8_246) | (0xf & zx.d(x9_247[4])) << 0x1c
    
    result[0xd].d = x8_246
    int64_t x0_77 = _spMalloc(zx.q(x8_246) << 0x20 s>> 0x1d, 
        "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x455)
    int32_t x8_247 = result[0xd].d
    result[0xe] = x0_77
    
    if (x8_247 s>= 1)
        int64_t i_6 = 0
        
        do
            char* x9_259 = *x0
            *x0 = &x9_259[1]
            uint32_t x10_309 = zx.d(*x9_259)
            int32_t x8_260 = x10_309 & 0x7f
            
            if ((x10_309 & 0x80) != 0)
                *x0 = &x9_259[2]
                uint32_t x10_311 = zx.d(x9_259[1])
                x8_260 = (0xffffc07f & x8_260) | (0x7f & x10_311) << 7
                
                if ((x10_311 & 0x80) != 0)
                    *x0 = &x9_259[3]
                    uint32_t x10_313 = zx.d(x9_259[2])
                    x8_260 = (0xffe03fff & x8_260) | (0x7f & x10_313) << 0xe
                    
                    if ((x10_313 & 0x80) != 0)
                        *x0 = &x9_259[4]
                        uint32_t x10_315 = zx.d(x9_259[3])
                        x8_260 = (0xf01fffff & x8_260) | (0x7f & x10_315) << 0x15
                        
                        if ((x10_315 & 0x80) != 0)
                            *x0 = &x9_259[5]
                            x8_260 = (0xfffffff & x8_260) | (0xf & zx.d(x9_259[4])) << 0x1c
            
            int64_t x0_80
            
            if (x8_260 == 0)
                x0_80 = 0
            else
                x0_80 = *(result[5] + (sx.q(x8_260 - 1) << 3))
            
            void* x0_81 = spEventData_create(x0_80)
            char* x9_262 = *x0
            *x0 = &x9_262[1]
            uint32_t x10_317 = zx.d(*x9_262)
            int32_t x8_263 = x10_317 & 0x7f
            
            if ((x10_317 & 0x80) != 0)
                *x0 = &x9_262[2]
                uint32_t x10_319 = zx.d(x9_262[1])
                x8_263 = (0xffffc07f & x8_263) | (0x7f & x10_319) << 7
                
                if ((x10_319 & 0x80) != 0)
                    *x0 = &x9_262[3]
                    uint32_t x10_321 = zx.d(x9_262[2])
                    x8_263 = (0xffe03fff & x8_263) | (0x7f & x10_321) << 0xe
                    
                    if ((x10_321 & 0x80) != 0)
                        *x0 = &x9_262[4]
                        uint32_t x10_323 = zx.d(x9_262[3])
                        x8_263 = (0xf01fffff & x8_263) | (0x7f & x10_323) << 0x15
                        
                        if ((x10_323 & 0x80) != 0)
                            *x0 = &x9_262[5]
                            x8_263 = (0xfffffff & x8_263) | (0xf & zx.d(x9_262[4])) << 0x1c
            
            *(x0_81 + 8) = neg.d(x8_263 & 1) ^ x8_263 u>> 1
            char* x8_265 = *x0
            *x0 = &x8_265[1]
            uint32_t x9_267 = zx.d(*x8_265)
            *x0 = &x8_265[2]
            char x10_326 = x8_265[1]
            *x0 = &x8_265[3]
            uint32_t x11_114 = zx.d(x8_265[2])
            *x0 = &x8_265[4]
            *(x0_81 + 0xc) = zx.d(x8_265[3])
                | (0xffffff & ((0xffff00ff & x9_267 << 0x10) | zx.d(x10_326) << 8 | x11_114)) << 8
            char* x9_271 = *x0
            *x0 = &x9_271[1]
            uint32_t x10_327 = zx.d(*x9_271)
            int32_t x8_269 = x10_327 & 0x7f
            
            if ((x10_327 & 0x80) != 0)
                *x0 = &x9_271[2]
                uint32_t x10_329 = zx.d(x9_271[1])
                x8_269 = (0xffffc07f & x8_269) | (0x7f & x10_329) << 7
                
                if ((x10_329 & 0x80) != 0)
                    *x0 = &x9_271[3]
                    uint32_t x10_331 = zx.d(x9_271[2])
                    x8_269 = (0xffe03fff & x8_269) | (0x7f & x10_331) << 0xe
                    
                    if ((x10_331 & 0x80) != 0)
                        *x0 = &x9_271[4]
                        uint32_t x10_333 = zx.d(x9_271[3])
                        x8_269 = (0xf01fffff & x8_269) | (0x7f & x10_333) << 0x15
                        
                        if ((x10_333 & 0x80) != 0)
                            *x0 = &x9_271[5]
                            x8_269 = (0xfffffff & x8_269) | (0xf & zx.d(x9_271[4])) << 0x1c
            
            int64_t x24_19
            
            if (x8_269 == 0)
                x24_19 = 0
            else
                int64_t x25_14 = sx.q(x8_269)
                int64_t x0_83 =
                    _spMalloc(x25_14, "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x95)
                x24_19 = x0_83
                memcpy(x0_83, *x0, x25_14 - 1)
                *x0 += x25_14 - 1
                *(x24_19 + x25_14 - 1) = 0
            
            *(x0_81 + 0x10) = x24_19
            char* x9_273 = *x0
            *x0 = &x9_273[1]
            uint32_t x10_335 = zx.d(*x9_273)
            int32_t x8_248 = x10_335 & 0x7f
            
            if ((x10_335 & 0x80) != 0)
                *x0 = &x9_273[2]
                uint32_t x10_337 = zx.d(x9_273[1])
                x8_248 = (0xffffc07f & x8_248) | (0x7f & x10_337) << 7
                
                if ((x10_337 & 0x80) != 0)
                    *x0 = &x9_273[3]
                    uint32_t x10_339 = zx.d(x9_273[2])
                    x8_248 = (0xffe03fff & x8_248) | (0x7f & x10_339) << 0xe
                    
                    if ((x10_339 & 0x80) != 0)
                        *x0 = &x9_273[4]
                        uint32_t x10_341 = zx.d(x9_273[3])
                        x8_248 = (0xf01fffff & x8_248) | (0x7f & x10_341) << 0x15
                        
                        if ((x10_341 & 0x80) != 0)
                            *x0 = &x9_273[5]
                            x8_248 = (0xfffffff & x8_248) | (0xf & zx.d(x9_273[4])) << 0x1c
            
            if (x8_248 == 0)
                *(x0_81 + 0x18) = 0
            else
                int64_t x24_17 = sx.q(x8_248)
                int64_t x0_79 =
                    _spMalloc(x24_17, "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x95)
                memcpy(x0_79, *x0, x24_17 - 1)
                *x0 += x24_17 - 1
                *(x0_79 + x24_17 - 1) = 0
                *(x0_81 + 0x18) = x0_79
                char* x8_251 = *x0
                *x0 = &x8_251[1]
                uint32_t x9_250 = zx.d(*x8_251)
                *x0 = &x8_251[2]
                char x10_306 = x8_251[1]
                *x0 = &x8_251[3]
                uint32_t x11_110 = zx.d(x8_251[2])
                *x0 = &x8_251[4]
                *(x0_81 + 0x20) = zx.d(x8_251[3])
                    | (0xffffff & ((0xffff00ff & x9_250 << 0x10) | zx.d(x10_306) << 8 | x11_110))
                    << 8
                char* x8_254 = *x0
                *x0 = &x8_254[1]
                uint32_t x9_255 = zx.d(*x8_254)
                *x0 = &x8_254[2]
                char x10_308 = x8_254[1]
                *x0 = &x8_254[3]
                uint32_t x11_112 = zx.d(x8_254[2])
                *x0 = &x8_254[4]
                *(x0_81 + 0x24) = zx.d(x8_254[3])
                    | (0xffffff & ((0xffff00ff & x9_255 << 0x10) | zx.d(x10_308) << 8 | x11_112))
                    << 8
            
            *(result[0xe] + (i_6 << 3)) = x0_81
            i_6 += 1
        while (i_6 s< sx.q(result[0xd].d))
    
    char* x9_275 = *x0
    *x0 = &x9_275[1]
    uint32_t x10_343 = zx.d(*x9_275)
    int32_t x8_274 = x10_343 & 0x7f
    
    if ((x10_343 & 0x80) != 0)
        *x0 = &x9_275[2]
        uint32_t x10_345 = zx.d(x9_275[1])
        x8_274 = (0xffffc07f & x8_274) | (0x7f & x10_345) << 7
        
        if ((x10_345 & 0x80) != 0)
            *x0 = &x9_275[3]
            uint32_t x10_347 = zx.d(x9_275[2])
            x8_274 = (0xffe03fff & x8_274) | (0x7f & x10_347) << 0xe
            
            if ((x10_347 & 0x80) != 0)
                *x0 = &x9_275[4]
                uint32_t x10_349 = zx.d(x9_275[3])
                x8_274 = (0xf01fffff & x8_274) | (0x7f & x10_349) << 0x15
                
                if ((x10_349 & 0x80) != 0)
                    *x0 = &x9_275[5]
                    x8_274 = (0xfffffff & x8_274) | (0xf & zx.d(x9_275[4])) << 0x1c
    
    result[0xf].d = x8_274
    int64_t x0_85 = _spMalloc(zx.q(x8_274) << 0x20 s>> 0x1d, 
        "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x466)
    int32_t x8_275 = result[0xf].d
    result[0x10] = x0_85
    
    if (x8_275 s< 1)
    label_fc5084:
        _spFree(x0)
        return result
    
    int64_t x25_16 = 0
    
    while (true)
        char* x9_277 = *x0
        *x0 = &x9_277[1]
        uint32_t x10_351 = zx.d(*x9_277)
        int32_t x8_277 = x10_351 & 0x7f
        
        if ((x10_351 & 0x80) != 0)
            *x0 = &x9_277[2]
            uint32_t x10_353 = zx.d(x9_277[1])
            x8_277 = (0xffffc07f & x8_277) | (0x7f & x10_353) << 7
            
            if ((x10_353 & 0x80) != 0)
                *x0 = &x9_277[3]
                uint32_t x10_355 = zx.d(x9_277[2])
                x8_277 = (0xffe03fff & x8_277) | (0x7f & x10_355) << 0xe
                
                if ((x10_355 & 0x80) != 0)
                    *x0 = &x9_277[4]
                    uint32_t x10_357 = zx.d(x9_277[3])
                    x8_277 = (0xf01fffff & x8_277) | (0x7f & x10_357) << 0x15
                    
                    if ((x10_357 & 0x80) != 0)
                        *x0 = &x9_277[5]
                        x8_277 = (0xfffffff & x8_277) | (0xf & zx.d(x9_277[4])) << 0x1c
        
        int64_t x23_11
        
        if (x8_277 == 0)
            x23_11 = 0
        else
            int64_t x24_20 = sx.q(x8_277)
            int64_t x0_87 =
                _spMalloc(x24_20, "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x95)
            x23_11 = x0_87
            memcpy(x0_87, *x0, x24_20 - 1)
            *x0 += x24_20 - 1
            *(x23_11 + x24_20 - 1) = 0
        
        void* x0_89
        int128_t v8
        x0_89, v8 = sub_fc510c(arg1, x23_11, x0, result, v8)
        _spFree(x23_11)
        
        if (x0_89 == 0)
            _spFree(x0)
            spSkeletonData_dispose(result)
            break
        
        *(result[0x10] + (x25_16 << 3)) = x0_89
        x25_16 += 1
        
        if (x25_16 s>= sx.q(result[0xf].d))
            goto label_fc5084
else
    int64_t x22_4 = 0
    int64_t x23_9 = 0
    
    while (true)
        int64_t* x24_16 = *(arg1 + 0x28)
        int64_t x1_16 = *(x24_16 + x22_4 + 8)
        int64_t x0_74
        
        if (x1_16 != 0)
            x0_74 = spSkeletonData_findSkin(result, x1_16)
            
            if (x0_74 != 0)
                goto label_fc4af4
            
            goto label_fc5090
        
        x0_74 = result[0xc]
        char const* const x1_23
        int64_t x2_17
        
        if (x0_74 == 0)
        label_fc5090:
            _spFree(x0)
            spSkeletonData_dispose(result)
            x2_17 = *(x24_16 + x22_4 + 8)
            x1_23 = "Skin not found: "
        else
        label_fc4af4:
            void* x25_12 = x24_16 + x22_4
            void* x0_75 = spSkin_getAttachment(x0_74, zx.q(*(x25_12 + 0x10)), *x25_12)
            
            if (x0_75 == 0)
                _spFree(x0)
                spSkeletonData_dispose(result)
                x2_17 = *(x24_16 + x22_4)
                x1_23 = "Parent mesh not found: "
            else
                void* x8_240
                void* x9_246
                
                if (*(x25_12 + 0x20) == 0)
                    x8_240 = *(x24_16 + x22_4 + 0x18)
                    x9_246 = x8_240
                else
                    x8_240 = *(x24_16 + x22_4 + 0x18)
                    x9_246 = x0_75
                
                void* x24_15 = x24_16 + x22_4
                *(x8_240 + 0x50) = x9_246
                spMeshAttachment_setParentMesh(*(x24_15 + 0x18))
                spMeshAttachment_updateUVs(*(x24_15 + 0x18))
                spAttachmentLoader_configureAttachment(*(arg1 + 8), *(x24_15 + 0x18))
                x23_9 += 1
                x22_4 += 0x28
                
                if (x23_9 s>= sx.q(arg1[7]))
                    goto label_fc4b24
                
                continue
        
        _spSkeletonBinary_setError(arg1, x1_23, x2_17)
        break

return nullptr
