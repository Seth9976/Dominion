// 函数: sub_757fb0
// 地址: 0x757fb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = *(arg1 + 0x1c0)
int32_t* ecx = eax[0x1a]

if (ecx[1] == 0x15)
    void* eax_1 = sub_5af880(ecx)
    int32_t eax_2 = **(eax_1 + 0x38)
    int32_t eax_4
    int32_t edx
    
    if (*(eax_1 + 0x18) == 0)
        edx = 0
        eax_4 = *(*(eax_1 + 0x28) + 0x70)
        
        if ((*(arg1 + 0x10) & 1) == 0)
            edx = eax_4
        
        if ((*(arg1 + 0x10) & 1) == 0)
            eax_4 = 0
        
        goto label_758047
    
    eax = *(eax_1 + 0x20)
    int32_t* ecx_2 = *eax
    
    if (ecx_2[1] == 0x15)
        void* ebx_1 = *(sub_5af880(ecx_2) + 0x28)
        eax = *(eax_1 + 0x20)
        int32_t* ecx_3 = eax[2]
        
        if (ecx_3[1] == 0x15)
            void* eax_6 = sub_5af880(ecx_3)
            edx = *(ebx_1 + 0x70)
            eax_4 = *(*(eax_6 + 0x28) + 0x70)
        label_758047:
            float xmm1 = float.s(eax_2)
            int32_t eax_8
            float xmm0_7
            eax_8, xmm0_7 = sub_4d5cb0(_mm_cvtpd_ps(zx.o(arg2)) * xmm1)
            float xmm0_8
            
            if (0 f<= xmm0_7)
                xmm0_8 = xmm0_7 + 0.5f
            else
                xmm0_8 = xmm0_7 - 0.5f
            
            int32_t esi_2 = int.d(xmm0_8)
            *(arg1 + 0x78c) = 0
            float xmm0_9[0x2] = float.s(edx) / xmm1
            double xmm3 = _mm_cvtps_pd(xmm0_9)
            *(arg1 + 0x79c) = esi_2
            *(arg1 + 0x60) = arg2
            float var_50_2
            var_50_2.q = xmm3
            float var_48
            int32_t ebx_2
            
            if (arg2 <= xmm3)
                xmm0_9 = _mm_cvtpd_ps(zx.o(arg2))
                ebx_2 = 0
            else
                float xmm2_1[0x2] = float.s(eax_4) / xmm1
                xmm2_1 f- 0
                eax_8:1.b = (xmm2_1 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_1, 0f) ? 1 : 0) << 2
                    | (xmm2_1 f< 0f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (not(p_2))
                    *(arg1 + 0x10) |= 0x10000
                    ebx_2 = 0
                else
                    ebx_2 = 0
                    xmm0_9 f- 0
                    eax_8:1.b = (xmm0_9 f== 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_9, 0f) ? 1 : 0) << 2 | (xmm0_9 f< 0f ? 1 : 0)
                    bool p_4 = unimplemented  {test ah, 0x44}
                    
                    if (p_4)
                        *(arg1 + 0x78c) = 1
                        ebx_2 = 1
                    
                    var_48.q = _mm_cvtps_pd(_mm_cvtpd_ps(zx.o(arg2)) f- xmm0_9)
                    var_48.q = _mm_cvtps_pd(xmm2_1)
                    _CIfmod()
                    xmm3 = var_50_2.q
                    xmm0_9 = fconvert.s(fconvert.t(var_48.q))
            
            if (((*(arg1 + 0x10) u>> 0x11).b & 1) == 0)
                int32_t esi_4 = esi_2 - edx
                
                if (ebx_2 == 0)
                    esi_4 = esi_2
                
                *(arg1 + 0x790) = esi_4
                return 0
            
            int64_t xmm0_12 = _mm_cvtps_pd(xmm0_9)
            var_48.q = xmm0_12
            int32_t var_88
            
            if (ebx_2 == 0)
                var_88.q = xmm0_12
                ov_time_seek(arg1 + 0x1c8, var_88)
                ov_raw_seek(arg1 + 0x4a8, ebx_2, ebx_2)
                *(arg1 + 0x794) = ebx_2
                *(arg1 + 0x790) = 0
                return 0
            
            var_88.q = xmm3
            ov_time_seek(arg1 + 0x1c8, var_88)
            var_88.q = var_48.q
            ov_time_seek(arg1 + 0x4a8, var_88)
            *(arg1 + 0x794) = 0
            *(arg1 + 0x790) = 0
            return 0

sub_63b870(eax, &data_801800, "assetPtr->assetType == ASSET_TYPE_SOUND", 
    "C:\x\ax2017\Engine\Sound.cpp", 0x356, "SoundGetDef")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
