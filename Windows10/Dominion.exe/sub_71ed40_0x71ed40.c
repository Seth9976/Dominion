// 函数: sub_71ed40
// 地址: 0x71ed40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i_1 = arg2 + 4
int32_t eax = 0xffffffff

if (i_1 s> 0)
    char* esi_3 = *arg1 - arg2 - 4
    int32_t i
    
    do
        uint32_t ecx = zx.d(*esi_3)
        esi_3 = &esi_3[1]
        eax = eax u>> 8 ^ *(((zx.d(eax.b) ^ ecx) << 2) + &data_88dec8)
        i = i_1
        i_1 -= 1
    while (i != 1)

uint8_t* edx_2 = *arg1
int32_t eax_2 = not.d(eax)
*edx_2 = (eax_2 u>> 0x18).b
edx_2[1] = (eax_2 u>> 0x10).b
edx_2[2] = (eax_2 u>> 8).b
edx_2[3] = eax_2.b
*arg1 = &edx_2[4]
return &edx_2[4]
