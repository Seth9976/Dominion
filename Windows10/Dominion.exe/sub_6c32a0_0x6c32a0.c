// 函数: sub_6c32a0
// 地址: 0x6c32a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (data_147abe8 == 0)
    return 

int32_t* edx_1 = arg1
int32_t i = 0
int32_t i_1 = 0

if (edx_1[2] s<= 0)
    return 

int32_t ecx_1 = 0
int32_t var_c_1 = 0

do
    int32_t* esi_1 = *edx_1
    int32_t edx_2 = *(esi_1 + ecx_1)
    void* esi_2 = esi_1 + ecx_1
    int32_t ecx_2 = 0
    
    if (edx_2 s> 0)
        int32_t* eax = *(esi_2 + 8)
        
        do
            if (*eax == 2)
                if (eax != 0)
                    int32_t eax_1 = eax[2]
                    *(esi_2 + 0x10) = eax_1
                    sub_6dcec0(eax_1, esi_2, &data_8cc5f8, 2)
                
                break
            
            ecx_2 += 1
            eax = &eax[4]
        while (ecx_2 s< edx_2)
        
        i = i_1
    
    int32_t j = 0
    
    if (*esi_2 s> 0)
        int32_t ebx_1 = 0
        
        do
            int32_t* eax_2 = *(esi_2 + 8)
            int32_t ecx_3 = *(eax_2 + ebx_1)
            
            if (ecx_3 u>= 0x71)
                sub_63b870(eax_2, &data_801800, 
                    "attribPair.tag >= 0 && attribPair.tag < NUM_PARTICLE_PARAM_TYPES", 
                    "C:\x\ax2017\Engine\Particle.cpp", 0xbbe, "ParticleLoad")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            if (ecx_3 == 5)
                int32_t* ecx_4 = *(eax_2 + ebx_1 + 8)
                
                if (ecx_4 != 0)
                    int32_t* ecx_5 = *sub_5af880(ecx_4)
                    int32_t eax_4 = *ecx_5
                    float xmm3_2 = ecx_5[3] f* ecx_5[2]
                    int32_t eax_6 = ecx_5[1]
                    float xmm2_2 =
                        _mm_cvtpd_ps(float.d(eax_4) f+ *((eax_4 u>> 0x1f << 3) + &data_893660))
                        * xmm3_2
                    float xmm1_1 =
                        _mm_cvtpd_ps(float.d(eax_6) f+ *((eax_6 u>> 0x1f << 3) + &data_893660))
                    float xmm0_6 = float.s(*(esi_2 + 0xf8))
                    *(esi_2 + 0x100) = xmm2_2 * 0.00999999978f / float.s(*(esi_2 + 0xfc))
                    *(esi_2 + 0x104) = xmm1_1 * xmm3_2 * 0.00999999978f / xmm0_6
            
            j += 1
            ebx_1 += 0x10
        while (j s< *esi_2)
        
        i = i_1
    
    edx_1 = arg1
    i += 1
    ecx_1 = var_c_1 + 0x168
    i_1 = i
    var_c_1 = ecx_1
while (i s< edx_1[2])
