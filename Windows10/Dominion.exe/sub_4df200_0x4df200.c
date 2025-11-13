// 函数: sub_4df200
// 地址: 0x4df200
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = 0
int32_t* eax = arg3 + 0xc8
int32_t ecx_1
int32_t edx_1

while (true)
    int32_t edx = eax[-8]
    int32_t var_c
    
    if (edx == 0)
        edx_1 = var_c
    else if (edx != 0xd || *eax == 0)
        esi += 1
        eax = &eax[0x2d]
        
        if (esi s< 8)
            continue
        else
            edx_1 = var_c
    else
        int32_t eax_2 = esi * 0xb4
        ecx_1 = *(eax_2 + arg3 + 0xc0)
        edx_1 = *(eax_2 + arg3 + 0xbc)
        
        if (ecx_1 != 0)
            break
    int32_t ecx = 0
    void* eax_1 = arg3 + 0xc4
    
    while (true)
        int32_t esi_1 = *(eax_1 - 0x1c)
        
        if (esi_1 != 0)
            if (esi_1 == 0xd && *eax_1 != 0)
                int32_t eax_3 = ecx * 0xb4
                edx_1 = *(eax_3 + arg3 + 0xbc)
                ecx_1 = *(eax_3 + arg3 + 0xc0)
                break
            
            ecx += 1
            eax_1 += 0xb4
            
            if (ecx s< 8)
                continue
        
        ecx_1 = 0
        break
    
    break

int32_t ebx_1 = edx_1 + ecx_1
int32_t result = 0

if (edx_1 s< ebx_1)
    int32_t* ecx_4 = arg2 + (edx_1 << 2) + 0x118
    
    do
        int32_t esi_2 = *ecx_4
        
        if (esi_2 == 0)
            break
        
        *(arg4 + (result << 2)) = esi_2
        edx_1 += 1
        result += 1
        ecx_4 = &ecx_4[1]
    while (edx_1 s< ebx_1)

if (*(arg3 + 0x8c) == 0x121c)
    int32_t i = 0x11
    int32_t* edx_3 = arg2 + 0x15c
    
    do
        int32_t esi_3 = *edx_3
        
        if (esi_3 == 0)
            break
        
        *(arg4 + (result << 2)) = esi_3
        result += 1
        
        if (result s> 0xc)
            sub_63b870(result, &data_801800, "num <= 12", 
                "C:\x\ax2017\Jams\Shared\TggGame\code\GameShared.cpp", 0xcf9, "GetRefCards")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        i += 1
        edx_3 = &edx_3[1]
    while (i s<= 0x15)

return result
