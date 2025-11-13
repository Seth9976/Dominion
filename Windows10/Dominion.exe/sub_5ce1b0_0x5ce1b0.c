// 函数: sub_5ce1b0
// 地址: 0x5ce1b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg3
int32_t* i = sub_5c8fd0(*(arg2 + 0x1c28), *(arg3 + 0x1c28))
int32_t var_1c
char const* const ecx_1

if (*(arg3 + 0x2c) == 0)
    if (*(arg3 + 0xa4) == 0)
        return i
    
    int32_t eax = *(arg2 + 0x70)
    void* ecx_2 = arg2 + 0x70
    int32_t ebx_1 = *(arg3 + 0x1c28)
    
    if (eax != 0)
        while (eax != ebx_1)
            ecx_2 = sub_5cba00(*ecx_2) + 0x1b94
            eax = *ecx_2
            
            if (eax == 0)
                break
    
    *ecx_2 = *(arg3 + 0x1b94)
    uint32_t eax_3
    
    for (i = *(arg3 + 0x1b94); i != 0; i = *(eax_3 + 0x1b94))
        eax_3 = sub_5cba00(i)
        *(eax_3 + 0xb4) -= 1
        *(eax_3 + 0xb0) -= 1
    
    *(arg3 + 0x9c) = 0
    *(arg3 + 0xa4) = 0
    *(arg3 + 0xb0) = 0xffffffff
    *(arg3 + 0x1b94) = 0
    int32_t temp0_1 = *(arg2 + 0x6c)
    *(arg2 + 0x6c) -= 1
    
    if (temp0_1 - 1 s>= 0)
        if (arg4 == 0)
            i = sub_5cdee0(i, arg3, arg2, 0)
        
        if (arg5 == 0 && *(arg2 + 0x6c) == 0)
            void* ecx_6 = *(arg2 + 0x5c)
            i = ecx_6 - 0x44c
            
            if (i u<= 0x27 || ecx_6 == 0x3e9)
                sub_5cd3e0(arg2)
                return sub_5cb5a0(arg2)
        
        return i
    
    char const* const var_18_1 = "PileRemoveCard"
    var_1c = 0x10ce
    ecx_1 = "gfxPile.pile.count >= 0"
else
    char const* const var_18 = "PileRemoveCard"
    var_1c = 0x1066
    ecx_1 = "gfx.type == DOMGFX_CARD"

sub_63b870(i, &data_801800, ecx_1, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_1c, 
    "PileRemoveCard")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
