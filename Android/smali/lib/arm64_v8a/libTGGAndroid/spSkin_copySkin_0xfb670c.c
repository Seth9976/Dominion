// 函数: spSkin_copySkin
// 地址: 0xfb670c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_40 = v8
int32_t* x8 = *(arg2 + 8)
int64_t* x19 = arg1

if (*x8 s>= 1)
    int64_t i = 0
    v8.d = fconvert.s(1.75f)
    
    do
        int32_t* x23_1 = x19[1]
        uint64_t j_8 = zx.q(*x23_1)
        int64_t x24_1 = *(*(x8 + 8) + (i << 3))
        arg1 = *(x23_1 + 8)
        
        if (j_8.d s>= 1)
            int64_t* x10_2 = arg1
            uint64_t j_4 = j_8
            int32_t j
            
            do
                if (*x10_2 == x24_1)
                    goto label_fb675c
                
                j = j_4
                j_4 -= 1
                x10_2 = &x10_2[1]
            while (j != 1)
        
        if (j_8.d == x23_1[1])
            uint32_t temp0_1 = vcvts_s32_f32(float.s(j_8.d) f* v8.d)
            uint64_t x8_4
            
            if (temp0_1 s> 8)
                x8_4 = zx.q(temp0_1)
            else
                x8_4 = 8
            
            x23_1[1] = x8_4.d
            arg1 = _spRealloc(arg1, x8_4 << 3)
            j_8 = zx.q(*x23_1)
            *(x23_1 + 8) = arg1
        
        *x23_1 = j_8.d + 1
        arg1[sx.q(j_8.d)] = x24_1
        x8 = *(arg2 + 8)
    label_fb675c:
        i += 1
    while (i s< sx.q(*x8))

int32_t* x8_6 = *(arg2 + 0x10)

if (*x8_6 s>= 1)
    int64_t i_1 = 0
    v8.d = fconvert.s(1.75f)
    
    do
        int32_t* x23_2 = x19[2]
        uint64_t j_9 = zx.q(*x23_2)
        int64_t x24_2 = *(*(x8_6 + 8) + (i_1 << 3))
        arg1 = *(x23_2 + 8)
        
        if (j_9.d s>= 1)
            int64_t* x10_4 = arg1
            uint64_t j_5 = j_9
            uint64_t j_1
            
            do
                if (*x10_4 == x24_2)
                    goto label_fb6810
                
                j_1 = j_5
                j_5 -= 1
                x10_4 = &x10_4[1]
            while (j_1 != 1)
        
        if (j_9.d == x23_2[1])
            uint32_t temp0_2 = vcvts_s32_f32(float.s(j_9.d) f* v8.d)
            uint64_t x8_9
            
            if (temp0_2 s> 8)
                x8_9 = zx.q(temp0_2)
            else
                x8_9 = 8
            
            x23_2[1] = x8_9.d
            arg1 = _spRealloc(arg1, x8_9 << 3)
            j_9 = zx.q(*x23_2)
            *(x23_2 + 8) = arg1
        
        *x23_2 = j_9.d + 1
        arg1[sx.q(j_9.d)] = x24_2
        x8_6 = *(arg2 + 0x10)
    label_fb6810:
        i_1 += 1
    while (i_1 s< sx.q(*x8_6))

int32_t* x8_11 = *(arg2 + 0x18)

if (*x8_11 s>= 1)
    int64_t i_2 = 0
    v8.d = fconvert.s(1.75f)
    
    do
        int32_t* x23_3 = x19[3]
        uint64_t j_10 = zx.q(*x23_3)
        int64_t x24_3 = *(*(x8_11 + 8) + (i_2 << 3))
        arg1 = *(x23_3 + 8)
        
        if (j_10.d s>= 1)
            int64_t* x10_6 = arg1
            uint64_t j_6 = j_10
            uint64_t j_2
            
            do
                if (*x10_6 == x24_3)
                    goto label_fb68c4
                
                j_2 = j_6
                j_6 -= 1
                x10_6 = &x10_6[1]
            while (j_2 != 1)
        
        if (j_10.d == x23_3[1])
            uint32_t temp0_3 = vcvts_s32_f32(float.s(j_10.d) f* v8.d)
            uint64_t x8_14
            
            if (temp0_3 s> 8)
                x8_14 = zx.q(temp0_3)
            else
                x8_14 = 8
            
            x23_3[1] = x8_14.d
            arg1 = _spRealloc(arg1, x8_14 << 3)
            j_10 = zx.q(*x23_3)
            *(x23_3 + 8) = arg1
        
        *x23_3 = j_10.d + 1
        arg1[sx.q(j_10.d)] = x24_3
        x8_11 = *(arg2 + 0x18)
    label_fb68c4:
        i_2 += 1
    while (i_2 s< sx.q(*x8_11))

int32_t* x8_16 = *(arg2 + 0x20)

if (*x8_16 s>= 1)
    int64_t i_3 = 0
    v8.d = fconvert.s(1.75f)
    
    do
        int32_t* x23_4 = x19[4]
        uint64_t j_11 = zx.q(*x23_4)
        int64_t x24_4 = *(*(x8_16 + 8) + (i_3 << 3))
        arg1 = *(x23_4 + 8)
        
        if (j_11.d s>= 1)
            int64_t* x10_8 = arg1
            uint64_t j_7 = j_11
            uint64_t j_3
            
            do
                if (*x10_8 == x24_4)
                    goto label_fb6978
                
                j_3 = j_7
                j_7 -= 1
                x10_8 = &x10_8[1]
            while (j_3 != 1)
        
        if (j_11.d == x23_4[1])
            uint32_t temp0_4 = vcvts_s32_f32(float.s(j_11.d) f* v8.d)
            uint64_t x8_19
            
            if (temp0_4 s> 8)
                x8_19 = zx.q(temp0_4)
            else
                x8_19 = 8
            
            x23_4[1] = x8_19.d
            arg1 = _spRealloc(arg1, x8_19 << 3)
            j_11 = zx.q(*x23_4)
            *(x23_4 + 8) = arg1
        
        *x23_4 = j_11.d + 1
        arg1[sx.q(j_11.d)] = x24_4
        x8_16 = *(arg2 + 0x20)
    label_fb6978:
        i_3 += 1
    while (i_3 s< sx.q(*x8_16))

int32_t* i_4 = *(arg2 + 0x28)

if (i_4 == 0)
    return 

do
    int64_t x0
    
    if (*(*(i_4 + 0x10) + 8) != 2)
        x0 = spAttachment_copy()
    else
        x0 = spMeshAttachment_newLinkedMesh()
    
    spSkin_setAttachment(x19, zx.q(*i_4), *(i_4 + 8), x0)
    i_4 = *(i_4 + 0x18)
while (i_4 != 0)
