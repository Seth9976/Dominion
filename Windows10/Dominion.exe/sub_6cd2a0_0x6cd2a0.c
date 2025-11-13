// 函数: sub_6cd2a0
// 地址: 0x6cd2a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = *arg3

if (eax != 1)
    int32_t eax_2 = eax - 2
    char const* const var_14
    int32_t var_10
    char const* const var_c
    char* ecx_1
    
    if (eax == 2)
        int32_t* ecx_2 = arg3[0x22]
        
        if (ecx_2 != 0)
            if (ecx_2[1] == 0x1e)
                float xmm0_2[0x4] = *(sub_5af880(ecx_2) + 0xc)
                float xmm2_3 = _mm_shuffle_ps(xmm0_2, xmm0_2, 0xaa)
                float xmm1_5 = (_mm_shuffle_ps(xmm0_2, xmm0_2, 0xff)
                    - _mm_shuffle_ps(xmm0_2, xmm0_2, 0x55)) * 0.00100000005f
                *arg4 = (xmm2_3 f- xmm0_2) * 0.00100000005f
                arg4[1] = 0
                arg4[2] = xmm1_5
                return arg4
            
            var_c = "UIDefGet"
            var_10 = 0x127
            var_14 = "C:\x\ax2017\Engine\UIDef.cpp"
            ecx_1 = "ptr->assetType == ASSET_TYPE_UI"
        label_6cd345:
            sub_63b870(eax_2, &data_801800, ecx_1, var_14, var_10, var_c)
            
            if (sub_63bc30() == 0)
                noreturn sub_63bb00() __tailcall
            
            breakpoint
    else
        int32_t temp2_1 = eax_2
        eax_2 -= 1
        
        if (temp2_1 == 1)
            int32_t* ecx = arg3[0x18]
            
            if (ecx[1] != 2)
                var_c = "StructureGetDef"
                var_10 = 0x559
                var_14 = "C:\x\ax2017\Engine\Structure.cpp"
                ecx_1 = "assetPtr->assetType == ASSET_TYPE_STRUCTURE"
                goto label_6cd345
            
            void* eax_4 = *sub_5af880(ecx)
            float xmm2_1 = *(eax_4 + 0x50) f- *(eax_4 + 0x44)
            float xmm1_1 = *(eax_4 + 0x54) f- *(eax_4 + 0x48)
            *arg4 = *(eax_4 + 0x4c) f- *(eax_4 + 0x40)
            arg4[1] = xmm2_1
            arg4[2] = xmm1_1
            return arg4

*arg4 = 0x3f8000003f800000
arg4[2] = 0x3f800000
return arg4
