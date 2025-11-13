// 函数: _Z20ProfilerCalcFuncDatai
// 地址: 0xf9f548
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = *gProfilerGlobals
char* x20 = x19 + muls.dp.d(arg1, 0x4a490) + 0x4a48c

if (zx.d(*x20) != 0)
    return 

int64_t x21_1 = sx.q(arg1)

if (*(x19 + 0xbc6608) s>= 1)
    int64_t i = 0
    int32_t* x9_2 = *gProfilerGlobals + 0xbc6608
    int64_t* x10_1 = x19 + x21_1 * 0x4a490 + 0x3aa8c
    
    do
        *x10_1 = 0
        x10_1[1] = 0
        x10_1 = &x10_1[2]
        i += 1
    while (i s< sx.q(*x9_2))

if (*(x19 + x21_1 * 0x4a490 + 0x3a980) s>= 1)
    int64_t i_1 = 0
    int32_t x27_1 = 0
    void* x28_1 = x19 + x21_1 * 0x4a490
    
    do
        int32_t x8_6 = *(x28_1 + 0xc)
        uint64_t x24_1
        int32_t var_6a0[0x64]
        int128_t v0
        double v1
        
        if (x8_6 == 3)
            if (x27_1 s>= 1)
                v0.d = *(x28_1 + 0x10)
                v1.d = var_6a0[zx.q(x27_1 - 1)]
                v0.d = v0.d f+ v1.d
                var_6a0[zx.q(x27_1 - 1)] = v0.d
            
            x24_1 = zx.q(x27_1)
        else
            int32_t var_510[0x64]
            int64_t var_380[0x64]
            
            if (x8_6 == 2)
                x24_1 = sx.q(x27_1) - 1
                int128_t v2_1
                arg1, v0, v2_1 = XMillisecondsFromMachineTimeDiffFloat(*var_380[x24_1], *x28_1)
                int64_t* x9_4 = x19 + x21_1 * 0x4a490 + (sx.q(*(x28_1 + 8)) << 4) + 0x3aa8c
                v2_1.q = *x9_4
                x9_4[1].d += 1
                int128_t v3_1
                v3_1:4.d = v0.d f- var_510[x24_1]
                *x9_4 = vadd_f32(v3_1, v2_1)
                v1.d = var_6a0[x24_1]
                *(x9_4 + 0xc) = v1.d
                
                if (x27_1 s>= 2)
                    v1.d = var_510[zx.q(x27_1 - 2)]
                    v0.d = v0.d f+ v1.d
                    var_510[zx.q(x27_1 - 2)] = v0.d
            else
                if (x8_6 != 1)
                    pthread_kill(pthread_self(), 6)
                    return ProfilerCalcGroupBy(XNoReturn()) __tailcall
                
                int64_t x8_8 = zx.q(x27_1) << 0x20 s>> 0x1e
                var_380[sx.q(x27_1)] = x28_1
                *(&var_510 + x8_8) = 0
                *(&var_6a0 + x8_8) = 0
                x24_1 = zx.q(x27_1 + 1)
        i_1 += 1
        x28_1 += 0x18
        x27_1 = x24_1.d
    while (i_1 s< sx.q(*(x19 + x21_1 * 0x4a490 + 0x3a980)))

*x20 = 1
