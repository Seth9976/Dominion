// 函数: sub_67c0d0
// 地址: 0x67c0d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = data_c23be0
uint32_t eax

if (ecx != 0)
    eax = zx.d(ecx.w)
    
    if (eax u< data_c23bac && *(eax * 0x18d0 + data_c23ba8 + 0x18c8) == ecx)
        uint32_t esi_1 = sub_64e7a0(ecx)
        
        if (*(esi_1 + 0x15f8) == 3)
            void* ecx_1 = *(esi_1 + 0x1718)
            
            if (ecx_1 != 0)
                if (*(ecx_1 + 0x18c8) != arg1)
                    eax = sub_67c0a0(ecx_1, arg1)
                
                if (*(ecx_1 + 0x18c8) == arg1 || eax.b != 0)
                    sub_63d850(arg2, esi_1 + 0x1720)
                    int32_t* eax_3
                    eax_3.b = 1
                    return eax_3

eax.b = 0
return eax
