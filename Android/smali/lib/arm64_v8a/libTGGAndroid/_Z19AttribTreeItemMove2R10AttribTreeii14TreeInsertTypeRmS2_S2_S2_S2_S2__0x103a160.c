// 函数: _Z19AttribTreeItemMove2R10AttribTreeii14TreeInsertTypeRmS2_S2_S2_S2_S2_
// 地址: 0x103a160
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x26 = *arg1 + muls.dp.d(arg2, 0x18)
int32_t x27 = arg4
int64_t x21 = sx.q(arg2)
int64_t var_6460 = x26
int64_t x8_1 = sx.q(AttribTreeTotalChildrenWithSelfRec(&var_6460))
*arg7 = x8_1

if (arg3 s>= arg2 && x8_1 + x21 u> sx.q(arg3))
    return 0

void* x28_1 = *arg1
memset(&var_6460, 0, 0x800)
int32_t var_460[0x100]
memset(&var_460, 0, 0x400)
int64_t x23_1 = sx.q(*(arg1 + 8))
void var_464
void* fp_1

if (x23_1.d == 0)
label_103a2c4:
    fp_1 = nullptr
else
    int32_t x14_1 = 0
    int64_t x8_3 = 0
    int64_t x13_1 = 0
    int64_t x10_2
    
    x10_2 = x23_1 u> 1 ? x23_1 : 1
    
    while (true)
        int32_t x16_1 = x14_1 - 1
        var_460[x13_1] = x16_1
        
        if (x8_3 == ((x26 - x28_1) s>> 3) * -0x5555555555555555)
            fp_1 = (&var_6460)[x13_1]
            break
        
        void* x17_1 = x28_1 + x8_3 * 0x18
        x14_1 = *(x17_1 + 0x10)
        int64_t x15_1 = x13_1 + 1
        (&var_6460)[x15_1] = x17_1
        var_460[x15_1] = x14_1
        
        if (x14_1 == 0 && x15_1 != 0)
            if (x16_1 != 0 || x13_1 == 0)
                x14_1 = x16_1
                x15_1 = x13_1
            else
                bool cond:8_1
                
                do
                    x14_1 = *(&var_464 + (x13_1 << 2))
                    x15_1 = x13_1 - 1
                    
                    if (x14_1 != 0)
                        break
                    
                    cond:8_1 = x13_1 != 1
                    x13_1 = x15_1
                while (cond:8_1)
        
        x8_3 += 1
        x13_1 = x15_1
        
        if (x8_3 == x10_2)
            goto label_103a2c4

void* x21_1 = x28_1

if (x27 - 1 u> 1)
    goto label_103a2fc

void* x8_8

if (x23_1.d - 1 != arg3)
    if (x27 != 1)
        __builtin_memset(&var_6460:4, 0, 0xfc)
        int32_t i_4 = 0
        int32_t x8_9 = 0
        int64_t x11_4 = sx.q(arg3)
        var_6460.d = *(x28_1 + muls.dp.d(arg3, 0x18) + 0x10)
    label_103a48c:
        x11_4 += 1
        int64_t i_3 = sx.q(i_4)
        i_4 += 1
        int64_t i
        
        do
            int32_t x14_4 = *(&var_6460 + (i_3 << 2))
            
            if (x14_4 != 0)
                *(&var_6460 + (i_3 << 2)) = x14_4 - 1
                x8_9 += 1
                *(&var_6460 + (sx.q(i_4) << 2)) = *(x28_1 + x11_4 * 0x18 + 0x10)
                goto label_103a48c
            
            i = i_3
            i_3 -= 1
            i_4 -= 1
        while (i s>= 1)
        x21_1 = x28_1 + muls.dp.d(arg3 + x8_9 + 1, 0x18)
        
        if (x27 != 1)
            goto label_103a308
        
        goto label_103a4c8
    
    x21_1 = x28_1 + muls.dp.d(arg3, 0x18) + 0x18
    x8_8 = x28_1 + muls.dp.d(arg3, 0x18)
    
    if (fp_1 != 0)
        *(fp_1 + 0x10) -= 1
