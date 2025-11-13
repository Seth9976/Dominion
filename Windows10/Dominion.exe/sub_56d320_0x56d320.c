// 函数: sub_56d320
// 地址: 0x56d320
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
void* esi = *(eax + 4)
uint32_t edi = *(eax + 0xc)
int32_t eax_1 = *(esi + 0x19ec)

if (eax_1 == 3 || eax_1 == 2)
    void var_50
    memset(&var_50, 0, 0x48)
    uint32_t var_54 = 2
    sub_580700(esi, &var_54, 1, &var_50, 0, nullptr, 0, nullptr)

void* result = *(esi + 0x1504)

if (result != 3 && result != 5 && result != 4 && result != 6)
    result =
        sub_61b1b0(result, 0x29, result == 2, edi, 0, 1, nullptr, nullptr, nullptr, 0, 0, 0, 0, 0)

*(esi + 0x19ec) = 1
return result
