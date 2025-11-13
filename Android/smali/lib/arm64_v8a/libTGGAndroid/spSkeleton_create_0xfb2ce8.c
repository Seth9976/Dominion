// 函数: spSkeleton_create
// 地址: 0xfb2ce8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = _spCalloc(1, 0xb8, "..\..\ExternalCode\spine-c\src\spine\Skeleton.c", 0x3c)
*result = arg1
int64_t x8 = sx.q(*(arg1 + 0x30))
result[1].d = x8.d
int64_t x0_1 = _spMalloc(x8 << 3, "..\..\ExternalCode\spine-c\src\spine\Skeleton.c", 0x41)
int64_t x8_1 = sx.q(result[1].d)
result[2] = x0_1
int32_t* x0_3 = _spCalloc(x8_1, 4, "..\..\ExternalCode\spine-c\src\spine\Skeleton.c", 0x42)
int64_t x8_20

if (result[1].d s< 1)
    x8_20 = 0
else
    int64_t x23_1 = 0
    int64_t x8_8
    
    do
        void* x22_1 = *(*(*result + 0x38) + (x23_1 << 3))
        int32_t* x8_11 = *(x22_1 + 0x10)
        int64_t x0_5
        
        if (x8_11 != 0)
            x0_5 = spBone_create(x22_1, result, *(result[2] + (sx.q(*x8_11) << 3)))
            **(x22_1 + 0x10)
            x0_3[sx.q(**(x22_1 + 0x10))] += 1
        else
            x0_5 = spBone_create(x22_1, result, 0)
        
        *(result[2] + (x23_1 << 3)) = x0_5
        x8_8 = sx.q(result[1].d)
        x23_1 += 1
    while (x23_1 s< x8_8)
    
    if (x8_8.d s< 1)
        x8_20 = 0
    else
        int64_t x23_2 = 0
        uint64_t x8_17
        
        do
            *(result[2][x23_2] + 0x20) = _spMalloc(
                sx.q(x0_3[sx.q(*(*(*result + 0x38))[x23_2])]) << 3, 
                "..\..\ExternalCode\spine-c\src\spine\Skeleton.c", 0x53)
            x8_17 = sx.q(result[1].d)
            x23_2 += 1
        while (x23_2 s< x8_17)
        
        if (x8_17.d s< 1)
            x8_20 = 0
        else
            int64_t i = 0
            
            do
                void* x10_3 = *(result[2] + (i << 3))
                void* x11_1 = *(x10_3 + 0x10)
                
                if (x11_1 != 0)
                    int64_t x8_18 = sx.q(*(x11_1 + 0x18))
                    int64_t x12_1 = *(x11_1 + 0x20)
                    *(x11_1 + 0x18) = x8_18.d + 1
                    *(x12_1 + (x8_18 << 3)) = x10_3
                    x8_17 = zx.q(result[1].d)
                
                i += 1
            while (i s< sx.q(x8_17.d))
            
            if (x8_17.d s< 1)
                x8_20 = 0
            else
                x8_20 = *result[2]

result[3] = x8_20
int64_t x8_21 = sx.q(*(arg1 + 0x40))
result[4].d = x8_21.d
int64_t x0_10 = _spMalloc(x8_21 << 3, "..\..\ExternalCode\spine-c\src\spine\Skeleton.c", 0x5e)
int64_t x8_22 = zx.q(result[4].d)
result[5] = x0_10

if (x8_22.d s>= 1)
    int64_t x22_2 = 0
    
    do
        void* x0_11 = (*(arg1 + 0x48))[x22_2]
        x22_2 += 1
        result[5][x22_2] = spSlot_create(x0_11, *(result[2] + (sx.q(**(x0_11 + 0x10)) << 3)))
        x8_22 = sx.q(result[4].d)
    while (x22_2 s< x8_22)

int64_t x0_14 = _spMalloc((x8_22 & 0xffffffff) << 0x20 s>> 0x1d, 
    "..\..\ExternalCode\spine-c\src\spine\Skeleton.c", 0x65)
int64_t x8_27 = sx.q(result[4].d)
int64_t x1_4 = result[5]
result[6] = x0_14
memcpy(x0_14, x1_4, x8_27 << 3)
int64_t x8_28 = sx.q(*(arg1 + 0x88))
result[7].d = x8_28.d
int64_t x0_16 = _spMalloc(x8_28 << 3, "..\..\ExternalCode\spine-c\src\spine\Skeleton.c", 0x69)
void* x8_29 = *result
result[8] = x0_16

if (*(x8_29 + 0x88) s>= 1)
    int64_t i_1 = 0
    
    do
        i_1 += 1
        result[8][i_1] = spIkConstraint_create((*(x8_29 + 0x90))[i_1], result)
        x8_29 = *result
    while (i_1 s< sx.q(*(x8_29 + 0x88)))

int64_t x8_32 = sx.q(*(arg1 + 0x98))
result[9].d = x8_32.d
int64_t x0_20 = _spMalloc(x8_32 << 3, "..\..\ExternalCode\spine-c\src\spine\Skeleton.c", 0x6e)
void* x8_33 = *result
result[0xa] = x0_20

if (*(x8_33 + 0x98) s>= 1)
    int64_t i_2 = 0
    
    do
        i_2 += 1
        result[0xa][i_2] = spTransformConstraint_create((*(x8_33 + 0xa0))[i_2], result)
        x8_33 = *result
    while (i_2 s< sx.q(*(x8_33 + 0x98)))

int64_t x8_36 = sx.q(*(arg1 + 0xa8))
result[0xb].d = x8_36.d
int64_t x0_24
int128_t v0
int128_t v1
int128_t v2
int128_t v3
x0_24, v0, v1, v2, v3 =
    _spMalloc(x8_36 << 3, "..\..\ExternalCode\spine-c\src\spine\Skeleton.c", 0x73)
void* x8_37 = *result
result[0xc] = x0_24

if (*(x8_37 + 0xa8) s>= 1)
    int64_t i_3 = 0
    
    do
        int64_t x0_26
        x0_26, v0, v1, v2, v3 = spPathConstraint_create((*(x8_37 + 0xb0))[i_3], result)
        i_3 += 1
        result[0xc][i_3] = x0_26
        x8_37 = *result
    while (i_3 s< sx.q(*(x8_37 + 0xa8)))

v0.d = fconvert.s(1f)
v1.d = fconvert.s(1f)
v2.d = fconvert.s(1f)
v3.d = fconvert.s(1f)
spColor_setFromFloats(&result[0xe], v0, v1, v2, v3)
int64_t v0_1
v0_1.d = fconvert.s(1f)
v0_1:4.d = fconvert.s(1f)
*(result + 0x84) = v0_1
spSkeleton_updateCache(result, v0_1)
_spFree(x0_3)
return result
