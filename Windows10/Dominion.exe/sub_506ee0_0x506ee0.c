// 函数: sub_506ee0
// 地址: 0x506ee0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_2 = *(*(sub_573400() + 4) + 0xd38)
int32_t i_1

if (eax_2 == 2)
    i_1 = 8
else if (eax_2 == 5)
    i_1 = 0xf
else if (eax_2 == 6)
    i_1 = 0x12
else
    i_1 = 0xc

void* result = sub_573400()
void* result_1 = result
int32_t i

do
    result = sub_5727e0(result, 0x103, *(result_1 + 4), arg1, 0xffffffff, nullptr)
    i = i_1
    i_1 -= 1
while (i != 1)
return result
