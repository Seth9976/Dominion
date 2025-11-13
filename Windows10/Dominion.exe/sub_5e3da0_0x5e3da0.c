// 函数: sub_5e3da0
// 地址: 0x5e3da0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_4 = arg1

if (arg1 == 0)
    uint32_t eax_2
    int32_t edx_2
    eax_2, edx_2 = sub_64b510()
    void* eax_3 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    *(eax_3 + 0x4280) = eax_2
    *(eax_3 + 0x4284) = edx_2
    data_cc8dc8
    return sub_4d8ad0(eax_2)

char const* const var_18
int32_t var_14
char const* const var_10
char* result
char* ecx_2

if (arg1 == 1)
    result = data_cc8d5c
    
    if (result != 0)
        if (*(result + 0x5068) == 2)
            return result
        
        int32_t* eax = sub_4b9480()
        return sub_4da580(eax, *eax)
    
    var_10 = "GetClient"
    var_14 = 0x7b
    var_18 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_2 = "gClient"
else
    var_10 = "SaveSmartplays"
    var_14 = 0x4bfd
    var_18 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx_2 = "Halt"

sub_63b870(result, &data_801800, ecx_2, var_18, var_14, var_10)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
