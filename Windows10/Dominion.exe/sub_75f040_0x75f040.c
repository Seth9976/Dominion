// 函数: sub_75f040
// 地址: 0x75f040
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

*arg1 = &data_77e9ec
void* esi = &arg1[0x61]
int32_t i_1 = 8
int32_t i

do
    int32_t* ecx = *esi
    
    if (ecx != 0)
        (*(*ecx + 0x20))(1)
    
    esi += 4
    i = i_1
    i_1 -= 1
while (i != 1)
