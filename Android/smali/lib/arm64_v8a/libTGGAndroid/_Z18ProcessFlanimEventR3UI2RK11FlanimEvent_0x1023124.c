// 函数: _Z18ProcessFlanimEventR3UI2RK11FlanimEvent
// 地址: 0x1023124
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *arg2
uint64_t x9_1 = zx.q(*(x8 + 0x10) - 2)

if (x9_1.d u> 4)
    return 

switch (x9_1)
    case 0
        *(arg1 + 0x13e8) = SoundPlayLoop(*(x8 + 0x18)).d
    case 1
        return SoundStopHandle(*(arg1 + 0x13e8)) __tailcall
    case 3
        ParticleSystem* x0_3 = *(arg1 + 0x13d0)
        void** x20 = arg2
        
        if (x0_3 != 0)
            ParticleDestroy(x0_3)
            x8 = *x20
        
        int32_t x9_3 = *(TI + 0x10)
        int128_t var_40 = *TI
        int32_t var_30 = x9_3
        int128_t v0
        v0.d = x20[2].d
        v0.d = v0.d f+ v0.d
        var_40.d = v0.d
        v0.q = x20[1]
        int32_t var_24 = 0
        int64_t var_2c = v0.q
        *(arg1 + 0x13d0) = ParticleCreateParams(*(x8 + 0x18), &var_40)
    case 4
        ParticleSystem* x0_6 = *(arg1 + 0x13d0)
        
        if (x0_6 != 0)
            ParticleDestroy(x0_6)
        
        *(arg1 + 0x13d0) = 0
