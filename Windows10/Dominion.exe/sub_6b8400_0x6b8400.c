// 函数: sub_6b8400
// 地址: 0x6b8400
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = nullptr

while (true)
    if (esi != 0)
        esi = *(esi + 0x2fc)
    else
        esi = *(arg1 + 0x2d0)
    
    if (esi == 0)
        break
    
    sub_6b8400()

sub_6c3440(arg1 + 0x2d0)
void* result = *(arg1 + 0x2e4)
*(result + 0x14) -= 1
return result
