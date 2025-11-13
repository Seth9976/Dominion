// 函数: sub_6dd380
// 地址: 0x6dd380
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = arg1
char* var_c = arg2
int32_t i = 0
void* var_8 = eax

if (*(eax + 8) s> 0)
    int32_t edi_1 = 0
    
    do
        int32_t* ebx_1 = *(eax + 4)
        
        if (_stricmp(*(ebx_1 + edi_1 + 4), arg2) == 0)
            return *(ebx_1 + edi_1)
        
        eax = var_8
        i += 1
        arg2 = var_c
        edi_1 += 0x3c
    while (i s< *(eax + 8))

return 0xffffffff
