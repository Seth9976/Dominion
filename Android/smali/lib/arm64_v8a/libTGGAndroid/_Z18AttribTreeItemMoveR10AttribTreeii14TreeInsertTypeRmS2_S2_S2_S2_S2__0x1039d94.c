// 函数: _Z18AttribTreeItemMoveR10AttribTreeii14TreeInsertTypeRmS2_S2_S2_S2_S2_
// 地址: 0x1039d94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x28 = *arg1
uint64_t* var_6468 = arg3
int64_t x27 = sx.q(arg2)
int64_t x26 = x28 + muls.dp.d(arg2, 0x18)
int64_t* x23 = arg5
int32_t x25 = arg4
int64_t var_6460[0x80]
memset(&var_6460, 0, 0x800)
int64_t var_460
memset(&var_460, 0, 0x400)
int64_t x10 = sx.q(*(arg1 + 8))
void var_464
void* x28_1

if (x10.d == 0)
label_1039ea0:
    x28_1 = nullptr
else
    int32_t x13_1 = 0
    int64_t x8_1 = 0
    int64_t x12_1 = 0
    int64_t x10_1
    
    x10_1 = x10 u> 1 ? x10 : 1
    
    while (true)
        int32_t x15_1 = x13_1 - 1
        *(&var_460 + (x12_1 << 2)) = x15_1
        
        if (x8_1 == x27)
            x28_1 = var_6460[x12_1]
            break
        
        void* x16_1 = x28 + x8_1 * 0x18
        x13_1 = *(x16_1 + 0x10)
        int64_t x14_1 = x12_1 + 1
        var_6460[x14_1] = x16_1
        *(&var_460 + (x14_1 << 2)) = x13_1
        
        if (x13_1 == 0 && x14_1 != 0)
            if (x15_1 != 0 || x12_1 == 0)
                x13_1 = x15_1
                x14_1 = x12_1
            else
                bool cond:8_1
                
                do
                    x13_1 = *(&var_464 + (x12_1 << 2))
                    x14_1 = x12_1 - 1
                    
                    if (x13_1 != 0)
                        break
                    
                    cond:8_1 = x12_1 != 1
                    x12_1 = x14_1
                while (cond:8_1)
        
        x8_1 += 1
        x12_1 = x14_1
        
        if (x8_1 == x10_1)
            goto label_1039ea0

*x23 = x27
var_6460[0] = x26
*arg7 = sx.q(AttribTreeTotalChildrenWithSelfRec(&var_6460))
void* const x8_4

if (x25 != 1)
    int64_t x11_1
    
    if (x25 == 2)
        memset(&var_6460, 0, 0x800)
        memset(&var_460, 0, 0x400)
        x11_1 = sx.q(*(arg1 + 8))
    
    if (x25 != 2 || x11_1.d == 0)
    label_103a004:
        x8_4 = nullptr
        
        if (x28_1 != 0)
            *(x28_1 + 0x10) -= 1
    else
        int64_t x10_3 = *arg1
        int32_t x15_2 = 0
        int64_t x8_9 = 0
        int64_t x14_2 = 0
        int64_t x11_2
        
        x11_2 = x11_1 u> 1 ? x11_1 : 1
        
        while (true)
            int32_t x17_1 = x15_2 - 1
            *(&var_460 + (x14_2 << 2)) = x17_1
            
            if (x8_9 == sx.q(var_6468.d))
                break
            
            void* x0_7 = x10_3 + x8_9 * 0x18
            x15_2 = *(x0_7 + 0x10)
            int64_t x16_2 = x14_2 + 1
            var_6460[x16_2] = x0_7
            *(&var_460 + (x16_2 << 2)) = x15_2
            
            if (x15_2 == 0 && x16_2 != 0)
                if (x17_1 != 0 || x14_2 == 0)
                    x15_2 = x17_1
                    x16_2 = x14_2
                else
                    bool cond:9_1
                    
                    do
                        x15_2 = *(&var_464 + (x14_2 << 2))
                        x16_2 = x14_2 - 1
                        
                        if (x15_2 != 0)
                            break
                        
                        cond:9_1 = x14_2 != 1
                        x14_2 = x16_2
                    while (cond:9_1)
            
            x8_9 += 1
            x14_2 = x16_2
            
            if (x8_9 == x11_2)
                goto label_103a004
        
        x8_4 = var_6460[x14_2]
        
        if (x28_1 != 0)
            *(x28_1 + 0x10) -= 1
else
    x8_4 = *arg1 + muls.dp.d(var_6468.d, 0x18)
    
    if (x28_1 != 0)
        *(x28_1 + 0x10) -= 1

if (x8_4 != 0)
    *(x8_4 + 0x10) += 1

memcpy(&var_6460, x26, *arg7 * 0x18)
uint64_t x10_4

if (x25 == 0)
    x10_4 = 0
else
    int32_t x8_8
    
    if (x25 != 1)
        if (x25 != 2)
            pthread_kill(pthread_self(), 6)
            AttribTree* x0_14
            int32_t x1_3
            int32_t x2_3
            int64_t x3
            uint64_t* x4
            uint64_t* x5
            uint64_t* x6
            uint64_t* x7
            x0_14, x1_3, x2_3, x3, x4, x5, x6, x7 = XNoReturn()
            void var_6470
            return AttribTreeItemMove2(x0_14, x1_3, x2_3, x3, x4, x5, x6, x7, var_6470, var_6468)
                __tailcall
        
        int32_t x24_1 = var_6468.d
        var_460 = *arg1 + muls.dp.d(x24_1, 0x18)
        x8_8 = AttribTreeTotalChildrenWithSelfRec(&var_460) + x24_1
    else
        x8_8 = var_6468.d + 1
    
    x10_4 = sx.q(x8_8)

*arg6 = x10_4
int64_t x11_3 = *x23
int64_t* x9_7 = arg10
int64_t x10_5

if (x11_3 == x10_4)
    x10_5 = 0
    *arg8 = 0
    *arg9 = 0
    *x9_7 = 0
else if (x11_3 u>= x10_4)
    *arg8 = x10_4
    *arg9 = *arg7 + *arg6
    x10_5 = x27 - *arg6
    *x9_7 = x10_5
else
    *arg8 = *arg7 + x11_3
    *arg9 = *x23
    *x9_7 = *arg6 - *arg8
    *arg6 -= *arg7
    x10_5 = *x9_7

int64_t x9_8 = *arg1
memmove(x9_8 + *arg9 * 0x18, x9_8 + *arg8 * 0x18, x10_5 * 0x18)
memcpy(*arg1 + *arg6 * 0x18, &var_6460, *arg7 * 0x18)
return 1
