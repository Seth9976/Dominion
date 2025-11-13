// 函数: _Z19GameSpecific_Draw3Dv
// 地址: 0xb91eb4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = Draw3DLayer(0x2de60000)

if (*(gDomClient + 0x20690) s>= 1)
    int64_t i = 0
    
    do
        ParticleSystem* x0_2 = ParticleTryToGet(zx.q(*(gDomClient + (i << 2) + 0x20650)))
        
        if (x0_2 != 0)
            ParticleDraw(x0_2)
        
        i += 1
    while (i s< sx.q(*(gDomClient + 0x20690)))

return Draw3DLayer(zx.q(x0)) __tailcall
