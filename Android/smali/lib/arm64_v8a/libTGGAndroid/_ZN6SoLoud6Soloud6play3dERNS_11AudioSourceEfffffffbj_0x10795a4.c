// 函数: _ZN6SoLoud6Soloud6play3dERNS_11AudioSourceEfffffffbj
// 地址: 0x10795a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v9 = arg3
float v10 = arg2
float v8 = arg4
uint32_t x0 = SoLoud::Soloud::play(arg1, arg9, 1, arg8, 0f)
SoLoud::Soloud::lockAudioMutex_internal()
int32_t x0_3 = SoLoud::Soloud::getVoiceFromHandle_internal(arg1.d)
int32_t var_7c = x0_3

if ((x0_3 & 0x80000000) != 0)
    SoLoud::Soloud::unlockAudioMutex_internal()
else
    *(arg1 + mulu.dp.d(x0_3, 0x78) + 0x2eb0) = x0
    void* x8_2 = *(arg1 + (zx.q(x0_3) << 3) + 0x98)
    *(x8_2 + 0x10) |= 8
    uint32_t var_78 = x0
    int32_t var_74_1 = 0
    int32_t* x0_5 = SoLoud::Soloud::voiceGroupHandleToArray_internal(arg1.d)
    int32_t* x8_3
    
    x8_3 = x0_5 == 0 ? &var_78 : x0_5
    
    uint64_t x10_1 = zx.q(*x8_3)
    
    if (x10_1.d != 0)
        void* x8_4 = &x8_3[1]
        
        do
            int64_t x11_1 = x10_1 & 0xfff
            
            if (x11_1.d != 0 && *(arg1 + (x11_1 - 1) * 0x78 + 0x2eb0) == x10_1.d)
                void* x10_2 = arg1 + (x11_1 - 1) * 0x78
                *(x10_2 + 0x2e40) = v10
                *(x10_2 + 0x2e44) = v9
                *(x10_2 + 0x2e48) = v8
                *(x10_2 + 0x2e4c) = arg5
                *(x10_2 + 0x2e50) = arg6
                *(x10_2 + 0x2e54) = arg7
            
            x10_1 = zx.q(*x8_4)
            x8_4 += 4
        while (x10_1.d != 0)
    
    if ((zx.d(*(arg9 + 8)) & 0x20) != 0)
        if ((zx.d(*(*(arg1 + (zx.q(x0_3) << 3) + 0x98) + 0x10)) & 0x10) == 0)
            v10 = v10 - *(arg1 + 0x2da8)
            v9 = v9 - *(arg1 + 0x2dac)
            v8 = v8 - *(arg1 + 0x2db0)
        
        vcvtms_s32_f32(sqrt(v8 * v8 + v9 * v9 + v10 * v10) / *(arg1 + 0x2dd8)
            * float.s(*(arg1 + 0x209c)))
    
    SoLoud::Soloud::update3dVoices_internal(arg1, &var_7c)
    SoLoud::Soloud::updateVoiceRelativePlaySpeed_internal(arg1.d)
    void* x8_8 = arg1 + zx.q(x0_3) * 0x78
    *(*(arg1 + (zx.q(x0_3) << 3) + 0x98) + 0x18) = *(x8_8 + 0x2e8c)
    *(*(arg1 + (zx.q(x0_3) << 3) + 0x98) + 0x1c) = *(x8_8 + 0x2e90)
    *(*(arg1 + (zx.q(x0_3) << 3) + 0x98) + 0x20) = *(x8_8 + 0x2e94)
    *(*(arg1 + (zx.q(x0_3) << 3) + 0x98) + 0x24) = *(x8_8 + 0x2e98)
    *(*(arg1 + (zx.q(x0_3) << 3) + 0x98) + 0x28) = *(x8_8 + 0x2e9c)
    *(*(arg1 + (zx.q(x0_3) << 3) + 0x98) + 0x2c) = *(x8_8 + 0x2ea0)
    *(*(arg1 + (zx.q(x0_3) << 3) + 0x98) + 0x30) = *(x8_8 + 0x2ea4)
    *(*(arg1 + (zx.q(x0_3) << 3) + 0x98) + 0x34) = *(x8_8 + 0x2ea8)
    SoLoud::Soloud::updateVoiceVolume_internal(arg1.d)
    void* x8_10 = *(arg1 + (zx.q(x0_3) << 3) + 0x98)
    *(x8_10 + 0x15c) = *(x8_10 + 0x18) * *(x8_10 + 0x3c)
    void* x8_11 = *(arg1 + (zx.q(x0_3) << 3) + 0x98)
    *(x8_11 + 0x160) = *(x8_11 + 0x1c) * *(x8_11 + 0x3c)
    void* x8_12 = *(arg1 + (zx.q(x0_3) << 3) + 0x98)
    *(x8_12 + 0x164) = *(x8_12 + 0x20) * *(x8_12 + 0x3c)
    void* x8_13 = *(arg1 + (zx.q(x0_3) << 3) + 0x98)
    *(x8_13 + 0x168) = *(x8_13 + 0x24) * *(x8_13 + 0x3c)
    void* x8_14 = *(arg1 + (zx.q(x0_3) << 3) + 0x98)
    *(x8_14 + 0x16c) = *(x8_14 + 0x28) * *(x8_14 + 0x3c)
    void* x8_15 = *(arg1 + (zx.q(x0_3) << 3) + 0x98)
    *(x8_15 + 0x170) = *(x8_15 + 0x2c) * *(x8_15 + 0x3c)
    void* x8_16 = *(arg1 + (zx.q(x0_3) << 3) + 0x98)
    *(x8_16 + 0x174) = *(x8_16 + 0x30) * *(x8_16 + 0x3c)
    void* x8_17 = *(arg1 + (zx.q(x0_3) << 3) + 0x98)
    *(x8_17 + 0x178) = *(x8_17 + 0x34) * *(x8_17 + 0x3c)
    void* x8_18 = *(arg1 + (zx.q(x0_3) << 3) + 0x98)
    int32_t x9_10 = *(x8_18 + 0x10)
    
    if (*(x8_18 + 0x3c) >= float.s(0x3c23d70a))
        *(x8_18 + 0x10) = x9_10 & 0xffffffdf
    else
        *(x8_18 + 0x10) = x9_10 | 0x20
        
        if ((zx.d(*(*(arg1 + (zx.q(x0_3) << 3) + 0x98) + 0x10)) & 0x40) != 0)
            SoLoud::Soloud::stopVoice_internal(arg1.d)
    
    *(arg1 + 0x21e50) = 1
    SoLoud::Soloud::unlockAudioMutex_internal()
    SoLoud::Soloud::setDelaySamples(arg1.d, x0)
    SoLoud::Soloud::setPause(arg1.d, x0.b)

return zx.q(x0)
