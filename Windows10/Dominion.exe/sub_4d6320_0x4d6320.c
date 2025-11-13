// 函数: sub_4d6320
// 地址: 0x4d6320
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = 0xffffffff
int32_t ebx
ebx.b = 0
int32_t i = 0
int32_t* ecx = arg1 + 0x58

do
    int32_t eax_1 = ecx[-1]
    
    if (eax_1 != 0)
        if (eax_1 != 3)
            if (ebx.b != 0)
                return 0xffffffff
            
            ebx.b = 1
        else if (result == 0xffffffff)
            result = *ecx
        else
            int32_t eax_2 = *ecx
            
            if (eax_2 != result)
                int32_t eax_3
                
                if (eax_2 == 0xffffffff)
                    eax_3 = 0
                else if (eax_2 == 3)
                    eax_3 = 1
                else
                    eax_3 = eax_2 + 2
                
                int32_t esi_1 = result + 2
                
                if (result == 3)
                    esi_1 = 1
                
                if (eax_3 s< esi_1)
                    result = *ecx
    
    i += 1
    ecx = &ecx[0x8b]
while (i s< 8)

return result
