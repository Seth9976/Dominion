// 函数: sub_758550
// 地址: 0x758550
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void*** eax

if (arg1[2].b == 0)
    eax = (*(*arg1 + 0xc))()

if (arg1[2].b != 0 || arg1[2].b != 0)
    int32_t* ecx = *arg2
    char const* const var_1c_1
    int32_t var_18
    char const* const var_14
    char* ecx_1
    
    if (ecx[1] != 0x15)
        var_14 = "SoundGetDef"
        var_18 = 0x356
        var_1c_1 = "C:\x\ax2017\Engine\Sound.cpp"
        ecx_1 = "assetPtr->assetType == ASSET_TYPE_SOUND"
    label_758680:
        sub_63b870(eax, &data_801800, ecx_1, var_1c_1, var_18, var_14)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    void* eax_2
    int32_t ecx_2
    eax_2, ecx_2 = sub_5af880(ecx)
    eax = *(eax_2 + 0x28)
    
    if (eax != 0)
    label_7585cc:
        eax = sub_75f2e0(arg1[1], eax, 0x3f800000, 0f, 1, 0)
        void*** edi_2 = eax
        
        if (edi_2 != 0)
            int32_t var_14_1 = sub_75f670(arg1[1], edi_2, 1f, 1f)
            int32_t ecx_7 = sub_75f8c0(arg1[1], edi_2, arg2[0x12])
            void* eax_3 = arg3
            
            if (*(eax_3 + 0x15) != 0)
                ecx_7 = sub_75f7d0(arg1[1], edi_2, 1)
                eax_3 = arg3
            
            int32_t var_14_3 = ecx_7
            eax = sub_75f840(arg1[1], edi_2, *(eax_3 + 4) + 1f)
            
            if (eax == 0)
                sub_75f760(arg1[1], edi_2, eax.b)
                arg2[2] = edi_2
                CRITICAL_SECTION* eax_4
                eax_4.b = 1
                return eax_4
            
            var_14 = "SoLoudSoundInterface::SoundInterfacePlay"
            var_18 = 0x3d8
            ecx_1 = "r == 0"
        else
            var_14 = "SoLoudSoundInterface::SoundInterfacePlay"
            var_18 = 0x3cb
            ecx_1 = "handle"
        
        var_1c_1 = "C:\x\ax2017\Engine\SoundSoloud.cpp"
        goto label_758680
    
    eax = sub_758380(ecx_2, *arg2)
    *(eax_2 + 0x28) = eax
    
    if (eax != 0)
        goto label_7585cc

eax.b = 0
return eax
