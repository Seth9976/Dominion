// 函数: sub_5697d0
// 地址: 0x5697d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
int32_t esi = arg8

if (esi == 0 && *eax == 2)
    uint32_t esi_2 = zx.d((*(eax + 0x10)).w)
    int32_t ebx_1 = *(sub_573400() + 4)
    
    if (esi_2 u>= 0x320)
        sub_591930()
    
    esi = *(esi_2 * 0x64 + ebx_1 + 0x1a4c)

void* eax_3 = arg9
void* var_38
int32_t var_34
int32_t var_30
int32_t var_28
int32_t var_24

if (eax_3 != 0)
    var_24 = esi
    var_28 = arg7
    int32_t edx
    edx:eax_3 = sx.q(eax_3)
    int32_t var_2c = 0xffffffff
    var_30 = arg6
    var_34 = edx
    var_38 = eax_3
else if (arg5 == 0)
    var_24 = esi
    var_28 = arg7
    int32_t var_2c_2 = 0xffffffff
    var_30 = arg6
    var_34 = *(eax + 0x2c)
    var_38 = *(eax + 0x28)
else
    if (*(eax + 8) == 0)
        sub_591930()
    
    eax_3 = *(eax + 8)
    var_24 = esi
    var_28 = arg7
    int32_t var_2c_1 = 0xffffffff
    var_30 = arg6
    var_34 = *(eax_3 + 0x2c)
    var_38 = *(eax_3 + 0x28)

return sub_5911e0(eax_3, *(eax + 0xc), *(eax + 4), arg3, arg2, arg4, var_38, var_34, var_30, 
    0xffffffff, var_28, var_24)
