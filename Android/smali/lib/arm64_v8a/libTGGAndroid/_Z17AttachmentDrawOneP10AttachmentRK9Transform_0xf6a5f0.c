// 函数: _Z17AttachmentDrawOneP10AttachmentRK9Transform
// 地址: 0xf6a5f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg1
ParticleSystem* result

if (x8 == 2)
    result = FlanimTryToGet(zx.q(*(arg1 + 8)))
    
    if (result != 0)
        return FlanimDrawGroup(result, 0, arg2) __tailcall
else
    if (x8 != 1)
        pthread_kill(pthread_self(), 6)
        AttachmentID* x0_5
        Transform* x1_3
        x0_5, x1_3 = XNoReturn()
        return AttachPointDraw(x0_5, x1_3) __tailcall
    
    result = ParticleTryToGet(zx.q(*(arg1 + 4)))
    
    if (result != 0)
        return ParticleDrawTransform(result, arg2) __tailcall

return result
