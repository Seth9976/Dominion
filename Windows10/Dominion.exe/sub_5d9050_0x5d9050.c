// 函数: sub_5d9050
// 地址: 0x5d9050
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = sub_4b9480()
int32_t edx_2 = (eax[8] u>> 0x1c) - 1
int32_t eax_1
int32_t edx_3

if (arg2 != edx_2)
    if (arg2 == 0xffffffff)
        eax_1 = 0
    else if (arg2 == 3)
        eax_1 = 1
    else
        eax_1 = arg2 + 2
    
    if (edx_2 == 0xffffffff)
        edx_3 = 0
    else if (edx_2 == 3)
        edx_3 = 1
    else
        edx_3 = edx_2 + 2

char eax_2

if (arg2 == edx_2 || eax_1 s>= edx_3)
    eax_2 = sub_4d63a0(eax)

if (((arg2 != edx_2 && eax_1 s< edx_3) || eax_2 == 0)
        && (*(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x42d4) & 2) == 0)
    void* eax_4 = sub_4d63a0(eax)
    
    if (eax_4.b != 0 && (eax[8].b & 4) != 0)
        data_cf64a0 = arg1
        data_cf64a4 = arg2
        data_8db6b0 = 0x20
        void* eax_5 = sub_68caf0(eax_4, nullptr, "dom_ui_daily_difficulty_confirm_header", 0)
        char* const esi_1 = &data_801800
        char const* const ecx_4
        
        if (eax_5 != 0)
            char* eax_6 = *eax_5
            ecx_4 = &data_801800
            
            if (eax_6 != 0)
                ecx_4 = eax_6
        else
            ecx_4 = "dom_ui_daily_difficulty_confirm_header"
        
        void* eax_8 = sub_68caf0(sub_63d8d0(&data_8db750, ecx_4), nullptr, 
            "dom_ui_daily_difficulty_confirm_body", 0)
        
        if (eax_8 != 0)
            char* eax_9 = *eax_8
            
            if (eax_9 != 0)
                esi_1 = eax_9
        else
            esi_1 = "dom_ui_daily_difficulty_confirm_body"
        
        sub_63d8d0(&data_8db754, esi_1)
        sub_63d8d0(&data_8db758, &data_801800)
        char** result = sub_63d8d0(&data_8db75c, &data_801800)
        data_8db760 = 0x5d91f0
        data_8db764 = 0
        return result

int32_t eax_10 = sub_5d8f30(arg1, arg2)
int32_t ecx_6 = data_be232c

if (ecx_6 s< 6)
    data_be232c = ecx_6 + 1
    *((ecx_6 << 3) + &data_be2300) = arg2
    *((ecx_6 << 3) + &data_be22fc) = arg1
    return (ecx_6 << 3) + &data_be22fc

sub_63b870(eax_10, &data_801800, "gDomClient.numAIMods < MAX_PLAYERS_DOM", 
    "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x31f3, "TryModifyAI")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
