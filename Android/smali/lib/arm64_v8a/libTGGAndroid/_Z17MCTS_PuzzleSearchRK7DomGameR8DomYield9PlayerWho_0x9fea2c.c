// 函数: _Z17MCTS_PuzzleSearchRK7DomGameR8DomYield9PlayerWho
// 地址: 0x9fea2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
uint64_t i_3 = zx.q(data_1299f50)
int64_t var_60d98 = arg3

if (i_3.d s>= 1)
    int128_t* x9_1 = &data_14a7228
    uint64_t i
    
    do
        if (*(x9_1 - 0x18) != *x9_1)
            return 0
        
        i = i_3
        i_3 -= 1
        x9_1 += 4
    while (i != 1)

int32_t x19_1 = var_60d98.d
int64_t x28_1 = sx.q(x19_1)
v8.d = *(*((sx.q(x19_1) << 3) + 0x14a7240) + (sx.q(x19_1) << 2) + 0x7c)
*((sx.q(x19_1) << 3) + 0x14a7240) = 0
sub_9fcf9c(x19_1)
MCTS_CreateRoot(arg1, arg2, zx.q(x19_1))
int32_t x19_2 = data_14a71c0
int32_t x25_1 = 0
int32_t fp_1 = 0
int32_t x22_1 = -1
int32_t x20_1 = 1
int32_t x23_1 = -1
int32_t x26_1 = x19_2
int32_t x24_1 = -1
data_14a71b1 = 0
data_14a71c8 = 0
data_14a71d0 = 0
DomGame const& x20_2
int64_t x28_3

while (true)
    void var_60d90
    SimulateGame(&var_60d90, 0x1299210, var_60d98)
    int32_t var_60050
    uint64_t x8_1 = zx.q(var_60050)
    int32_t var_5f884_1 = 5
    
    if (x8_1.d s>= 1)
        memcpy(0x14a71f8, &data_14a7228, x8_1 << 2)
    
    data_14a71b4 = 0
    uint64_t x0_4
    x0_4, v9 = sub_9fe420(&var_60d90, *(arg2 + 0x58))
    sub_9fe6ec(x0_4)
    int32_t x3_1 = *(*((x28_1 << 3) + 0x14a7240) + 0xe0)
    uint32_t x8_5 = zx.d(data_14a71b1)
    bool v_1
    bool n_1
    
    if (x3_1 != 0)
        v_1 = add_overflow(x22_1, 0)
        n_1 = x22_1 s< 0
    else
        n_1 = false
        v_1 = false
    
    if (n_1 != v_1)
        x22_1 = fp_1 + 1
    
    bool v_2
    bool n_2
    
    if (data_14a71c8:4.d s> 0)
        v_2 = add_overflow(x23_1, 0)
        n_2 = x23_1 s< 0
    else
        n_2 = false
        v_2 = false
    
    if (n_2 != v_2)
        x23_1 = fp_1 + 1
    
    if (((x24_1 s< 0 ? 1 : 0) & x8_5) != 0)
        x24_1 = fp_1 + 1
    
    if (fp_1 != 0x4e1f)
        if (x20_1 u/ 0x3e8 * 0x3e8 - 1 != fp_1)
            goto label_9fec54
        
        if (fp_1 u< 0x4e1f)
            goto label_9febf8
        
        goto label_9febf4
    
    if ((x8_5 & 1) != 0)
    label_9febf4:
        printf("%d %d %d %d\n", zx.q(fp_1 + 1), zx.q(data_14a71c0 - x26_1), x3_1, zx.q(x25_1))
    label_9febf8:
        int32_t x8_11 = data_14a71c0
        
        if (x8_11 != x26_1)
            x25_1 = 0
            x26_1 = x8_11
            
            if (x8_11 - x19_2 s< 0x4e21)
                goto label_9fec5c
            
            goto label_9fec74
        
        void* x9_6 = *((x28_1 << 3) + 0x14a7240)
        
        if (*(x9_6 + 0xe0) s> 0)
            x28_3 = x28_1
        label_9fecc4:
            v9.d = *(x9_6 + (x28_3 << 2) + 0x94)
            int32_t x25_2 = *(x9_6 + 0xe0)
            
            for (int64_t i_1 = 0; i_1 != 0x10000; i_1 += 1)
                for (void* j = *(&data_12f9f30 + (i_1 << 3)); j != 0; j = *(j + 0x18))
                    *(*(j + 8) + 0xe5) = 0
            
            float v0_2
            v0_2, v8, v9 = sub_9fee28(*((x28_3 << 3) + 0x14a7240))
            
            for (int64_t i_2 = 0; i_2 != 0x10000; i_2 += 1)
                for (void* j_1 = *(&data_12f9f30 + (i_2 << 3)); j_1 != 0; j_1 = *(j_1 + 0x18))
                    *(*(j_1 + 8) + 0xe5) = 0
            
            void* x0_6 = *((x28_3 << 3) + 0x14a7240)
            uint32_t temp0_1 = vcvts_s32_f32(fconvert.s(1f) / v0_2)
            int32_t x0_7
            int128_t v0_3
            int128_t v1_2
            int64_t v2_1
            double v3_1
            x0_7, v0_3, v1_2, v2_1, v3_1 = sub_9fef20(x0_6)
            v2_1.d = data_14a71c8:4.d
            v3_1.d = data_14a71d0
            v0_3.q = fconvert.d(v8.d)
            v1_2.q = fconvert.d(v9.d)
            printf("%f -> %f: %d, %d, %d, %d, %d, %d, %f\n", zx.q(x22_1), zx.q(x25_2), 
                zx.q(temp0_1), zx.q(x0_7), zx.q(x23_1), zx.q(x24_1), v0_3, v1_2, 
                float.d(sx.q(sx.q(v2_1.d):4.d)) f/ float.d(sx.q(sx.q(v3_1.d):4.d)))
            
            if (x23_1 s>= 0x64 && x25_2 s>= 6 && temp0_1 s>= 0xa && x0_7 s> 3)
                return 1
            
            puts("puzzle too easy")
            x20_2 = arg1
            break
        
        if (x25_1 s<= 1)
            x25_1 += 1
        label_9fec54:
            
            if (data_14a71c0 - x19_2 s< 0x4e21)
            label_9fec5c:
                x20_1 += 1
                fp_1 += 1
                continue
                continue
        
    label_9fec74:
        
        if (zx.d(data_14a71b1) == 1)
            x9_6 = *((x28_1 << 3) + 0x14a7240)
            x28_3 = x28_1
            
            if (*(x9_6 + 0xe0) s> 0)
                goto label_9fecc4
            
            printf("Aborting search (%f)\n", (fconvert.d(*(x9_6 + (x28_3 << 2) + 0x94))).d)
            x20_2 = arg1
            break
    
    x20_2 = arg1
    x28_3 = x28_1
    break

int32_t x19_3 = var_60d98.d
*((x28_3 << 3) + 0x14a7240) = 0
sub_9fcf9c(x19_3)
MCTS_CreateRoot(x20_2, arg2, zx.q(x19_3))
return 0
