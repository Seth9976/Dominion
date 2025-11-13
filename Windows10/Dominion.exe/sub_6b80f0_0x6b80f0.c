// 函数: sub_6b80f0
// 地址: 0x6b80f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = data_147abe8
char const* const var_2c
int32_t var_28
char const* const var_24
int32_t eax
char* ecx

if (esi != 0)
    int32_t* esi_1 = *(esi + 0x10)
    eax = esi_1[4]
    
    if (eax u< esi_1[2])
        eax = esi_1[3]
        int32_t ebx_1 = esi_1[1]
        
        if (eax u<= ebx_1)
            int32_t eax_1
            
            if (eax != ebx_1)
                ebx_1 = eax
                eax_1 = *(eax * 0x7c + *esi_1 + 0x78)
            else
                eax_1 = ebx_1 + 1
                esi_1[1] = eax_1
            
            esi_1[3] = eax_1
            int32_t* result = ebx_1 * 0x7c + *esi_1
            memset(result, 0, 0x78)
            result[3] = 0
            result[4] = 0
            result[0x1e] = esi_1[5] << 0x10 | ebx_1
            esi_1[5] += 1
            
            if (esi_1[5] == 0x10000)
                esi_1[5] = 1
            
            esi_1[4] += 1
            *result = arg1
            result[0x19] = 0x3f800000
            int128_t xmm0 = *arg2
            *(result + 0x75) = 1
            *(result + 0x2c) = xmm0
            *(result + 0x3c) = arg2[1]
            int32_t eax_7 = result[0x12]
            *(result + 0x68) = *(result + 0x40)
            int32_t xmm0_3 = data_8c4634
            result[0x1c] = eax_7
            result[0x16] = xmm0_3
            int32_t* ecx_3 = sub_5af880(arg1)
            int32_t i = 0
            int32_t* var_c = ecx_3
            int32_t i_1 = 0
            
            if (ecx_3[2] s> 0)
                int32_t eax_9 = 0
                int32_t var_10_1 = 0
                
                do
                    int32_t* esi_3 = *ecx_3 + eax_9
                    int32_t eax_10 = sub_6dcff0(eax_9, esi_3, &data_8cc5f8, 0x6e)
                    
                    if (eax_10.b != 0)
                        result[0x1d].b = 1
                    
                    char eax_11 = sub_6dcff0(eax_10, esi_3, &data_8cc5f8, 0x6f)
                    
                    if (eax_11 == 0)
                        *(result + 0x75) = eax_11
                    
                    if (esi_3[4] == 0)
                        int32_t* eax_12 = sub_64bfd0(0x304)
                        eax_12[3] += 1
                        
                        if (*eax_12 == 0)
                            sub_64be70(eax_12)
                        
                        float* esi_4 = *eax_12
                        *eax_12 = *esi_4
                        memset(esi_4, 0, 0x304)
                        esi_4[0xb5] = 0
                        esi_4[0xb6] = 0
                        esi_4[0xbf] = 0
                        esi_4[0xc0] = result[3]
                        void* eax_15 = result[3]
                        
                        if (eax_15 == 0)
                            result[2] = esi_4
                        else
                            *(eax_15 + 0x2fc) = esi_4
                        
                        result[4] += 1
                        i = i_1
                        result[3] = esi_4
                        esi_4[0xb7] = i
                        esi_4[0xb9] = result
                        esi_4[0xb8] = 0
                        sub_6bc0e0(esi_4)
                    
                    ecx_3 = var_c
                    i += 1
                    eax_9 = var_10_1 + 0x168
                    i_1 = i
                    var_10_1 = eax_9
                while (i s< ecx_3[2])
            
            return result
        
        var_24 = "DataArray<struct ParticleSystem>::DataArrayAlloc"
        var_28 = 0xf5
        ecx = "mFreeListHead <= mMaxUsedCount"
    else
        var_24 = "DataArray<struct ParticleSystem>::DataArrayAlloc"
        var_28 = 0xf4
        ecx = "mUsedCount < mMaxSize"
    
    var_2c = "C:\x\ax2017\Engine\DataArray.h"
else
    var_24 = "GetGameData"
    var_28 = 0x45
    var_2c = "C:\x\ax2017\Engine\Game.h"
    ecx = "gpGameData"

sub_63b870(eax, &data_801800, ecx, var_2c, var_28, var_24)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
