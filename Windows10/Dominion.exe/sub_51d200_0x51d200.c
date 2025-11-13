// 函数: sub_51d200
// 地址: 0x51d200
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
__security_cookie
void* var_100 = arg2
void* eax_4 = (arg4 << 0xb) + arg2 + 0xc
int32_t var_148
char const* const var_144_1
int32_t (* i_5)[0x25]
uint32_t i_1
char* ecx_1

if (sub_51c9c0(eax_4, &i_5) != 0)
    i_1 = i_5
    
    if (i_1 s> 0)
        CookieCheckFunction(i_1)
        return i_1
    
    var_144_1 = "RollMissionDoodad"
    var_148 = 0x2e85
    ecx_1 = "retval > 0"
else
    int32_t* ecx_4
    
    if (arg4 == 4)
        i_1 = *arg5
        ecx_4 = i_1 * 0x30 + 0x78dea0
        
        if (*ecx_4 == i_1)
        label_51d2aa:
            i_1 = ecx_4[6]
            CookieCheckFunction(i_1)
            return i_1
        
        var_144_1 = "FlavorThemeDefGet"
        var_148 = 0x2d49
        ecx_1 = "def.theme == theme"
    else if (arg4 != 9)
        int128_t xmm0_1 = data_8913a0
        int128_t var_f0
        int128_t* esi_1 = &var_f0
        int32_t var_d0[0x25]
        i_5 = &var_d0
        int32_t edx_2 = 0
        int32_t i = 0
        uint32_t ecx_11 = (&var_d0 - &var_f0 + 7) u>> 3
        bool cond:0_1 = &var_f0 u> i_5
        var_f0 = xmm0_1
        
        if (cond:0_1)
            ecx_11 = 0
        
        i_1 = &var_f0
        int128_t var_e0_1 = data_891430
        
        if (ecx_11 != 0 && ecx_11 u>= 4)
            int128_t var_130
            __builtin_memset(&var_130, 0, 0x20)
            int64_t xmm3_1 = 0
            int64_t xmm2_1 = 0
            
            do
                i += 4
                int32_t xmm1_1[0x4] = _mm_shuffle_epi32(*i_1, 0xd8)
                uint32_t xmm0_4[0x4] = *(i_1 + 0x10)
                i_1 += 0x20
                xmm3_1 = _mm_add_epi32(zx.o(xmm3_1), xmm1_1)
                xmm2_1 = _mm_add_epi32(zx.o(xmm2_1), _mm_shuffle_epi32(xmm0_4, 0xd8))
            while (i != (ecx_11 & 0xfffffffc))
            
            int32_t xmm1_4[0x4] = _mm_add_epi32(zx.o(xmm2_1), zx.o(xmm3_1))
            edx_2 = _mm_add_epi32(xmm1_4, _mm_bsrli_si128(xmm1_4, 4))
        
        for (; i_1 != &var_d0; i_1 += 8)
            edx_2 += *i_1
        
        int32_t var_148_1
        char const* const ecx_13
        
        if (edx_2 s<= 0)
            char const* const var_144_2 = "RollWeightedTable"
            var_148_1 = 0x2e72
            ecx_13 = "total > 0"
        label_51d640:
            sub_63b870(i_1, &data_801800, ecx_13, 
                "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", var_148_1, 
                "RollWeightedTable")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        int32_t* edi_1 = arg3
        i_1 = sub_63ed10(edi_1, edx_2)
        int32_t ecx_15 = 0
        
        if (&var_f0 == &var_d0)
        label_51d627:
            char const* const var_144_6 = "RollWeightedTable"
            var_148_1 = 0x2e7c
            ecx_13 = "Halt"
            goto label_51d640
        
        while (true)
            ecx_15 += *esi_1
            int32_t edx_3 = *(esi_1 + 4)
            
            if (i_1 s< ecx_15)
                if (edx_3 u> 3)
                    var_144_1 = "RollMissionDoodad"
                    var_148 = 0x2eae
                    ecx_1 = "Halt"
                else
                    switch (edx_3)
                        case 0
                            i_1 = sub_51d0e0(i_1, arg5, edi_1, arg6)
                        case 1
                            void* edx_5 = var_100
                            void* const eax_7
                            eax_7.b = *(edx_5 + 0x5018) != 0
                            i_1 = sub_51c7a0(eax_7 + 1, edx_5 + 0x5010, edi_1, eax_7 + 1)
                        case 2
                            int32_t esi_2 = 0
                            int32_t i_2 = 0
                            void* i_7 = eax_4 + 0x580
                            i_5 = i_7
                            
                            do
                                int32_t ecx_18 = *i_7
                                
                                if (ecx_18 == 0)
                                    break
                                
                                if (sub_51c520(ecx_18, &var_100) != 0)
                                    var_d0[esi_2] = var_100
                                    esi_2 += 1
                                
                                i_2 += 1
                                i_7 = &(*i_5)[5]
                                i_5 = i_7
                            while (i_2 s< 0x20)
                            
                            int32_t i_3 = 0
                            void* edx_9 = eax_4 + 0x28
                            
                            do
                                int32_t ecx_19 = *edx_9
                                
                                if (ecx_19 == 0)
                                    break
                                
                                for (int32_t* j = *(data_1597e18
                                        + (((ecx_19 s>> 4 | ecx_19) & data_1597e1c) << 2)); j != 0; 
                                        j = j[2])
                                    if (*edx_9 == *j)
                                        if (j != 0xfffffffc)
                                            var_d0[esi_2] = j[1]
                                            esi_2 += 1
                                        
                                        break
                                
                                i_3 += 1
                                edx_9 += 0x3c
                            while (i_3 s< 4)
                            
                            edi_1 = arg3
                            
                            if (esi_2 != 0)
                                i_1 = var_d0[sub_63ed10(edi_1, esi_2)]
                            else
                                i_1 = 0
                        case 3
                            int32_t edi_2 = data_1597e1c
                            int32_t esi_3 = 0
                            int32_t var_3c[0xa]
                            
                            for (int32_t i_4 = 0; i_4 s< 0xa; i_4 += 1)
                                int32_t ecx_23 = *(eax_4 + (i_4 << 2))
                                int32_t* j_1 =
                                    *(data_1597e18 + (((ecx_23 s>> 4 | ecx_23) & edi_2) << 2))
                                edi_2 = data_1597e1c
                                
                                for (; j_1 != 0; j_1 = j_1[2])
                                    if (ecx_23 == *j_1)
                                        if (j_1 != 0xfffffffc)
                                            var_3c[esi_3] = j_1[1]
                                            esi_3 += 1
                                        
                                        break
                            
                            edi_1 = arg3
                            
                            if (esi_3 != 0)
                                i_1 = var_3c[sub_63ed10(edi_1, esi_3)]
                            else
                                i_1 = 0
                    
                    uint32_t i_6 = i_1
                    bool cond:1_1 = i_1 s> 0
                    
                    if (i_1 != 0)
                    label_51d5cf:
                        
                        if (cond:1_1)
                            CookieCheckFunction(i_6)
                            return i_6
                        
                        var_144_1 = "RollMissionDoodad"
                        var_148 = 0x2eb7
                        ecx_1 = "retval > 0"
                    else
                        i_1 = sub_51d0e0(i_1, arg5, edi_1, arg6)
                        i_6 = i_1
                        cond:1_1 = i_1 s> 0
                        
                        if (i_1 != 0)
                            goto label_51d5cf
                        
                        var_144_1 = "RollMissionDoodad"
                        var_148 = 0x2eb4
                        ecx_1 = "retval != DOODAD_NONE"
                
                break
            
            esi_1 += 8
            
            if (esi_1 == &var_d0)
                goto label_51d627
    else
        uint32_t* eax_6 = nullptr
        
        if (arg6 == 2)
            eax_6 = 4
        
        i_1 = *(eax_6 + arg5)
        ecx_4 = i_1 * 0x30 + 0x78dea0
        
        if (*ecx_4 == i_1)
            goto label_51d2aa
        
        var_144_1 = "FlavorThemeDefGet"
        var_148 = 0x2d49
        ecx_1 = "def.theme == theme"

sub_63b870(i_1, &data_801800, ecx_1, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    var_148, var_144_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
