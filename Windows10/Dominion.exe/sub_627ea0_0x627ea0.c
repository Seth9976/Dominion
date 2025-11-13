// 函数: sub_627ea0
// 地址: 0x627ea0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax

if (arg2 != 0)
    eax = zx.d(arg2.w)

if (arg2 == 0 || eax u>= data_b809e4 || *(eax * 0x1c30 + data_b809e0 + 0x1c28) != arg2)
    data_b7d414 = 0
else
    uint32_t esi_1 = sub_5cba00(arg2)
    
    if (*(esi_1 + 0x2c) == 8)
        esi_1 = sub_5cba00(*(esi_1 + 0x240))
    
    data_b7d414 = *(esi_1 + 0x1c28)
    eax.b = 0
    int32_t ecx_2 = *(esi_1 + 0x2c)
    
    if (ecx_2 == 3)
        eax = sub_5deb60(esi_1, nullptr)
    else if (ecx_2 == 0)
        eax = sub_5efe00(eax, nullptr, esi_1, ecx_2.b)
    
    if (*(esi_1 + 0x1a18) == 0 && eax.b != 0)
        data_b7d410 = *(esi_1 + 0x1c28)
        return 

data_b7d410 = 0
