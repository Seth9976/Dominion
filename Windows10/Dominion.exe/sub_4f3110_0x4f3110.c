// 函数: sub_4f3110
// 地址: 0x4f3110
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx
int16_t* edx
ecx, edx = __chkstk(0x57a8)
int32_t __saved_ebp
int32_t var_c = __security_cookie ^ &__saved_ebp
int32_t esi = *(ecx + 0xd38)
int32_t var_5794 = 0
int32_t var_5790[0x12c0]

if (esi s> 0)
    memset(&var_5790, 0, esi * 0xc80)

uint32_t result = zx.d(*edx)
int32_t edi = 0
int16_t result_2 = result.w
int32_t var_c90[0x31d]

if (0 s< result.w)
    void* edx_1 = &edx[0xc]
    
    do
        int32_t i = *edx_1
        
        if (i != 0)
            int32_t ecx_1 = var_5794 - 1
            
            if (ecx_1 s< 0)
            label_4f31a7:
                int32_t eax_4 = *(edx_1 + 4)
                ecx_1 = var_5794
                var_c90[var_5794] = eax_4
                int32_t ebx_2 = var_5794 + 1
                var_5794 = ebx_2
                
                if (ebx_2 s>= 0x320)
                    sub_63b870(eax_4, &data_801800, "numExist < MAX_CARDS", 
                        "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp", 0x1344, "EvaluateNovelty")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
            else
                while (var_c90[ecx_1] != i)
                    int32_t temp0_1 = ecx_1
                    ecx_1 -= 1
                    
                    if (temp0_1 - 1 s< 0)
                        goto label_4f31a7
                
                if (ecx_1 s< 0)
                    goto label_4f31a7
            
            int32_t eax_5 = 0
            
            if (esi s> 0)
                void* ecx_2 = &(&__saved_ebp)[ecx_1 - 0x15e3]
                
                do
                    if (*(edx_1 + eax_5 + 0x14) != 0)
                        *ecx_2 += 1
                    
                    eax_5 += 1
                    ecx_2 += 0xc80
                while (eax_5 s< esi)
        
        edi += 1
        result = sx.d(result_2)
        edx_1 += 0x68
    while (edi s< result)

int32_t i_1 = 0
int32_t i_2 = 0

if (esi s> 0)
    result = 0
    void* edx_3 = arg2 + 0x18
    void* esi_1 = ecx
    uint32_t result_1 = 0
    void* var_5798_1 = edx_3
    
    do
        int32_t xmm2_1 = (zx.o(0)).d
        int32_t edi_1 = 0
        int32_t var_5794_1 = 0
        
        if (var_5794 s> 0)
            do
                int32_t j = var_c90[edi_1]
                int32_t* ecx_5 = *(((j s% 0x2717) << 2) + &data_1938e70)
                
                if (ecx_5 == 0)
                label_4f328e:
                    int32_t j_1 = j
                    sub_4f7f30("Couldn't lookup %d\n")
                    xmm2_1 = var_5794_1
                    ecx_5 = nullptr
                else
                    while (*ecx_5 != j)
                        ecx_5 = ecx_5[0x6e]
                        
                        if (ecx_5 == 0)
                            goto label_4f328e
                
                int32_t edx_6 = ecx_5[0x6d]
                
                if (edx_6 != 0)
                    float xmm0_2 = _mm_cvtepi32_ps(zx.o(edx_6))
                    float xmm1_3 =
                        _mm_cvtepi32_ps(zx.o(ecx_5[var_5790[result_1 + edi_1] + 9])) / xmm0_2
                    float xmm0_3 = *(*(arg2 + 0xb4) * 0x84 + 0x177765c)
                    
                    if (not(xmm1_3 >= xmm0_3))
                        xmm2_1 = xmm2_1 f+ xmm0_3 - xmm1_3
                        var_5794_1 = xmm2_1
                
                edi_1 += 1
            while (edi_1 s< var_5794)
            
            result = result_1
            i_1 = i_2
            edx_3 = var_5798_1
            esi_1 = ecx
        
        *edx_3 = xmm2_1
        i_1 += 1
        edx_3 += 4
        i_2 = i_1
        result += 0x320
        var_5798_1 = edx_3
        result_1 = result
    while (i_1 s< *(esi_1 + 0xd38))

CookieCheckFunction(result)
return result
