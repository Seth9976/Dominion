// 函数: _Z21AddGameLogNetwork_OldRK14GameLogMessage9GameIndex
// 地址: 0x9b1728
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetClient()
int32_t x8 = *(arg1 + 0x10)
int64_t x21 = *(x0 + 0x5080)
uint64_t x22 = zx.q(arg2)
GameSave* x20_1 = x21 + mulu.dp.d(x22.d, 0x1338)

if (x8 == 1)
    int32_t* x23_1 = *(arg1 + 8)
    void* result = LogGet(x20_1, zx.q(*x23_1))
    
    if (*(result + 0xc) s< x23_1[5])
        return result
    
    x8 = *(arg1 + 0x10)

if (x8 s>= 1)
    int64_t x23_2 = 0
    int64_t i = 0
    
    do
        void* fp_1 = *(arg1 + 8)
        int32_t* x27_1 = fp_1 + x23_2
        int64_t* x0_4 = LogGet(x20_1, zx.q(*x27_1))
        int32_t x9_5 = x0_4[1].d
        int32_t x8_8 = x27_1[4]
        int64_t x28_1 = sx.q(*x27_1)
        bool v_1
        bool n_1
        
        if (x9_5 != 0)
            v_1 = add_overflow(x9_5, neg.d(x8_8))
            n_1 = x9_5 - x8_8 s< 0
        else
            n_1 = true
            v_1 = false
        
        if (n_1 != v_1)
            int32_t x22_2
            
            if (x8_8 s< 0x800)
                x22_2 = 0x1000
            else
                x22_2 = x8_8 << 1
            
            *x0_4 = XMalloc(x22_2)
            x0_4[1].d = x22_2
        
        int32_t x8_2 = x27_1[5]
        
        if (x8_2 == 0)
            *(x0_4 + 0x14) = 0
            x8_2 = x27_1[5]
        
        void* x22_1 = fp_1 + x23_2
        memcpy(*x0_4 + sx.q(x8_2), *(x22_1 + 8), sx.q(x27_1[4]))
        i += 1
        x23_2 += 0x20
        int32_t x8_4 = x27_1[4] + x27_1[5]
        *(x0_4 + 0xc) = x8_4
        x0_4[2].d = x8_4
        void* x9_4 = x21 + x22 * 0x1338 + (x28_1 << 4)
        *(x9_4 + 0x1284) = *(x22_1 + 0x18)
        *(x9_4 + 0x1288) = *(x22_1 + 0x1c)
    while (i s< sx.q(*(arg1 + 0x10)))

return GetClient()
