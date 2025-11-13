// 函数: sub_4fcee0
// 地址: 0x4fcee0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c = arg1
int32_t edi
int32_t eax = sub_566920(edi)

if (eax != 0)
    int32_t eax_1 = sub_5680f0(eax, 3, eax.w, 6)
    
    if (eax_1.b != 0)
        return sub_562400(eax_1, 0x3ee, eax, 0)
    
    var_c = eax
    void* eax_3 = sub_573400()
    *(eax_3 + 0xc)
    *(eax_3 + 4)
    sub_582eb0(&var_c, 1, 0x3ee, 0xb, 7, 0, 0, 0, nullptr, nullptr)

int32_t result = sub_563590(0x100)

if (result == 0)
    return result

void* eax_4 = sub_573400()
return sub_583720(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), result, 0x476, nullptr, 0x476, 0, 0, 4)
