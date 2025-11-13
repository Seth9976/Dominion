// 函数: res2_forward
// 地址: 0x1086314
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x9 = *(x25 + 0x28)
int32_t x26 = *(arg2 + 0x48)
uint64_t x27

if (x26 s< 0)
    x27 = zx.q(x26 + 1)
else
    x27 = zx.q(x26)

void* x0_1
int128_t v0
int128_t v1
x0_1, v0, v1 = _vorbis_block_alloc(arg2, muls.dp.d(arg6, x27.d s>> 1) << 2)
void* var_70 = x0_1

if (arg6 s>= 1)
    int64_t x10_1 = (x27 & 0xfffffffe) << 0x20 s>> 0x21
    int64_t x11_1 = sx.q(arg6)
    int64_t x8_1 = 0
    int64_t x9_3 = 0
    void* x12_1 = x0_1 + 0x10
    int64_t i_4 = x10_1 & 0xfffffffffffffff8
    
    do
        int64_t x4 = x9_3 << 2
        
        if (arg5[x9_3] != 0)
            x8_1 += 1
        
        if (x26 s>= 2)
            void* x1_2 = *(arg4 + (x9_3 << 3))
            int64_t i_5 = 0
            int64_t x2 = x9_3
            
            if (((x10_1.d u> 7 ? 1 : 0) & (arg6 == 1 ? 1 : 0)) == 0)
            label_1086450:
                void* x2_4 = x0_1 + (x2 << 2)
                int32_t* x1_3 = x1_2 + (i_5 << 2)
                int64_t i_2 = x10_1 - i_5
                int64_t i
                
                do
                    int32_t x4_1 = *x1_3
                    x1_3 = &x1_3[1]
                    i = i_2
                    i_2 -= 1
                    *x2_4 = x4_1
                    x2_4 += x11_1 << 2
                while (i != 1)
            else
                if (x0_1 + x4 u< x1_2 + (x10_1 << 2))
                    i_5 = 0
                    x2 = x9_3
                
                if (x0_1 + x4 u< x1_2 + (x10_1 << 2) && x0_1 + (x10_1 << 2) + x4 u> x1_2)
                    goto label_1086450
                
                x2 = (x10_1 - (zx.q(x10_1.d) & 7)) * x11_1 + x9_3
                void* x3_1 = x1_2 + 0x10
                int64_t i_3 = i_4
                void* x5 = x12_1
                int64_t i_1
                
                do
                    v0 = *(x3_1 - 0x10)
                    v1 = *x3_1
                    x3_1 += 0x20
                    i_1 = i_3
                    i_3 -= 8
                    *(x5 - 0x10) = v0
                    *x5 = v1
                    x5 += x11_1 << 5
                while (i_1 != 8)
                i_5 = i_4
                
                if (i_4 != x10_1)
                    goto label_1086450
        
        x9_3 += 1
        x12_1 += 4
    while (x9_3 != x11_1)
    
    if (x8_1 != 0)
        sub_1085610(arg1, arg3, &var_70, 1, arg7)

if (*(x25 + 0x28) == x9)
    return 0

__stack_chk_fail()
noreturn
