// 函数: _Z24ParticleUpdateSimulationv
// 地址: 0xf98a14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = nullptr
int64_t* x20 = *(*gpGameData + 0x20)

while (true)
    void* x8_1
    
    if (x19 == 0)
        x8_1 = *x20
        x19 = x8_1
    else
        x8_1 = *x20
        x19 += 0xa8
    
    int64_t x8_2 = x8_1 + zx.q(x20[1].d) * 0xa8
    
    if (x19 u>= x8_2)
        break
    
    while (zx.d(*(x19 + 0xa2)) == 0)
        x19 += 0xa8
        
        if (x19 u>= x8_2)
            return 
    
    if (zx.d(*(x19 + 0x9e)) != 0)
        ParticleDestroy(x19)
