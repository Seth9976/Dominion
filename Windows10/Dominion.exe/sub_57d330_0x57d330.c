// 函数: sub_57d330
// 地址: 0x57d330
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = *(arg2 + 0x19cc)

if (result != *(arg2 + 0x19d0))
    result = sub_571b30(0x50c, *(arg2 + 0xd48))
    int32_t esi_1 = 0
    void* result_1 = result
    int32_t var_8_1 = 0
    int32_t i = *(result + 0xa8)
    
    if (i != 0)
        void* result_2 = result
        
        do
            if (i == 6 && *(result_2 + 0xac) == 8 && *(result_2 + 0xb4) == arg5)
                void* eax_1 = arg2 + 0x1a4c
                int32_t ecx = 0
                
                while (true)
                    if (ecx s>= *(arg2 + 0x1520))
                        sub_63b870(eax_1, &data_801800, "Halt", 
                            "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x1f67, "FindAnyCard")
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                    if (*eax_1 == 0x50c)
                        break
                    
                    ecx += 1
                    eax_1 += 0x64
                
                uint32_t eax_2 = sub_575de0(eax_1, esi_1, ecx, arg6)
                
                if (sub_57c810(eax_2, arg4, arg2, eax_2, arg6, 0, 0xffffffff, 0) != 0)
                    *(arg3 + (*(arg3 + 0x400) << 2)) = eax_2
                    *(arg3 + 0x400) += 1
                
                esi_1 = var_8_1
            
            esi_1 += 1
            result = esi_1 * 0xb4
            result_2 = result_1 + result
            var_8_1 = esi_1
            i = *(result_2 + 0xa8)
        while (i != 0)

return result
