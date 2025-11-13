// 函数: sub_61dc40
// 地址: 0x61dc40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
int32_t ebx
ebx.b = arg1.b

if (data_171efd0 == 0)
    data_171efd0 = sub_5ac2e0(&data_171efd4)

int32_t eax_2 = data_171efc8
int32_t esi = 9
data_171efc8 = 0
int32_t edi = 0x6c
struct _EXCEPTION_REGISTRATION_RECORD** result

while (true)
    result = *(sub_61dad0() + edi + 0xc)
    
    if (result != 1 && result != 0)
        data_171efc8 = esi
        break
    
    esi -= 1
    int32_t temp0_1 = edi
    edi -= 0xc
    
    if (temp0_1 - 0xc s< 0)
        esi = data_171efc8
        break

if (eax_2 != esi && ebx.b == 0)
    int32_t* ecx = data_171e6b4
    data_1724034 = 1
    data_1724038 = 0
    result = sub_6a2bc0(ecx)

data_8db660 = 0x7e3
return result
