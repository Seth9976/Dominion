// 函数: sub_642e70
// 地址: 0x642e70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = data_cf65b4
bool cond:0 = *(result + 0x2c) == 0
*(result + 0x1c) = 1
*(result + 0x28) = 0
*(result + 0x20) = 0
*(result + 0x24) = 0
*(result + 0x1c) = 0

if (not(cond:0))
    sub_687db0()
    result = data_cf65b4

if (*(result + 0x28) != 0)
    *(result + 0x2c) = 0
    return result

sub_6877a0()
void* eax = data_cf65b4
int32_t* ecx = data_cf65b8
int32_t var_4 = *(eax + 0x24)
*(eax + 0x2c) = 1
return (*(*ecx + 0x38))(var_4)
