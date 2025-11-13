// 函数: sub_60b750
// 地址: 0x60b750
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = arg1

if (*esi != 0)
    int32_t eax_1 = sub_4ba1d0(arg1)
    
    if (eax_1 != 0)
        if (eax_1 != 1)
            return 3
        
        int32_t eax_3 = sub_609710(esi)
        
        if (eax_3 == 0)
            return 1
        
        void* esi_1 = data_cc8d5c
        
        if (esi_1 == 0)
            sub_63b870(eax_3, &data_801800, "gClient", 
                "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, "GetClient")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        if (*(esi_1 + 0x63c0) != 1 || *(esi_1 + 0x63c4) != eax_3)
            *(esi_1 + 0x63c4) = eax_3
            *(esi_1 + 0x63c0) = 1
            sub_4da700()
        
        int32_t eax_4
        eax_4.b = *(esi_1 + 0x63ec) != 2
        return eax_4 + 1

return 0
