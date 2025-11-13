// 函数: sub_5854e0
// 地址: 0x5854e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = 0
void* var_c = arg1
int32_t result = 0
void* eax_1 = arg2 * 0x5a30 + arg1
void* var_8 = eax_1

if (*(eax_1 + 0x1752c) s> 0)
    void* edi_1 = eax_1 + 0x18e78
    
    do
        int32_t result_1 = result + 1
        bool cond:0_1 = sub_5757f0(eax_1, (*edi_1).w, arg1, 2, 0) == 0
        edi_1 += 4
        eax_1 = var_8
        
        if (cond:0_1)
            result_1 = result
        
        i += 1
        result = result_1
        arg1 = var_c
    while (i s< *(eax_1 + 0x1752c))

return result
