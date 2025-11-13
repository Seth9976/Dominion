// 函数: sub_5a44a0
// 地址: 0x5a44a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t* ecx
void* edx
ecx, edx = __chkstk(0x24078)
int32_t __saved_ebp
int32_t var_14 = __security_cookie ^ &__saved_ebp
void var_24018
sub_5a42d0(ecx, &var_24018)
void var_2400c
void* edx_2 = &var_2400c
int32_t i_3 = 0x800
int128_t* ecx_1 = edx + 0x14
int32_t i

do
    int32_t xmm0_1 = *(edx_2 - 8)
    ecx_1 = &ecx_1[6]
    int32_t eax_2 = *(edx_2 - 0xc)
    edx_2 += 0x40
    *(ecx_1 - 0x74) = eax_2
    ecx_1[-7].d = xmm0_1
    *(ecx_1 - 0x6c) = 0
    int32_t xmm0_2 = *(edx_2 - 0x40)
    *(ecx_1 - 0x68) = *(edx_2 - 0x44)
    *(ecx_1 - 0x64) = xmm0_2
    ecx_1[-6].d = 0
    int32_t xmm0_3 = *(edx_2 - 0x38)
    *(ecx_1 - 0x5c) = *(edx_2 - 0x3c)
    *(ecx_1 - 0x58) = xmm0_3
    *(ecx_1 - 0x54) = 0
    ecx_1[-5].d = *(edx_2 - 0x34)
    *(ecx_1 - 0x4c) = *(edx_2 - 0x30)
    *(ecx_1 - 0x48) = 0
    int32_t xmm0_5 = *(edx_2 - 0x28)
    *(ecx_1 - 0x44) = *(edx_2 - 0x2c)
    ecx_1[-4].d = xmm0_5
    *(ecx_1 - 0x3c) = 0
    int32_t xmm0_6 = *(edx_2 - 0x20)
    *(ecx_1 - 0x38) = *(edx_2 - 0x24)
    *(ecx_1 - 0x34) = xmm0_6
    ecx_1[-3].d = 0
    int32_t xmm0_7 = *(edx_2 - 0x18)
    *(ecx_1 - 0x2c) = *(edx_2 - 0x1c)
    *(ecx_1 - 0x28) = xmm0_7
    *(ecx_1 - 0x24) = 0
    ecx_1[-2].d = *(edx_2 - 0x14)
    *(ecx_1 - 0x1c) = *(edx_2 - 0x10)
    *(ecx_1 - 0x18) = 0
    i = i_3
    i_3 -= 1
while (i != 1)
int128_t var_24060
int128_t* var_1c = &var_24060
int128_t var_24028 = data_8935c0
int32_t* var_30 = &var_24028
__builtin_memset(&var_24060, 0, 0x18)
sub_5a2ec0(&var_24028, &var_24018, ecx_1, var_30)
void* eax_11 = var_24060.d
*(edx + 0x8ffd0) = i_3
void** i_2 = nullptr
int32_t var_24088 = *(eax_11 + 4)
void** i_4 = sub_5a13b0(&var_24088)

