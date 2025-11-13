// 函数: _ZN20SoLoudSoundInterface18SoundInterfacePlayEP13SoundInstanceP11SoundParams
// 地址: 0x106caa8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_30 = v8

if (zx.d(*(arg1 + 0x10)) == 0)
    (*(*arg1 + 0x20))(arg1)
    
    if (zx.d(*(arg1 + 0x10)) == 0)
        return 0

SoLoud::Soloud* x0_2 = SoundGetDef(*arg2)
int64_t result_1 = *(x0_2 + 0x28)
int64_t result

if (result_1 != 0)
label_106cb20:
    v8.d = fconvert.s(1f)
    int32_t x0_4 = SoLoud::Soloud::play(*(arg1 + 8), result_1.b, 1, fconvert.s(1f), 0f)
    SoLoud::Soloud::setPanAbsolute((*(arg1 + 8)).d, fconvert.s(1f), fconvert.s(1f))
    SoLoud::Soloud::setVolume((*(arg1 + 8)).d, *(arg2 + 0x58))
    void* entry_x2
    
    if (zx.d(*(entry_x2 + 0x21)) != 0)
        SoLoud::Soloud::setProtectVoice((*(arg1 + 8)).d, x0_4.b)
    
    SoLoud::Soloud::setRelativePlaySpeed((*(arg1 + 8)).d, *(entry_x2 + 8) f+ v8.d)
    SoLoud::Soloud::setPause((*(arg1 + 8)).d, x0_4.b)
    result = 1
    *(arg2 + 0x10) = sx.q(x0_4)
else
    result = SoLoudLoadSound(x0_2, *arg2)
    result_1 = result
    *(x0_2 + 0x28) = result
    
    if (result != 0)
        goto label_106cb20

return result
