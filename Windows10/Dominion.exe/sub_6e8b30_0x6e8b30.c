// 函数: sub_6e8b30
// 地址: 0x6e8b30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_1 = arg1[4] - 1
float xmm1_1 = _mm_cvtepi32_ps(zx.o(eax_1))
int32_t ebx_1 = int.d(xmm1_1 f* arg1[1]) + arg1[3]
int32_t esi_1 = int.d(xmm1_1 f* arg1[2]) + arg1[3]
int32_t* ecx = *arg1

if (ecx[1] != 0x18)
    sub_63b870(eax_1, &data_801800, "assetPtr->assetType == ASSET_TYPE_FLANIM", 
        "C:\x\ax2017\Engine\AssetUtils.cpp", 0x2ed, "FlanimGetDef")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* eax_2 = sub_5af880(ecx)
int32_t i_4 = 0
int32_t i_5 = 0
bool p_2

if (esi_1 == ebx_1)
    float xmm0_2 = arg1[2]
    xmm0_2 f- 0
    int32_t* eax_3
    eax_3:1.b = (xmm0_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, 0f) ? 1 : 0) << 2
        | (xmm0_2 < 0f ? 1 : 0)
    p_2 = unimplemented  {test ah, 0x44}

if (esi_1 != ebx_1 || p_2)
    int32_t i = 0
    
    if (*(eax_2 + 0x18) s> 0)
        int32_t eax_6 = 0
        int32_t var_18 = 0
        void** var_c_2 = arg2
        
        do
            void* ecx_6 = *(eax_2 + 0x10) + eax_6
            int32_t eax_7 = *(ecx_6 + 8)
            
            if (esi_1 s< eax_7 && ebx_1 s>= eax_7)
            label_6e8c0e:
                void** eax_8 = var_c_2
                i_4 += 1
                var_c_2 = &var_c_2[5]
                *eax_8 = ecx_6
                
                if (i_4 == 0x10)
                    break
            else if (eax_7 == 0 && (esi_1 == 0 || esi_1 s> ebx_1))
                goto label_6e8c0e
            
            i += 1
            eax_6 = var_18 + 0x20
            var_18 = eax_6
        while (i s< *(eax_2 + 0x18))
        
        i_5 = i_4
else
    int32_t i_1 = 0
    
    if (*(eax_2 + 0x18) s> 0)
        int32_t eax_4 = 0
        int32_t var_1c_1 = 0
        void** var_c_1 = arg2
        
        do
            void* ecx_3 = *(eax_2 + 0x10) + eax_4
            
            if (esi_1 == *(ecx_3 + 8))
                void** eax_5 = var_c_1
                i_4 += 1
                var_c_1 = &var_c_1[5]
                i_5 = i_4
                *eax_5 = ecx_3
                
                if (i_4 == 0x10)
                    break
                
                eax_4 = var_1c_1
            
            i_1 += 1
            eax_4 += 0x20
            var_1c_1 = eax_4
        while (i_1 s< *(eax_2 + 0x18))

void var_2c
sub_6e69b0(&var_2c, arg1[4], arg1[3], arg1[1], &var_2c)

if (*(arg1 + 0x8d) != 0)
    int32_t var_24_1 = 0

if (i_4 s<= 0)
    return i_4

int32_t i_3 = i_4
void* edi = &arg2[4]
int32_t i_2

do
    int32_t* esi_2 = *(edi - 0x10)
    
    if (esi_2[4] == 0)
        void* eax_13 = strstr(*esi_2, "sound_play:")
        
        if (eax_13 == 0)
            void* eax_15 = strstr(*esi_2, "sound_start:")
            
            if (eax_15 == 0)
                void* eax_17 = strstr(*esi_2, "sound_stop:")
                
                if (eax_17 == 0)
                    void* eax_19 = strstr(*esi_2, "particle_play:")
                    
                    if (eax_19 == 0)
                        void* eax_21 = strstr(*esi_2, "particle_start:")
                        
                        if (eax_21 == 0)
                            void* eax_23 = strstr(*esi_2, "particle_stop:")
                            
                            if (eax_23 == 0)
                                esi_2[4] = 1
                            else
                                esi_2[4] = 6
                                esi_2[6] = sub_69f030(eax_23 + 0xe, 0x19)
                        else
                            esi_2[4] = 5
                            esi_2[6] = sub_69f030(eax_21 + 0xf, 0x19)
                    else
                        esi_2[4] = 7
                        esi_2[6] = sub_69f030(eax_19 + 0xe, 0x19)
                else
                    esi_2[4] = 3
                    esi_2[6] = sub_69f030(eax_17 + 0xb, 0x15)
            else
                esi_2[4] = 2
                esi_2[6] = sub_69f030(eax_15 + 0xc, 0x15)
        else
            esi_2[4] = 4
            esi_2[6] = sub_69f030(eax_13 + 0xb, 0x15)
    
    int32_t edx_2 = *(*(edi - 0x10) + 0xc)
    
    if (edx_2 != 0xffffffff)
        float var_5c
        sub_6e7700(&var_2c, edx_2, eax_2, &var_2c, &var_5c)
        float xmm2_1 = arg1[8]
        float xmm3_1 = arg1[0xd]
        float var_58
        float xmm0_5 = xmm3_1 * var_58 f+ arg1[0xf]
        *(edi - 0xc) = xmm2_1 * var_5c f+ arg1[0xb]
        float var_54
        *(edi - 4) = xmm2_1 * var_54
        *(edi - 8) = xmm0_5
        float var_50
        *edi = xmm3_1 * var_50
    
    edi += 0x14
    i_2 = i_3
    i_3 -= 1
while (i_2 != 1)
return i_5
