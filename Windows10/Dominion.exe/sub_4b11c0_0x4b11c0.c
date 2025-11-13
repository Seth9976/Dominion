// 函数: sub_4b11c0
// 地址: 0x4b11c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = arg1
int32_t i_1 = 0
void* result_1 = result

if (*(result + 0x11a8) s> 0)
    int32_t* ebx_1 = result + 0x270
    int32_t i
    
    do
        int32_t eax = ebx_1[-0x85]
        void* var_434_1
        int32_t count
        void var_41c
        void var_214
        int32_t var_14
        
        if (eax != 0x3e8)
            void* var_430_2 = &var_41c
            int32_t eax_3
            
            if (eax != 3)
                __builtin_memcpy(&var_214, sub_4b1150(var_430_2), 0x204)
                eax_3 = var_14
                *ebx_1 = eax_3
                
                if (eax_3 s< 0)
                    sub_63b870(eax_3, &data_801800, "source.numSmartplays >= 0", 
                        "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp", 0x640, 
                        "CopySmartplays")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
            else
                __builtin_memcpy(&var_214, sub_4b10e0(var_430_2), 0x204)
                eax_3 = var_14
                *ebx_1 = eax_3
                
                if (eax_3 s< 0)
                    sub_63b870(eax_3, &data_801800, "source.numSmartplays >= 0", 
                        "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp", 0x640, 
                        "CopySmartplays")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
            
            count = eax_3 << 3
            var_434_1 = &var_214
        else
            void* eax_1 = data_cc8dc8
            int32_t ecx = 0
            int32_t edx_1 = *(eax_1 + 0x1e1a0)
            
            if (edx_1 s<= 0)
            label_4b122a:
                eax_1 = nullptr
            else
                while (*(eax_1 + 0x42b0) != ebx_1[-0x84])
                    ecx += 1
                    eax_1 += 0x7868
                    
                    if (ecx s>= edx_1)
                        goto label_4b122a
            
            int32_t ecx_1 = *(eax_1 + 0x58e8)
            int32_t var_434_2
            char const* const var_430_3
            char* ecx_4
            
            if (ecx_1 s< 0)
                var_430_3 = "GameStartSmartplays"
                var_434_2 = 0x67e
                ecx_4 = "profile->smartplays.numSmartplays >= 0"
            label_4b13d5:
                sub_63b870(eax_1, &data_801800, ecx_4, 
                    "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp", var_434_2, var_430_3)
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            if (ecx_1 != 0)
                void* ecx_2 = eax_1 + 0x56e8
                *ebx_1 = *(ecx_2 + 0x200)
                eax_1 = *(ecx_2 + 0x200)
                
                if (eax_1 s< 0)
                    var_430_3 = "CopySmartplays"
                    var_434_2 = 0x640
                    ecx_4 = "source.numSmartplays >= 0"
                    goto label_4b13d5
                
                count = eax_1 << 3
                var_434_1 = ecx_2
            else
                __builtin_memcpy(&var_214, sub_4b1150(&var_41c), 0x204)
                *ebx_1 = var_14
                
                if (var_14 s< 0)
                    sub_63b870(var_14, &data_801800, "source.numSmartplays >= 0", 
                        "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp", 0x640, 
                        "CopySmartplays")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                count = var_14 << 3
                var_434_1 = &var_214
        memcpy(&ebx_1[-0x80], var_434_1, count)
        result = result_1
        i = i_1 + 1
        ebx_1 = &ebx_1[0x8b]
        i_1 = i
    while (i s< *(result + 0x11a8))

return result
