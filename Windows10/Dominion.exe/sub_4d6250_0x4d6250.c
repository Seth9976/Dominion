// 函数: sub_4d6250
// 地址: 0x4d6250
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_4 = arg1
void* result = *(arg1 + 0x14)
char const* const var_18
int32_t var_14
char const* const var_10
char* ecx_4

if (result s> 0x3e8)
    if (result == 0x3e9)
        result.b = 0
        return result
    
label_4d62da:
    var_10 = "GameCanAddFriend"
    var_14 = 0xc8
    var_18 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSave.cpp"
    ecx_4 = "Halt"
label_4d62f3:
    sub_63b870(result, &data_801800, ecx_4, var_18, var_14, var_10)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (result == 0x3e8)
    result.b = 0
    return result

if (result u> 3)
    goto label_4d62da

switch (result)
    case nullptr, 2, 3
        result.b = 0
        return result
    case 1
        if (*(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x4250) == *(arg1 + 0x18))
            result.b = 0
            return result
        
        result = data_cc8d5c
        int32_t ecx_2 = 0
        
        if (result == 0)
            var_10 = "GetClient"
            var_14 = 0x7b
            var_18 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
            ecx_4 = "gClient"
            goto label_4d62f3
        
        int32_t esi_2 = *(result + 0x5028)
        result += 0x38
        
        while (true)
            if (ecx_2 s>= esi_2)
                result.b = 1
                return result
            
            if (*(result - 0xc) == *(arg1 + 0x18) && *result == 1)
                break
            
            ecx_2 += 1
            result += 0x20
        
        result.b = 0
        return result
