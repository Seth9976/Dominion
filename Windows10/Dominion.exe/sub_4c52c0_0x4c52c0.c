// 函数: sub_4c52c0
// 地址: 0x4c52c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_4bc100(arg1)
int32_t esi = arg1[9]
int32_t eax_2
int32_t edx_1
edx_1:eax_2 = muls.dp.d(0x10624dd3, sub_64b4d0(arg1))
int32_t edx_2 = edx_1 s>> 6
int32_t eax_5 = (edx_2 u>> 0x1f) + edx_2
int32_t ecx_2 = arg1[0xf] - eax_5
int32_t var_14

if (eax == 0)
    switch (esi)
        case 0
            if (ecx_2 s< 0)
                return 6
            
            return 1
        case 1
            return 0xf
        case 2
            return esi + 0x11
        case 0x3e8
            return 0xb
        case 0x3e9
            return 8
        case 0x3ea
            return esi - 0x3dc
    
    char const* const var_10_1 = "GetMultiplayerGameState"
    var_14 = 0x194d
label_4c54ed:
    sub_63b870(eax_5, &data_801800, "Halt", "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp", 
        var_14, "GetMultiplayerGameState")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t result

switch (esi)
    case 0
        if (ecx_2 s< 0)
            int32_t eax_10 = *(eax + 0x20)
            
            if (eax_10 != 1)
                result = 5
            
            if (eax_10 == 1 || eax_10 != 2)
                return 4
            
            return result
        
        if (arg1[0x15] == 1 && arg1[0x16] == *(eax + 0x18))
            ecx_2 = 0
            void* eax_14 = &arg1[0x18]
            
            while (true)
                int32_t edx_3 = *(eax_14 - 0xc)
                
                if (edx_3 != 1)
                    if (edx_3 == 2 && *(eax_14 - 8) == 0)
                        break
                else if (*eax_14 != 2)
                    break
                
                ecx_2 += 1
                eax_14 += 0x22c
                
                if (ecx_2 s>= 8)
                    return 2
        
        int32_t eax_15 = *(eax + 0x20)
        
        if (eax_15 != 1 && eax_15 == 2)
            return 3
        
        return 0
    case 1
        int32_t eax_7 = *(eax + 0x20)
        
        if (eax_7 != 3)
            result = 0x10
        
        if (eax_7 == 3 || eax_7 != 4)
            return 0x11
        
        return result
    case 2
        return esi + 0x10
    case 0x3e8
        int32_t ecx_3 = *(eax + 0x20)
        
        if (ecx_3 == 0x3ec)
            return 9
        
        int32_t eax_20
        eax_20.b = ecx_3 != 0x3ed
        return eax_20 + 9
    case 0x3e9
        int32_t edx_4 = arg1[0x468]
        int32_t ecx_4 = 0
        
        if (edx_4 s> 0)
            void* eax_29 = &arg1[0x18]
            
            while (*eax_29 != 0x3eb)
                ecx_4 += 1
                eax_29 += 0x22c
                
                if (ecx_4 s>= edx_4)
                    break
        
        return 8
    case 0x3ea
        int32_t eax_23 = *(eax + 0x20)
        
        if (eax_23 s> 0x3e9)
            if (eax_23 == 0x3ea)
                return 0xd
            
            if (eax_23 != 0x3ec && eax_23 != 0x3ed)
                return 0xd
        else if (eax_23 != 0x3e9)
            return 0xd
        
        return 9

char const* const var_10 = "GetMultiplayerGameState"
var_14 = 0x1934
goto label_4c54ed
