// 函数: sub_612810
// 地址: 0x612810
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = data_b604e0

if (eax == 0xffffffff)
    eax = nullptr

if (data_b80b48 == eax)
    eax = sub_5cda30(data_b80b08)
    
    if (eax == 2)
        eax = sub_5ce6d0(eax, 0x3ec, data_b80b44, 0, 0, 0)
        
        if (data_b7fcf4 != *(eax + 0x1c28))
            int32_t ecx_4 = data_b604e0
            
            if (ecx_4 == 0xffffffff)
                ecx_4 = 0
            
            int32_t eax_1
            eax_1.b = sub_5d1210(0, 0x3ec, ecx_4, 0, 0) != 0
            return eax_1

eax.b = 0
return eax
