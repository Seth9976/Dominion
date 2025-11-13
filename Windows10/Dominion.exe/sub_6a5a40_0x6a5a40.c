// 函数: sub_6a5a40
// 地址: 0x6a5a40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
void* esi = arg2[3]
void* edi_1 = *arg2 + arg1
int32_t* var_8_1 = arg2
uint32_t eax_1 = *(esi + 0x10) - 1
bool cond:1_1

if (eax_1 u> 0x10)
label_6a5b5a:
    void* ecx_5 = arg2[9]
    
    if (edi_1 == ecx_5)
        eax_1.b = 1
        return eax_1
    
    if (ecx_5 == 0)
        if (*(esi + 8) == ecx_5)
            eax_1.b = 1
            return eax_1
        
        int32_t ebx_1 = 0
        
        while (true)
            void* esi_2 = arg2[3]
            ebx_1 += 1
            *(esi_2 + 4)
            
            if (ebx_1 s>= *(esi_2 + 8))
                ebx_1 = 0xffffffff
            
            if (sub_6a5a40().b == 0)
                break
            
            arg2 = var_8_1
            
            if (ebx_1 == 0xffffffff)
                eax_1.b = 1
                return eax_1
        
        eax_1.b = 0
        return eax_1
    
    int32_t edx_3 = *(esi + 0xc)
    
    if (edx_3 == 0)
        sub_63b870(eax_1, &data_801800, "pDefMap->definitionSize != 0", 
            "C:\x\ax2017\Engine\Definition.cpp", 0x6d, "DefinitionGetSize")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t i_3 = edx_3 - 4
    
    if (edx_3 u>= 4)
        int32_t i
        
        do
            if (*edi_1 != *ecx_5)
                goto label_6a5bd2
            
            edi_1 += 4
            ecx_5 += 4
            i = i_3
            i_3 -= 4
        while (i u>= 4)
    
    if (i_3 == 0xfffffffc)
        eax_1.b = 1
        return eax_1
    
label_6a5bd2:
    eax_1.b = *edi_1
    
    if (eax_1.b != *ecx_5)
        eax_1.b = 0
        return eax_1
    
    if (i_3 == 0xfffffffd)
        eax_1.b = 1
        return eax_1
    
    eax_1.b = *(edi_1 + 1)
    
    if (eax_1.b != *(ecx_5 + 1))
        eax_1.b = 0
        return eax_1
    
    if (i_3 == 0xfffffffe)
        eax_1.b = 1
        return eax_1
    
    eax_1.b = *(edi_1 + 2)
    
    if (eax_1.b != *(ecx_5 + 2))
        eax_1.b = 0
        return eax_1
    
    if (i_3 == 0xffffffff)
        eax_1.b = 1
        return eax_1
    
    eax_1.b = *(edi_1 + 3)
    cond:1_1 = eax_1.b == *(ecx_5 + 3)
else
    eax_1 = zx.d(lookup_table_6a5c60[eax_1])
    
    switch (eax_1)
        case 0
            void* ecx = &arg2[9]
            int32_t edx = arg2[0xd]
            int32_t i_2 = edx - 4
            
            if (edx u>= 4)
                int32_t i_1
                
                do
                    if (*edi_1 != *ecx)
                        goto label_6a5a8d
                    
                    edi_1 += 4
                    ecx += 4
                    i_1 = i_2
                    i_2 -= 4
                while (i_1 u>= 4)
            
            if (i_2 == 0xfffffffc)
                eax_1.b = 1
                return eax_1
            
        label_6a5a8d:
            eax_1.b = *edi_1
            
            if (eax_1.b != *ecx)
                eax_1.b = 0
                return eax_1
            
            if (i_2 == 0xfffffffd)
                eax_1.b = 1
                return eax_1
            
            eax_1.b = *(edi_1 + 1)
            
            if (eax_1.b != *(ecx + 1))
                eax_1.b = 0
                return eax_1
            
            if (i_2 == 0xfffffffe)
                eax_1.b = 1
                return eax_1
            
            eax_1.b = *(edi_1 + 2)
            
            if (eax_1.b != *(ecx + 2))
                eax_1.b = 0
                return eax_1
            
            if (i_2 == 0xffffffff)
                eax_1.b = 1
                return eax_1
            
            eax_1.b = *(edi_1 + 3)
            
            if (eax_1.b != *(ecx + 3))
                eax_1.b = 0
                return eax_1
            
            eax_1.b = 1
            return eax_1
        case 1
            eax_1.b = 0
            return eax_1
        case 2
            eax_1 = *edi_1
            
            if (eax_1 == 0)
                eax_1.b = 1
                return eax_1
            
            char* ecx_4 = arg2[9]
            
            while (true)
                arg2.b = *eax_1
                char temp3_1 = *ecx_4
                bool c_1 = arg2.b u< temp3_1
                
                if (arg2.b == temp3_1)
                    if (arg2.b == 0)
                        eax_1 = 0
                        break
                    
                    arg2.b = *(eax_1 + 1)
                    char temp5_1 = ecx_4[1]
                    c_1 = arg2.b u< temp5_1
                    
                    if (arg2.b == temp5_1)
                        eax_1 += 2
                        ecx_4 = &ecx_4[2]
                        
                        if (arg2.b != 0)
                            continue
                        
                        eax_1 = 0
                        break
                
                eax_1 = sbb.d(eax_1, eax_1, c_1) | 1
                break
            
            cond:1_1 = eax_1 == 0
        case 3, 5
            goto label_6a5b5a
        case 4
            char* eax_2 = arg2[9]
            char* const esi_1 = &data_801800
            int32_t ecx_1 = arg2[8]
            
            if (eax_2 != 0)
                esi_1 = eax_2
            
            if (ecx_1 == 0)
                if (*esi_1 == ecx_1.b)
                    int32_t eax_3
                    eax_3.b = *edi_1 == 0
                    return eax_3
                
                if (ecx_1 == 0)
                    ecx_1 = sub_6b7ef0(esi_1)
            
            int32_t eax_5 = sub_69f030(esi_1, ecx_1)
            eax_5.b = *edi_1 == eax_5
            return eax_5

if (cond:1_1)
    eax_1.b = 1
    return eax_1

eax_1.b = 0
return eax_1
