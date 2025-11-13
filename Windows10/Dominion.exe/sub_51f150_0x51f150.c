// 函数: sub_51f150
// 地址: 0x51f150
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = *arg2
int32_t result

if (sub_5135e0(esi).b != 0)
    void* eax_1 = sub_571b30(esi, 0x18)
    
    if (((*(eax_1 + 0x98) & 0x7f000400) | (*(eax_1 + 0x9c) & 0x940)) == 0
            && (**(arg1 + 4))(esi).b != 0)
        result.b = 1
        return result

result.b = 0
return result
