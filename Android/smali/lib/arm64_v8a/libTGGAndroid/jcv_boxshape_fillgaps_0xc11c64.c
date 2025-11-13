// 函数: jcv_boxshape_fillgaps
// 地址: 0xc11c64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v10
int64_t var_70 = v10
int64_t v9
int64_t var_68 = v9
int64_t v8
int64_t var_60 = v8
void** x22 = *(arg3 + 0xc)
int64_t* x21 = arg1
void* i
float y_1
float v1
float y

if (x22 == 0)
    if (*(arg2 + 0x40) != 1)
        int64_t x0_12
        int64_t x1
        int64_t x2
        int64_t x3
        int64_t x4
        x0_12, x1, x2, x3, x4 = __assert2("..\..\..\code/jc_voronoi.h", 0x4ba, 
            "void jcv_boxshape_fillgaps(const jcv_clipper *, jcv_context_internal *, jcv_site *)", 
            "allocator->numsites == 1")
        return jcv_diagram_generate(x0_12, x1, x2, x3, x4) __tailcall
    
    int64_t* x0 = *(arg2 + 0x4c)
    
    if (x0 == 0 || *x0 u<= 0x33)
        x0 = (*(arg2 + 0xa4))(*(arg2 + 0x9c), 0x10000)
        *x0 = 0xffe8
        x0[1] = *(arg2 + 0x4c)
        x0[2] = &x0[3]
        *(arg2 + 0x4c) = x0
    
    int64_t x8_5 = x0[2]
    y = fconvert.s(0.5f)
    x22 = (x8_5 + 7) & 0xfffffffffffffff8
    x0[2] = x22 + 0x2c
    void** x9_4 = *(arg2 + 0x4c)
    *x9_4 = *x9_4 + x8_5 - x22 - 0x2c
    x22[2] = 0
    int64_t x8_9 = x21[3]
    x22[3] = x8_9
    y_1 = x21[4].d
    x22[4].d = y_1
    v1 = *(x21 + 0x1c)
    *(x22 + 0x24) = v1
    v8.d = (v1 + float.s((x8_9 u>> 0x20).d)) * y - arg3[1]
    y_1 = atan2f(v8.d, (y_1 + float.s(x8_9.d)) * y - *arg3, y)
    
    if (v8.d f< 0f)
        y_1 = y_1 + float.s(0x40c90fdb)
    
    x22[5].d = y_1
    *x22 = nullptr
    arg1 = *(arg2 + 0x4c)
    
    if (arg1 == 0 || *arg1 u<= 0x3b)
        arg1 = (*(arg2 + 0xa4))(*(arg2 + 0x9c), 0x10000)
        *arg1 = 0xffe8
        arg1[1] = *(arg2 + 0x4c)
        arg1[2] = &arg1[3]
        *(arg2 + 0x4c) = arg1
    
    int64_t x8_13 = arg1[2]
    int64_t* x9_8 = (x8_13 + 7) & 0xfffffffffffffff8
    arg1[2] = x9_8 + 0x34
    void** x10_3 = *(arg2 + 0x4c)
    *x10_3 = *x10_3 + x8_13 - x9_8 - 0x34
    x9_8[3] = x22[3]
    int64_t x8_18 = x22[4]
    x9_8[1] = arg3
    x9_8[2] = 0
    x9_8[6].d = 0
    x9_8[4] = x8_18
    x9_8[5] = 0
    *x9_8 = *(arg2 + 8)
    *(arg2 + 8) = x9_8
    x22[1] = x9_8
    *(arg3 + 0xc) = x22
    i = *x22
    
    if (i != 0)
        goto label_c11ca0
    
    goto label_c11e28

i = *x22
float v3

