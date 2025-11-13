// 函数: sub_615dd0
// 地址: 0x615dd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = arg1
int32_t result = 0

if (*(esi + 0xc0) == 0)
    uint32_t eax_1 = sub_5cba00(*(esi + 0x138))
    char const* const var_28_1
    int32_t var_24
    char const* const var_20
    char* ecx_1
    
    if (*(eax_1 + 0x2c) == 3)
        int32_t ecx_2 = *(eax_1 + 0x84)
        
        if (ecx_2 == 0)
            var_20 = "ToggleSelection"
            var_24 = 0xc683
            ecx_1 = "pGfx"
            var_28_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
        else
            void* edi_1 = esi + 0x98
            
            while (true)
                eax_1 = zx.d(ecx_2.w)
                
                if (eax_1 u< data_b809e4)
                    eax_1 *= 0x1c30
                    esi = data_b809e0 + eax_1
                    
                    if (*(esi + 0x1c28) == ecx_2)
                        if (*(*(esi + 0x98) * 0x64 + &data_b82524)
                                == *(*edi_1 * 0x64 + &data_b82524))
                            goto label_615e7d
                        
                        ecx_2 = *(esi + 0x14c)
                        
                        if (ecx_2 == 0)
                            goto label_615e7d
                        
                        continue
                
                var_20 = "DataArray<struct DomGfx>::DataArrayGet"
                var_24 = 0x6d
                var_28_1 = "C:\x\ax2017\Engine\DataArray.h"
                ecx_1 = "DataArrayTryToGet(id) != NULL"
                break
    else
        var_20 = "DomPileData"
        var_24 = 0x10414
        ecx_1 = "gfx.type == DOMGFX_PILE"
        var_28_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    
    sub_63b870(eax_1, &data_801800, ecx_1, var_28_1, var_24, var_20)
    
    if (sub_63bc30() == 0)
        sub_63bb00()
        noreturn
    
    breakpoint

label_615e7d:
uint32_t edi_3 = zx.d((*(esi + 0x98)).w)

if (edi_3 u>= 0x320)
    sub_591930()

int32_t ecx_4 = arg2

if (ecx_4 == 0)
    ecx_4 = data_b80b54

int32_t edx_1 = 0
int32_t ecx_5 = data_b8097c
int32_t eax_5 = *(edi_3 * 0x64 + &data_b82524)

if (ecx_5 s> 0)
    do
        if (*((edx_1 << 2) + &data_b7fcfc) == *(esi + 0x98))
            if (*(esi + 0xc0) s<= 1)
                data_b8097c = ecx_5 - 1
                *((edx_1 << 2) + &data_b7fcfc) = *(((ecx_5 - 1) << 2) + &data_b7fcfc)
                return 2
            
            if (ecx_5 != ecx_4)
                int32_t edx_2 = data_b80b08
                
                if (edx_2 != 0x96 && edx_2 != 0x8d)
                    uint32_t eax_8 =
                        sub_615d00(eax_5, *(esi + 0xa4), *(esi + 0xa0), eax_5, &data_b7fcfc, ecx_5)
                    
                    if (eax_8 != 0)
                        *((data_b8097c << 2) + &data_b7fcfc) = *(eax_8 + 0x98)
                        data_b8097c += 1
                        return 1
                    
                    int32_t ecx_8 = data_b8097c
                    int32_t esi_2 = 0
                    
                    if (ecx_8 s> 0)
                        int32_t edx_4 = eax_5
                        
                        do
                            uint32_t edi_5 = zx.d((&data_b7fcfc)[esi_2 * 2])
                            
                            if (edi_5 u>= 0x320)
                                sub_591930()
                                ecx_8 = data_b8097c
                                edx_4 = eax_5
                            
                            if (*(edi_5 * 0x64 + &data_b82524) == edx_4)
                                result = 2
                                data_b8097c = ecx_8 - 1
                                *((esi_2 << 2) + &data_b7fcfc) =
                                    *(((ecx_8 - 1) << 2) + &data_b7fcfc)
                                esi_2 -= 1
                                ecx_8 = data_b8097c
                            
                            esi_2 += 1
                        while (esi_2 s< ecx_8)
                    
                    return result
            
            int32_t edx_5 = eax_5
            int32_t esi_3 = 0
            
            do
                uint32_t edi_6 = zx.d((&data_b7fcfc)[esi_3 * 2])
                
                if (edi_6 u>= 0x320)
                    sub_591930()
                    ecx_5 = data_b8097c
                    edx_5 = eax_5
                
                if (*(edi_6 * 0x64 + &data_b82524) == edx_5)
                    result = 2
                    data_b8097c = ecx_5 - 1
                    *((esi_3 << 2) + &data_b7fcfc) = *(((ecx_5 - 1) << 2) + &data_b7fcfc)
                    esi_3 -= 1
                    ecx_5 = data_b8097c
                
                esi_3 += 1
            while (esi_3 s< ecx_5)
            
            return result
        
        edx_1 += 1
    while (edx_1 s< ecx_5)

*((ecx_5 << 2) + &data_b7fcfc) = *(esi + 0x98)
data_b8097c += 1
return 1
