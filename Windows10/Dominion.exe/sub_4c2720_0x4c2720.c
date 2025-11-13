// 函数: sub_4c2720
// 地址: 0x4c2720
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* edx = data_cc8d5c
char const* const var_28
int32_t var_24_1
char const* const var_20
int32_t eax
char* ecx

if (edx != 0)
    int32_t* eax_1 = edx + 0x5028
    int32_t* var_8_1 = eax_1
    void* esi_1 = edx + 0x28
    
    if (*(edx + 0x502c) != 0)
        var_8_1 = eax_1
    else
        void* edx_2 = edx + 0x28 + (*eax_1 << 5)
        int32_t eax_6 = (edx_2 - esi_1) s>> 5
        sub_4d4b70(eax_6, edx_2, esi_1, eax_6, sub_4c2650)
        eax_1 = var_8_1
    
    *arg2 = 0
    int32_t ebx_1 = 0
    int32_t result = 0
    
    if (*eax_1 s<= 0)
        return result
    
    while (true)
        eax = sub_4c25d0(*(esi_1 + 0x10))
        int32_t ecx_3 = *arg2
        
        if (arg1 == eax)
            if (ecx_3 == 0)
                if (result != 0)
                    var_20 = "CalcFriendsForTab"
                    var_24_1 = 0x13f1
                    ecx = "num == 0"
                    break
                
                *arg2 = esi_1
            
            result += 1
        else if (ecx_3 != 0)
            if (result != 0)
                return result
            
            var_20 = "CalcFriendsForTab"
            var_24_1 = 0x13fb
            ecx = "num != 0"
            break
        
        ebx_1 += 1
        esi_1 += 0x20
        
        if (ebx_1 s>= *var_8_1)
            return result
    
    var_28 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp"
else
    var_20 = "GetClient"
    var_24_1 = 0x7b
    var_28 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx = "gClient"

sub_63b870(eax, &data_801800, ecx, var_28, var_24_1, var_20)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
