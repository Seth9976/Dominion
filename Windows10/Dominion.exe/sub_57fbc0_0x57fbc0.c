// 函数: sub_57fbc0
// 地址: 0x57fbc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = arg6

if (esi == 0 || *(arg3 + 0xd40) != 0)
    return 

int32_t var_18_1 = 0
void* ecx_1 = sub_571b30(arg4, *(arg3 + 0xd48)) + 0xa8
void* var_c_1 = ecx_1

while (true)
    arg1 = *ecx_1
    
    if (arg1 == 0)
        break
    
    if ((arg1 == 0x13 || arg1 == 0x12) && *(ecx_1 + 0xc) == esi)
        int64_t var_20_1 = 0
        TEB* fsbase
        void* esi_1 = *fsbase->ThreadLocalStoragePointer
        int32_t ebx_1
        int32_t edi_1
        
        if (*(esi_1 + 0xf010) s<= 0)
            ebx_1 = 0
            edi_1 = 0
        else
            void* eax_2 = sub_573400()
            edi_1 = *(eax_2 + 0x50)
            ebx_1 = *(eax_2 + 0x54)
        
        if (*(esi_1 + 0xf010) s>= 0x200)
            sub_591930()
        
        int32_t eax_3 = *(esi_1 + 0xf010)
        int32_t ecx_5 = eax_3 * 0x78
        void* edx_1
        
        if (eax_3 != 0)
            edx_1 = esi_1 - 0x68 + ecx_5
        else
            edx_1 = nullptr
        
        *(esi_1 + 0xf010) = eax_3 + 1
        *(ecx_5 + esi_1 + 0x14) = arg3
        *(ecx_5 + esi_1 + 0x1c) = arg2
        *(ecx_5 + esi_1 + 0x28) = arg5
        *(ecx_5 + esi_1 + 0x10) = 5
        *(ecx_5 + esi_1 + 0x18) = edx_1
        *(ecx_5 + esi_1 + 0x20) = arg4
        *(ecx_5 + esi_1 + 0x60) = edi_1
        *(ecx_5 + esi_1 + 0x64) = ebx_1
        int32_t eax_9 = *(var_c_1 + 0x14)
        char eax_10
        
        if (*var_c_1 != 0x13)
            eax_10 = eax_9(arg7, arg8)
        else
            eax_10 = eax_9()
        
        int32_t eax_11 = *(esi_1 + 0xf010)
        
        if (eax_11 s<= 0)
            sub_63b870(eax_11, &data_801800, "cs.numContexts > 0", 
                "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x792, "DomPopContext")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        *(esi_1 + 0xf010) = eax_11 - 1
        
        if (eax_10 != 0)
            void* eax_13 = sub_57fac0(eax_11 - 1, arg2, arg3, arg4)
            
            if (*eax_13 != 1)
                *eax_13 = 1
                int32_t edx_5 = 0
                void* eax_15 = sub_571b30(arg4, *(arg3 + 0xd48)) + 0xb4
                
                while (true)
                    int32_t ecx_10 = *(eax_15 - 0xc)
                    
                    if (ecx_10 != 0)
                        if (ecx_10 == 0x13 && *eax_15 == 0x15)
                            break
                        
                        edx_5 += 1
                        eax_15 += 0xb4
                        
                        if (edx_5 s< 8)
                            continue
                    
                    int32_t edx_7 = 0
                    void* eax_17 = sub_571b30(arg4, *(arg3 + 0xd48)) + 0xb4
                    
                    while (true)
                        int32_t ecx_12 = *(eax_17 - 0xc)
                        
                        if (ecx_12 != 0)
                            if (ecx_12 != 0x13 || *eax_17 != 0x14)
                                edx_7 += 1
                                eax_17 += 0xb4
                                
                                if (edx_7 s< 8)
                                    continue
                            else if (*(arg3 + 0x1a04) != 0)
                                break
                        
                        *(eax_13 + 1) = 1
                        int32_t eax_18 = *(arg3 + 0x1504)
                        
                        if (eax_18 != 3 && eax_18 != 5 && eax_18 != 4 && eax_18 != 6)
                            ecx_12.b = eax_18 == 2
                            sub_61b1b0(eax_18, 0x26, ecx_12.b, arg2, arg4, nullptr, 1, nullptr, 
                                nullptr, 0, 0, 0, 0, 0)
                        
                        break
                    
                    break
        
        ecx_1 = var_c_1
        esi = arg6
    
    ecx_1 += 0xb4
    arg1 = var_18_1 + 1
    var_c_1 = ecx_1
    var_18_1 = arg1
    
    if (arg1 s>= 8)
        break
