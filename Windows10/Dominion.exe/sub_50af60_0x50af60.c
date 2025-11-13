// 函数: sub_50af60
// 地址: 0x50af60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = 0
int32_t eax = arg2
int32_t edi = 0
int32_t var_8 = eax

if (arg4 s> 0)
    while (true)
        int32_t* eax_1 = sub_516f30(*(eax + (edi << 3) + 4))
        int32_t ecx_1 = 0
        void* edx = &eax_1[3]
        
        while (true)
            if (*edx == 2)
                int32_t eax_3 = eax_1[ecx_1 * 0x9b + 4]
                
                if (eax_3 != 0 && eax_3() == 0)
                label_50affa:
                    eax = var_8
                    break
            else
                ecx_1 += 1
                edx += 0x26c
                
                if (ecx_1 s< 4)
                    continue
            
            if ((eax_1[0x26f].b & 1) != 0)
                int32_t i = 0
                int32_t* eax_7 = data_cca780 + 0x590 + (data_cca784 << 0xb)
                
                do
                    if (eax_7[-1] == *eax_1 && *eax_7 == data_cca788)
                        goto label_50affa
                    
                    i += 1
                    eax_7 = &eax_7[5]
                while (i s< 0x20)
            
            eax = var_8
            ebx += *(eax + (edi << 3))
            break
        
        edi += 1
        
        if (edi s>= arg4)
            break
    
    if (ebx != 0)
        uint32_t eax_8 = sub_63ed10(arg3, ebx)
        int32_t edi_1 = 0
        int32_t esi_3 = 0
        void* eax_13
        
        while (true)
            int32_t eax_10 = sub_516f30(*(var_8 + (esi_3 << 3) + 4))
            int32_t ecx_7 = 0
            int32_t* edx_2 = eax_10 + 0xc
            
            while (true)
                if (*edx_2 == 2)
                    int32_t eax_12 = *(ecx_7 * 0x26c + eax_10 + 0x10)
                    
                    if (eax_12 != 0)
                        eax_13 = eax_12()
                        
                        if (eax_13.b == 0)
                            break
                else
                    ecx_7 += 1
                    edx_2 = &edx_2[0x9b]
                    
                    if (ecx_7 s< 4)
                        continue
                
                edi_1 += *(var_8 + (esi_3 << 3))
                eax_13 = var_8 + (esi_3 << 3)
                
                if (eax_8 s< edi_1)
                    return *(eax_13 + 4)
                
                break
            
            esi_3 += 1
            
            if (esi_3 s>= arg4)
                break
        
        sub_63b870(eax_13, &data_801800, "Halt", 
            "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x39d, "RollTable")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

return 0
