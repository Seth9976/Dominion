// 函数: sub_607040
// 地址: 0x607040
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_2c
int32_t* esi = &var_2c
int32_t* var_24 = arg2
int32_t eax = 0
var_2c = 0
int32_t var_28 = 2
int32_t* var_c = &var_2c

while (true)
    int32_t* var_14
    int32_t eax_1 = sub_571bc0(eax, &var_14)
    int32_t ebx_1 = 0
    
    if (eax_1 s> 0)
        int32_t* eax_2 = var_14
        int32_t* var_8_1 = eax_2
        
        do
            int32_t edi_1 = *eax_2
            int32_t ecx_1 = 0
            int32_t eax_3 = 0
            int32_t var_1c
            int32_t i
            
            while (true)
                if (eax_3 u>= 0x28d4)
                    sub_63b870(eax_3, &data_801800, "Halt", 
                        "C:\x\ax2017\Jams\Shared\TggGame\code\GameShared.cpp", 0xdb, 
                        "DomDLCGrantsEntitlement")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                if (*(eax_3 + &data_78087c) == edi_1)
                    i = 0
                    var_1c = *(ecx_1 * 0x10c + &data_780878)
                    break
                
                ecx_1 += 1
                eax_3 += 0x10c
            
            do
                if (sub_4db7a0((&var_1c)[i], arg1) != 0)
                    int32_t* ecx_3 = var_24
                    *ecx_3 = eax
                    int32_t eax_9
                    eax_9.b = 1
                    ecx_3[1] = edi_1
                    return eax_9
                
                i += 1
            while (i s< 1)
            
            ebx_1 += 1
            eax_2 = &var_8_1[0x11]
            var_8_1 = eax_2
        while (ebx_1 s< eax_1)
        
        esi = var_c
    
    esi = &esi[1]
    var_c = esi
    
    if (esi == &var_24)
        break
    
    eax = *esi

int32_t* eax_8
eax_8.b = 0
return eax_8
