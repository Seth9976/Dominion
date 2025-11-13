// 函数: _ZN6SoLoud6Soloud11playClockedEdRNS_11AudioSourceEffj
// 地址: 0x106e074
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x0 = SoLoud::Soloud::play(arg2, arg5.b, 1, arg3, arg4)
SoLoud::Soloud::lockAudioMutex_internal()
double v9 = *(arg2 + 0x2100)

if (not(v9 != 0.0))
    v9 = arg1
    *(arg2 + 0x2100) = arg1

SoLoud::Soloud::unlockAudioMutex_internal()
double v0_1
v0_1.d = *(arg2 + 0x209c)
vcvtmd_s32_f64((arg1 - v9) * float.d(v0_1))
SoLoud::Soloud::setDelaySamples(arg2.d, x0)
SoLoud::Soloud::setPause(arg2.d, x0.b)
return zx.q(x0)
