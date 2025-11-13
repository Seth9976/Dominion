// 函数: sub_593fb0
// 地址: 0x593fb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
int32_t eax = 0
int32_t var_8_1 = 0
void* const edi = &data_7bfaf0

for (int32_t i = 0; i u< 0x3f0; )
    int32_t esi_1 = *(edi - 4)
    int32_t edx_1 = 0
    
    if (esi_1 s> 0)
        void* const eax_1 = edi
        
        do
            if (*eax_1 == arg1)
                return *(var_8_1 * 0x48 + &data_7bfae8)
            
            edx_1 += 1
            eax_1 += 4
        while (edx_1 s< esi_1)
        
        eax = var_8_1
    
    eax += 1
    i += 0x48
    edi += 0x48
    var_8_1 = eax

return 0
