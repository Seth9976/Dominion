// 函数: sub_557120
// 地址: 0x557120
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t ebp
uint32_t var_4 = ebp
__chkstk(0x1924)
void arg_c94
uint32_t result = sub_56ca80(&arg_c94)
int32_t arg_c[0x320]
__builtin_memcpy(&arg_c, result, 0xc84)
int32_t edi = 0

if (arg1 s> 0)
    do
        int32_t ebx_1 = arg_c[edi]
        void* eax = sub_573400()
        int32_t eax_1 = *(eax + 4)
        uint32_t eax_2 = zx.d(ebx_1.w)
        
        if (eax_2 u>= 0x320)
            sub_591930()
        
        int32_t* ecx_1 = *(eax + 4)
        int32_t var_2c
        __builtin_memset(&var_2c, 0, 0x18)
        int32_t var_28
        char* var_24
        int32_t var_20
        void* var_1c
        void* var_18_1
        result = sub_582d10(eax_1, *(eax_2 * 0x64 + eax_1 + 0x1a70), ecx_1, ebx_1, 0x474, 0xb, 
            0x3ea, 3, *(eax + 0x28), *(eax + 0x2c), *(eax + 0x30), var_2c, var_28, var_24, var_20, 
            var_1c, var_18_1)
        edi += 1
    while (edi s< arg1)

return result