if (i == 0)
label_c11e28:
    int64_t* x0_4 = *(arg2 + 0x4c)
    
    if (x0_4 == 0 || *x0_4 u<= 0x33)
        x0_4 = (*(arg2 + 0xa4))(*(arg2 + 0x9c), 0x10000)
        *x0_4 = 0xffe8
        x0_4[1] = *(arg2 + 0x4c)
        x0_4[2] = &x0_4[3]
        *(arg2 + 0x4c) = x0_4
    
    int64_t x8_23 = x0_4[2]
    void** x23_1 = (x8_23 + 7) & 0xfffffffffffffff8
    x0_4[2] = x23_1 + 0x2c
    void** x9_12 = *(arg2 + 0x4c)
    *x9_12 = *x9_12 + x8_23 - x23_1 - 0x2c
    x23_1[2] = 0
    int64_t x8_27 = x22[4]
    x23_1[3] = x8_27
    v1 = x22[4].d
    y_1 = *(arg2 + 0xbc)
    
    if (v1 >= y_1 || *(x22 + 0x24) != *(arg2 + 0xb8))
        y = *(arg2 + 0xb4)
        v3 = *(x22 + 0x24)
        
        if (not(v1 <= y) && not(v3 != *(arg2 + 0xc0)))
            x23_1[4].d = y
            v1 = *(arg2 + 0xc0)
            *(x23_1 + 0x24) = v1
            y_1 = y
        else if (not(v1 != y) && not(v3 <= *(arg2 + 0xb8)))
            x23_1[4].d = y
            v1 = *(arg2 + 0xb8)
            *(x23_1 + 0x24) = v1
            y_1 = y
        else if (v1 != y_1 || v3 >= *(arg2 + 0xc0))
            y_1 = x23_1[4].d
            v1 = *(x23_1 + 0x24)
        else
            x23_1[4].d = y_1
            v1 = *(arg2 + 0xc0)
            *(x23_1 + 0x24) = v1
    else
        x23_1[4].d = y_1
        v1 = *(arg2 + 0xb8)
        *(x23_1 + 0x24) = v1
    
    y = fconvert.s(0.5f)
    v8.d = (v1 + float.s((x8_27 u>> 0x20).d)) * y - arg3[1]
    y_1 = atan2f(v8.d, (y_1 + float.s(x8_27.d)) * y - *arg3, y)
    
    if (v8.d f< 0f)
        y_1 = y_1 + float.s(0x40c90fdb)
    
    x23_1[5].d = y_1
    arg1 = *(arg2 + 0x4c)
    
    if (arg1 == 0 || *arg1 u<= 0x3b)
        arg1 = (*(arg2 + 0xa4))(*(arg2 + 0x9c), 0x10000)
        *arg1 = 0xffe8
        arg1[1] = *(arg2 + 0x4c)
        arg1[2] = &arg1[3]
        *(arg2 + 0x4c) = arg1
    
    int64_t x8_31 = arg1[2]
    int64_t* x9_16 = (x8_31 + 7) & 0xfffffffffffffff8
    arg1[2] = x9_16 + 0x34
    void** x10_6 = *(arg2 + 0x4c)
    *x10_6 = *x10_6 + x8_31 - x9_16 - 0x34
    x9_16[3] = x23_1[3]
    int64_t x8_36 = x23_1[4]
    x9_16[1] = arg3
    x9_16[2] = 0
    x9_16[6].d = 0
    x9_16[4] = x8_36
    x9_16[5] = 0
    *x9_16 = *(arg2 + 8)
    *(arg2 + 8) = x9_16
    x23_1[1] = x9_16
    *x23_1 = *x22
    *x22 = x23_1
    i = *(arg3 + 0xc)
    x22 = x23_1
    
    if (i != 0)
        goto label_c12048
    
    return 

label_c11ca0:

if (i == 0)
    return 

label_c12048:
v9.d = fconvert.s(0.5f)

