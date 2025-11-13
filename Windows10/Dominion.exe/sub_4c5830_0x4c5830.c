// 函数: sub_4c5830
// 地址: 0x4c5830
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

data_8db660 = 0x13
char const* const var_18
int32_t var_14
char const* const var_10
void* result
char* ecx_1

if (arg1 u> 4)
    var_10 = "MultiplayerDlgOpen"
    var_14 = 0x19ee
    var_18 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp"
    ecx_1 = "Halt"
else
    switch (arg1)
        case nullptr, 3
            arg1.b = sub_4c5750() != 0
            data_8dbfb0 = arg1
            data_8dbfb8 = 0
        case 2, 4
            data_8dbfb0 = 1
            data_8dbfb8 = 0
    
    void* eax_1 = data_8dc144
    
    if (eax_1 != 0 && eax_1 != &data_801800)
        if (data_cf65bc != 0 && *eax_1 != 0)
            char* eax_2 = sub_63d4e0(&data_8dc144)
            int32_t temp0_1 = *(eax_2 + 4)
            *(eax_2 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_2, *(eax_2 + 0xc) + 0x10)
        
        data_8dc144 = &data_801800
    
    result = data_cc8d5c
    
    if (result != 0)
        if (*(result + 0x18) != 3)
            return result
        
        arg1.b = 1
        return sub_4af000(arg1)
    
    var_10 = "GetClient"
    var_14 = 0x7b
    var_18 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_1 = "gClient"

sub_63b870(result, &data_801800, ecx_1, var_18, var_14, var_10)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
