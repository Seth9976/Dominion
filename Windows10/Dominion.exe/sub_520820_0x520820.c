// 函数: sub_520820
// 地址: 0x520820
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i_1 = 2
int32_t* result
int32_t i

do
    void var_14
    result = sub_562880(arg2, arg1, var_14)
    
    if (result != 0)
        void* eax_1 = sub_573400()
        uint32_t esi_1 = zx.d(result.w)
        int32_t ecx_2 = *(eax_1 + 0xc)
        void* ebx_1 = *(eax_1 + 4)
        
        if (esi_1 u>= 0x320)
            sub_591930()
        
        int32_t eax_2 = esi_1 * 0x64
        int32_t var_c
        sub_576e90(eax_2, ebx_1, &var_c, ecx_2, *(eax_2 + ebx_1 + 0x1a4c), 0)
        int32_t var_24_1 = var_c + 1
        result = sub_564740(0)
    
    i = i_1
    i_1 -= 1
while (i != 1)
return result
