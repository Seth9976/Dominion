// 函数: sub_688660
// 地址: 0x688660
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = data_147abe8
float xmm0 = *(eax + 0x28)

if (*arg1 != 0)
    int32_t* ecx = arg1[4]
    char const* const var_30
    int32_t var_2c
    char const* const var_28_1
    char* ecx_1
    
    if (ecx[1] != 0x15)
        var_28_1 = "SoundGetDef"
        var_2c = 0x356
        var_30 = "C:\x\ax2017\Engine\Sound.cpp"
        ecx_1 = "assetPtr->assetType == ASSET_TYPE_SOUND"
    label_688909:
        sub_63b870(eax, &data_801800, ecx_1, var_30, var_2c, var_28_1)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    void* eax_1 = sub_5af880(ecx)
    void* var_8_1 = eax_1
    float xmm0_1 = *(eax_1 + 4)
    xmm0_1 f- 0
    eax_1:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
        | (xmm0_1 < 0f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        int32_t* ebx = data_147abf0
        int32_t ecx_2 = 0
        int32_t eax_2 = arg1[4]
        void* eax_3 = nullptr
        void* edi = *ebx
        void* edx_2 = ebx[1] * 0x64 + edi
        
        while (true)
            if (eax_3 != 0)
                eax_3 += 0x64
            else
                eax_3 = edi
            
            if (eax_3 u>= edx_2)
                break
            
            while (true)
                if ((*(eax_3 + 0x60) & 0xffff0000) != 0)
                    if (*(eax_3 + 4) != eax_2)
                        break
                    
                    if (*(eax_3 + 0x5a) == 0)
                        break
                    
                    ecx_2 += 1
                    break
                
                eax_3 += 0x64
                
                if (eax_3 u>= edx_2)
                    goto label_688706
        
    label_688706:
        int32_t eax_5 = *(var_8_1 + 8)
        
        if (eax_5 s<= 0 || ecx_2 s< eax_5)
            void* ecx_3 = nullptr
            
            while (true)
                if (ecx_3 != 0)
                    ecx_3 += 0x64
                else
                    ecx_3 = edi
                
                if (ecx_3 u>= edx_2)
                    break
                
                while (true)
                    if ((*(ecx_3 + 0x60) & 0xffff0000) != 0)
                        if (*ecx_3 != *arg1 && *(ecx_3 + 4) != arg1[4])
                            break
                        
                        if (*(ecx_3 + 0x5a) == 0)
                            break
                        
                        int32_t xmm1_1 = *(var_8_1 + 0xc)
                        
                        if (xmm1_1 f<= 0)
                            break
                        
                        if (xmm1_1 f<= xmm0 f- *(ecx_3 + 0x10))
                            break
                        
                        return 0
                    
                    ecx_3 += 0x64
                    
                    if (ecx_3 u>= edx_2)
                        goto label_688745
            
        label_688745:
            eax = ebx[4]
            int32_t temp0_1 = ebx[2]
            
            if (eax != temp0_1)
                if (eax u< temp0_1)
                    eax = ebx[3]
                    void* edi_1 = ebx[1]
                    
                    if (eax u<= edi_1)
                        void* eax_13
                        
                        if (eax != edi_1)
                            edi_1 = eax
                            eax_13 = *(eax * 0x64 + *ebx + 0x60)
                        else
                            eax_13 = edi_1 + 1
                            ebx[1] = eax_13
                        
                        ebx[3] = eax_13
                        int32_t* esi_4 = edi_1 * 0x64 + *ebx
                        memset(esi_4, 0, 0x60)
                        esi_4[0x18] = ebx[5] << 0x10 | edi_1
                        ebx[5] += 1
                        
                        if (ebx[5] == 0x10000)
                            ebx[5] = 1
                        
                        ebx[4] += 1
                        *esi_4 = *arg1
                        esi_4[1] = arg1[4]
                        esi_4[0x10] = arg1[1]
                        esi_4[0x11] = arg1[2]
                        int32_t eax_21
                        eax_21.b = *(arg1 + 0x15)
                        *(esi_4 + 0x5b) = eax_21.b
                        eax_21.b = *(arg1 + 0x16)
                        esi_4[0x17].b = eax_21.b
                        eax_21.b = arg1[5].b
                        esi_4[0x16].b = eax_21.b
                        esi_4[8] = *(var_8_1 + 0x10)
                        esi_4[0xf] = 0x3f800000
                        int32_t eax_23
                        eax_23.b = *(arg1 + 0x17)
                        *(esi_4 + 0x5d) = eax_23.b
                        void* eax_24
                        int32_t xmm0_4
                        eax_24, xmm0_4 = sub_688590(esi_4)
                        esi_4[0x12] = xmm0_4
                        esi_4[0x14] = 0x3f000000
                        float xmm1_2[0x2] = arg1[1]
                        xmm1_2 f- 0f
                        eax_24:1.b = (xmm1_2 f== 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm1_2, 0f) ? 1 : 0) << 2 | (xmm1_2 f< 0f ? 1 : 0)
                        bool p_4 = unimplemented  {test ah, 0x44}
                        float xmm0_6
                        
                        if (not(p_4))
                            xmm0_6 = 1f
                        else
                            _mm_cvtps_pd(xmm1_2)
                            void var_18
                            int32_t entry_ebx
                            _libm_sse2_pow_precise(arg3, arg2, entry_ebx, var_18, eax_2)
                            xmm0_6 = fconvert.s(1.0594631433486938)
                        
                        int32_t* ecx_7 = data_147abec
                        esi_4[0x13] = xmm0_6
                        
                        if ((*(*ecx_7 + 0x10))(esi_4, arg1) != 0)
                            int32_t result = esi_4[0x18]
                            esi_4[4] = xmm0
                            *(esi_4 + 0x5a) = 1
                            return result
                        
                        void* edx_3 = data_147abf0
                        int32_t ecx_8 = *(edx_3 + 0xc)
                        *(edx_3 + 0xc) = zx.d(esi_4[0x18].w)
                        esi_4[0x18] = ecx_8
                        *(edx_3 + 0x10) -= 1
                        return 0
                    
                    var_28_1 = "DataArray<struct SoundInstance>::DataArrayAlloc"
                    var_2c = 0xf5
                    ecx_1 = "mFreeListHead <= mMaxUsedCount"
                else
                    var_28_1 = "DataArray<struct SoundInstance>::DataArrayAlloc"
                    var_2c = 0xf4
                    ecx_1 = "mUsedCount < mMaxSize"
                
                var_30 = "C:\x\ax2017\Engine\DataArray.h"
                goto label_688909
            
            char* const ecx_4 = &data_801800
            char* eax_7 = *(*arg1 + 0x20)
            
            if (eax_7 != 0)
                ecx_4 = eax_7
            
            char* const var_28_2 = ecx_4
            sub_63b5f0("Too many sounds, not playing %s")

return 0
