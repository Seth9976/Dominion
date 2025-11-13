// 函数: sub_6ddc00
// 地址: 0x6ddc00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = arg3[1]
int32_t esi_1 = *arg3 - 1
int32_t eax_1 = arg3[6]
float var_10
int32_t result
float xmm0_3
long double x87_r0
result, xmm0_3 = sub_6e14d0(&var_10, _mm_cvtepi32_ps(zx.o(esi_1)) * arg4, x87_r0)
float xmm3 = xmm0_3
float xmm0_4 = var_10
float xmm0_5

if (0 f<= xmm0_4)
    xmm0_5 = xmm0_4 + 0.5f
else
    xmm0_5 = xmm0_4 - 0.5f

int32_t result_1 = int.d(xmm0_5)
int32_t var_24
char const* const ecx_4

if (result_1 s>= 0)
    if (result_1 s< esi_1)
        goto label_6ddc5c
    
    int32_t esi_3 = esi_1 * eax + arg2
    
    if (esi_3 s< arg3[4])
        int128_t* eax_3 = esi_3 * 0x2c + eax_1
        *arg5 = *eax_3
        arg5[1] = eax_3[1]
        arg5[2].q = eax_3[2].q
        result = *(eax_3 + 0x28)
        *(arg5 + 0x28) = result
        
        if (not(10000f f<= *(arg5 + 0xc)) && not(10000f f<= *arg5) && not(10000f f<= *(arg5 + 4))
                && not(10000f f<= *(arg5 + 8)) && not(10000f f<= *(arg5 + 0x1c))
                && not(10000f f<= arg5[2].d) && not(10000f f<= *(arg5 + 0x24))
                && not(10000f f<= arg5[1].d) && not(10000f f<= *(arg5 + 0x14))
                && 10000f f> *(arg5 + 0x18))
            return result
        
        char const* const var_20_3 = "AnimGetCurrentBonePositionAtTime"
        var_24 = 0x1ac
        ecx_4 = "IsValidBoneTransform(*pAnimatedBone)"
    else
        char const* const var_20_2 = "AnimGetCurrentBonePositionAtTime"
        var_24 = 0x1aa
        ecx_4 = "transformIndex < pAnimImportData->boneTransformCount"
else
    xmm3 = (zx.o(0)).d
label_6ddc5c:
    result = 0
    
    if (result_1 s>= 0)
        result = result_1
    
    int32_t ecx_3 = (result + 1) * eax + arg2
    
    if (ecx_3 s< arg3[4])
        int32_t* edx_4 = (result * eax + arg2) * 0x2c + eax_1
        
        if (10000f f<= edx_4[3] || 10000f f<= *edx_4 || 10000f f<= edx_4[1] || 10000f f<= edx_4[2]
                || 10000f f<= edx_4[7] || 10000f f<= edx_4[8] || 10000f f<= edx_4[9]
                || 10000f f<= edx_4[4] || 10000f f<= edx_4[5] || 10000f f<= edx_4[6])
            char const* const var_20_7 = "AnimGetCurrentBonePositionAtTime"
            var_24 = 0x1b4
            ecx_4 = "IsValidBoneTransform(pBoneTransforms[transformIndex1])"
        else
            result = ecx_3 * 0x2c + eax_1
            
            if (10000f f<= *(result + 0xc) || 10000f f<= *result || 10000f f<= *(result + 4)
                    || 10000f f<= *(result + 8) || 10000f f<= *(result + 0x1c)
                    || 10000f f<= *(result + 0x20) || 10000f f<= *(result + 0x24)
                    || 10000f f<= *(result + 0x10) || 10000f f<= *(result + 0x14)
                    || 10000f f<= *(result + 0x18))
                char const* const var_20_6 = "AnimGetCurrentBonePositionAtTime"
                var_24 = 0x1b5
                ecx_4 = "IsValidBoneTransform(pBoneTransforms[transformIndex2])"
            else
                result = sub_6e12e0(result, edx_4, arg5, xmm3, result)
                
                if (not(10000f f<= *(arg5 + 0xc)) && not(10000f f<= *arg5)
                        && not(10000f f<= *(arg5 + 4)) && not(10000f f<= *(arg5 + 8))
                        && not(10000f f<= *(arg5 + 0x1c)) && not(10000f f<= arg5[2].d)
                        && not(10000f f<= *(arg5 + 0x24)) && not(10000f f<= arg5[1].d)
                        && not(10000f f<= *(arg5 + 0x14)) && not(10000f f<= *(arg5 + 0x18)))
                    return result
                
                char const* const var_20_5 = "AnimGetCurrentBonePositionAtTime"
                var_24 = 0x1b8
                ecx_4 = "IsValidBoneTransform(*pAnimatedBone)"
    else
        char const* const var_20_1 = "AnimGetCurrentBonePositionAtTime"
        var_24 = 0x1b2
        ecx_4 = "transformIndex2 < pAnimImportData->boneTransformCount"

sub_63b870(result, &data_801800, ecx_4, "C:\x\ax2017\Engine\Animation.cpp", var_24, 
    "AnimGetCurrentBonePositionAtTime")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
