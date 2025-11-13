// 函数: sub_640520
// 地址: 0x640520
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (data_1779faa != 0)
    return 

void* eax = data_cf65b4
data_1779faa = 1

if (*(eax + 0x1c) != 0)
    bool cond:0_1 = *(eax + 0x2c) == 0
    *(eax + 0x1c) = 0
    
    if (not(cond:0_1))
        sub_687db0()
        eax = data_cf65b4
    
    if (*(eax + 0x28) != 0)
        *(eax + 0x2c) = 0
    else
        sub_6877a0()
        void* eax_1 = data_cf65b4
        int32_t* ecx_1 = data_cf65b8
        int32_t var_4_1 = *(eax_1 + 0x24)
        *(eax_1 + 0x2c) = 1
        (*(*ecx_1 + 0x38))(var_4_1)
        eax = data_cf65b4

if (*(eax + 0x2c) != 0)
    sub_640200()

data_1779faa = 0
