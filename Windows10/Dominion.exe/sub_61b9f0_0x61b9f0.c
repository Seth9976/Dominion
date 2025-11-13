// 函数: sub_61b9f0
// 地址: 0x61b9f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_5ddf70()
void* eax_3 = sub_6053a0()

if (eax_3.b == 0)
    *(arg1 + 0x1bf8) = eax_2
    CookieCheckFunction(eax_3)
    return eax_3

uint32_t edi = 0
int32_t ebx_1 = *(sub_5cba00(data_b7fcf4) + 0x5c)
int32_t var_4c = 0
void* eax_5 = eax_2
int32_t var_60_1
char const* const var_5c_2
char* ecx_6

if (eax_5 u> 5)
    var_5c_2 = "DomDragCardUpdate"
    var_60_1 = 0xd9e9
    ecx_6 = "Halt"
else
    uint32_t eax_6
    
    switch (eax_5)
        case nullptr
            goto label_61ba70
        case 1
            ebx_1 = 0x3ef
        label_61ba70:
            var_4c = 0xfffffffe
            eax_6 = sub_61b690(eax_5, arg1, ebx_1, arg2)
            int32_t var_44_1 = 0
            edi = eax_6
        case 2
            ebx_1 = 0x3f0
            goto label_61ba70
        case 3, 4, 5
            ebx_1 = 0
            eax_6 = 0
    
    int32_t ebx_2
    
    if (eax_6 == *(arg1 + 0xb0) && ebx_1 == *(arg1 + 0xa4))
        ebx_2 = var_4c
    label_61bbd7:
        *(arg1 + 0x1c00) = edi
        *(arg1 + 0x1bfc) = ebx_2
        *(arg1 + 0x1bf8) = eax_2
        CookieCheckFunction(eax_2)
        return eax_2
    
    int32_t var_3c[0xc]
    sub_6883d0(data_171e6e8, &var_3c)
    eax_5 = sub_688660(&var_3c, arg1, edi)
    
    if (*(arg1 + 0xa4) == 0)
        goto label_61bb0a
    
    if (*(arg1 + 0x2c) == 0)
        uint32_t eax_7 = sub_5cba00(*(arg1 + 0x9c))
        sub_5ce1b0(eax_7, eax_7, arg1, 0, 0)
    label_61bb0a:
        *(arg1 + 0xb0) = edi
        
        if (ebx_1 == 0)
            ebx_2 = var_4c
            *(arg1 + 0xb0) = edi
            goto label_61bbd7
        
        eax_5 = sub_5cba00(data_b7fcf4)
        
        if (*(eax_5 + 0x2c) != 3)
            var_5c_2 = "GetAssociatedPile"
            var_60_1 = 0xd9ae
            ecx_6 = "gfx.type == DOMGFX_PILE"
        else
            int32_t edx_3
            
            if (ebx_1 != 0x3ef)
                if (ebx_1 != 0x3f0)
                    goto label_61bba3
                
                if (*(eax_5 + 0x5c) == 0x3ee)
                    edx_3 = 0x3f0
                    goto label_61bb9b
                
                var_5c_2 = "GetAssociatedPile"
                var_60_1 = 0xd9b6
                ecx_6 = "gfx.pile.where == CW_PLAYER_REVEAL"
            else
                if (*(eax_5 + 0x5c) == 0x3ee)
                    edx_3 = 0x3ef
                label_61bb9b:
                    eax_5 = sub_5ce6d0(eax_5, edx_3, *(eax_5 + 0x58), *(eax_5 + 0x60), 
                        *(eax_5 + 0x64), 0)
                label_61bba3:
                    ebx_2 = var_4c
                    sub_5ce300(eax_5, eax_5, arg1, 0, ebx_2, edi)
                    *(arg1 + 0xb0) = edi
                    goto label_61bbd7
                
                var_5c_2 = "GetAssociatedPile"
                var_60_1 = 0xd9b1
                ecx_6 = "gfx.pile.where == CW_PLAYER_REVEAL"
    else
        var_5c_2 = "CardGetPile"
        var_60_1 = 0x76a2
        ecx_6 = "gfx.type == DOMGFX_CARD"

sub_63b870(eax_5, &data_801800, ecx_6, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_60_1, 
    var_5c_2)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
