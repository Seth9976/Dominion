// 函数: sub_68d410
// 地址: 0x68d410
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg3 - 1 u<= 0x12)
    switch (arg3 + &jump_table_68d54c[8]:3)
        case &lookup_table_68d570
            return &data_877e98
        case &lookup_table_68d570[1]
            return sub_68d2c0(arg2, arg4) __tailcall
        case &lookup_table_68d570[2]
            switch (arg2[3] - 2)
                case 1
                    return &data_877ed0
                case 2, 3
                    return &data_877edc
            
            return &data_877ed4
        case &lookup_table_68d570[3]
            if (arg2[3] == 4)
                return &data_877e90
            
            return &data_877c4c
        case &lookup_table_68d570[6]
            void* const result
            int32_t eax_20
            
            if (arg5 == 0)
                eax_20 = arg2[3]
            label_68d4fd:
                result = &data_871b58
                
                if (eax_20 == 2)
                    return &data_877e34
            else
                if (arg5 != 1)
                    if (arg5 != 2)
                        sub_63b870(arg5 - 2, &data_801800, "Halt", 
                            "C:\x\ax2017\Engine\Localization.cpp", 0x40d, "DefiniteArticle")
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                    eax_20 = arg2[3]
                    
                    if (arg2[6].b == 0)
                        goto label_68d4fd
                    
                    if (eax_20 != 2)
                        return &data_877e94
                    
                    return &data_877e88
                
                result = &data_877e94
                
                if (arg2[3] == 2)
                    return &data_877e88
            return result
        case &lookup_table_68d570[7]
            return &data_877e8c
        case &lookup_table_68d570[0xe]
            char* eax_3 = *arg2
            char* const ecx_1 = &data_801800
            
            if (eax_3 != 0)
                ecx_1 = eax_3
            
            switch (sx.d(*ecx_1) - 0x41)
                case 0, 4, 8, 0xe, 0x14, 0x20, 0x24, 0x28, 0x2e, 0x34
                    return &data_877e9c
            
            return &data_871b58

return &data_801800
