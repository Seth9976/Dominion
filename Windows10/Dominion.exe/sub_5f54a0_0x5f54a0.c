// 函数: sub_5f54a0
// 地址: 0x5f54a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

*arg2 = arg1
void* eax = sub_571b30(arg1, 0x18)
int32_t ebx = *(eax + 0x9c)
int32_t edx = *(eax + 0x98)
int32_t eax_1 = ebx & 0x40000

if (eax_1 == 0)
    if ((eax_1 | (ebx & 0x20000)) != 0)
        eax_1.b = 0
        return eax_1
    
    if ((edx & 0x800) != 0)
        *arg2 = 0x706
        int32_t eax_4
        eax_4.b = 1
        return eax_4
    
    if ((ebx & 0x200) != 0)
        *arg2 = 0x717
        int32_t eax_5
        eax_5.b = 1
        return eax_5
    
    int32_t eax_8 = edx & 0x4000000
    int32_t var_14
    char const* const var_10
    
    if (eax_8 == 0)
        eax_8 = edx & 0x200000
        
        if (eax_8 != 0)
            if (arg1 - 0xd21 u> 6)
                var_10 = "AssociatedHeirloom"
                var_14 = 0x7d26
            else
                switch (arg1)
                    case 0xd21
                        *arg2 = 0xd0e
                        int32_t eax_14
                        eax_14.b = 1
                        return 0xd01
                    case 0xd22
                        *arg2 = 0xd0b
                        int32_t eax_15
                        eax_15.b = 1
                        return 0xd01
                    case 0xd23
                        *arg2 = 0xd04
                        int32_t eax_16
                        eax_16.b = 1
                        return 0xd01
                    case 0xd24
                        *arg2 = 0xd13
                        int32_t eax_17
                        eax_17.b = 1
                        return 0xd01
                    case 0xd25
                        *arg2 = 0xd05
                        int32_t eax_18
                        eax_18.b = 1
                        return 0xd01
                    case 0xd26
                        *arg2 = 0xd1a
                        int32_t eax_19
                        eax_19.b = 1
                        return 0xd01
                    case 0xd27
                        *arg2 = 0xd07
                        int32_t eax_20
                        eax_20.b = 1
                        return 0xd01
            
            goto label_5f56b6
        
        if ((ebx & 0x10000) == 0)
            if (arg1 == 0xd4a)
                *arg2 = 0xd07
                eax_1.b = 1
                return eax_1
            
            if (((edx & 0x4300c000) | (ebx & 0x80)) != 0)
                eax_1.b = 0
                return eax_1
        else
            eax_1 = sub_593fb0(arg1)
            
            if (eax_1 == 0)
                if (arg1 == 0xd2a)
                    *arg2 = 0xd1e
                    eax_1.b = 1
                    return eax_1
                
                if (arg1 == 0x92c)
                    *arg2 = 0x905
                    eax_1.b = 1
                    return eax_1
                
                if (arg1 == 0x92d)
                    *arg2 = 0x909
                    eax_1.b = 1
                    return eax_1
                
                if (arg1 == 0xd2c || arg1 == 0xd2d || arg1 == 0xd2e)
                    *arg2 = 0xd12
                    eax_1.b = 1
                    return eax_1
                
                *arg2 = 0
                eax_1.b = 0
                return eax_1
            
            *arg2 = eax_1
    else
        if (arg1 - 0xe19 u> 4)
            var_10 = "AssociatedArtifact"
            var_14 = 0x7d0f
        label_5f56b6:
            sub_63b870(eax_8, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
                var_14, var_10)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        switch (arg1)
            case 0xe19
                *arg2 = 0xe07
                int32_t eax_9
                eax_9.b = 1
                return 0xe01
            case 0xe1a, 0xe1c
                eax_1 = 0xe00
            case 0xe1b
                *arg2 = 0xe17
                int32_t eax_10
                eax_10.b = 1
                return 0xe01
            case 0xe1d
                *arg2 = 0xe16
                int32_t eax_11
                eax_11.b = 1
                return 0xe01
        
        *arg2 = eax_1

eax_1.b = 1
return eax_1
