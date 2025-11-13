// 函数: sub_5ce300
// 地址: 0x5ce300
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx

if (arg5 == 0xffffffff)
    ecx = 0xffffffff
else
    ecx = 0
    
    if (arg5 != 0)
        ecx = arg6

int32_t var_24 = ecx
int32_t i = sub_5c8e30(arg5, *(arg3 + 0x1c28), *(arg2 + 0x1c28), ecx)
int32_t i_1 = i
int32_t var_28_1
char const* const ecx_2

if (*(arg3 + 0x2c) == 0)
    void* ecx_3 = arg2
    i = *(ecx_3 + 0x6c)
    
    if (i s>= 0)
        void* esi_1 = ecx_3 + 0x70
        *(ecx_3 + 0x6c) = i + 1
        int32_t ebx_1 = 0
        int32_t eax_2 = *(arg3 + 0x1c28)
        i = arg5
        
        if (i != 0)
            while (true)
                if (i != 0xffffffff)
                    if (i != 0xfffffffe)
                        char const* const var_24_7 = "PileAddCard"
                        var_28_1 = 0x111b
                        ecx_2 = "loc.type == DOMPILE_SLOT"
                        goto label_5ce52a
                    
                    if (ebx_1 == arg6)
                        ecx_3 = arg2
                    else
                        int32_t ecx_5 = *esi_1
                        
                        if (ecx_5 == 0)
                            char const* const var_24_4 = "PileAddCard"
                            var_28_1 = 0x1120
                            ecx_2 = "*pCur != DOMGFX_NULL"
                            goto label_5ce52a
                        
                        ebx_1 += 1
                        esi_1 = sub_5cba00(ecx_5) + 0x1b94
                        i = arg5
                        continue
                else if (*esi_1 == 0)
                    ecx_3 = arg2
                    i = *(ecx_3 + 0x6c) - 1
                    
                    if (ebx_1 != i)
                        char const* const var_24_3 = "PileAddCard"
                        var_28_1 = 0x1115
                        ecx_2 = "slot == gfxPile.pile.count - 1"
                        goto label_5ce52a
                else
                    ebx_1 += 1
                    esi_1 = sub_5cba00(*esi_1) + 0x1b94
                    i = arg5
                    continue
                
                if (ebx_1 s>= 0)
                    break
                
                char const* const var_24_5 = "PileAddCard"
                var_28_1 = 0x1129
                ecx_2 = "slot >= 0"
                goto label_5ce52a
        
        if (ebx_1 s< *(ecx_3 + 0x6c))
            *(arg3 + 0x9c) = *(ecx_3 + 0x1c28)
            *(arg3 + 0xa0) = *(ecx_3 + 0x58)
            *(arg3 + 0xa4) = *(ecx_3 + 0x5c)
            int32_t ecx_6 = *(ecx_3 + 0x64)
            *(arg3 + 0xc8) = *(ecx_3 + 0x60)
            *(arg3 + 0xcc) = ecx_6
            i = *esi_1
            *(arg3 + 0x1b94) = i
            
            if (eax_2 != *esi_1)
                *(arg3 + 0xb0) = i_1
                *(arg3 + 0xb4) = i_1
                uint32_t eax_10
                
                for (; i != 0; i = *(eax_10 + 0x1b94))
                    eax_10, i_1 = sub_5cba00(i)
                    *(eax_10 + 0xb0) += 1
                    *(eax_10 + 0xb4) += 1
                
                if (*(arg3 + 0xa4) == 0x3ea)
                    i = *(arg3 + 0x98)
                    *(arg3 + 0xb8) = i
                
                *esi_1 = eax_2
                uint32_t eax_11 = sub_5cbaa0(i, i_1, arg3, &data_1000000, 0)
                
                if (arg4 == 0)
                    sub_5cdee0(eax_11, arg3, arg2, 0)
                
                return *(arg3 + 0x154)
            
            char const* const var_24_8 = "PileAddCard"
            var_28_1 = 0x1135
            ecx_2 = "gfxId != *pCur"
        else
            char const* const var_24_6 = "PileAddCard"
            var_28_1 = 0x112a
            ecx_2 = "slot < gfxPile.pile.count"
    else
        char const* const var_24_2 = "PileAddCard"
        var_28_1 = 0x10e4
        ecx_2 = "gfxPile.pile.count >= 0"
else
    char const* const var_24_1 = "PileAddCard"
    var_28_1 = 0x10e3
    ecx_2 = "gfx.type == DOMGFX_CARD"

label_5ce52a:
sub_63b870(i, &data_801800, ecx_2, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_28_1, 
    "PileAddCard")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
