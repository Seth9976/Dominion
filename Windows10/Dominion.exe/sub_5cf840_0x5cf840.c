// 函数: sub_5cf840
// 地址: 0x5cf840
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* i_1 = data_b809e0
int32_t edi = data_b809e4
void* i = i_1

for (void* eax_1 = edi * 0x1c30 + i; i u< eax_1; i += 0x1c30)
    if ((*(i + 0x1c28) & 0xffff0000) != 0)
        if (i != 0xffffffff)
            while (true)
                if (*(i + 0x2c) == 3 && *(i + 0x58) == 0xffffffff && *(i + 0x5c) - 7 u<= 0x40)
                    int32_t ecx = *(i + 0x70)
                    
                    if (ecx != 0)
                        uint32_t eax_5 = sub_5cba00(ecx)
                        
                        if (*(eax_5 + 0x2c) != 0)
                            sub_63b870(eax_5, &data_801800, "gfx.type == DOMGFX_CARD", 
                                "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x8b1, "CardIs")
                            
                            if (sub_63bc30() != 0)
                                breakpoint
                            
                            sub_63bb00()
                            noreturn
                        
                        uint32_t edi_2 = zx.d((*(eax_5 + 0x98)).w)
                        
                        if (edi_2 u>= 0x320)
                            sub_591930()
                        
                        if (*(edi_2 * 0x64 + &data_b82524) == arg1)
                            return i
                        
                        edi = data_b809e4
                        i_1 = data_b809e0
                
                i += 0x1c30
                void* eax_8 = edi * 0x1c30 + i_1
                
                if (i u>= eax_8)
                    break
                
                while ((*(i + 0x1c28) & 0xffff0000) == 0)
                    i += 0x1c30
                    
                    if (i u>= eax_8)
                        return 0
                
                if (i == 0xffffffff)
                    return 0
        
        break

return 0
