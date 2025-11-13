// 函数: sub_56ef50
// 地址: 0x56ef50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
int32_t* ecx = *(eax + 4)
int32_t edx = ecx[0x541]

if (edx != 3 && edx != 5 && edx != 4 && edx != 6 && ecx[0x540].b == 0)
    int32_t edx_1 = *(eax + 0xc)
    int32_t eax_1 = edx_1
    
    if (edx_1 == ecx[0x673])
        eax_1 = ecx[0x674]
    
    sub_59f9b0(eax_1, edx_1, ecx, eax_1, 0x1f, 0, nullptr, 0, 0, 0, 0, 0)

return arg1
