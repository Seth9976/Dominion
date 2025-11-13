// 函数: sub_4fcd90
// 地址: 0x4fcd90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_c = arg1
int32_t i = 0

if (*(arg1 + 4) s<= 0)
    return 

do
    void* eax_1 = sub_573400()
    void* edi_1 = sub_5887c0(eax_1, *(eax_1 + 0xc), *(eax_1 + 4), 0)
    
    if (edi_1 == 0)
        break
    
    var_c = edi_1
    void* eax_2 = sub_573400()
    *(eax_2 + 0xc)
    *(eax_2 + 4)
    void* eax = sub_5680f0(sub_582eb0(&var_c, 1, 0x3eb, 0x14, 7, 0x20, 0, 0, nullptr, nullptr), 3, 
        edi_1.w, 4)
    
    if (eax.b != 0)
        sub_562400(eax, 0x3ec, edi_1, 0)
    
    i += 1
while (i s< *(arg1 + 4))
