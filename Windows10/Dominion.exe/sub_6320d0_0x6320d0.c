// 函数: sub_6320d0
// 地址: 0x6320d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

*(arg1 + 0x1804) = 0
*(arg1 + 0x1000) = 0
void* esi = data_b809e0
void* eax_1 = data_b809e4 * 0x1c30 + esi
int32_t var_54_1
char const* const var_50_2
int128_t* eax_7

if (esi u>= eax_1)
label_63213b:
    void* result_1 = arg1 + 0x1004
    int32_t* edx_1 = arg1 + ((*(arg1 + 0x1804) + 0x401) << 2)
    int32_t eax_6 = (edx_1 - (arg1 + 0x1004)) s>> 2
    void* result
    int32_t edx_2
    result, edx_2 = sub_4d4e30(eax_6, edx_1, arg1 + 0x1004, eax_6, sub_631e90)
    int32_t esi_1 = 0
    int96_t var_18_1 = (zx.o(0)).12
    
    if (*(arg1 + 0x1804) s<= 0)
        return result
    
    int32_t ebx_1 = 0
    result = arg1 + 0x1004
    
    while (true)
        int128_t var_3c
        eax_7, edx_2 = sub_5cf960(result, edx_2, *result, &var_3c)
        int96_t xmm0_1 = (*eax_7).12
        
        if (esi_1 == 0 || ebx_1 != xmm0_1.d)
        label_632302:
            int32_t eax_18 = *(arg1 + 0x1000)
            int96_t xmm0_2 = (*eax_7).12
            void* ecx_10 = arg1 + (eax_18 << 3)
            *(arg1 + 0x1000) = eax_18 + 1
            *ecx_10 = esi_1
            esi_1 += 1
            var_18_1 = xmm0_2
            ebx_1 = var_18_1.d
            *(ecx_10 + 4) = esi_1
        else
            if (ebx_1 u> 3)
                break
            
            switch (ebx_1)
                case 0
                    goto label_632302
                case 1, 2
                    int32_t eax_17
                    eax_17.b = var_18_1:4.d == xmm0_1:4.d
                    
                    if (eax_17.b == 0)
                        goto label_632302
                case 3
                    int32_t eax_21 = var_18_1:4.d
                    
                    if (eax_21 != xmm0_1:4.d || (eax_21 - 1 u> 0x47 && var_18_1:8.d != xmm0_1:8.d))
                        goto label_632302
            
            int32_t eax_24 = *(arg1 + 0x1000)
            *(arg1 + (eax_24 << 3) - 4) += 1
            esi_1 += 1
        
        result = result_1 + 4
        result_1 = result
        
        if (esi_1 s>= *(arg1 + 0x1804))
            return result
    
    var_50_2 = "IsPodIconWhereSame"
    var_54_1 = 0x10cb3
else
    while ((*(esi + 0x1c28) & 0xffff0000) == 0)
        esi += 0x1c30
        
        if (esi u>= eax_1)
            goto label_63213b
    
    if (esi == 0xffffffff)
        goto label_63213b
    
    while (true)
        char eax_8
        int32_t edx_3
        eax_8, edx_3 = sub_5cfc80(esi)
        
        if (eax_8 != 0)
            int32_t eax_9 = *(esi + 0x2c)
            
            if (eax_9 != 4 || *(esi + 0x1bc) != 1)
                if (eax_9 != 0)
                label_63220e:
                    uint32_t eax_11
                    int32_t ecx_5
                    int32_t edx_4
                    int32_t ebx_2
                    
                    if (*(esi + 0x2c) == 8)
                        ecx_5 = *(esi + 0x240)
                        edx_4 = data_b809e4
                        ebx_2 = data_b809e0
                        
                        if (ecx_5 != 0)
                            eax_11 = zx.d(ecx_5.w)
                    
                    if (*(esi + 0x2c) == 8 && (ecx_5 == 0 || eax_11 u>= edx_4
                            || *(eax_11 * 0x1c30 + ebx_2 + 0x1c28) != ecx_5))
                        int32_t eax_13 = *(esi + 0x248)
                        
                        if (eax_13 != 0)
                            uint32_t ecx_6 = zx.d(eax_13.w)
                            
                            if (ecx_6 u< edx_4)
                                void* edx_6 = ecx_6 * 0x1c30 + ebx_2
                                
                                if (*(edx_6 + 0x1c28) == eax_13 && edx_6 != 0)
                                    sub_5cd880(esi, edx_6)
                        
                        sub_5cb5a0(esi)
                    else
                        *(arg1 + (*(arg1 + 0x1804) << 2) + 0x1004) = esi
                        *(arg1 + 0x1804) += 1
                        
                        if (*(arg1 + 0x1804) s>= 0x200)
                            goto label_63213b
                else
                    eax_7 = *(esi + 0xa4)
                    
                    if (eax_7 == 1)
                        var_50_2 = "ComputePodIconInfo"
                        var_54_1 = 0x10cf3
                        break
                    
                    if (eax_7 != 6)
                        goto label_63220e
                    
                    if (sub_5cbaa0(eax_7, edx_3, esi, 0x40000000, 0) == 0)
                        goto label_63220e
        
        void* ecx_9 = data_b809e0
        
        if (esi != 0)
            esi += 0x1c30
        else
            esi = ecx_9
        
        void* eax_16 = data_b809e4 * 0x1c30 + ecx_9
        
        if (esi u>= eax_16)
            goto label_63213b
        
        while ((*(esi + 0x1c28) & 0xffff0000) == 0)
            esi += 0x1c30
            
            if (esi u>= eax_16)
                goto label_63213b
        
        if (esi == 0xffffffff)
            goto label_63213b

sub_63b870(eax_7, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_54_1, 
    var_50_2)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
