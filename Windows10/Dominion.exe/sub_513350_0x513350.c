// 函数: sub_513350
// 地址: 0x513350
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

bool cond:0

if ((*(*(sub_573400() + 4) + 0xd44) & 0x40) == 0)
    cond:0 = *(sub_573400() + 0xc) != 0
else
    cond:0 = *(sub_573400() + 0xc) != 1

void* result

if (not(cond:0))
    void* ecx_1 = *(sub_573400() + 4)
    *(ecx_1 + 0xd38)
    
    if (divs.dp.d(sx.q(*(ecx_1 + 0x19e0) - 1), *(ecx_1 + 0xd38)) != 0)
        result.b = 1
        return result

result.b = 0
return result
