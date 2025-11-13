// 函数: sub_5931d0
// 地址: 0x5931d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void var_d8
void* result = __security_cookie ^ &var_d8
void* result_4 = result
void* edi = arg1
int32_t* result_3 = arg2
void* var_bc = edi

if (*(edi + 0x1504) != 3)
    int32_t i = 0
    
    if (*(edi + 0xd38) s> 0)
        result = arg2
        
        do
            *(result + 0x5788) = 0
            result += 0x5dd4
            *(result - 0x5dd4) = 0
            i += 1
        while (i s< *(edi + 0xd38))
    
    void* i_1 = 1
    void* i_6 = 1
    
    if (*(edi + 0x1520) s> 1)
        do
            uint32_t edx = zx.d(i_1.w)
            uint32_t var_c0_1 = edx
            
            if (edx u>= 0x320)
                result = sub_591930()
                i_1 = i_6
                edx = var_c0_1
            
            void* esi_2 = edx * 0x64 + edi
            
            if (*(esi_2 + 0x1a70) == 0xffffffff)
                int32_t j = 0
                
                if (*(edi + 0xd38) s> 0)
                    result = result_3
                    int32_t* result_1 = result
                    
                    do
                        uint32_t eax_3
                        int16_t ecx_5
                        eax_3, ecx_5 = sub_58bb00(result, j, edi, i_1)
                        uint32_t var_e4_4 = eax_3
                        result = sub_592c00(eax_3, result_1, edi, ecx_5, i_6)
                        
                        if (eax_3 != 0)
                            if (var_c0_1 u>= 0x320)
                                sub_591930()
                            
                            void* eax_5 = sub_571b30(*(esi_2 + 0x1a4c), *(edi + 0xd48))
                            result = *(eax_5 + 0x9c) & 0x940
                            
                            if (((*(eax_5 + 0x98) & 0x7f000400) | result) != 0)
                                result = *(esi_2 + 0x1a50) + (j << 2)
                                *(edi + (result << 2) + 0x5ef94) = eax_3
                        
                        result_1 = &result_1[0x1775]
                        j += 1
                        i_1 = i_6
                    while (j s< *(edi + 0xd38))
                    
                    i_1 = i_6
            else
                if (edx u>= 0x320)
                    result = sub_591930()
                
                result = sub_5754f0(result, *(esi_2 + 0x1a4c), edi, &data_1000000, 0)
                
                if (result.b == 0)
                    uint32_t eax_1
                    int16_t ecx_2
                    eax_1, ecx_2 = sub_58bb00(result, *(esi_2 + 0x1a70), edi, i_6)
                    uint32_t var_e4_2 = eax_1
                    result =
                        sub_592c00(esi_2, *(esi_2 + 0x1a70) * 0x5dd4 + result_3, edi, ecx_2, i_6)
                
                i_1 = i_6
            
            i_1 += 1
            i_6 = i_1
        while (i_1 s< *(edi + 0x1520))
        
        arg2 = result_3
    
    int32_t ecx_12 = 0
    int32_t var_d0_2 = 0
    int128_t var_a8
    
    if (*(edi + 0xd38) s> 0)
        int32_t var_cc_1 = 0
        int32_t* esi_4 = &arg2[0x15e2]
        int32_t* var_d4_1 = esi_4
        
        while (true)
            int32_t eax_10 = 6
            
            if (ecx_12 != 0xffffffff)
                eax_10 = 0x3f1
            
            int32_t i_7 = *(edi + 0x19a4)
            int32_t ecx_13 = 0
            
            if (i_7 s> 0)
                void* eax_11 = edi + 0x152cc
                int32_t i_2
                
                do
                    if (*(eax_11 + 4) == eax_10 && *eax_11 == var_d0_2 && *(eax_11 - 4) == 0x601)
                        ecx_13 += *(eax_11 + 0x10)
                    
                    eax_11 += 0x20
                    i_2 = i_7
                    i_7 -= 1
                while (i_2 != 1)
                edi = var_bc
                esi_4 = var_d4_1
            
            esi_4[-0x15e2] += ecx_13
            
            if (ecx_13 != 0)
                int32_t var_ac_1 = ecx_13
                int32_t ecx_15 = *esi_4 - 0x320
                int32_t var_b0_1 = 0
                var_a8 = zx.o(0)
                int32_t eax_13 = ecx_15 * 7
                int64_t xmm1_1 = _mm_unpackhi_pd(zx.o(0), 0)
                *(esi_4 + (eax_13 << 2)) = var_b0_1.o
                *(esi_4 + (eax_13 << 2) + 0x10) = xmm1_1
                esi_4[eax_13 + 6] = 0
                *esi_4 += 1
            
            int32_t ecx_19 = *esi_4
            int32_t edx_9 = 0
            int32_t var_c8_3 = 0
            
            if (ecx_19 s> 0)
                void* esi_6 = &esi_4[-0x15da]
                
                while (true)
                    int32_t eax_14 = *(esi_6 - 0x18)
                    
                    if (eax_14 == 1 || eax_14 == 2)
                        void* const eax_17 = &data_7bfed8
                        
                        while (true)
                            if (*eax_17 != *(esi_6 - 0x14))
                                eax_17 += 0x14
                                
                                if (eax_17 != &data_7c0090)
                                    continue
                            else if (eax_17 != 0)
                                (*(eax_17 + 4))(edi, var_d0_2, esi_6 - 8, esi_6 - 4, esi_6)
                                edx_9 = var_c8_3
                                break
                            
                            *(esi_6 - 8) = 0
                            *(esi_6 - 4) = 0
                            *esi_6 = 0
                            break
                    
                    edx_9 += 1
                    esi_6 += 0x1c
                    var_c8_3 = edx_9
                    ecx_19 = *var_d4_1
                    
                    if (edx_9 s>= ecx_19)
                        break
                
                esi_4 = var_d4_1
            
            void* edx_11 = 0xffffa878 - arg2 + esi_4
            void* esi_8 = edx_11 + ecx_19 * 0x1c + result_3
            int32_t eax_27 = (esi_8 + 8 - &var_d4_1[-0x15e0]) s/ 0x1c
            void* esi_10 = &var_d4_1[-0x15e0]
            sub_594a00(eax_27, esi_8 + 8, esi_10, eax_27, sub_593160)
            int32_t ecx_23 = *var_d4_1
            var_d4_1[1] = ecx_23
            int32_t eax_29 = 0
            
            if (ecx_23 s> 0)
                do
                    if (*esi_10 == 3)
                        *(edx_11 + result_3 + 0x578c) = eax_29
                        break
                    
                    eax_29 += 1
                    esi_10 += 0x1c
                while (eax_29 s< ecx_23)
            
            int32_t i_3 = 0
            var_d4_1[0x192] = 0
            
            if (*var_d4_1 s> 0)
                void* ecx_25 = &var_d4_1[-0x15e0]
                
                do
                    int32_t eax_30 = *ecx_25
                    
                    if (eax_30 u> 3)
                        sub_63b870(eax_30, &data_801800, "Halt", 
                            "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x518d, "IsDisplayCard")
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                    switch (eax_30)
                        case 1, 3
                            *(result_3 + ((var_d4_1[0x192] + var_cc_1) << 1) + 0x5790) = i_3.w
                            var_d4_1[0x192] += 1
                            edi = var_bc
                    
                    i_3 += 1
                    ecx_25 += 0x1c
                while (i_3 s< *var_d4_1)
            
            int32_t var_b4_1 = *(edi + 0xd48)
            int32_t eax_35 = var_d4_1[0x192] + var_cc_1
            void* var_b8 = &var_d4_1[-0x15e2]
            int16_t* edx_17 = &result_3[0x15e4] + (eax_35 << 1)
            int32_t eax_38 = (edx_17 - &var_d4_1[2]) s>> 1
            sub_594cc0(eax_38, edx_17, &var_d4_1[2], eax_38, &var_b8)
            esi_4 = &var_d4_1[0x1775]
            var_cc_1 += 0x2eea
            ecx_12 = var_d0_2 + 1
            var_d0_2 = ecx_12
            var_d4_1 = esi_4
            
            if (ecx_12 s>= *(edi + 0xd38))
                break
    
    void var_2c
    sub_58bc10(edi, &var_2c)
    int32_t i_4 = 0
    void var_90
    
    if (*(edi + 0xd38) s> 0)
        int32_t* result_7 = result_3
        void* ecx_32 = &var_90
        
        do
            int32_t eax_39 = *result_7
            result_7 = &result_7[0x1775]
            *(ecx_32 + 4) = i_4
            ecx_32 += 0x10
            i_4 += 1
            *(ecx_32 - 0x10) = eax_39
        while (i_4 s< *(edi + 0xd38))
    
    int32_t ecx_34 = *(edi + 0xd38) << 4
    int32_t eax_41 = ecx_34 s>> 4
    sub_594410(eax_41, &var_90 + ecx_34, &var_90, eax_41, sub_583320)
    result = *(edi + 0xd38)
    void* result_5 = nullptr
    void* result_2 = result
    void* result_6 = nullptr
    
    if (result s> 0)
        void* esi_12 = edi + 0xd38
        void* ecx_36 = &var_a8:0xc
        void* var_c0_3 = esi_12
        void* var_cc_2 = &var_a8:0xc
        
        do
            if (result_5 == 0 || *(ecx_36 + 0xc) != *(ecx_36 - 4))
                result = result_5
            else
                int32_t eax_45
                int32_t edx_20
                edx_20:eax_45 = sx.q(*(edi + 0x19e0) - 1)
                int32_t temp1_1 = mods.dp.d(edx_20:eax_45, *esi_12)
                int32_t eax_46 = divs.dp.d(edx_20:eax_45, *esi_12)
                int32_t ecx_37 = eax_46
                
                if (*(var_cc_2 + 0x10) s<= temp1_1)
                    ecx_37 = eax_46 + 1
                
                edi = var_bc
                result_5 = result_6
                
                if (*var_cc_2 s<= temp1_1)
                    eax_46 += 1
                
                ecx_36 = var_cc_2
                
                if (ecx_37 != eax_46)
                    result = result_5
                else
                    result = *(ecx_36 + 8)
            
            esi_12 = var_c0_3
            result_5 += 1
            *(ecx_36 + 0x18) = result
            ecx_36 += 0x10
            result_6 = result_5
            var_cc_2 = ecx_36
        while (result_5 s< result_2)
    
    int32_t i_5 = 0
    
    if (*(edi + 0xd38) s> 0)
        void var_8c
        void* edx_22 = &var_8c
        
        do
            result = *edx_22 * 0x5dd4
            edx_22 += 0x10
            *(result + result_3 + 4) = i_5
            i_5 += 1
        while (i_5 s< *(edi + 0xd38))

CookieCheckFunction(result)
return result
