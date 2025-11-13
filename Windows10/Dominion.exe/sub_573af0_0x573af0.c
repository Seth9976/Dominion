// 函数: sub_573af0
// 地址: 0x573af0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_571b30(arg4, *(arg3 + 0xd48))
int32_t eax_2 = *(eax + 0x9c) & 0x940
int32_t var_40
char const* const var_3c_1
char* ecx_1

if (((*(eax + 0x98) & 0x7f000400) | eax_2) == 0)
    var_3c_1 = "AddLandscapePile"
    var_40 = 0x8c7
    ecx_1 = "IsLandscape(g, what)"
else if (arg4 != 0)
    sub_5727e0(sub_572970(eax_2, arg2, arg3, arg4, 0), arg4, arg3, arg2, 0xffffffff, nullptr)
    void* ecx_4 = arg3
    int32_t i = 0
    void* esi_4 = ecx_4 + 0x1280
    int32_t* eax_4
    
    do
        eax_4 = *esi_4
        
        if (eax_4 == 0)
            break
        
        if (eax_4 == 0x14b6 && *(esi_4 + 4) == arg4)
            eax_4 = sub_5727e0(eax_4, arg4, ecx_4, arg2, 0xffffffff, nullptr)
            ecx_4 = arg3
        
        i += 1
        esi_4 += 0x14
    while (i s< 0x20)
    
    uint32_t eax_5
    int32_t ecx_5
    eax_5, ecx_5 = sub_5754f0(eax_4, arg4, ecx_4, 0, 0x800)
    
    if (eax_5.b == 0)
        return sub_5735a0(eax_5, arg4, arg3, arg5, 0)
    
    int32_t var_3c_2 = ecx_5
    sub_572f80(eax_5, arg4, arg3, arg5, 0xffffffff)
    int128_t var_28
    __builtin_memcpy(&var_28, 
        "\x00\x00\x00\x00\x00\x00\x00\x00\x05\x00\x00\x00\x08\x00\x00\x00\x0a\x00\x00\x00\x0d\x00\x00\x"
    "00\x0f\x00\x00\x00", 
        0x1c)
    sub_56d5c0(0x1200, *(&var_28 + (*(*(sub_573400() + 4) + 0xd38) << 2)))
    TEB* fsbase
    void* ecx_7 = *fsbase->ThreadLocalStoragePointer
    eax_2 = *(ecx_7 + 0xf010)
    
    if (eax_2 s> 0)
        eax_5 = eax_2 - 1
        *(ecx_7 + 0xf010) = eax_5
        return sub_5735a0(eax_5, arg4, arg3, arg5, 0)
    
    var_3c_1 = "DomPopContext"
    var_40 = 0x792
    ecx_1 = "cs.numContexts > 0"
else
    var_3c_1 = "AddLandscapePile"
    var_40 = 0x8c8
    ecx_1 = "what != CARD_NONE"

sub_63b870(eax_2, &data_801800, ecx_1, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_40, 
    var_3c_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
