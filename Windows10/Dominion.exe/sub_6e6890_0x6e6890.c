// 函数: sub_6e6890
// 地址: 0x6e6890
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = arg1
char* var_c = arg2
int32_t i = 0
int32_t* var_8 = eax

if (eax[2] s> 0)
    int32_t edi_1 = 0
    
    do
        int32_t* result = *eax + edi_1
        
        if (_stricmp(arg2, *result) == 0)
            return result
        
        eax = var_8
        i += 1
        arg2 = var_c
        edi_1 += 0x18
    while (i s< eax[2])

return 0
