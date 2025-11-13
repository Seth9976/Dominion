// 函数: sub_52ae60
// 地址: 0x52ae60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = *(*(sub_573400() + 4) + 0x19cc)
void* eax_2 = sub_573400()
int32_t eax_5

if (esi == *(eax_2 + 0xc))
    eax_5 = *(*(sub_573400() + 4) + 0x19ec)

uint32_t result

if (esi == *(eax_2 + 0xc) && (eax_5 == 3 || eax_5 == 2))
    result = sub_563590(0x105)
    
    if (result != 0)
        void* eax_6 = sub_573400()
        return sub_583720(eax_6, *(eax_6 + 0xc), *(eax_6 + 4), result, 0x3eb, nullptr, 0x476, 0, 0, 
            4)
else
    result = sub_563590(0x105)
    
    if (result != 0)
        void* eax_8 = sub_573400()
        return sub_583720(eax_8, *(eax_8 + 0xc), *(eax_8 + 4), result, 0x3ea, nullptr, 0x476, 0, 0, 
            4)

return result
