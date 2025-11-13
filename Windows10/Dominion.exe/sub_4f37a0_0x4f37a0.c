// 函数: sub_4f37a0
// 地址: 0x4f37a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx
uint32_t edx
ecx, edx = __chkstk(0x15424)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
uint32_t eax_2 = *(edx + 0xb4) * 0x84
void var_d6c
int32_t eax_3 = memset(&var_d6c, 0, 0xd18)
int32_t var_18
char const* const var_14_1
char* ecx_1

if (*(edx + 0xe0) != 0)
    void var_20
    sub_4f36e0(ecx, &var_20)
    int32_t edx_2 = *(edx + 0xb0)
    
    if (edx_2 s<= 0)
        int32_t eax_5 = *(edx + 0xb4)
        data_183ad14 += 1
        float xmm0_4 = *(&var_20 + (eax_5 << 2))
        xmm0_4 - 1f
        eax_5:1.b = (xmm0_4 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_4, 1f) ? 1 : 0) << 2
            | (xmm0_4 < 1f ? 1 : 0)
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (p_1)
            data_183ad1c += 1
        else
            data_183ad18 += 1
            *(edx + 0xdc) = 1
        
        *(edx + 0xb0) = 1
        int32_t var_38[0x6]
        sub_4f3640(ecx, &var_38)
        int32_t eax_6 = *(ecx + 0xd38)
        int32_t ecx_7 = 0
        int32_t var_50[0x6]
        
        if (eax_6 s> 0)
            void* edx_4 = edx + 0x60
            
            do
                float xmm1_1 = *(&var_20 + (ecx_7 << 2))
                xmm1_1 f- 0
                int32_t xmm0_6 = _mm_cvtepi32_ps(zx.o(var_38[ecx_7]))
                eax_6:1.b = (xmm1_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_1, 0f) ? 1 : 0) << 2
                    | (xmm1_1 < 0f ? 1 : 0)
                *(edx_4 - 0x60) = xmm1_1
                *(edx_4 - 0x30) = xmm1_1
                var_50[ecx_7] = xmm0_6
                bool p_3 = unimplemented  {test ah, 0x44}
                
                if (p_3)
                    xmm1_1 - 1f
                    eax_6:1.b = (xmm1_1 == 1f ? 1 : 0) << 6
                        | (is_unordered.d(xmm1_1, 1f) ? 1 : 0) << 2 | (xmm1_1 < 1f ? 1 : 0)
                    bool p_5 = unimplemented  {test ah, 0x44}
                    
                    if (p_5)
                        *(edx + (ecx_7 << 2) + 0x60) = 0
                    else
                        *(edx + (ecx_7 << 2) + 0x60) = 0x40a00000
                else
                    *edx_4 = 0xc0a00000
                
                eax_6 = *(ecx + 0xd38)
                ecx_7 += 1
                edx_4 += 4
            while (ecx_7 s< eax_6)
        
        int32_t i = 0
        
        if (eax_6 s> 0)
            void* esi_1 = edx + 0x48
            
            do
                int32_t _X
                _X.q = _mm_cvtps_pd(var_50[i]) / 10.0
                asinh(_X)
                unimplemented  {fmul st0, qword [0x890e58]}
                i += 1
                *esi_1 = fconvert.s(unimplemented  {fstp dword [esi], st0})
                unimplemented  {fstp dword [esi], st0}
                int16_t top = top + 1
                esi_1 += 4
            while (i s< *(ecx + 0xd38))
        
        int16_t* ecx_8 = *(edx + 0xb4)
        uint32_t result = ecx_8 * 0x84
        
        if (*(result + 0x177764c) == 0)
            int128_t var_1541c[0x146b]
            sub_4ee440(&var_1541c, &var_d6c, ecx, ecx_8, &var_1541c)
            sub_4f3110(edx, edx)
            result = sub_4f2b60(edx, edx)
        
        int32_t i_1 = 0
        
        if (*(ecx + 0xd38) s> 0)
            void* ecx_12 = edx + 0x30
            
            do
                float xmm1_2 = *(ecx_12 - 0x30)
                xmm1_2 - 1f
                float xmm2_6 = *(ecx_12 - 0x18) f* *(eax_2 + 0x1777660) + xmm1_2
                    + *ecx_12 f* *(eax_2 + 0x1777668) + *(ecx_12 + 0x18) f* *(eax_2 + 0x177766c)
                    + *(edx + 0x78) f* *(eax_2 + 0x1777664)
                result:1.b = (xmm1_2 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm1_2, 1f) ? 1 : 0) << 2
                    | (xmm1_2 < 1f ? 1 : 0)
                float xmm2_7 = xmm2_6 + *(ecx_12 + 0x30) f* *(eax_2 + 0x1777670)
                bool p_7 = unimplemented  {test ah, 0x44}
                
                if (not(p_7))
                    xmm2_7 = xmm2_7 + 0.100000001f
                
                *(ecx_12 + 0x4c) = xmm2_7
                i_1 += 1
                *(ecx_12 + 0x64) = xmm2_7
                ecx_12 += 4
            while (i_1 s< *(ecx + 0xd38))
        
        CookieCheckFunction(result)
        return result
    
    int32_t ecx_3 = *(ecx + 0xd38)
    eax_3 = 0
    
    if (ecx_3 s<= 0)
    label_4f3851:
        *(edx + 0xb0) = edx_2 + 1
        CookieCheckFunction(edx_2 + 1)
        return edx_2 + 1
    
    while (true)
        if (9.99999975e-06f f<= sub_4ae0b0(*(edx + (eax_3 << 2)) f- *(&var_20 + (eax_3 << 2))))
            var_14_1 = "EvaluateTerminal"
            var_18 = 0x140a
            ecx_1 = "fabs(node->selfValue.winProb[i] - score[i]) < 0.00001f"
            break
        
        eax_3 += 1
        
        if (eax_3 s>= ecx_3)
            goto label_4f3851
else
    var_14_1 = "EvaluateTerminal"
    var_18 = 0x1400
    ecx_1 = "node->terminal"

sub_63b870(eax_3, &data_801800, ecx_1, "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp", var_18, 
    var_14_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
