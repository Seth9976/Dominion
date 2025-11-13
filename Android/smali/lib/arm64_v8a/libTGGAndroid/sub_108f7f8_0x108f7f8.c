// 函数: sub_108f7f8
// 地址: 0x108f7f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x27 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x27 + 0x28)
void* x8_1 = arg1[0xd]
void* x25 = *(x8_1 + 8)
void* x26 = *(x8_1 + 0x88)
int64_t x10 = *(x25 + 0x30)
int64_t x9_1 = *(x10 + (arg1[7] << 3))
arg1[9].d = x9_1.d
int64_t x8_2 = sx.q(*(x25 + 4))
int32_t var_a0 = x9_1.d
int64_t x0 = x9_1 << 0x20
int64_t x10_3 = ((x8_2 << 3) + 0xf) & 0xfffffffffffffff0
void var_b0
void* x21 = &var_b0 - x10_3
int64_t x11_2 = ((x8_2 << 2) + 0xf) & 0xfffffffffffffff0
void* x22 = x21 - x11_2
void* x24 = x22 - x11_2
void* x28 = x24 - x10_3
int32_t* var_78 = arg2
int64_t var_98 = x0

if (x8_2.d s>= 1)
    int64_t x20_1 = 0
    
    do
        int64_t x8_8 = sx.q(arg2[0x101 + sx.q(arg2[1 + x20_1])])
        int64_t x0_2 = (*(*(_floor_P + (sx.q(*(x10 + (x8_8 << 2) + 0x528)) << 3)) + 0x28))(arg1, 
            *(*(x26 + 0x58) + (x8_8 << 3)))
        *(x28 + (x20_1 << 3)) = x0_2
        *(x24 + (x20_1 << 2)) = x0_2 != 0 ? 1 : 0
        memset((*arg1)[x20_1], 0, x0 s>> 0x1e u>> 1)
        x8_2 = sx.q(*(x25 + 4))
        x20_1 += 1
    while (x20_1 s< x8_2)
    
    arg2 = var_78
    x0 = var_98

int32_t x11_3 = arg2[0x121]

if (x11_3 s>= 1)
    int64_t i = 0
    
    do
        void* x14_1 = &arg2[i]
        int64_t x13_1 = sx.q(*(x14_1 + 0x488))
        int64_t x14_2 = sx.q(*(x14_1 + 0x888))
        
        if (*(x24 + (x13_1 << 2)) != 0 || *(x24 + (x14_2 << 2)) != 0)
            *(x24 + (x13_1 << 2)) = 1
            *(x24 + (x14_2 << 2)) = 1
        
        i += 1
    while (i s< sx.q(x11_3))

if (*arg2 s>= 1)
    int64_t x23_2 = 0
    
    if (x8_2.d s>= 1)
        goto label_108f9d8
    
    while (true)
        int64_t x8_14 = sx.q(arg2[0x111 + x23_2])
        (*(*(_residue_P + (sx.q(*(x10 + (x8_14 << 2) + 0x828)) << 3)) + 0x38))(arg1, 
            *(*(x26 + 0x60) + (x8_14 << 3)), x21, x22)
        arg2 = var_78
        x23_2 += 1
        
        if (x23_2 s>= sx.q(*arg2))
            break
        
        x8_2 = zx.q(*(x25 + 4))
        
        if (x8_2.d s>= 1)
        label_108f9d8:
            int64_t x9_14 = 0
            int32_t x4_1 = 0
        label_108f9e4:
            
            if (x23_2 == zx.q(arg2[1 + x9_14]))
                *(x22 + (sx.q(x4_1) << 2)) = *(x24 + (x9_14 << 2)) != 0 ? 1 : 0
                *(x21 + (sx.q(x4_1) << 3)) = (*arg1)[x9_14]
                x8_2 = zx.q(*(x25 + 4))
            
            if (x9_14 + 1 s< sx.q(x8_2.d))
                break
    
    x11_3 = arg2[0x121]
    x0 = var_98

if (x11_3 s>= 1)
    int64_t x11_4 = sx.q(x11_3)
    int64_t x12_1 = sx.q(var_a0)
    int64_t* x8_17 = *arg1
    int64_t x12_2
    
    if (x12_1 s< 0)
        x12_2 = x12_1 + 1
    else
        x12_2 = x12_1
    
    bool cond:2_1
    
    do
        if (x0 s>= 0x100000001)
            int32_t* x15_4 = x8_17[sx.q(arg2[x11_4 + 0x121])]
            int32_t* x16_2 = x8_17[sx.q(arg2[x11_4 + 0x221])]
            int64_t i_1 = 0
            
            do
                float v0 = x15_4[i_1]
                float v1 = x16_2[i_1]
                
                if (v0 <= 0f)
                    if (v1 <= 0f)
                        x16_2[i_1] = v0
                        x15_4[i_1] = v0 - v1
                    else
                        x16_2[i_1] = v1 + v0
                else if (v1 <= 0f)
                    x16_2[i_1] = v0
                    x15_4[i_1] = v1 + v0
                else
                    x16_2[i_1] = v0 - v1
                
                i_1 += 1
            while (x12_2 s>> 1 s> i_1)
        
        cond:2_1 = x11_4 s> 1
        x11_4 -= 1
    while (cond:2_1)

if (*(x25 + 4) s>= 1)
    int64_t x20_3 = 0
    int64_t x8_22
    
    do
        int64_t x8_20 = sx.q(arg2[0x101 + sx.q(arg2[1 + x20_3])])
        (*(*(_floor_P + (sx.q(*(x10 + (x8_20 << 2) + 0x528)) << 3)) + 0x30))(arg1, 
            *(*(x26 + 0x58) + (x8_20 << 3)), *(x28 + (x20_3 << 3)), (*arg1)[x20_3])
        x8_22 = sx.q(*(x25 + 4))
        x20_3 += 1
    while (x20_3 s< x8_22)
    
    if (x8_22.d s>= 1)
        int64_t i_2 = 0
        
        do
            int64_t x1_3 = (*arg1)[i_2]
            mdct_backward(**(x26 + (arg1[7] << 3) + 0x10), x1_3, x1_3)
            i_2 += 1
        while (i_2 s< sx.q(*(x25 + 4)))

if (*(x27 + 0x28) == x8)
    return 0

__stack_chk_fail()
noreturn
