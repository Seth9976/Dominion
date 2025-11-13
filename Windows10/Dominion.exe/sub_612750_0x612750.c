// 函数: sub_612750
// 地址: 0x612750
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = data_b604e0

if (eax == 0xffffffff)
    eax = 0

if (data_b80b48 == eax)
    eax = sub_5cda30(data_b80b08)
    
    if (eax == 3)
        void* eax_1 = sub_5ce6d0(eax, eax - 1, 0xffffffff, 0, 0, 0)
        eax_1.b = data_b7fcf4 != *(eax_1 + 0x1c28)
        return eax_1

eax.b = 0
return eax
