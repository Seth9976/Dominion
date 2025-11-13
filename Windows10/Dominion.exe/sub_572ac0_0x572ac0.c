// 函数: sub_572ac0
// 地址: 0x572ac0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax_1 = sub_5722c0(arg3, arg4, arg3, arg2)
int32_t i = *eax_1
int32_t* result = sub_572350(eax_1, arg6, arg3, arg5)
*result = *eax_1
*eax_1 = 0
void* esi_3

for (; i != 0; i = *(esi_3 + 0x1aa4))
    uint32_t esi_1 = zx.d(i.w)
    
    if (esi_1 u>= 0x320)
        sub_591930()
    
    esi_3 = esi_1 * 0x64 + arg3
    *(esi_3 + 0x1a50) = arg6
    *(esi_3 + 0x1a70) = arg5
    *(esi_3 + 0x1a78) = arg5
    result = *(arg3 + 0x1504)
    
    if (result != 3 && result != 5 && result != 4 && result != 6)
        void* ecx_2
        ecx_2.b = result == 2
        result =
            sub_61b1b0(result, 9, ecx_2.b, arg5, i, arg6, 0xffffffff, nullptr, 0xf, 0, 0, 0, 0, 0)

return result
