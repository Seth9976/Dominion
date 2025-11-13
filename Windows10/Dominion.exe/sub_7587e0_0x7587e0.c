// 函数: sub_7587e0
// 地址: 0x7587e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* result = arg2
int32_t* ecx = *result
int32_t edi = result[2]
char const* const var_8c
int64_t var_88
char* ecx_1

if (ecx[1] == 0x15)
    void* eax = sub_5af880(ecx)
    float xmm1_2 = _mm_cvtepi32_ps(zx.o(arg3))
    result =
        sub_75f500(*(arg1 + 4), edi, _mm_cvtps_pd(xmm1_2 / _mm_cvtepi32_ps(zx.o(**(eax + 0x38)))))
    
    if (result != 0)
        return result
    
    var_88:4.d = "SoLoudSoundInterface::SoundInterfaceSetCurrentPosition"
    var_88.d = 0x48e
    var_8c = "C:\x\ax2017\Engine\SoundSoloud.cpp"
    ecx_1 = &data_85e314
else
    var_88:4.d = "SoundGetDef"
    var_88.d = 0x356
    var_8c = "C:\x\ax2017\Engine\Sound.cpp"
    ecx_1 = "assetPtr->assetType == ASSET_TYPE_SOUND"

sub_63b870(result, &data_801800, ecx_1, var_8c, var_88)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
