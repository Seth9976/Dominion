// 函数: sub_73d910
// 地址: 0x73d910
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* edi = arg1
uint32_t i = *(*(arg2 + 0x58) + 4)

if (i == 0x1e)
    sub_748830(arg1)
    float eax_1
    eax_1.b = 1
    return eax_1

if (i != 0x1d)
    if (i == 0x22)
        return sub_678020(arg2)
    
    float var_58_1 = 1f
    
    if (*edi == 9)
        float xmm1_1 = 1f - _mm_cvtepi32_ps(zx.o(edi[3])) * 0.00200000009f
        var_58_1 = xmm1_1
        *(arg2 + 0x54) = xmm1_1 f* *(arg2 + 0x54)
    
    i = data_147abe8
    int32_t ecx = data_147df4c
    char const* const var_8c_1
    int32_t var_88_1
    char const* const var_84_1
    char* ecx_1
    
    if (i == 0)
        var_84_1 = "GetGameData"
        var_88_1 = 0x45
        var_8c_1 = "C:\x\ax2017\Engine\Game.h"
        ecx_1 = "gpGameData"
    label_73dd1c:
        sub_63b870(i, &data_801800, ecx_1, var_8c_1, var_88_1, var_84_1)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    void* edx = *(i + 0xc)
    int32_t* var_68
    
    if (ecx != 0)
        i = zx.d(ecx.w)
        
        if (i u>= *(edx + 4))
            goto label_73dc24
        
        i = i * 0x94 + *edx
        
        if (*(i + 0x90) == ecx && i != 0)
            int32_t* i_5 = i
            
            if (*edi == 0)
                int32_t var_5c
                void var_54
                
                if (edi[1] == 0x61)
                    int32_t* ecx_2 = *i
                    
                    if (ecx_2[1] != 0x18)
                    label_73dd03:
                        var_84_1 = "FlanimGetDef"
                        var_88_1 = 0x2ed
                        ecx_1 = "assetPtr->assetType == ASSET_TYPE_FLANIM"
                        var_8c_1 = "C:\x\ax2017\Engine\AssetUtils.cpp"
                        goto label_73dd1c
                    
                    int32_t* eax_5 = sub_5af880(ecx_2)
                    uint32_t i_1 = 0
                    i = &eax_5[2]
                    uint32_t i_3 = i
                    
                    if (eax_5[2] s> 0)
                        char** edx_1 = nullptr
                        char** var_64_1 = nullptr
                        
                        do
                            int32_t eax_7 = *eax_5
                            
                            if (sub_6e8e40(eax_7, *(edx_1 + eax_7), *i_5, &var_5c, &var_68, &var_54)
                                    != 0 && i_5[3] == var_5c && i_5[4] == var_68)
                                int32_t eax_15 = mods.dp.d(sx.q(i_1 + 1), *i_3) * 3
                                sub_6e68f0(eax_15, *(*eax_5 + (eax_15 << 3)), i_5, 1f, 0)
                                int32_t eax_16
                                eax_16.b = 1
                                return eax_16
                            
                            i = i_1 + 1
                            edx_1 = &var_64_1[6]
                            i_1 = i
                            var_64_1 = edx_1
                        while (i s< *i_3)
                    
                    goto label_73daa6
                
            label_73daa6:
                
                if (*edi != 0)
                    goto label_73dbea
                
                if (edi[1] == 0x41)
                    int32_t* ecx_8 = *i_5
                    
                    if (ecx_8[1] != 0x18)
                        goto label_73dd03
                    
                    i = sub_5af880(ecx_8)
                    char** ecx_11 = nullptr
                    uint32_t i_2 = i
                    uint32_t i_4 = 0
                    
                    if (*(i + 8) s> 0)
                        char** var_6c_2 = nullptr
                        
                        while (true)
                            int32_t eax_17 = *i
                            
                            if (sub_6e8e40(eax_17, *(ecx_11 + eax_17), *i_5, &var_68, &var_5c, 
                                    &var_54) != 0 && i_5[3] == var_68 && i_5[4] == var_5c)
                                int32_t ecx_15 = i_4 - 1
                                
                                if (ecx_15 == 0xffffffff)
                                    ecx_15 = *(i_2 + 8) - 1
                                
                                int32_t eax_22 = ecx_15 * 3
                                sub_6e68f0(eax_22, *(*i_2 + (eax_22 << 3)), i_5, 1f, 0)
                                int32_t eax_23
                                eax_23.b = 1
                                return eax_23
                            
                            i = i_4 + 1
                            ecx_11 = &var_6c_2[6]
                            i_4 = i
                            var_6c_2 = ecx_11
                            
                            if (i s>= *(i_2 + 8))
                                break
                            
                            i = i_2
                
                if (*edi != 0)
                    goto label_73dbea
                
                if (edi[1] == 0x2b)
                    i_5[5] = i_5[5] f* 1.25f
                
                if (*edi == 0 && edi[1] == 0x2d)
                    i_5[5] = i_5[5] f* 0.800000012f
                
                goto label_73dbea
            
        label_73dbea:
            float xmm0_11 = var_58_1 f* i_5[0xd]
            i_5[0x12] = var_58_1 f* i_5[0x12]
            i_5[0xd] = xmm0_11
            
            if (*edi == 0 && edi[1] == 0x62)
                i.b = data_147df50 == 0
                data_147df50 = i.b
                sub_73d850(i_5, zx.d(i.b) ^ 1)
    
label_73dc24:
    
    if (*edi == 3)
        int32_t* ecx_19 = *(arg2 + 0x58)
        
        if (ecx_19 != 0)
            i = ecx_19[1]
            
            if (i == 0x19)
                int128_t xmm0_12 = data_800248
                int32_t var_34_1 = 0
                int32_t var_3c_1 = edi[4]
                int32_t var_38_1 = edi[5]
                int128_t var_30 = 0x3f800000.o
                int128_t var_20_1 = xmm0_12
                var_68 = sub_6b80f0(ecx_19, &var_30)
                
                if (GetKeyState(0x10).w s< 0 && *(data_cf65b4 + 0x18) != 0)
                    i = GetFocus()
                    
                    if (i == data_147b084 || i == 0)
                        *(arg2 + 0x64) = var_68[0x1e]
                        int32_t ecx_21 = edi[5]
                        *(arg2 + 0x6c) = edi[4]
                        int32_t eax_27
                        eax_27.b = 1
                        *(arg2 + 0x70) = ecx_21
                        *(arg2 + 0x68) = 0
                        return eax_27
            else if (i == 0x18)
                sub_73def0(edi[4], edi[5])
else if (edi[1] == 8 && (edi[2].b & 2) != 0)
    sub_6fdc80()
    int32_t eax_2
    eax_2.b = 1
    return eax_2

i.b = 1
return i
