// 函数: sub_585550
// 地址: 0x585550
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = 0
void* var_10 = arg1
uint32_t eax_1 = arg2 * 0x5a30 + arg1
int32_t var_14 = 0
uint32_t var_c = eax_1

if (*(eax_1 + 0x1752c) s> 0)
    void* edi_1 = eax_1 + 0x18e78
    bool cond:1_1
    
    do
        uint32_t esi_1 = zx.d(*edi_1)
        
        if (esi_1 u>= 0x320)
            eax_1 = sub_591930()
            arg1 = var_10
        
        int32_t result_1 = result + 1
        bool cond:0_1 = sub_5754f0(eax_1, *(esi_1 * 0x64 + arg1 + 0x1a4c), arg1, 4, 0) == 0
        eax_1 = var_c
        
        if (cond:0_1)
            result_1 = result
        
        edi_1 += 4
        result = result_1
        cond:1_1 = var_14 + 1 s< *(eax_1 + 0x1752c)
        var_14 += 1
        arg1 = var_10
    while (cond:1_1)

return result
