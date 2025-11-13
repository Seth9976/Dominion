// 函数: sub_64bce0
// 地址: 0x64bce0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = data_bf23b8

if (eax == 1 || eax == 0)
    eax.b = 0
    return eax

char* var_8

if (eax == 3)
    var_8 = *(arg1 + 0x14)
else
    if (eax != 4)
        sub_63b870(eax - 4, &data_801800, "Halt", "C:\x\ax2017\Engine\GameCenter.cpp", 0x572, 
            "GamecenterGetDLCSku")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    var_8 = *(arg1 + 0x10)

EnterCriticalSection(&data_bf23e8)
int32_t* ebx = data_c21008
int32_t esi = 0
int32_t eax_4

if (ebx s<= 0)
label_64bd79:
    ebx.b = 0
else
    void* edi_2 = &data_c1c808
    
    while (true)
        char* ecx = var_8
        void* eax_5 = edi_2
        
        while (true)
            char edx = *ecx
            char temp2_1 = *eax_5
            bool c_1 = edx u< temp2_1
            
            if (edx == temp2_1)
                if (edx == 0)
                    eax_4 = 0
                    break
                
                edx = ecx[1]
                char temp3_1 = *(eax_5 + 1)
                c_1 = edx u< temp3_1
                
                if (edx == temp3_1)
                    ecx = &ecx[2]
                    eax_5 += 2
                    
                    if (edx != 0)
                        continue
                    
                    eax_4 = 0
                    break
            
            eax_4 = sbb.d(eax_5, eax_5, c_1) | 1
            break
        
        if (eax_4 == 0)
            int32_t edx_2 = esi * 0x90
            int32_t ecx_1 = *(edx_2 + 0xc1c894)
            arg2[2] = *(edx_2 + 0xc1c890)
            arg2[3] = ecx_1
            *arg2 = *(edx_2 + 0xc1c888)
            ebx.b = 1
            break
        
        esi += 1
        edi_2 += 0x90
        
        if (esi s>= ebx)
            goto label_64bd79

if (data_bf23b8 != 0)
    LeaveCriticalSection(&data_bf23e8)

eax_4.b = ebx.b
return eax_4
