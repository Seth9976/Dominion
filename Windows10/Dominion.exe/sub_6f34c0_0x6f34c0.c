// 函数: sub_6f34c0
// 地址: 0x6f34c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_4 = arg1
int32_t ebx
ebx.b = arg1.b
int32_t* ecx = data_147ded0

if (ecx == 0 || ecx[1] != 0x19 || sub_5af880(ecx) == 0)
    return 

LRESULT esi_1 = SendMessageA(GetDlgItem(data_147d470, 0x76), 0x188, 0, 0)

if (esi_1 == 0xffffffff)
    return 

int32_t i_1 = sub_6ef080(esi_1) + 1

if (i_1 s> 0)
    void* ecx_2 = (esi_1 << 3) + &data_147d4b8
    int32_t i
    
    do
        *ecx_2 = ebx.b
        ecx_2 += 8
        i = i_1
        i_1 -= 1
    while (i != 1)

LRESULT eax = data_147ded0

if (eax == 0)
    return 

eax = *(eax + 4)

if (eax == 0x19)
    sub_6f0170(esi_1, 0xffffffff)
    return 

if (eax == 0x1b)
    sub_6f0970(esi_1)