while (true)
    int32_t var_20_2
    char const* const var_1c_3
    void** eax_23
    char* ecx_23
    
    if (i_4 == 0)
        i_2 = sub_5a13b0(i_2)
        
        if (i_2 == 0)
        label_5a469c:
            void* esi_1 = edx
            void* eax_17 = var_24060.d
            uint32_t count = 0x4000
            int32_t c = 0
            *(esi_1 + 0xeffbc) = 0
            void* eax_18 = *(eax_17 + 0x18)
            char var_4018[0x3fe8]
            memset(&var_4018, c, count)
            int32_t edi = 0
            int32_t var_2403c_1 = 0
            
            if (var_24060:4.d s<= 0)
            label_5a4979:
                int32_t* edx_6 = var_24060.d
                void* i_1 = edx_6[0xb]
                int32_t esi_4 = edx_6[0x17]
                int32_t edi_1 = edx_6[0x19]
                
                for (; i_1 != 0; i_1 = edx_6[0xb])
                    edx_6[0xb] = *(i_1 + 4)
                    edi_1(esi_4, i_1)
                    edx_6 = var_24060.d
                
                uint32_t result = edi_1(esi_4, *edx_6)
                CookieCheckFunction(result)
                return result
            
            int32_t* eax_20 = eax_18 + 8
            int32_t* var_24030_1 = eax_20
            
            while (true)
                int32_t ecx_4 = 0xffffffff
                int32_t edx_4 = 0xffffffff
                int32_t var_24034_1 = 0xffffffff
                var_4018[*eax_20] = 1
                eax_23 = var_24030_1[1]
                void** var_2402c_1 = eax_23
                
                if (eax_23 == 0)
                label_5a486c:
                    
                    if (edi s>= 0x1bff4)
                        var_1c_3 = "GenerateMesh"
                        var_20_2 = 0x313
                    else
                        *(esi_1 + (edi << 2) + 0xfffc0) = 0xffffffff
                        edi += 1
                        
                        if (edx_4 != 0xffffffff && ecx_4 != 0xffffffff && var_4018[edx_4] == 0
                                && var_4018[ecx_4] == 0)
                            int32_t ecx_11 = edx_4 * 3
                            int32_t eax_32 = *var_24030_1
                            int32_t eax_33 = eax_32 * 3
                            float xmm4_2 = *(esi_1 + (eax_33 << 2))
                            float xmm2_2 = *(esi_1 + (eax_33 << 2) + 4)
                            int32_t eax_35 = var_24034_1 * 3
                            float xmm3_8 = (*(esi_1 + (eax_35 << 2) + 4) - xmm2_2)
                                * (*(esi_1 + (ecx_11 << 2)) - xmm4_2)
                                - (*(esi_1 + (ecx_11 << 2) + 4) - xmm2_2)
                                * (*(esi_1 + (eax_35 << 2)) - xmm4_2)
                            
                            if (not(0 f> xmm3_8))
                                eax_23 = *(esi_1 + 0xeffbc) * 3
                                *(esi_1 + (eax_23 << 2) + 0x8ffd4) = eax_32
                                *(esi_1 + (eax_23 << 2) + 0x8ffd8) = edx_4
                                *(esi_1 + (eax_23 << 2) + 0x8ffdc) = var_24034_1
                                *(esi_1 + 0xeffbc) += 1
                                
                                if (*(esi_1 + 0xeffbc) s>= 0x7ffe)
                                    var_1c_3 = "GenerateMesh"
                                    var_20_2 = 0x324
                                    ecx_23 = "mesh.numTris < NTRIS"
                                    break
                        
                        int32_t ecx_15 = var_2403c_1 + 1
                        eax_20 = &var_24030_1[4]
                        var_2403c_1 = ecx_15
                        var_24030_1 = eax_20
                        
                        if (ecx_15 s>= var_24060:4.d)
                            goto label_5a4979
                        
                        continue
                else
                    void* var_24038_2 = esi_1 + ((edi + 0x3fff0) << 2)
                    
                    while (true)
                        if (eax_23[2] != 0)
                            int32_t ecx_7 = edx_4
                            int32_t var_24040_1 = edx_4
                            edx_4 = *(eax_23[2] + 8)
                            
                            if (var_24034_1 == 0xffffffff)
                                var_24034_1 = edx_4
                                *(esi_1 + (*var_24030_1 << 2) + 0xeffc0) = edi
                                eax_23 = var_2402c_1
                            
                            if (edi s>= 0x1bff4)
                                var_1c_3 = "GenerateMesh"
                                var_20_2 = 0x2fa
                                break
                            
                            edi += 1
                            *var_24038_2 = edx_4
                            var_24038_2 += 4
                            esi_1 = edx
                            
                            if (ecx_7 != 0xffffffff && var_4018[edx_4] == 0 && var_4018[ecx_7] == 0)
                                int32_t ecx_8 = ecx_7 * 3
                                int32_t eax_27 = *var_24030_1
                                int32_t eax_28 = eax_27 * 3
                                float xmm4_1 = *(esi_1 + (eax_28 << 2))
                                float xmm2_1 = *(esi_1 + (eax_28 << 2) + 4)
                                int32_t eax_29 = edx_4 * 3
                                float xmm3_4 = (*(esi_1 + (eax_29 << 2) + 4) - xmm2_1)
                                    * (*(esi_1 + (ecx_8 << 2)) - xmm4_1)
                                    - (*(esi_1 + (ecx_8 << 2) + 4) - xmm2_1)
                                    * (*(esi_1 + (eax_29 << 2)) - xmm4_1)
                                
                                if (not(0 f> xmm3_4))
                                    eax_23 = *(esi_1 + 0xeffbc) * 3
                                    *(esi_1 + (eax_23 << 2) + 0x8ffd4) = eax_27
                                    *(esi_1 + (eax_23 << 2) + 0x8ffd8) = var_24040_1
                                    *(esi_1 + (eax_23 << 2) + 0x8ffdc) = edx_4
                                    *(esi_1 + 0xeffbc) += 1
                                    
                                    if (*(esi_1 + 0xeffbc) s>= 0x7ffe)
                                        var_1c_3 = "GenerateMesh"
                                        var_20_2 = 0x30b
                                        ecx_23 = "mesh.numTris < NTRIS"
                                        goto label_5a4a71
                                
                                eax_23 = var_2402c_1
                        
                        eax_23 = *eax_23
                        var_2402c_1 = eax_23
                        
                        if (eax_23 == 0)
                            ecx_4 = var_24034_1
                            goto label_5a486c
                
                ecx_23 = "adjs < NADJ"
                break
            
        label_5a4a71:
            sub_63b870(eax_23, &data_801800, ecx_23, "C:\x\ax2017\Jams\Dominion\code\DomMap.cpp", 
                var_20_2, var_1c_3)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
    else
        i_2 = i_4
        i_4 = nullptr
    
    while (true)
        eax_23 = i_2[1]
        
        if (eax_23 != 0 && i_2[2] != 0)
            int32_t ecx_18 = *(edx + 0x8ffd0)
            
            if (ecx_18 s>= 0xbffa)
                var_1c_3 = "GenerateMesh"
                var_20_2 = 0x2d6
                ecx_23 = "mesh.numEdges < NEDGES"
                goto label_5a4a71
            
            int32_t ecx_20 = *(i_2[2] + 8)
            *(edx + (ecx_18 << 3) + 0x30000) = eax_23[2]
            *(edx + (ecx_18 << 3) + 0x30004) = ecx_20
            *(edx + 0x8ffd0) += 1
            break
        
        i_2 = *i_2
        
        if (i_2 == 0)
            goto label_5a469c
        
        do
            int32_t eax_15
            eax_15.b = 1.1920929e-07f f> _mm_and_ps(i_2[4] f- i_2[6], 0x7fffffff)
            
            if (eax_15 == 0)
                break
            
            int32_t eax_16
            eax_16.b = 1.1920929e-07f f> _mm_and_ps(i_2[3] f- i_2[5], 0x7fffffff)
            
            if (eax_16 == 0)
                break
            
            i_2 = *i_2
        while (i_2 != 0)
        
        if (i_2 == 0)
            goto label_5a469c
