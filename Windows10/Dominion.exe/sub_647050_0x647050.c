// 函数: sub_647050
// 地址: 0x647050
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = arg4
float eax = arg3

if (*(eax i+ 0x14) != 0)
    char const* const var_48
    int32_t var_44_1
    char const* const var_40_1
    int32_t* eax_1
    char* ecx
    
    if (ebx != 0)
        eax_1 = data_147abe8
        
        if (eax_1 != 0)
            if ((eax_1[7] & 0x1000) == 0)
                goto label_6470b8
            
            goto label_6470aa
        
        var_40_1 = "GetGameData"
        var_44_1 = 0x45
        var_48 = "C:\x\ax2017\Engine\Game.h"
        ecx = "gpGameData"
    label_6472c6:
        sub_63b870(eax_1, &data_801800, ecx, var_48, var_44_1, var_40_1)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    ebx = data_1724a64
    
    if (arg7 != 0)
        goto label_6470b8
    
label_6470aa:
    ebx = data_1724a60
label_6470b8:
    int32_t* esi_1 = sub_643950()
    int32_t edx = 0
    *esi_1 = 0
    esi_1[1] = eax
    *(esi_1 + 8) = *arg2
    *(esi_1 + 0x18) = arg2[1]
    *(esi_1 + 0x28) = arg2[2]
    int128_t xmm0_4 = arg2[3]
    esi_1[0x12] = ebx
    *(esi_1 + 0x38) = xmm0_4
    
    if (arg6 s> 0)
        void* edi_1 = &esi_1[0x13]
        
        do
            int32_t eax_4 = *(arg5 + (edx << 2))
            edi_1 += 4
            edx += 1
            *(edi_1 - 4) = eax_4
        while (edx s< arg6)
    
    esi_1[0x58] = arg7
    esi_1[0x53] = sub_643ae0()
    int32_t eax_7 = sub_643b50()
    int32_t ecx_4 = esi_1[0x12]
    esi_1[0x54] = eax_7
    void* eax_9 = sub_6d77d0(sub_6d7690(ecx_4))
    int32_t var_8_1 = *(eax i+ 0x38)
    eax_1 = sub_6d77d0(sub_6d7690(esi_1[0x12]))
    int32_t* ecx_8 = *eax_1
    
    if (ecx_8[1] != 4)
        var_40_1 = "ShaderGetDef"
        var_44_1 = 0x8a
        var_48 = "C:\x\ax2017\Engine\Shader.cpp"
        ecx = "assetPtr->assetType == ASSET_TYPE_SHADER"
        goto label_6472c6
    
    if (*(sub_5af880(ecx_8) + 0x50) == 1)
        var_8_1 = *(eax i+ 0x40)
    
    int32_t eax_15 = (*(*data_147b070 + 0x70))(var_8_1, eax_9)
    esi_1[0x57] = eax_15
    
    if (data_cf6a6c == 1)
        esi_1[0x55] = 0
        return eax_15
    
    float xmm5_2 = *(eax i+ 0x13c) f+ *(eax i+ 0x130)
    float xmm4_2 = *(eax i+ 0x144) f+ *(eax i+ 0x138)
    float xmm1_3 = (*(eax i+ 0x140) f+ *(eax i+ 0x134)) * 0.5f
    eax = data_cf6680
    float xmm5_3 = xmm5_2 * 0.5f
    float xmm4_3 = xmm4_2 * 0.5f
    int128_t var_2c_1 = data_cf6668
    int64_t xmm0_14 = data_cf6678
    float xmm1_6 = xmm0_14.d
        - (xmm1_3 f* *(arg2 + 4) + xmm5_3 f* *arg2 + xmm4_3 f* *(arg2 + 8) f+ *(arg2 + 0xc))
    float xmm2_7 = xmm0_14:4.d - (xmm5_3 f* arg2[1].d + xmm1_3 f* *(arg2 + 0x14)
        + xmm4_3 f* *(arg2 + 0x18) f+ *(arg2 + 0x1c))
    float xmm0_16 = eax - (xmm5_3 f* arg2[2].d + xmm1_3 f* *(arg2 + 0x24)
        + xmm4_3 f* *(arg2 + 0x28) f+ *(arg2 + 0x2c))
    esi_1[0x55] = xmm2_7 * xmm2_7 + xmm1_6 * xmm1_6 + xmm0_16 * xmm0_16

return eax
