// 函数: sub_5cb4f0
// 地址: 0x5cb4f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = data_cc8d5c

if (eax == 0)
    sub_63b870(eax, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (*(eax + 0x5068) != 0)
    eax = sub_5cb070()
    
    if (eax != 0)
        if (arg1 == *(eax + 0xc))
            eax = *(eax + 0x18)
            
            if (eax == 0 || eax == arg2 || arg2 == 0 || arg1 == 2)
            label_5cb530:
                void* eax_1 = sub_5cb070()
                
                if (eax_1 != 0)
                    do
                        sub_5cb0f0(*(eax_1 + 0x14), *(eax_1 + 0x18))
                        data_b809d4 += 1
                        eax_1 = sub_5cb070()
                        
                        if (eax_1 == 0)
                            break
                    while (*(eax_1 + 0xc) == 1)
                
                eax_1.b = 1
                return eax_1
        else if (arg1 == 2)
            goto label_5cb530

eax.b = 0
return eax
