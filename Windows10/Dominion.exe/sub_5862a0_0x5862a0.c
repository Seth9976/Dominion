// 函数: sub_5862a0
// 地址: 0x5862a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ebx = arg3
int32_t edi = arg2

if (arg4 == 2)
    uint32_t eax = zx.d(edi.w)
    
    if (eax u>= 0x320)
        arg2 = sub_591930()
    
    arg3 = eax * 0x64 + 0x1a6c + ebx
    arg1 = (*arg3 & 0xfffffff7) | 4
    *arg3 = arg1
else if (arg4 s>= 3)
    uint32_t eax_3 = zx.d(edi.w)
    
    if (eax_3 u>= 0x320)
        arg2 = sub_591930()
    
    arg3 = eax_3 * 0x64 + 0x1a6c + ebx
    arg1 = (*arg3 & 0xfffffffb) | 8
    *arg3 = arg1

uint32_t var_14 = arg4
return sub_578d90(arg1, arg2, ebx, edi, arg3, nullptr)
