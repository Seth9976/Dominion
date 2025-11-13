// 函数: sub_6333f0
// 地址: 0x6333f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* result_3 = arg2
int32_t* result_2 = result_3
int32_t ecx = *result_3
int32_t* result = result_3[1] - ecx
int32_t var_9c
char const* const var_98_1
char* ecx_1

if (result s> 0)
    void* eax_1 = sub_633270(*(arg3 + (ecx << 2) + 0x1004))
    int32_t esi_1 = *result_3
    int32_t edx = 0
    int32_t eax_2 = result_3[1]
    int32_t ecx_3 = eax_2
    
    if (esi_1 s< eax_2)
        int32_t* edi_2 = arg3 + (esi_1 << 2) + 0x1004
        int32_t i_2 = eax_2 - esi_1
        int32_t i
        
        do
            void* eax_3 = *edi_2
            int32_t ecx_4 = edx + 1
            edi_2 = &edi_2[1]
            
            if (*(eax_3 + 0x2c) == 7)
                ecx_4 = edx
            
            edx = ecx_4
            i = i_2
            i_2 -= 1
        while (i != 1)
        result_3 = result_2
        ecx_3 = result_3[1]
    
    int32_t eax_5 = *(eax_1 + 0x1b8c)
    int32_t edi_3
    
    if (eax_5 != 0)
        edi_3 = 0xe
    
    if (eax_5 == 0 || eax_5 != data_b7d434)
        edi_3 = 6
    
    int32_t var_24 = 1
    int32_t var_20_1 = *(eax_1 + 0x1c28)
    int32_t var_1c_1 = arg4
    result = arg5
    int32_t* result_1 = result
    
    if (edi_3 s< edx)
        int32_t eax_9 = edi_3 - 1
        
        if (esi_1 s>= ecx_3)
        label_633542:
            uint32_t eax_10 = sub_6323b0(eax_9, eax_9, &var_24, 0)
            result = sub_5cd5d0(eax_10, eax_1, eax_10, edi_3 - 1)
        else
            int32_t** ecx_7 = arg3 + 0x1004 + (esi_1 << 2)
            
            while (true)
                result = *ecx_7
                
                if (result[0xdc] != 1)
                    var_98_1 = "TryAddPileIcon"
                    var_9c = 0x10fd3
                    goto label_633631
                
                int128_t var_74_1 = *(result + 0x388)
                int128_t var_64_1 = *(result + 0x398)
                int128_t var_54_1 = *(result + 0x3a8)
                int128_t var_44_1 = *(result + 0x3b8)
                int128_t var_34_1 = *(result + 0x3c8)
                
                if (result[0xb] == 7 && result[0x88] == 0)
                    if ((*(result + 0x378)):0xc.d == edi_3 - 1)
                        break
                    
                    var_98_1 = "TryAddPileIcon"
                    var_9c = 0x10fd9
                    ecx_1 = "loc.slot == slot"
                    goto label_633640
                
                esi_1 += 1
                ecx_7 = &ecx_7[1]
                
                if (esi_1 s>= result_3[1])
                    eax_9 = edi_3 - 1
                    goto label_633542
        
        goto label_6335da
    
    if (esi_1 s>= ecx_3)
    label_6335da:
        int32_t i_1 = *result_3
        
        if (i_1 s< result_3[1])
            void** esi_4 = arg3 + 0x1004 + (i_1 << 2)
            
            do
                void* ecx_14 = *esi_4
                
                if (ecx_14 != 0)
                    if (*(ecx_14 + 0x370) != 1)
                        *(ecx_14 + 0x1b9c) = 0
                    else
                        result.b = *(ecx_14 + 0x384) s>= edi_3
                        *(ecx_14 + 0x1b9c) = result.b
                
                i_1 += 1
                esi_4 = &esi_4[1]
            while (i_1 s< result_3[1])
        
        return result
    
    result = result_2
    void** ebx_3 = arg3 + 0x1004 + (esi_1 << 2)
    
    while (true)
        void* edi_4 = *ebx_3
        
        if (*(edi_4 + 0x2c) == 7)
            if (*(edi_4 + 0x370) != 1)
                var_98_1 = "ClearPileArrows"
                var_9c = 0x10dd4
            label_633631:
                ecx_1 = "gfx.move.locCurrent.type == LOC_USER"
                break
            
            sub_5cd880(edi_4, eax_1)
            sub_5cb5a0(edi_4)
            result = result_2
            *ebx_3 = nullptr
        
        esi_1 += 1
        ebx_3 = &ebx_3[1]
        
        if (esi_1 s>= result[1])
            result_3 = result_2
            goto label_6335da
else
    var_98_1 = "UpdatePilePods"
    var_9c = 0x11018
    ecx_1 = "numPlayerIcons > 0"

label_633640:
sub_63b870(result, &data_801800, ecx_1, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_9c, 
    var_98_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
