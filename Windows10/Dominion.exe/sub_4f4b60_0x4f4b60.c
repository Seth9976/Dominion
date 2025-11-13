// 函数: sub_4f4b60
// 地址: 0x4f4b60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
int32_t ecx = data_1779f88
int32_t ebx = arg2
int32_t edi = 0
int32_t var_8_1 = ebx

if (ecx s> 0)
    int32_t esi_1 = ecx - 1
    
    do
        void* eax_1 = *(&data_1777f88 + (edi << 3))
        int32_t* edx_1 = *((edi << 3) + &data_1777f8c) * 0x54 + *(eax_1 + 0xd0)
        int32_t esi_2
        
        if (edi s>= esi_1)
            esi_2 = ebx
        else
            esi_2 = *((edi << 3) + &data_1777f90)
        
        *(eax_1 + 0xb0) += 1
        int32_t eax_2 = 0
        edx_1[0xe] += 1
        int32_t ebx_1 = edx_1[2]
        edx_1[0x14].b = 0
        
        if (ebx_1 s> 0)
            int32_t* ecx_1 = *edx_1
            
            do
                if (*ecx_1 == esi_2)
                    int32_t ecx_2 = edx_1[0xd]
                    *(ecx_2 + (eax_2 << 2)) += 1
                    break
                
                eax_2 += 1
                ecx_1 = &ecx_1[1]
            while (eax_2 s< ebx_1)
            
            ecx = data_1779f88
        
        if (eax_2 == edx_1[2])
            sub_63b870(eax_2, &data_801800, "j != edge.numChildren", 
                "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp", 0x180f, "EvaluateTree")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        ebx = var_8_1
        esi_1 = ecx - 1
        edi += 1
    while (edi s< ecx)

int32_t esi_3 = ecx - 1

if (esi_3 s< 0)
    return 

int32_t temp0_1

do
    sub_4f2800(*((esi_3 << 3) + &data_1777f88))
    temp0_1 = esi_3
    esi_3 -= 1
while (temp0_1 - 1 s>= 0)
