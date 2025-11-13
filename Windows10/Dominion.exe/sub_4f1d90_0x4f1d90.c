// 函数: sub_4f1d90
// 地址: 0x4f1d90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = arg1
int32_t ecx = 0
void* var_8 = esi
void* result = *(arg2 + 0x6c)
void* edx = arg2 + 0x70
int32_t var_c = 0
void* var_10 = edx

if (result s<= 0)
    var_10 = edx
else
    void* edi_1 = edx
    
    while (true)
        int32_t edx_1 = *edi_1
        
        if (edx_1 != 0)
            void* esi_1 = *(edx_1 * 0x64 + esi + 0x1a48)
            
            if ((*(esi_1 + 0x98) & 0x400) == 0)
            label_4f1e03:
                esi = var_8
            else
                int32_t eax_4 = 0
                void* esi_2 = esi_1 + 0x668
                
                while (true)
                    int32_t ecx_1 = *esi_2
                    
                    if (ecx_1 != 0)
                        if (ecx_1 == 0x1d)
                            sub_5731d0(eax_4, *(arg2 + 0x4c), var_8, edx_1)
                            int32_t eax_8 = (*(esi_2 + 4))()
                            TEB* fsbase
                            void* edx_5 = *fsbase->ThreadLocalStoragePointer
                            int32_t ecx_7 = *(edx_5 + 0xf010)
                            
                            if (ecx_7 s<= 0)
                                sub_63b870(eax_8, &data_801800, "cs.numContexts > 0", 
                                    "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x792, 
                                    "DomPopContext")
                                
                                if (sub_63bc30() != 0)
                                    breakpoint
                                
                                sub_63bb00()
                                noreturn
                            
                            esi = var_8
                            *(edx_5 + 0xf010) = ecx_7 - 1
                            ecx = var_c
                            
                            if (eax_8 != 0)
                                *(arg2 + 0x6c) -= 1
                                ecx -= 1
                                *edi_1 = *(arg2 + (*(arg2 + 0x6c) << 2) + 0x70)
                                edi_1 -= 4
                            
                            break
                        
                        eax_4 += 1
                        esi_2 += 0xc
                        
                        if (eax_4 s< 4)
                            continue
                    
                    ecx = var_c
                    goto label_4f1e03
        
        result = *(arg2 + 0x6c)
        ecx += 1
        edi_1 += 4
        var_c = ecx
        
        if (ecx s>= result)
            break
    
    edx = arg2 + 0x70

int32_t* ebx_2 = *(arg2 + 0x50) * 0x84 + 0x1777674
int32_t* var_1c = ebx_2

if (*ebx_2 != 0)
    int32_t var_c_1 = 0
    
    if (result s> 0)
        while (true)
            int32_t* esi_3 = ebx_2
            void* ecx_2 = var_8
            result = *edx * 0x64 + ecx_2
            int32_t edi_2 = 0
            void* result_1 = result
            int32_t ecx_3
            void* edx_3
            void* ebx_4
            
            while (true)
                int32_t edx_2 = *esi_3
                
                if (edx_2 != 0)
                    int32_t ebx_3 = *(result + 0x1a4c)
                    int32_t eax_6
                    
                    if (ebx_3 != edx_2)
                        eax_6 = sub_57da30(ecx_2, edx_2)
                    
                    if (ebx_3 == edx_2 || eax_6 == ebx_3)
                        ebx_4 = arg2
                        ecx_3 = var_c_1 - 1
                        *(ebx_4 + 0x6c) -= 1
                        result = *(ebx_4 + (*(ebx_4 + 0x6c) << 2) + 0x70)
                        *var_10 = result
                        edx_3 = var_10 - 4
                        break
                    
                    result = result_1
                    edi_2 += 1
                    ecx_2 = var_8
                    esi_3 = &esi_3[1]
                    
                    if (edi_2 s< 0xa)
                        continue
                
                edx_3 = var_10
                ecx_3 = var_c_1
                ebx_4 = arg2
                break
            
            edx = edx_3 + 4
            ebx_2 = var_1c
            var_c_1 = ecx_3 + 1
            var_10 = edx
            
            if (ecx_3 + 1 s>= *(ebx_4 + 0x6c))
                break

return result
