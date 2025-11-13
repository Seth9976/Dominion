// 函数: _ZN6SoLoud6Soloud13play3dClockedEdRNS_11AudioSourceEfffffffj
// 地址: 0x10799b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x0 = SoLoud::Soloud::play(arg2, arg10.b, 1, arg9, 0f)
SoLoud::Soloud::lockAudioMutex_internal()
int32_t x0_3 = SoLoud::Soloud::getVoiceFromHandle_internal(arg2.d)
int32_t var_7c = x0_3

if ((x0_3 & 0x80000000) != 0)
    SoLoud::Soloud::unlockAudioMutex_internal()
else
    *(arg2 + mulu.dp.d(x0_3, 0x78) + 0x2eb0) = x0
    void* x8_2 = *(arg2 + (zx.q(x0_3) << 3) + 0x98)
    *(x8_2 + 0x10) |= 8
    uint32_t var_78 = x0
    int32_t var_74_1 = 0
    int32_t* x0_5 = SoLoud::Soloud::voiceGroupHandleToArray_internal(arg2.d)
    int32_t* x8_3
    
    x8_3 = x0_5 == 0 ? &var_78 : x0_5
    
    uint64_t x10_1 = zx.q(*x8_3)
    
    if (x10_1.d != 0)
        void* x8_4 = &x8_3[1]
        
        do
            int64_t x11_1 = x10_1 & 0xfff
            
            if (x11_1.d != 0 && *(arg2 + (x11_1 - 1) * 0x78 + 0x2eb0) == x10_1.d)
                void* x10_2 = arg2 + (x11_1 - 1) * 0x78
                *(x10_2 + 0x2e40) = arg3
                *(x10_2 + 0x2e44) = arg4
                *(x10_2 + 0x2e48) = arg5
                *(x10_2 + 0x2e4c) = arg6
                *(x10_2 + 0x2e50) = arg7
                *(x10_2 + 0x2e54) = arg8.q.d
            
            x10_1 = zx.q(*x8_4)
            x8_4 += 4
        while (x10_1.d != 0)
    
    double v12 = *(arg2 + 0x2100)
    
    if (not(v12 != 0.0))
        v12 = arg1
        *(arg2 + 0x2100) = arg1
    
    SoLoud::Soloud::unlockAudioMutex_internal()
    int32_t x8_5 = *(arg2 + 0x209c)
    uint32_t x9_3 = zx.d(*(arg10 + 8))
    vcvtmd_s32_f64((arg1 - v12) * float.d(zx.q(x8_5)))
    
    if ((x9_3 & 0x20) != 0)
        double v0_1
        v0_1.d = arg3 * arg3
        double v1
        v1.d = arg4 * arg4
        v0_1.d = v0_1.d f+ v1.d
        v0_1.d = v0_1.d f+ arg5 * arg5
        v0_1.d = sqrt(v0_1.d)
        v0_1.d = v0_1.d f/ *(arg2 + 0x2dd8)
        v1.d = float.s(x8_5)
        v0_1.d = v0_1.d f* v1.d
        vcvtms_s32_f32(v0_1.d)
    
    SoLoud::Soloud::update3dVoices_internal(arg2, &var_7c)
    SoLoud::Soloud::lockAudioMutex_internal()
    SoLoud::Soloud::updateVoiceRelativePlaySpeed_internal(arg2.d)
    void* x8_7 = arg2 + zx.q(x0_3) * 0x78
    *(*(arg2 + (zx.q(x0_3) << 3) + 0x98) + 0x18) = *(x8_7 + 0x2e8c)
    *(*(arg2 + (zx.q(x0_3) << 3) + 0x98) + 0x1c) = *(x8_7 + 0x2e90)
    *(*(arg2 + (zx.q(x0_3) << 3) + 0x98) + 0x20) = *(x8_7 + 0x2e94)
    *(*(arg2 + (zx.q(x0_3) << 3) + 0x98) + 0x24) = *(x8_7 + 0x2e98)
    *(*(arg2 + (zx.q(x0_3) << 3) + 0x98) + 0x28) = *(x8_7 + 0x2e9c)
    *(*(arg2 + (zx.q(x0_3) << 3) + 0x98) + 0x2c) = *(x8_7 + 0x2ea0)
    *(*(arg2 + (zx.q(x0_3) << 3) + 0x98) + 0x30) = *(x8_7 + 0x2ea4)
    *(*(arg2 + (zx.q(x0_3) << 3) + 0x98) + 0x34) = *(x8_7 + 0x2ea8)
    SoLoud::Soloud::updateVoiceVolume_internal(arg2.d)
    void* x8_9 = *(arg2 + (zx.q(x0_3) << 3) + 0x98)
    *(x8_9 + 0x15c) = *(x8_9 + 0x18) * *(x8_9 + 0x3c)
    void* x8_10 = *(arg2 + (zx.q(x0_3) << 3) + 0x98)
    *(x8_10 + 0x160) = *(x8_10 + 0x1c) * *(x8_10 + 0x3c)
    void* x8_11 = *(arg2 + (zx.q(x0_3) << 3) + 0x98)
    *(x8_11 + 0x164) = *(x8_11 + 0x20) * *(x8_11 + 0x3c)
    void* x8_12 = *(arg2 + (zx.q(x0_3) << 3) + 0x98)
    *(x8_12 + 0x168) = *(x8_12 + 0x24) * *(x8_12 + 0x3c)
    void* x8_13 = *(arg2 + (zx.q(x0_3) << 3) + 0x98)
    *(x8_13 + 0x16c) = *(x8_13 + 0x28) * *(x8_13 + 0x3c)
    void* x8_14 = *(arg2 + (zx.q(x0_3) << 3) + 0x98)
    *(x8_14 + 0x170) = *(x8_14 + 0x2c) * *(x8_14 + 0x3c)
    void* x8_15 = *(arg2 + (zx.q(x0_3) << 3) + 0x98)
    *(x8_15 + 0x174) = *(x8_15 + 0x30) * *(x8_15 + 0x3c)
    void* x8_16 = *(arg2 + (zx.q(x0_3) << 3) + 0x98)
    *(x8_16 + 0x178) = *(x8_16 + 0x34) * *(x8_16 + 0x3c)
    void* x8_17 = *(arg2 + (zx.q(x0_3) << 3) + 0x98)
    int32_t x9_11 = *(x8_17 + 0x10)
    
    if (*(x8_17 + 0x3c) >= float.s(0x3c23d70a))
        *(x8_17 + 0x10) = x9_11 & 0xffffffdf
    else
        *(x8_17 + 0x10) = x9_11 | 0x20
        
        if ((zx.d(*(*(arg2 + (zx.q(x0_3) << 3) + 0x98) + 0x10)) & 0x40) != 0)
            SoLoud::Soloud::stopVoice_internal(arg2.d)
    
    *(arg2 + 0x21e50) = 1
    SoLoud::Soloud::unlockAudioMutex_internal()
    SoLoud::Soloud::setDelaySamples(arg2.d, x0)
    SoLoud::Soloud::setPause(arg2.d, x0.b)

return zx.q(x0)
