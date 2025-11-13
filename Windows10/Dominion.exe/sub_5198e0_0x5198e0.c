// 函数: sub_5198e0
// 地址: 0x5198e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi = sub_516f30(0x2710)
int32_t i = 0
int32_t edx = edi

do
    if (*(edx + 0xc) == 4)
        int32_t esi_1 = 0
        int32_t edi_1 = *(i * 0x26c + edi + 0x270)
        
        if (edi_1 s<= 0)
            break
        
        char eax_1
        
        do
            int32_t i_1 = i
            eax_1, i = sub_517980(*(edx + 0x10 + (esi_1 << 2)), 5)
            
            if (eax_1 != 0)
                return 1
            
            esi_1 += 1
        while (esi_1 s< edi_1)
        
        return eax_1
    
    i += 1
    edx += 0x26c
while (i s< 4)

int32_t eax
eax.b = 0
return eax
