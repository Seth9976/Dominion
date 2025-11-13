// 函数: sub_724ba0
// 地址: 0x724ba0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx
char* ebx = arg2
int32_t esi = arg3
char eax = *ebx
*arg1 = eax

if (esi == 1)
    arg1[1] = eax
    return arg1

int32_t i = 1
arg1[1] = ((zx.d(ebx[1]) + 2 + zx.d(*ebx) * 3) u>> 2).b

if (esi - 1 s> 1)
    void* esi_1 = &ebx[2]
    
    do
        uint32_t eax_8 = zx.d(*(esi_1 - 1))
        esi_1 += 1
        int32_t ecx_3 = eax_8 + ((eax_8 + 1) << 1)
        arg1[i << 1] = ((zx.d(*(esi_1 - 3)) + ecx_3) u>> 2).b
        arg1[(i << 1) + 1] = ((zx.d(*(esi_1 - 1)) + ecx_3) u>> 2).b
        i += 1
    while (i s< esi - 1)
    
    ebx = arg2
    esi = arg3

arg1[i << 1] = ((zx.d(ebx[esi - 1]) + 2 + zx.d(ebx[esi - 2]) * 3) u>> 2).b
arg1[(i << 1) + 1] = ebx[esi - 1]
return arg1