do
    y_1 = x22[4].d
    v8.d = x21[3].d
    int32_t x8_39
    int32_t x9_17
    
    if (y_1 f!= v8.d)
        if (y_1 f!= x21[4].d)
            x8_39 = 0
            x9_17 = 1
            y = *(x22 + 0x24)
            v10.d = *(x21 + 0x1c)
            
            if (y f== v10.d)
                goto label_c120ac
            
            goto label_c120d0
        
        x9_17 = 0
        x8_39 = 2
        y = *(x22 + 0x24)
        v10.d = *(x21 + 0x1c)
        
        if (y f!= v10.d)
            goto label_c120d0
        
        goto label_c120ac
    
    x9_17 = 0
    x8_39 = 1
    y = *(x22 + 0x24)
    v10.d = *(x21 + 0x1c)
    
    if (y f== v10.d)
    label_c120ac:
        x8_39 |= 4
    label_c120e4:
        v3 = *(i + 0x18)
        v1 = *(i + 0x1c)
        y = y - v1
        
        if (y < 0f)
            y = fneg(y)
        
        if (not(y >= float.s(0x34000000)))
            y_1 = y_1 - v3
            
            if (y_1 < 0f)
                y_1 = fneg(y_1)
        
        if (y >= float.s(0x34000000) || not(y_1 < float.s(0x34000000)))
            int32_t x9_18
            
            if (not(v3 f!= v8.d))
                x9_18 = 1
                
                if (v1 f== v10.d)
                    x9_18 |= 4
                else
                label_c12168:
                    
                    if (not(v1 != *(x21 + 0x24)))
                        x9_18 |= 8
            else if (v3 f!= x21[4].d)
                x9_18 = 0
                
                if (not(v1 f== v10.d))
                    goto label_c12168
                
                x9_18 |= 4
            else
                x9_18 = 2
                
                if (v1 f!= v10.d)
                    goto label_c12168
                
                x9_18 |= 4
            
            if ((x9_18 & x8_39) != 0)
                int64_t* x0_6 = *(arg2 + 0x4c)
                
                if (x0_6 == 0 || *x0_6 u<= 0x33)
                    x0_6 = (*(arg2 + 0xa4))(*(arg2 + 0x9c), 0x10000)
                    *x0_6 = 0xffe8
                    x0_6[1] = *(arg2 + 0x4c)
                    x0_6[2] = &x0_6[3]
                    *(arg2 + 0x4c) = x0_6
                
                int64_t x8_43 = x0_6[2]
                int64_t* x28_1 = (x8_43 + 7) & 0xfffffffffffffff8
                x0_6[2] = x28_1 + 0x2c
                void** x9_22 = *(arg2 + 0x4c)
                *x9_22 = *x9_22 + x8_43 - x28_1 - 0x2c
                x28_1[2] = 0
                int64_t x8_47 = x22[4]
                x28_1[3] = x8_47
                int64_t x9_23 = *(i + 0x18)
                x28_1[4] = x9_23
                y = *arg3
                v8.d = (float.s((x8_47 u>> 0x20).d) + float.s((x9_23 u>> 0x20).d)) f* v9.d - arg3[1]
                y_1 = atan2f(v8.d, (float.s(x8_47.d) + float.s(x9_23.d)) f* v9.d - y, y)
                
                if (v8.d f< 0f)
                    y_1 = y_1 + float.s(0x40c90fdb)
                
                x28_1[5].d = y_1
                arg1 = *(arg2 + 0x4c)
                
                if (arg1 == 0 || *arg1 u<= 0x3b)
                    arg1 = (*(arg2 + 0xa4))(*(arg2 + 0x9c), 0x10000)
                    *arg1 = 0xffe8
                    arg1[1] = *(arg2 + 0x4c)
                    arg1[2] = &arg1[3]
                    *(arg2 + 0x4c) = arg1
                
                int64_t x8_52 = arg1[2]
                int64_t* x9_26 = (x8_52 + 7) & 0xfffffffffffffff8
                arg1[2] = x9_26 + 0x34
                void** x10_10 = *(arg2 + 0x4c)
                *x10_10 = *x10_10 + x8_52 - x9_26 - 0x34
                x9_26[3] = x28_1[3]
                int64_t x8_57 = x28_1[4]
                x9_26[1] = arg3
                x9_26[2] = 0
                x9_26[6].d = 0
                x9_26[4] = x8_57
                x9_26[5] = 0
                *x9_26 = *(arg2 + 8)
                *(arg2 + 8) = x9_26
                x28_1[1] = x9_26
                *x28_1 = *x22
                *x22 = x28_1
            else if (x9_18 != 0)
                uint64_t x8_60 = zx.q(x8_39 - 1)
                int64_t* x0_9
                
                if (x8_60.d u> 9)
                    v8.d = float.s(0xff7fffff)
                    v10 = v8
                    x0_9 = *(arg2 + 0x4c)
                    
                    if (x0_9 == 0 || *x0_9 u<= 0x33)
                    label_c12344:
                        x0_9 = (*(arg2 + 0xa4))(*(arg2 + 0x9c), 0x10000)
                        *x0_9 = 0xffe8
                        x0_9[1] = *(arg2 + 0x4c)
                        x0_9[2] = &x0_9[3]
                        *(arg2 + 0x4c) = x0_9
                else
                    switch (x8_60)
                        case 0, 8
                            goto label_c12324
                        case 1, 5
                            v8.d = x21[4].d
                            v10.d = *(x21 + 0x24)
                            x0_9 = *(arg2 + 0x4c)
                            
                            if (x0_9 == 0 || *x0_9 u<= 0x33)
                                goto label_c12344
                        case 3, 4
                            v8.d = x21[4].d
                            x0_9 = *(arg2 + 0x4c)
                            
                            if (x0_9 == 0 || *x0_9 u<= 0x33)
                                goto label_c12344
                        case 7, 9
                            v10.d = *(x21 + 0x24)
                        label_c12324:
                            x0_9 = *(arg2 + 0x4c)
                            
                            if (x0_9 == 0 || *x0_9 u<= 0x33)
                                goto label_c12344
                
                int64_t x8_64 = x0_9[2]
                void** x27 = (x8_64 + 7) & 0xfffffffffffffff8
                x0_9[2] = x27 + 0x2c
                void** x9_31 = *(arg2 + 0x4c)
                *x9_31 = *x9_31 + x8_64 - x27 - 0x2c
                x27[2] = 0
                int64_t x8_68 = x22[4]
                x27[4].d = v8.d
                *(x27 + 0x24) = v10.d
                x27[3] = x8_68
                y = arg3[1]
                y_1 = (v8.d f+ float.s(x8_68.d)) f* v9.d
                v8.d = (v10.d f+ float.s((x8_68 u>> 0x20).d)) f* v9.d - y
                y_1 = atan2f(v8.d, y_1 - *arg3, y)
                
                if (v8.d f< 0f)
                    y_1 = y_1 + float.s(0x40c90fdb)
                
                x27[5].d = y_1
                arg1 = *(arg2 + 0x4c)
                
                if (arg1 == 0 || *arg1 u<= 0x3b)
                    arg1 = (*(arg2 + 0xa4))(*(arg2 + 0x9c), 0x10000)
                    *arg1 = 0xffe8
                    arg1[1] = *(arg2 + 0x4c)
                    arg1[2] = &arg1[3]
                    *(arg2 + 0x4c) = arg1
                
                int64_t x8_72 = arg1[2]
                int64_t* x9_35 = (x8_72 + 7) & 0xfffffffffffffff8
                arg1[2] = x9_35 + 0x34
                void** x10_14 = *(arg2 + 0x4c)
                *x10_14 = *x10_14 + x8_72 - x9_35 - 0x34
                x9_35[3] = x27[3]
                int64_t x8_77 = x27[4]
                x9_35[1] = arg3
                x9_35[2] = 0
                x9_35[6].d = 0
                x9_35[4] = x8_77
                x9_35[5] = 0
                *x9_35 = *(arg2 + 8)
                *(arg2 + 8) = x9_35
                x27[1] = x9_35
                *x27 = *x22
                *x22 = x27
    else
    label_c120d0:
        
        if (not(y != *(x21 + 0x24)))
            x8_39 |= 8
            goto label_c120e4
        
        if ((x9_17 & 1) == 0)
            goto label_c120e4
    
    x22 = *x22
    
    if (x22 == 0)
        break
    
    i = *x22
    
    if (i == 0)
        i = *(arg3 + 0xc)
while (i != 0)
