// 函数: sub_579a20
// 地址: 0x579a20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t ebx = arg2
uint32_t var_c = ebx
int32_t ecx = *(ebx + 0xc80)

if (ecx == 0)
    return 

uint32_t esi_2 = zx.d((*ebx).w)

if (esi_2 u>= 0x320)
    sub_591930()
    ecx = *(ebx + 0xc80)

int32_t edx
edx.b = arg4 == 0x3ea
int32_t esi_3 = arg3[esi_2 * 0x19 + 0x69c]
int32_t eax_1 = arg3[0x541]

if (eax_1 != 3 && eax_1 != 5 && eax_1 != 4 && eax_1 != 6 && arg3[0x540].b == 0)
    int32_t eax_2 = esi_3
    
    if (esi_3 == arg3[0x673])
        eax_2 = arg3[0x674]
    
    sub_59f9b0(eax_2, esi_3, arg3, eax_2, 0x2d, 0, ebx, ecx, edx + 1, 0, 0, 0)

void* esi_4 = *(ebx + 0xc80)
int32_t* ecx_2 = nullptr
int32_t* var_8_1 = nullptr

if (esi_4 s> 0)
    uint32_t eax_4
    
    do
        void* eax_3 = arg3[0x541]
        
        if (eax_3 != 3 && eax_3 != 5 && eax_3 != 4 && eax_3 != 6)
            int32_t* var_90_2 = ecx_2
            ecx_2.b = eax_3 == 2
            eax_3 = sub_61b1b0(eax_3, 0xd, ecx_2.b, esi_3, *ebx, var_90_2, esi_4, arg5, nullptr, 0, 
                0, 0, 0, 0)
            ecx_2 = var_8_1
        
        uint32_t i = 0
        
        if (arg3[0x34e] s> 0)
            do
                eax_3 = sub_581a00(eax_3, *ebx, arg3, i, 6)
                i += 1
            while (i s< arg3[0x34e])
            
            ecx_2 = var_8_1
        
        eax_4 = var_c
        ecx_2 += 1
        ebx += 4
        var_8_1 = ecx_2
        esi_4 = *(eax_4 + 0xc80)
    while (ecx_2 s< esi_4)
    
    ebx = eax_4

void var_5c
memset(&var_5c, 0, 0x48)
var_c = 0xb
sub_580700(esi_4, &var_c, 1, &var_5c, 0, ebx, esi_4, nullptr)
