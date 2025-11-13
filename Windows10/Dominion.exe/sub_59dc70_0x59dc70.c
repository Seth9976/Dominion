// 函数: sub_59dc70
// 地址: 0x59dc70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx = arg3 + 0x1594
int32_t esi = 7
int32_t* eax = ecx

while (*eax != 0xd30)
    if (eax[1] == 0xd30)
        break
    
    esi += 1
    eax = &eax[4]
    
    if (esi s>= 0x48)
        esi = 0
        break

if (arg2 == esi)
    *arg4 = 0xd30
    int32_t* eax_1
    eax_1.b = 1
    return eax_1

int32_t eax_2 = 7

while (*ecx != 0xd3d)
    if (ecx[1] == 0xd3d)
        break
    
    eax_2 += 1
    ecx = &ecx[4]
    
    if (eax_2 s>= 0x48)
        eax_2 = 0
        break

if (arg2 != eax_2)
    eax_2.b = 0
    return eax_2

*arg4 = 0xd3d
int32_t* eax_3
eax_3.b = 1
return eax_3
