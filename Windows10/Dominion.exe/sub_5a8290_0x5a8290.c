// 函数: sub_5a8290
// 地址: 0x5a8290
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx
int32_t* edx
ecx, edx = __chkstk(0x200e8)
int32_t __saved_ebp
int32_t var_c = __security_cookie ^ &__saved_ebp
int32_t** ebx = arg2
int32_t* edi = edx
void* eax_3 = arg4[2]
int32_t* var_200bc = edi
int32_t** var_200c4 = ebx
int32_t var_18
char const* const var_14
char* ecx_1

if (eax_3 s<= 0x14)
    int32_t esi = 0
    int32_t* var_200c8
    int32_t var_b0[0x24]
    
    if (eax_3 s> 0)
        do
            float eax_4
            int32_t* edx_1
            eax_4, edx_1 = sub_5a41c0(edi)
            eax_3 = arg4[2]
            var_200c8 = edx_1
            var_b0[esi * 2] = eax_4
            var_ac
            *(&var_ac + (esi << 3)) = var_200c8
            esi += 1
        while (esi s< eax_3)
        
        ebx = var_200c4
    
    int32_t var_200b0[0x8000]
    int32_t eax_5 = sub_5a8090(eax_3, &var_b0, &edi[4], eax_3, ebx, &var_200b0)
    sub_5ace10(&var_200b0, &var_200b0[eax_5 * 2], &var_200b0, eax_5 << 3 s>> 3, var_200c8)
    eax_3 = (arg3 - 1) * 0x11c
    void* var_200d0_1 = eax_3
    
    if (*(eax_3 + 0xb4a620) == arg3)
        int32_t ecx_8 = 0
        eax_3 += &data_b4a648
        int32_t var_200b4_1 = 0
        
        while (true)
            if (*(eax_3 - 0x10) == 0)
                goto label_5a84ff
            
            if (*eax_3 == 0)
                ecx_8 += 1
            label_5a84f9:
                var_200b4_1 = ecx_8
            label_5a84ff:
                
                if (ecx_8 s<= 0)
                    var_14 = "PlaceTrees"
                    var_18 = 0xa86
                    ecx_1 = "numElements > 0"
                    break
            else
                if (*(eax_3 + 0x10) == 0)
                    ecx_8 += 2
                    goto label_5a84f9
                
                if (*(eax_3 + 0x20) == 0)
                    ecx_8 += 3
                    goto label_5a84f9
                
                ecx_8 += 4
                eax_3 += 0x40
                var_200b4_1 = ecx_8
                
                if (ecx_8 s< 0x10)
                    continue
            
            int32_t ebx_2 = 0
            int32_t ecx_9 = *arg4
            int32_t eax_10
            int32_t edx_5
            edx_5:eax_10 = sx.q(ecx_9)
            int32_t eax_12 = (eax_10 - edx_5) s>> 1
            
            if (*(ecx + 0xc) != 6)
                eax_12 = ecx_9
            
            int32_t ecx_10 = eax_12 * 2
            
            if (*(ecx + 0xc) != 1)
                ecx_10 = eax_12
            
            int32_t result = 0
            int32_t result_2 = 0
            
            if (ecx_10 s> 0)
                int32_t ecx_11 = var_200b4_1
                int32_t esi_2 = eax_5
                
                do
                    result = mods.dp.d(sx.q(result), ecx_11)
                    int32_t result_1 = result
                    bool cond:1_1 = ebx_2 == esi_2
                    
                    if (ebx_2 s< esi_2)
                        int32_t esi_4 = result * 2
                        
                        do
                            int32_t eax_14 = var_200b0[ebx_2 * 2]
                            int32_t eax_15 = eax_14 * 3
                            int32_t xmm1_1 = edi[eax_15 + 5]
                            int32_t var_200ec = edi[eax_15 + 4]
                            int32_t var_200e8_1 = xmm1_1
                            float xmm0_4 = *(var_200d0_1 + (esi_4 << 3) + 0xb4a644)
                            xmm0_4 f- 0
                            void* eax_16
                            eax_16:1.b = (xmm0_4 == 0f ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_4, 0f) ? 1 : 0) << 2 | (xmm0_4 < 0f ? 1 : 0)
                            bool p_2 = unimplemented  {test ah, 0x44}
                            
                            if (not(p_2))
                                xmm0_4 = 1f
                            
                            float xmm0_5 = xmm0_4 * 0.00999999978f
                            result = sub_5a11b0(eax_16, &var_200ec, var_200c4, xmm0_5, 0)
                            
                            if (result.b == 0)
                                int32_t edi_1 = *edi
                                int32_t esi_6 = var_200bc[1]
                                int32_t eax_17
                                int32_t edx_9
                                eax_17, edx_9 = __allmul(edi_1, esi_6, 0x4c957f2d, 0x5851f42d)
                                int32_t var_200d4_1 = 0
                                bool c_2 = eax_17 + var_200bc[2] u< eax_17
                                *var_200bc = eax_17 + var_200bc[2]
                                var_200bc[1] = adc.d(edx_9, var_200bc[3], c_2)
                                int32_t edi_3 = (edi_1 u>> 0x1b | esi_6 << 5) ^ esi_6 u>> 0xd
                                uint32_t esi_7 = esi_6 u>> 0x1b
                                edi = var_200bc
                                
                                if (not(*(var_200d0_1 + 0xb4a634) f< (((
                                        edi_3 << ((neg.d(esi_7)).b & 0x1f) | edi_3 u>> esi_7.b) & 0x7fffff)
                                        | 0x3f800000) - 1f))
                                    int32_t ecx_20 = edi[0x5d7f2]
                                    edi[0x5d7f2] = ecx_20 + 1
                                    edi[ecx_20 * 3 + 0x5bff2] = eax_14
                                    int32_t eax_28 = ecx_20 * 3
                                    edi[eax_28 + 0x5bff4] = result_1
                                    edi[eax_28 + 0x5bff3] = arg3
                                
                                int32_t eax_30
                                
                                if (arg3 != 3 && arg3 != 0xc)
                                    eax_30 = 4
                                
                                if (arg3 == 3 || arg3 == 0xc || arg3 == 6)
                                    eax_30 = 5
                                
                                result = sub_5a1010(eax_30, &var_200ec, var_200c4, xmm0_5, eax_30)
                                ebx_2 += 1
                                break
                            
                            ebx_2 += 1
                        while (ebx_2 s< eax_5)
                        
                        esi_2 = eax_5
                        cond:1_1 = ebx_2 == esi_2
                        ecx_11 = var_200b4_1
                    
                    if (cond:1_1)
                        break
                    
                    result = result_2 + 1
                    result_2 = result
                while (result s< ecx_10)
            
            CookieCheckFunction(result)
            return result
    else
        var_14 = "TerrainElementDefGet"
        var_18 = 0x9b0
        ecx_1 = "TERRAIN_ELEMENT_DEFS[idx].terrain == element"
else
    var_14 = "PlaceTrees"
    var_18 = 0xa74
    ecx_1 = "params.sources <= MAX_TREE_SPAWNS"

sub_63b870(eax_3, &data_801800, ecx_1, "C:\x\ax2017\Jams\Dominion\code\DomMap.cpp", var_18, var_14)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
