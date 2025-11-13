// 函数: sub_511810
// 地址: 0x511810
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* edx = data_cca780
int32_t eax = 0
int32_t* ecx = edx + 0x5010

while (*ecx != 0x3e8)
    eax += 1
    ecx = &ecx[2]
    
    if (eax s>= 2)
        return sub_50b2a0(sub_50ecc0(ecx))

int32_t eax_4
char edx_1
edx_1:eax_4 = sx.q(*(edx + (eax << 3) + 0x5014))
int32_t eax_6 = (eax_4 + zx.d(edx_1)) s>> 8
int32_t esi_2

if (eax_6 == 2 || eax_6 == 0x13)
    esi_2 = sub_50ecc0(ecx)
else
    esi_2 = sub_50b5b0(eax_6)
    int32_t eax_8 = sub_516f30(esi_2)
    int32_t ecx_4 = 0
    int32_t* edx_3 = eax_8 + 0xc
    
    while (*edx_3 != 2)
        ecx_4 += 1
        edx_3 = &edx_3[0x9b]
        
        if (ecx_4 s>= 4)
            return sub_50b2a0(esi_2)
    
    int32_t eax_11 = *(ecx_4 * 0x26c + eax_8 + 0x10)
    
    if (eax_11 != 0)
        char eax_12
        eax_12, ecx = eax_11()
        
        if (eax_12 == 0)
            esi_2 = sub_50ecc0(ecx)

return sub_50b2a0(esi_2)