else
    x21_1 = x28_1 + x23_1 * 0x18
label_103a2fc:
    
    if (x27 == 1)
    label_103a4c8:
        x8_8 = x28_1 + muls.dp.d(arg3, 0x18)
        
        if (fp_1 != 0)
            *(fp_1 + 0x10) -= 1
    else
    label_103a308:
        
        if (x27 == 2)
            memset(&var_6460, 0, 0x800)
            memset(&var_460, 0, 0x400)
        
        if (x27 != 2 || x23_1.d == 0)
        label_103a3d0:
            x8_8 = nullptr
            
            if (fp_1 != 0)
                *(fp_1 + 0x10) -= 1
        else
            int32_t x14_2 = 0
            int64_t x8_6 = 0
            int64_t x13_2 = 0
            int64_t x11_2
            
            x11_2 = x23_1 u> 1 ? x23_1 : 1
            
            while (true)
                int32_t x16_2 = x14_2 - 1
                var_460[x13_2] = x16_2
                
                if (x8_6 == sx.q(arg3))
                    break
                
                void* x17_2 = x28_1 + x8_6 * 0x18
                x14_2 = *(x17_2 + 0x10)
                int64_t x15_2 = x13_2 + 1
                (&var_6460)[x15_2] = x17_2
                var_460[x15_2] = x14_2
                
                if (x14_2 == 0 && x15_2 != 0)
                    if (x16_2 != 0 || x13_2 == 0)
                        x14_2 = x16_2
                        x15_2 = x13_2
                    else
                        bool cond:10_1
                        
                        do
                            x14_2 = *(&var_464 + (x13_2 << 2))
                            x15_2 = x13_2 - 1
                            
                            if (x14_2 != 0)
                                break
                            
                            cond:10_1 = x13_2 != 1
                            x13_2 = x15_2
                        while (cond:10_1)
                
                x8_6 += 1
                x13_2 = x15_2
                
                if (x8_6 == x11_2)
                    goto label_103a3d0
            
            x8_8 = (&var_6460)[x13_2]
            
            if (fp_1 != 0)
                *(fp_1 + 0x10) -= 1

if (x8_8 != 0)
    *(x8_8 + 0x10) += 1

uint64_t x23_2 = *arg7
uint64_t x28_2 = x23_2 * 0x18
memcpy(&var_6460, x26, x28_2)
uint64_t x8_15
void* x26_1
AttribMap* x27_1

if (arg3 s>= arg2)
    x26_1 = x26 + x23_2 * 0x18
    x8_15 = ((x21_1 - x26_1) s>> 3) * -0x5555555555555555
    *arg10 = x8_15
    x27_1 = x26_1 + 0 - *arg7 * 0x18
else
    x8_15 = ((x26 - x21_1) s>> 3) * -0x5555555555555555
    *arg10 = x8_15
    x26_1 = x21_1
    x27_1 = x21_1 + *arg7 * 0x18

memmove(x27_1, x26_1, x8_15 * 0x18)

if (*arg10 != 0)
    int64_t i_1 = 0
    AttribMap* fp_2 = x27_1
    
    do
        ClearBindings(fp_2)
        i_1 += 1
        fp_2 += 0x18
    while (i_1 u< *arg10)

void* x24_2

if (arg3 s< arg2)
    x24_2 = x21_1
else
    x24_2 = x21_1 + 0 - *arg7 * 0x18

memmove(x24_2, &var_6460, x28_2)

if (*arg7 != 0)
    int64_t i_2 = 0
    void* x25_1 = x24_2
    
    do
        ClearBindings(x25_1)
        i_2 += 1
        x25_1 += 0x18
    while (i_2 u< *arg7)

*arg5 = x21
*arg6 = ((x24_2 - *arg1) s>> 3) * -0x5555555555555555
*arg8 = ((x26_1 - *arg1) s>> 3) * -0x5555555555555555
*arg9 = ((x27_1 - *arg1) s>> 3) * -0x5555555555555555
return 1
