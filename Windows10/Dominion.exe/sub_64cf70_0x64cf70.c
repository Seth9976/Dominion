// 函数: sub_64cf70
// 地址: 0x64cf70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = 0
int32_t var_c = arg2

if (arg4[1] s> 0)
    int32_t edi_1 = 0
    
    do
        int32_t* ecx = *arg4
        int32_t eax = *(ecx + edi_1 + 4)
        
        if (eax == arg2 || eax == 0xffffffff)
            if (_stricmp(*(*(ecx + edi_1) + 8), arg3) == 0)
                return *arg4 + i * 0x1c
            
            arg2 = var_c
        
        i += 1
        edi_1 += 0x1c
    while (i s< arg4[1])

return 0
