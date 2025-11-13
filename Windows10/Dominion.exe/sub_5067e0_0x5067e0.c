// 函数: sub_5067e0
// 地址: 0x5067e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
void* eax = sub_573400()
void* var_14 = nullptr
void* eax_1 = sub_5887c0(eax, *(eax + 0xc), *(eax + 4), var_14.b)

if (eax_1 != 0)
    var_14 = 0x20
    sub_562400(eax_1, 0x3eb, eax_1, var_14)
    void* eax_2
    void* ecx_3
    int32_t edx_1
    eax_2, ecx_3, edx_1 = sub_573400()
    int32_t eax_4 = *(*(eax_2 + 4) + 0x1504)
    
    if (eax_4 != 3 && eax_4 != 5 && eax_4 != 4 && eax_4 != 6)
        var_14 = nullptr
        ecx_3.b = eax_4 == 2
        ecx_3, edx_1 = sub_61b1b0(eax_4, 7, ecx_3.b, 0xffffffff, 0, nullptr, nullptr, nullptr, 
            nullptr, 0, 0, 0, 0, var_14)
    
    var_14 = ecx_3
    var_14 = 3
    
    if (sub_568530(&var_14, edx_1, eax_1.w, var_14) != 0)
        return sub_56fb00(eax_1)

int32_t result = sub_563590(0x100)

if (result == 0)
    return result

void* eax_8 = sub_573400()
var_14 = 4
return sub_583720(eax_8, *(eax_8 + 0xc), *(eax_8 + 4), result, 0x476, nullptr, 0x476, 0, 0, var_14)
