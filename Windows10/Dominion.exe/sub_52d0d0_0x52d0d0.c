// 函数: sub_52d0d0
// 地址: 0x52d0d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (*(*(sub_573400() + 4) + 0xd38) != 2)
    int32_t* eax_3 = sub_573400()
    int32_t* edi_1 = eax_3
    
    for (void* const i = &data_819460; i s> 0x819430; )
        int32_t edx_2 = *(i - 4)
        i -= 4
        eax_3 = sub_5727e0(eax_3, edx_2, edi_1[1], arg1, 0xffffffff, nullptr)
    
    return eax_3

void* eax_2 = sub_573400()
void* edi = eax_2

for (char const* const i_1 = "candlestick_maker"; i_1 s> &data_819460; )
    int32_t edx_1 = *(i_1 - 4)
    i_1 = &i_1[0xfffffffc]
    eax_2 = sub_5727e0(eax_2, edx_1, *(edi + 4), arg1, 0xffffffff, nullptr)

return eax_2
